// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NetworkingHelper.generated.h"

UCLASS()
class UNREALVR_API ANetworkingHelper : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANetworkingHelper();

	UFUNCTION(BlueprintCallable, Category = "Networking", meta = (WorldContext = "WorldContextObject"))
	static void ConnectToServer(UObject* WorldContextObject, FString ServerIP, APlayerController* PlayerController, bool Seamless);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
