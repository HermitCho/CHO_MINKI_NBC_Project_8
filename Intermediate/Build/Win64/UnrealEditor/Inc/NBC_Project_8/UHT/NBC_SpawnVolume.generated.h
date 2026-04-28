// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NBC_SpawnVolume.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef NBC_PROJECT_8_NBC_SpawnVolume_generated_h
#error "NBC_SpawnVolume.generated.h already included, missing '#pragma once' in NBC_SpawnVolume.h"
#endif
#define NBC_PROJECT_8_NBC_SpawnVolume_generated_h

#define FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_SpawnVolume_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSpawnRandomItem);


#define FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_SpawnVolume_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANBC_SpawnVolume(); \
	friend struct Z_Construct_UClass_ANBC_SpawnVolume_Statics; \
public: \
	DECLARE_CLASS(ANBC_SpawnVolume, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NBC_Project_8"), NO_API) \
	DECLARE_SERIALIZER(ANBC_SpawnVolume)


#define FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_SpawnVolume_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANBC_SpawnVolume(ANBC_SpawnVolume&&); \
	ANBC_SpawnVolume(const ANBC_SpawnVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANBC_SpawnVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANBC_SpawnVolume); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANBC_SpawnVolume) \
	NO_API virtual ~ANBC_SpawnVolume();


#define FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_SpawnVolume_h_12_PROLOG
#define FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_SpawnVolume_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_SpawnVolume_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_SpawnVolume_h_15_INCLASS_NO_PURE_DECLS \
	FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_SpawnVolume_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NBC_PROJECT_8_API UClass* StaticClass<class ANBC_SpawnVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_SpawnVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
