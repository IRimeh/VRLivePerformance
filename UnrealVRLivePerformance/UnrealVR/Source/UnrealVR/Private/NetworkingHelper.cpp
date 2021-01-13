// Fill out your copyright notice in the Description page of Project Settings.


#include "NetworkingHelper.h"

// Sets default values
ANetworkingHelper::ANetworkingHelper()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANetworkingHelper::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANetworkingHelper::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANetworkingHelper::ConnectToServer(UObject* WorldContextObject, FString ServerIP, APlayerController* PlayerController, bool Seamless)
{
	PlayerController->ClientTravel(ServerIP, ETravelType::TRAVEL_Absolute, Seamless);
}

