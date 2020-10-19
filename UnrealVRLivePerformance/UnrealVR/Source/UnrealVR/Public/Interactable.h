// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
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
	void onInteract();

	//Selection
	UFUNCTION(BlueprintCallable, Category = "Interaction")
	void Select();
	UFUNCTION(BlueprintCallable, Category = "Interaction")
	void Deselect();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Interaction")
	bool isSelected;

	//Grabbing
	UFUNCTION(BlueprintCallable, Category = "Grabbing")
	void Grab();
	UFUNCTION(BlueprintCallable, Category = "Grabbing")
	void Release();
	

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

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Interaction")
	void Interact();
};
