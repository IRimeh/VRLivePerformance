// Fill out your copyright notice in the Description page of Project Settings.


#include "UnrealVR/Public/InteractionHelper.h"
#include "UnrealVR/Public/Interactable.h"
#include "Engine/World.h"

// Sets default values
AInteractionHelper::AInteractionHelper()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AInteractionHelper::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInteractionHelper::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool AInteractionHelper::CheckForInteraction(UObject* WorldContextObject, const FVector StartPosition, const FVector Direction, const float MaxRange, const AActor* ActorToIgnore, AInteractable*& Interactable, FVector& EndPosition)
{
	FHitResult hit(ForceInit);
	EndPosition = StartPosition + (Direction * MaxRange);

	FCollisionQueryParams traceParams(SCENE_QUERY_STAT(CheckForInteraction), true, ActorToIgnore);

	bool lineTraceHit = WorldContextObject->GetWorld()->LineTraceSingleByChannel(hit, StartPosition, EndPosition, ECC_Visibility);

	if (lineTraceHit)
	{
		EndPosition = hit.ImpactPoint;
		
		bool isInteractable = hit.GetActor()->GetClass()->IsChildOf(AInteractable::StaticClass());
		if(isInteractable)
		{
			Interactable = static_cast<AInteractable*>(hit.GetActor());
			return true;
		}
	}
	
	return false;
}


