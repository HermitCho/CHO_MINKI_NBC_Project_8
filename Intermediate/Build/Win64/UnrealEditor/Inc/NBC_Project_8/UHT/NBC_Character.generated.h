// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NBC_Character.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputActionValue;
#ifdef NBC_PROJECT_8_NBC_Character_generated_h
#error "NBC_Character.generated.h already included, missing '#pragma once' in NBC_Character.h"
#endif
#define NBC_PROJECT_8_NBC_Character_generated_h

#define FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_Character_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStopSprint); \
	DECLARE_FUNCTION(execStartSprint); \
	DECLARE_FUNCTION(execLook); \
	DECLARE_FUNCTION(execStopJump); \
	DECLARE_FUNCTION(execStartJump); \
	DECLARE_FUNCTION(execMove);


#define FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_Character_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANBC_Character(); \
	friend struct Z_Construct_UClass_ANBC_Character_Statics; \
public: \
	DECLARE_CLASS(ANBC_Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NBC_Project_8"), NO_API) \
	DECLARE_SERIALIZER(ANBC_Character)


#define FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_Character_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANBC_Character(ANBC_Character&&); \
	ANBC_Character(const ANBC_Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANBC_Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANBC_Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANBC_Character) \
	NO_API virtual ~ANBC_Character();


#define FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_Character_h_14_PROLOG
#define FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_Character_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_Character_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_Character_h_17_INCLASS_NO_PURE_DECLS \
	FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_Character_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NBC_PROJECT_8_API UClass* StaticClass<class ANBC_Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
