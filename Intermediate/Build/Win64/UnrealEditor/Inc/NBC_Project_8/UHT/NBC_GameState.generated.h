// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NBC_GameState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NBC_PROJECT_8_NBC_GameState_generated_h
#error "NBC_GameState.generated.h already included, missing '#pragma once' in NBC_GameState.h"
#endif
#define NBC_PROJECT_8_NBC_GameState_generated_h

#define FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_GameState_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnGameOver); \
	DECLARE_FUNCTION(execAddScore); \
	DECLARE_FUNCTION(execGetScore);


#define FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_GameState_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANBC_GameState(); \
	friend struct Z_Construct_UClass_ANBC_GameState_Statics; \
public: \
	DECLARE_CLASS(ANBC_GameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NBC_Project_8"), NO_API) \
	DECLARE_SERIALIZER(ANBC_GameState)


#define FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_GameState_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANBC_GameState(ANBC_GameState&&); \
	ANBC_GameState(const ANBC_GameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANBC_GameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANBC_GameState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANBC_GameState) \
	NO_API virtual ~ANBC_GameState();


#define FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_GameState_h_9_PROLOG
#define FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_GameState_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_GameState_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_GameState_h_12_INCLASS_NO_PURE_DECLS \
	FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_GameState_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NBC_PROJECT_8_API UClass* StaticClass<class ANBC_GameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_GameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
