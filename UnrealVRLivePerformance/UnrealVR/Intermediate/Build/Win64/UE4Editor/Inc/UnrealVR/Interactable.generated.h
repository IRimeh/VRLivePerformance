// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMeshComponent;
class USceneComponent;
struct FVector;
struct FRotator;
#ifdef UNREALVR_Interactable_generated_h
#error "Interactable.generated.h already included, missing '#pragma once' in Interactable.h"
#endif
#define UNREALVR_Interactable_generated_h

#define UnrealVR_Source_UnrealVR_Public_Interactable_h_12_SPARSE_DATA
#define UnrealVR_Source_UnrealVR_Public_Interactable_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInteract); \
	DECLARE_FUNCTION(execRelease); \
	DECLARE_FUNCTION(execGrab); \
	DECLARE_FUNCTION(execDeselect); \
	DECLARE_FUNCTION(execSelect);


#define UnrealVR_Source_UnrealVR_Public_Interactable_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInteract); \
	DECLARE_FUNCTION(execRelease); \
	DECLARE_FUNCTION(execGrab); \
	DECLARE_FUNCTION(execDeselect); \
	DECLARE_FUNCTION(execSelect);


#define UnrealVR_Source_UnrealVR_Public_Interactable_h_12_EVENT_PARMS \
	struct Interactable_eventonInteract_Parms \
	{ \
		const UStaticMeshComponent* controller; \
	};


#define UnrealVR_Source_UnrealVR_Public_Interactable_h_12_CALLBACK_WRAPPERS
#define UnrealVR_Source_UnrealVR_Public_Interactable_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractable(); \
	friend struct Z_Construct_UClass_AInteractable_Statics; \
public: \
	DECLARE_CLASS(AInteractable, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealVR"), NO_API) \
	DECLARE_SERIALIZER(AInteractable)


#define UnrealVR_Source_UnrealVR_Public_Interactable_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAInteractable(); \
	friend struct Z_Construct_UClass_AInteractable_Statics; \
public: \
	DECLARE_CLASS(AInteractable, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealVR"), NO_API) \
	DECLARE_SERIALIZER(AInteractable)


#define UnrealVR_Source_UnrealVR_Public_Interactable_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInteractable(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInteractable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractable(AInteractable&&); \
	NO_API AInteractable(const AInteractable&); \
public:


#define UnrealVR_Source_UnrealVR_Public_Interactable_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractable(AInteractable&&); \
	NO_API AInteractable(const AInteractable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractable)


#define UnrealVR_Source_UnrealVR_Public_Interactable_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(AInteractable, Mesh); }


#define UnrealVR_Source_UnrealVR_Public_Interactable_h_9_PROLOG \
	UnrealVR_Source_UnrealVR_Public_Interactable_h_12_EVENT_PARMS


#define UnrealVR_Source_UnrealVR_Public_Interactable_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealVR_Source_UnrealVR_Public_Interactable_h_12_PRIVATE_PROPERTY_OFFSET \
	UnrealVR_Source_UnrealVR_Public_Interactable_h_12_SPARSE_DATA \
	UnrealVR_Source_UnrealVR_Public_Interactable_h_12_RPC_WRAPPERS \
	UnrealVR_Source_UnrealVR_Public_Interactable_h_12_CALLBACK_WRAPPERS \
	UnrealVR_Source_UnrealVR_Public_Interactable_h_12_INCLASS \
	UnrealVR_Source_UnrealVR_Public_Interactable_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealVR_Source_UnrealVR_Public_Interactable_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealVR_Source_UnrealVR_Public_Interactable_h_12_PRIVATE_PROPERTY_OFFSET \
	UnrealVR_Source_UnrealVR_Public_Interactable_h_12_SPARSE_DATA \
	UnrealVR_Source_UnrealVR_Public_Interactable_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealVR_Source_UnrealVR_Public_Interactable_h_12_CALLBACK_WRAPPERS \
	UnrealVR_Source_UnrealVR_Public_Interactable_h_12_INCLASS_NO_PURE_DECLS \
	UnrealVR_Source_UnrealVR_Public_Interactable_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALVR_API UClass* StaticClass<class AInteractable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealVR_Source_UnrealVR_Public_Interactable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
