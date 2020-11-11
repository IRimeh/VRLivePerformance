// Fill out your copyright notice in the Description page of Project Settings.


#include "UnrealVR/Public/Interactable.h"

// Sets default values
AInteractable::AInteractable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetSimulatePhysics(true);
}

// Called when the game starts or when spawned
void AInteractable::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInteractable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AInteractable::Interact(const UStaticMeshComponent* controller)
{
	onInteract(controller);
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
	onGrab();
	Mesh->SetSimulatePhysics(false);
	Mesh->SetEnableGravity(false);

	AttachToComponent(const_cast<USceneComponent*>(objectToAttachTo), FAttachmentTransformRules::KeepWorldTransform);
	RootComponent->SetWorldLocation(grabLocation);
	RootComponent->SetWorldRotation(grabRotation);
}

void AInteractable::Release()
{
	onRelease();
	Mesh->SetSimulatePhysics(true);
	Mesh->SetEnableGravity(true);

	DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
}
