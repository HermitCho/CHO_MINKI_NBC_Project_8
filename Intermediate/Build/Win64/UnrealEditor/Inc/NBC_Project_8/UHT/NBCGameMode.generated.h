// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NBCGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NBC_PROJECT_8_NBCGameMode_generated_h
#error "NBCGameMode.generated.h already included, missing '#pragma once' in NBCGameMode.h"
#endif
#define NBC_PROJECT_8_NBCGameMode_generated_h

#define FID_NBC_Project_8_Source_NBC_Project_8_Public_NBCGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANBCGameMode(); \
	friend struct Z_Construct_UClass_ANBCGameMode_Statics; \
public: \
	DECLARE_CLASS(ANBCGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/NBC_Project_8"), NO_API) \
	DECLARE_SERIALIZER(ANBCGameMode)


#define FID_NBC_Project_8_Source_NBC_Project_8_Public_NBCGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANBCGameMode(ANBCGameMode&&); \
	ANBCGameMode(const ANBCGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANBCGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANBCGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANBCGameMode) \
	NO_API virtual ~ANBCGameMode();


#define FID_NBC_Project_8_Source_NBC_Project_8_Public_NBCGameMode_h_9_PROLOG
#define FID_NBC_Project_8_Source_NBC_Project_8_Public_NBCGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NBC_Project_8_Source_NBC_Project_8_Public_NBCGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_NBC_Project_8_Source_NBC_Project_8_Public_NBCGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NBC_PROJECT_8_API UClass* StaticClass<class ANBCGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NBC_Project_8_Source_NBC_Project_8_Public_NBCGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
