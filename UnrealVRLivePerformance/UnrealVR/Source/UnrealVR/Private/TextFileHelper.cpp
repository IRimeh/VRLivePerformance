// Fill out your copyright notice in the Description page of Project Settings.


#include "TextFileHelper.h"
#include "Misc/Paths.h"

bool UTextFileHelper::FileSaveString(FString SaveTextB, FString FileNameB)
{
    return FFileHelper::SaveStringToFile(SaveTextB, *(FPaths::ProjectDir() + FileNameB));
}

bool UTextFileHelper::FileLoadString(FString FileNameA, FString& SaveTextA)
{
    return FFileHelper::LoadFileToString(SaveTextA, *(FPaths::ProjectDir() + FileNameA));
}
