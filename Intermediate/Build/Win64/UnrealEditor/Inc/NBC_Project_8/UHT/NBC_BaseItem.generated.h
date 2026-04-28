// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NBC_BaseItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NBC_PROJECT_8_NBC_BaseItem_generated_h
#error "NBC_BaseItem.generated.h already included, missing '#pragma once' in NBC_BaseItem.h"
#endif
#define NBC_PROJECT_8_NBC_BaseItem_generated_h

#define FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_BaseItem_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANBC_BaseItem(); \
	friend struct Z_Construct_UClass_ANBC_BaseItem_Statics; \
public: \
	DECLARE_CLASS(ANBC_BaseItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NBC_Project_8"), NO_API) \
	DECLARE_SERIALIZER(ANBC_BaseItem) \
	virtual UObject* _getUObject() const override { return const_cast<ANBC_BaseItem*>(this); }


#define FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_BaseItem_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANBC_BaseItem(ANBC_BaseItem&&); \
	ANBC_BaseItem(const ANBC_BaseItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANBC_BaseItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANBC_BaseItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANBC_BaseItem) \
	NO_API virtual ~ANBC_BaseItem();


#define FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_BaseItem_h_11_PROLOG
#define FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_BaseItem_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_BaseItem_h_14_INCLASS_NO_PURE_DECLS \
	FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_BaseItem_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NBC_PROJECT_8_API UClass* StaticClass<class ANBC_BaseItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_BaseItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
