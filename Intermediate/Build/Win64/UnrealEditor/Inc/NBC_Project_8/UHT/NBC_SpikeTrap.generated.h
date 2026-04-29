// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NBC_SpikeTrap.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef NBC_PROJECT_8_NBC_SpikeTrap_generated_h
#error "NBC_SpikeTrap.generated.h already included, missing '#pragma once' in NBC_SpikeTrap.h"
#endif
#define NBC_PROJECT_8_NBC_SpikeTrap_generated_h

#define FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_SpikeTrap_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_SpikeTrap_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANBC_SpikeTrap(); \
	friend struct Z_Construct_UClass_ANBC_SpikeTrap_Statics; \
public: \
	DECLARE_CLASS(ANBC_SpikeTrap, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NBC_Project_8"), NO_API) \
	DECLARE_SERIALIZER(ANBC_SpikeTrap)


#define FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_SpikeTrap_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANBC_SpikeTrap(ANBC_SpikeTrap&&); \
	ANBC_SpikeTrap(const ANBC_SpikeTrap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANBC_SpikeTrap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANBC_SpikeTrap); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANBC_SpikeTrap) \
	NO_API virtual ~ANBC_SpikeTrap();


#define FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_SpikeTrap_h_10_PROLOG
#define FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_SpikeTrap_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_SpikeTrap_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_SpikeTrap_h_13_INCLASS_NO_PURE_DECLS \
	FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_SpikeTrap_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NBC_PROJECT_8_API UClass* StaticClass<class ANBC_SpikeTrap>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_SpikeTrap_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
