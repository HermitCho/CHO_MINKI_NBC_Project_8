// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NBC_Item_Interface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef NBC_PROJECT_8_NBC_Item_Interface_generated_h
#error "NBC_Item_Interface.generated.h already included, missing '#pragma once' in NBC_Item_Interface.h"
#endif
#define NBC_PROJECT_8_NBC_Item_Interface_generated_h

#define FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_Item_Interface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnItemEndOverlap); \
	DECLARE_FUNCTION(execOnItemOverlap);


#define FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_Item_Interface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NBC_PROJECT_8_API UNBC_Item_Interface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNBC_Item_Interface(UNBC_Item_Interface&&); \
	UNBC_Item_Interface(const UNBC_Item_Interface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NBC_PROJECT_8_API, UNBC_Item_Interface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNBC_Item_Interface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNBC_Item_Interface) \
	NBC_PROJECT_8_API virtual ~UNBC_Item_Interface();


#define FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_Item_Interface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNBC_Item_Interface(); \
	friend struct Z_Construct_UClass_UNBC_Item_Interface_Statics; \
public: \
	DECLARE_CLASS(UNBC_Item_Interface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NBC_Project_8"), NBC_PROJECT_8_API) \
	DECLARE_SERIALIZER(UNBC_Item_Interface)


#define FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_Item_Interface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_Item_Interface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_Item_Interface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_Item_Interface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~INBC_Item_Interface() {} \
public: \
	typedef UNBC_Item_Interface UClassType; \
	typedef INBC_Item_Interface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_Item_Interface_h_10_PROLOG
#define FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_Item_Interface_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_Item_Interface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_Item_Interface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NBC_PROJECT_8_API UClass* StaticClass<class UNBC_Item_Interface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_Item_Interface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
