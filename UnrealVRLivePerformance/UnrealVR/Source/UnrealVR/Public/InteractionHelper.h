// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UnrealVR/Public/Interactable.h"
#include "InteractionHelper.generated.h"

UCLASS()
class UNREALVR_API AInteractionHelper : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInteractionHelper();

	UFUNCTION(BlueprintCallable, Category = "Interaction", meta = (WorldContext="WorldContextObject"))
	static bool CheckForInteraction(UObject* WorldContextObject, const FVector StartPosition, const FVector Direction, const float MaxRange, const AActor* ActorToIgnore, AInteractable*& Interactable, FVector& EndPosition);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
