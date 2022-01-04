// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTIONGAME_ActionGameCharacter_generated_h
#error "ActionGameCharacter.generated.h already included, missing '#pragma once' in ActionGameCharacter.h"
#endif
#define ACTIONGAME_ActionGameCharacter_generated_h

#define ActionGame_Source_ActionGame_ActionGameCharacter_h_12_SPARSE_DATA
#define ActionGame_Source_ActionGame_ActionGameCharacter_h_12_RPC_WRAPPERS
#define ActionGame_Source_ActionGame_ActionGameCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define ActionGame_Source_ActionGame_ActionGameCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAActionGameCharacter(); \
	friend struct Z_Construct_UClass_AActionGameCharacter_Statics; \
public: \
	DECLARE_CLASS(AActionGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(AActionGameCharacter)


#define ActionGame_Source_ActionGame_ActionGameCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAActionGameCharacter(); \
	friend struct Z_Construct_UClass_AActionGameCharacter_Statics; \
public: \
	DECLARE_CLASS(AActionGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(AActionGameCharacter)


#define ActionGame_Source_ActionGame_ActionGameCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AActionGameCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AActionGameCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AActionGameCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AActionGameCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AActionGameCharacter(AActionGameCharacter&&); \
	NO_API AActionGameCharacter(const AActionGameCharacter&); \
public:


#define ActionGame_Source_ActionGame_ActionGameCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AActionGameCharacter(AActionGameCharacter&&); \
	NO_API AActionGameCharacter(const AActionGameCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AActionGameCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AActionGameCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AActionGameCharacter)


#define ActionGame_Source_ActionGame_ActionGameCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AActionGameCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AActionGameCharacter, FollowCamera); }


#define ActionGame_Source_ActionGame_ActionGameCharacter_h_9_PROLOG
#define ActionGame_Source_ActionGame_ActionGameCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionGame_Source_ActionGame_ActionGameCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ActionGame_Source_ActionGame_ActionGameCharacter_h_12_SPARSE_DATA \
	ActionGame_Source_ActionGame_ActionGameCharacter_h_12_RPC_WRAPPERS \
	ActionGame_Source_ActionGame_ActionGameCharacter_h_12_INCLASS \
	ActionGame_Source_ActionGame_ActionGameCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionGame_Source_ActionGame_ActionGameCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionGame_Source_ActionGame_ActionGameCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ActionGame_Source_ActionGame_ActionGameCharacter_h_12_SPARSE_DATA \
	ActionGame_Source_ActionGame_ActionGameCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionGame_Source_ActionGame_ActionGameCharacter_h_12_INCLASS_NO_PURE_DECLS \
	ActionGame_Source_ActionGame_ActionGameCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONGAME_API UClass* StaticClass<class AActionGameCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionGame_Source_ActionGame_ActionGameCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
