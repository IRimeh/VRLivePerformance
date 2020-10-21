// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FVector;
class AActor;
class AInteractable;
#ifdef UNREALVR_InteractionHelper_generated_h
#error "InteractionHelper.generated.h already included, missing '#pragma once' in InteractionHelper.h"
#endif
#define UNREALVR_InteractionHelper_generated_h

#define UnrealVR_Source_UnrealVR_Public_InteractionHelper_h_13_SPARSE_DATA
#define UnrealVR_Source_UnrealVR_Public_InteractionHelper_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCheckForInteraction);


#define UnrealVR_Source_UnrealVR_Public_InteractionHelper_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCheckForInteraction);


#define UnrealVR_Source_UnrealVR_Public_InteractionHelper_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractionHelper(); \
	friend struct Z_Construct_UClass_AInteractionHelper_Statics; \
public: \
	DECLARE_CLASS(AInteractionHelper, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealVR"), NO_API) \
	DECLARE_SERIALIZER(AInteractionHelper)


#define UnrealVR_Source_UnrealVR_Public_InteractionHelper_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAInteractionHelper(); \
	friend struct Z_Construct_UClass_AInteractionHelper_Statics; \
public: \
	DECLARE_CLASS(AInteractionHelper, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealVR"), NO_API) \
	DECLARE_SERIALIZER(AInteractionHelper)


#define UnrealVR_Source_UnrealVR_Public_InteractionHelper_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInteractionHelper(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInteractionHelper) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractionHelper); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractionHelper); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractionHelper(AInteractionHelper&&); \
	NO_API AInteractionHelper(const AInteractionHelper&); \
public:


#define UnrealVR_Source_UnrealVR_Public_InteractionHelper_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractionHelper(AInteractionHelper&&); \
	NO_API AInteractionHelper(const AInteractionHelper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractionHelper); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractionHelper); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractionHelper)


#define UnrealVR_Source_UnrealVR_Public_InteractionHelper_h_13_PRIVATE_PROPERTY_OFFSET
#define UnrealVR_Source_UnrealVR_Public_InteractionHelper_h_10_PROLOG
#define UnrealVR_Source_UnrealVR_Public_InteractionHelper_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealVR_Source_UnrealVR_Public_InteractionHelper_h_13_PRIVATE_PROPERTY_OFFSET \
	UnrealVR_Source_UnrealVR_Public_InteractionHelper_h_13_SPARSE_DATA \
	UnrealVR_Source_UnrealVR_Public_InteractionHelper_h_13_RPC_WRAPPERS \
	UnrealVR_Source_UnrealVR_Public_InteractionHelper_h_13_INCLASS \
	UnrealVR_Source_UnrealVR_Public_InteractionHelper_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealVR_Source_UnrealVR_Public_InteractionHelper_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealVR_Source_UnrealVR_Public_InteractionHelper_h_13_PRIVATE_PROPERTY_OFFSET \
	UnrealVR_Source_UnrealVR_Public_InteractionHelper_h_13_SPARSE_DATA \
	UnrealVR_Source_UnrealVR_Public_InteractionHelper_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealVR_Source_UnrealVR_Public_InteractionHelper_h_13_INCLASS_NO_PURE_DECLS \
	UnrealVR_Source_UnrealVR_Public_InteractionHelper_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALVR_API UClass* StaticClass<class AInteractionHelper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealVR_Source_UnrealVR_Public_InteractionHelper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
