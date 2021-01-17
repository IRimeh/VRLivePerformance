// Fill out your copyright notice in the Description page of Project Settings.


#include "UnrealVR/Public/Interactable.h"
#include "Net/UnrealNetwork.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"

// Sets default values
AInteractable::AInteractable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetSimulatePhysics(true);
}

// Called when the game starts or when spawned
void AInteractable::BeginPlay()
{
	Super::BeginPlay();
	DeleteExcessObjects();

	//Destroy after seconds
	if (destroyAfterTime > 0)
	{
		GetWorldTimerManager().SetTimer(destroyTimerHandle, this, &AInteractable::StartDestroying, destroyAfterTime, false);
	}
}

// Called every frame
void AInteractable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AInteractable::Interact(const UStaticMeshComponent* controller)
{
	if (isBeingHeld)
	{
		onInteractWhileHolding(controller);
	}
	else
	{
		onInteract(controller);
	}
}

void AInteractable::Select()
{
	if(!isSelected)
		onSelected();
	isSelected = true;
}

void AInteractable::Deselect()
{
	if(isSelected)
		onDeselected();
	isSelected = false;
}


void AInteractable::Grab(const USceneComponent* objectToAttachTo, const FVector grabLocation, const FRotator grabRotation)
{
	Mesh->SetSimulatePhysics(false);
	Mesh->SetEnableGravity(false);

	AttachToComponent(const_cast<USceneComponent*>(objectToAttachTo), FAttachmentTransformRules::KeepWorldTransform);
	RootComponent->SetWorldLocation(grabLocation);
	RootComponent->SetWorldRotation(grabRotation);

	isBeingHeld = true;

	onGrab();

	//Stop destroy timer
	GetWorldTimerManager().ClearTimer(destroyTimerHandle);
}

void AInteractable::Release()
{
	Mesh->SetSimulatePhysics(true);
	Mesh->SetEnableGravity(true);

	DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
	
	isBeingHeld = false;

	onRelease();

	//Start destroy timer
	if (destroyAfterTime > 0)
	{
		GetWorldTimerManager().SetTimer(destroyTimerHandle, this, &AInteractable::StartDestroying, destroyAfterTime, false);
	}
}

void AInteractable::StartDestroying()
{
	onStartDestroying();
	
	FTimerHandle handle;
	GetWorldTimerManager().SetTimer(handle, this, &AInteractable::ForceDestroy, destroyTimer, false);
}

void AInteractable::ForceDestroy()
{
	Destroy();
	GetWorld()->ForceGarbageCollection(true);
}

void AInteractable::DeleteExcessObjects()
{
	TArray<AActor*> allActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), this->GetClass(), allActors);

	int oldestActorIndex = 0;
	float timeSinceCreation = 0;
	if (allActors.Num() > instancesAllowed)
	{
		for (int i = 0; i < allActors.Num(); i++)
		{
			if (allActors[i]->GetGameTimeSinceCreation() > timeSinceCreation)
			{
				timeSinceCreation = allActors[i]->GetGameTimeSinceCreation();
				oldestActorIndex = i;
			}
		}

		AInteractable* interactable = Cast<AInteractable>(allActors[oldestActorIndex]);
		interactable->StartDestroying();
	}
}

void AInteractable::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AInteractable, isBeingHeld);
}
