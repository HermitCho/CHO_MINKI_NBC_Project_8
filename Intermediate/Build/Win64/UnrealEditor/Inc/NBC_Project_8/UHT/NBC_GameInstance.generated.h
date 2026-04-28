// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NBC_GameInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NBC_PROJECT_8_NBC_GameInstance_generated_h
#error "NBC_GameInstance.generated.h already included, missing '#pragma once' in NBC_GameInstance.h"
#endif
#define NBC_PROJECT_8_NBC_GameInstance_generated_h

#define FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_GameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddToScore);


#define FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_GameInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNBC_GameInstance(); \
	friend struct Z_Construct_UClass_UNBC_GameInstance_Statics; \
public: \
	DECLARE_CLASS(UNBC_GameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/NBC_Project_8"), NO_API) \
	DECLARE_SERIALIZER(UNBC_GameInstance)


#define FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_GameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNBC_GameInstance(UNBC_GameInstance&&); \
	UNBC_GameInstance(const UNBC_GameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNBC_GameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNBC_GameInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNBC_GameInstance) \
	NO_API virtual ~UNBC_GameInstance();


#define FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_GameInstance_h_12_PROLOG
#define FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_GameInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_GameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_GameInstance_h_15_INCLASS_NO_PURE_DECLS \
	FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_GameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NBC_PROJECT_8_API UClass* StaticClass<class UNBC_GameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_GameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
