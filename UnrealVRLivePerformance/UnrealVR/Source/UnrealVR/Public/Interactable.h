// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Core.h"
#include "GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"
#include "Interactable.generated.h"

UCLASS()
class UNREALVR_API AInteractable : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInteractable();

	//Interaction
	UFUNCTION(BlueprintImplementableEvent, Category = "Interaction")
	void onInteract(const UStaticMeshComponent* controller);

	UFUNCTION(BlueprintImplementableEvent, Category = "Interaction")
	void onInteractWhileHolding(const UStaticMeshComponent* controller);

	//Selection
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Interactable")
	bool isSelected;

	UFUNCTION(BlueprintCallable, Category = "Interaction")
	void Select();
	UFUNCTION(BlueprintCallable, Category = "Interaction")
	void Deselect();

	//Grabbing
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interactable")
	bool isGrabbable;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interactable")
	int instancesAllowed = 10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interactable")
	bool replicatedToClients = true;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interactable")
	float destroyAfterTime = -1;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interactable")
	float destroyTimer = 0.1f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Grabbing")
	float grabHeightOffset = 0.0f;

	UFUNCTION(BlueprintCallable, Category = "Grabbing")
	void Grab(const USceneComponent* objectToAttachTo, const FVector grabLocation, const FRotator grabRotation);
	UFUNCTION(BlueprintCallable, Category = "Grabbing")
	void Release();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Grabbing", Replicated)
	bool isBeingHeld = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh")
	UStaticMeshComponent* Mesh;

	UFUNCTION(BlueprintCallable, Category = "Interactable")
	void StartDestroying();
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Selection
	UFUNCTION(BlueprintImplementableEvent, Category = "Interaction")
	void onSelected();
	UFUNCTION(BlueprintImplementableEvent, Category = "Interaction")
	void onDeselected();

	//Grabbing
	UFUNCTION(BlueprintImplementableEvent, Category = "Grabbing")
	void onGrab();
	UFUNCTION(BlueprintImplementableEvent, Category = "Grabbing")
	void onRelease();

	//Destroying
	UFUNCTION(BlueprintImplementableEvent, Category = "Destroying")
	void onStartDestroying();


private:
	void DeleteExcessObjects();
	void ForceDestroy();

	FTimerHandle destroyTimerHandle;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Interaction")
	void Interact(const UStaticMeshComponent* controller);
};
