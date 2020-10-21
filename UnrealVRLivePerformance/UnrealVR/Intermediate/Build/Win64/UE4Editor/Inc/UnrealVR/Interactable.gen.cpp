// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealVR/Public/Interactable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractable() {}
// Cross Module References
	UNREALVR_API UClass* Z_Construct_UClass_AInteractable_NoRegister();
	UNREALVR_API UClass* Z_Construct_UClass_AInteractable();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealVR();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AInteractable::execInteract)
	{
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_controller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Interact(Z_Param_controller);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractable::execRelease)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Release();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractable::execGrab)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_objectToAttachTo);
		P_GET_STRUCT(FVector,Z_Param_grabLocation);
		P_GET_STRUCT(FRotator,Z_Param_grabRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Grab(Z_Param_objectToAttachTo,Z_Param_grabLocation,Z_Param_grabRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractable::execDeselect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Deselect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractable::execSelect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Select();
		P_NATIVE_END;
	}
	static FName NAME_AInteractable_onDeselected = FName(TEXT("onDeselected"));
	void AInteractable::onDeselected()
	{
		ProcessEvent(FindFunctionChecked(NAME_AInteractable_onDeselected),NULL);
	}
	static FName NAME_AInteractable_onGrab = FName(TEXT("onGrab"));
	void AInteractable::onGrab()
	{
		ProcessEvent(FindFunctionChecked(NAME_AInteractable_onGrab),NULL);
	}
	static FName NAME_AInteractable_onInteract = FName(TEXT("onInteract"));
	void AInteractable::onInteract(const UStaticMeshComponent* controller)
	{
		Interactable_eventonInteract_Parms Parms;
		Parms.controller=controller;
		ProcessEvent(FindFunctionChecked(NAME_AInteractable_onInteract),&Parms);
	}
	static FName NAME_AInteractable_onRelease = FName(TEXT("onRelease"));
	void AInteractable::onRelease()
	{
		ProcessEvent(FindFunctionChecked(NAME_AInteractable_onRelease),NULL);
	}
	static FName NAME_AInteractable_onSelected = FName(TEXT("onSelected"));
	void AInteractable::onSelected()
	{
		ProcessEvent(FindFunctionChecked(NAME_AInteractable_onSelected),NULL);
	}
	void AInteractable::StaticRegisterNativesAInteractable()
	{
		UClass* Class = AInteractable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Deselect", &AInteractable::execDeselect },
			{ "Grab", &AInteractable::execGrab },
			{ "Interact", &AInteractable::execInteract },
			{ "Release", &AInteractable::execRelease },
			{ "Select", &AInteractable::execSelect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AInteractable_Deselect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_Deselect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Interactable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractable_Deselect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractable, nullptr, "Deselect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_Deselect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_Deselect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractable_Deselect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInteractable_Deselect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractable_Grab_Statics
	{
		struct Interactable_eventGrab_Parms
		{
			const USceneComponent* objectToAttachTo;
			FVector grabLocation;
			FRotator grabRotation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_grabRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_grabRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_grabLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_grabLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_objectToAttachTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_objectToAttachTo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_Grab_Statics::NewProp_grabRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AInteractable_Grab_Statics::NewProp_grabRotation = { "grabRotation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactable_eventGrab_Parms, grabRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_Grab_Statics::NewProp_grabRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_Grab_Statics::NewProp_grabRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_Grab_Statics::NewProp_grabLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AInteractable_Grab_Statics::NewProp_grabLocation = { "grabLocation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactable_eventGrab_Parms, grabLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_Grab_Statics::NewProp_grabLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_Grab_Statics::NewProp_grabLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_Grab_Statics::NewProp_objectToAttachTo_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractable_Grab_Statics::NewProp_objectToAttachTo = { "objectToAttachTo", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactable_eventGrab_Parms, objectToAttachTo), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_Grab_Statics::NewProp_objectToAttachTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_Grab_Statics::NewProp_objectToAttachTo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractable_Grab_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_Grab_Statics::NewProp_grabRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_Grab_Statics::NewProp_grabLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_Grab_Statics::NewProp_objectToAttachTo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_Grab_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grabbing" },
		{ "ModuleRelativePath", "Public/Interactable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractable_Grab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractable, nullptr, "Grab", nullptr, nullptr, sizeof(Interactable_eventGrab_Parms), Z_Construct_UFunction_AInteractable_Grab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_Grab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_Grab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_Grab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractable_Grab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInteractable_Grab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractable_Interact_Statics
	{
		struct Interactable_eventInteract_Parms
		{
			const UStaticMeshComponent* controller;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_controller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_Interact_Statics::NewProp_controller_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractable_Interact_Statics::NewProp_controller = { "controller", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactable_eventInteract_Parms, controller), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_Interact_Statics::NewProp_controller_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_Interact_Statics::NewProp_controller_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractable_Interact_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_Interact_Statics::NewProp_controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_Interact_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Interactable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractable_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractable, nullptr, "Interact", nullptr, nullptr, sizeof(Interactable_eventInteract_Parms), Z_Construct_UFunction_AInteractable_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_Interact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_Interact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_Interact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractable_Interact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInteractable_Interact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractable_onDeselected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_onDeselected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Interactable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractable_onDeselected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractable, nullptr, "onDeselected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_onDeselected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_onDeselected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractable_onDeselected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInteractable_onDeselected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractable_onGrab_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_onGrab_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grabbing" },
		{ "Comment", "//Grabbing\n" },
		{ "ModuleRelativePath", "Public/Interactable.h" },
		{ "ToolTip", "Grabbing" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractable_onGrab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractable, nullptr, "onGrab", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_onGrab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_onGrab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractable_onGrab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInteractable_onGrab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractable_onInteract_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_controller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_onInteract_Statics::NewProp_controller_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractable_onInteract_Statics::NewProp_controller = { "controller", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactable_eventonInteract_Parms, controller), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_onInteract_Statics::NewProp_controller_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_onInteract_Statics::NewProp_controller_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractable_onInteract_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_onInteract_Statics::NewProp_controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_onInteract_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//Interaction\n" },
		{ "ModuleRelativePath", "Public/Interactable.h" },
		{ "ToolTip", "Interaction" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractable_onInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractable, nullptr, "onInteract", nullptr, nullptr, sizeof(Interactable_eventonInteract_Parms), Z_Construct_UFunction_AInteractable_onInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_onInteract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_onInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_onInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractable_onInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInteractable_onInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractable_onRelease_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_onRelease_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grabbing" },
		{ "ModuleRelativePath", "Public/Interactable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractable_onRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractable, nullptr, "onRelease", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_onRelease_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_onRelease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractable_onRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInteractable_onRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractable_onSelected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_onSelected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//Selection\n" },
		{ "ModuleRelativePath", "Public/Interactable.h" },
		{ "ToolTip", "Selection" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractable_onSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractable, nullptr, "onSelected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_onSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_onSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractable_onSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInteractable_onSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractable_Release_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_Release_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grabbing" },
		{ "ModuleRelativePath", "Public/Interactable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractable_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractable, nullptr, "Release", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_Release_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_Release_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractable_Release()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInteractable_Release_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractable_Select_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_Select_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Interactable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractable_Select_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractable, nullptr, "Select", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_Select_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_Select_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractable_Select()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInteractable_Select_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AInteractable_NoRegister()
	{
		return AInteractable::StaticClass();
	}
	struct Z_Construct_UClass_AInteractable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isGrabbable_MetaData[];
#endif
		static void NewProp_isGrabbable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isGrabbable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isSelected_MetaData[];
#endif
		static void NewProp_isSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInteractable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AInteractable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AInteractable_Deselect, "Deselect" }, // 2910342172
		{ &Z_Construct_UFunction_AInteractable_Grab, "Grab" }, // 3350108196
		{ &Z_Construct_UFunction_AInteractable_Interact, "Interact" }, // 3897265238
		{ &Z_Construct_UFunction_AInteractable_onDeselected, "onDeselected" }, // 1108309613
		{ &Z_Construct_UFunction_AInteractable_onGrab, "onGrab" }, // 3849063327
		{ &Z_Construct_UFunction_AInteractable_onInteract, "onInteract" }, // 1985215022
		{ &Z_Construct_UFunction_AInteractable_onRelease, "onRelease" }, // 1014935003
		{ &Z_Construct_UFunction_AInteractable_onSelected, "onSelected" }, // 1024299940
		{ &Z_Construct_UFunction_AInteractable_Release, "Release" }, // 2696020811
		{ &Z_Construct_UFunction_AInteractable_Select, "Select" }, // 4040213907
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Interactable.h" },
		{ "ModuleRelativePath", "Public/Interactable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractable_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interactable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractable_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00200800000b000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractable, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInteractable_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractable_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractable_Statics::NewProp_isGrabbable_MetaData[] = {
		{ "Category", "Grabbing" },
		{ "Comment", "//Grabbing\n" },
		{ "ModuleRelativePath", "Public/Interactable.h" },
		{ "ToolTip", "Grabbing" },
	};
#endif
	void Z_Construct_UClass_AInteractable_Statics::NewProp_isGrabbable_SetBit(void* Obj)
	{
		((AInteractable*)Obj)->isGrabbable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AInteractable_Statics::NewProp_isGrabbable = { "isGrabbable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AInteractable), &Z_Construct_UClass_AInteractable_Statics::NewProp_isGrabbable_SetBit, METADATA_PARAMS(Z_Construct_UClass_AInteractable_Statics::NewProp_isGrabbable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractable_Statics::NewProp_isGrabbable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractable_Statics::NewProp_isSelected_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//Selection\n" },
		{ "ModuleRelativePath", "Public/Interactable.h" },
		{ "ToolTip", "Selection" },
	};
#endif
	void Z_Construct_UClass_AInteractable_Statics::NewProp_isSelected_SetBit(void* Obj)
	{
		((AInteractable*)Obj)->isSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AInteractable_Statics::NewProp_isSelected = { "isSelected", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AInteractable), &Z_Construct_UClass_AInteractable_Statics::NewProp_isSelected_SetBit, METADATA_PARAMS(Z_Construct_UClass_AInteractable_Statics::NewProp_isSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractable_Statics::NewProp_isSelected_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractable_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractable_Statics::NewProp_isGrabbable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractable_Statics::NewProp_isSelected,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInteractable_Statics::ClassParams = {
		&AInteractable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AInteractable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AInteractable_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInteractable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInteractable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInteractable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInteractable, 3930684596);
	template<> UNREALVR_API UClass* StaticClass<AInteractable>()
	{
		return AInteractable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInteractable(Z_Construct_UClass_AInteractable, &AInteractable::StaticClass, TEXT("/Script/UnrealVR"), TEXT("AInteractable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
