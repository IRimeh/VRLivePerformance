// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealVR/Public/InteractionHelper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionHelper() {}
// Cross Module References
	UNREALVR_API UClass* Z_Construct_UClass_AInteractionHelper_NoRegister();
	UNREALVR_API UClass* Z_Construct_UClass_AInteractionHelper();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealVR();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UNREALVR_API UClass* Z_Construct_UClass_AInteractable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AInteractionHelper::execCheckForInteraction)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector,Z_Param_StartPosition);
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxRange);
		P_GET_OBJECT(AActor,Z_Param_ActorToIgnore);
		P_GET_OBJECT_REF(AInteractable,Z_Param_Out_Interactable);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_EndPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=AInteractionHelper::CheckForInteraction(Z_Param_WorldContextObject,Z_Param_StartPosition,Z_Param_Direction,Z_Param_MaxRange,Z_Param_ActorToIgnore,Z_Param_Out_Interactable,Z_Param_Out_EndPosition);
		P_NATIVE_END;
	}
	void AInteractionHelper::StaticRegisterNativesAInteractionHelper()
	{
		UClass* Class = AInteractionHelper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckForInteraction", &AInteractionHelper::execCheckForInteraction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AInteractionHelper_CheckForInteraction_Statics
	{
		struct InteractionHelper_eventCheckForInteraction_Parms
		{
			UObject* WorldContextObject;
			FVector StartPosition;
			FVector Direction;
			float MaxRange;
			const AActor* ActorToIgnore;
			AInteractable* Interactable;
			FVector EndPosition;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndPosition;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorToIgnore_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorToIgnore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartPosition;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AInteractionHelper_CheckForInteraction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InteractionHelper_eventCheckForInteraction_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInteractionHelper_CheckForInteraction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InteractionHelper_eventCheckForInteraction_Parms), &Z_Construct_UFunction_AInteractionHelper_CheckForInteraction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AInteractionHelper_CheckForInteraction_Statics::NewProp_EndPosition = { "EndPosition", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionHelper_eventCheckForInteraction_Parms, EndPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractionHelper_CheckForInteraction_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionHelper_eventCheckForInteraction_Parms, Interactable), Z_Construct_UClass_AInteractable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractionHelper_CheckForInteraction_Statics::NewProp_ActorToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractionHelper_CheckForInteraction_Statics::NewProp_ActorToIgnore = { "ActorToIgnore", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionHelper_eventCheckForInteraction_Parms, ActorToIgnore), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AInteractionHelper_CheckForInteraction_Statics::NewProp_ActorToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionHelper_CheckForInteraction_Statics::NewProp_ActorToIgnore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractionHelper_CheckForInteraction_Statics::NewProp_MaxRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AInteractionHelper_CheckForInteraction_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionHelper_eventCheckForInteraction_Parms, MaxRange), METADATA_PARAMS(Z_Construct_UFunction_AInteractionHelper_CheckForInteraction_Statics::NewProp_MaxRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionHelper_CheckForInteraction_Statics::NewProp_MaxRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractionHelper_CheckForInteraction_Statics::NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AInteractionHelper_CheckForInteraction_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionHelper_eventCheckForInteraction_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AInteractionHelper_CheckForInteraction_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionHelper_CheckForInteraction_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractionHelper_CheckForInteraction_Statics::NewProp_StartPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AInteractionHelper_CheckForInteraction_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionHelper_eventCheckForInteraction_Parms, StartPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AInteractionHelper_CheckForInteraction_Statics::NewProp_StartPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionHelper_CheckForInteraction_Statics::NewProp_StartPosition_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractionHelper_CheckForInteraction_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionHelper_eventCheckForInteraction_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractionHelper_CheckForInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractionHelper_CheckForInteraction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractionHelper_CheckForInteraction_Statics::NewProp_EndPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractionHelper_CheckForInteraction_Statics::NewProp_Interactable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractionHelper_CheckForInteraction_Statics::NewProp_ActorToIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractionHelper_CheckForInteraction_Statics::NewProp_MaxRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractionHelper_CheckForInteraction_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractionHelper_CheckForInteraction_Statics::NewProp_StartPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractionHelper_CheckForInteraction_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractionHelper_CheckForInteraction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/InteractionHelper.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractionHelper_CheckForInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractionHelper, nullptr, "CheckForInteraction", nullptr, nullptr, sizeof(InteractionHelper_eventCheckForInteraction_Parms), Z_Construct_UFunction_AInteractionHelper_CheckForInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionHelper_CheckForInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractionHelper_CheckForInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionHelper_CheckForInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractionHelper_CheckForInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInteractionHelper_CheckForInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AInteractionHelper_NoRegister()
	{
		return AInteractionHelper::StaticClass();
	}
	struct Z_Construct_UClass_AInteractionHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInteractionHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AInteractionHelper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AInteractionHelper_CheckForInteraction, "CheckForInteraction" }, // 1924192955
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractionHelper_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InteractionHelper.h" },
		{ "ModuleRelativePath", "Public/InteractionHelper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractionHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractionHelper>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInteractionHelper_Statics::ClassParams = {
		&AInteractionHelper::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInteractionHelper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionHelper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInteractionHelper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInteractionHelper_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInteractionHelper, 3976697128);
	template<> UNREALVR_API UClass* StaticClass<AInteractionHelper>()
	{
		return AInteractionHelper::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInteractionHelper(Z_Construct_UClass_AInteractionHelper, &AInteractionHelper::StaticClass, TEXT("/Script/UnrealVR"), TEXT("AInteractionHelper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractionHelper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
