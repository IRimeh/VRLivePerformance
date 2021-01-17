// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TextFileHelper.generated.h"

/**
 * 
 */
UCLASS()
class UNREALVR_API UTextFileHelper : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	public:
	UFUNCTION(BlueprintCallable, Category = "Save")
		static bool FileSaveString(FString SaveTextB, FString FileNameB);

	UFUNCTION(BlueprintPure, Category = "Save")
		static bool FileLoadString(FString FileNameA, FString& SaveTextA);
};
