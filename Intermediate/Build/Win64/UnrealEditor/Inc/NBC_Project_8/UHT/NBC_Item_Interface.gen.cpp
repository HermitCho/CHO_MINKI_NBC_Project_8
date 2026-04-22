// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NBC_Project_8/Public/NBC_Item_Interface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNBC_Item_Interface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
NBC_PROJECT_8_API UClass* Z_Construct_UClass_UNBC_Item_Interface();
NBC_PROJECT_8_API UClass* Z_Construct_UClass_UNBC_Item_Interface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NBC_Project_8();
// End Cross Module References

// Begin Interface UNBC_Item_Interface
void UNBC_Item_Interface::StaticRegisterNativesUNBC_Item_Interface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNBC_Item_Interface);
UClass* Z_Construct_UClass_UNBC_Item_Interface_NoRegister()
{
	return UNBC_Item_Interface::StaticClass();
}
struct Z_Construct_UClass_UNBC_Item_Interface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NBC_Item_Interface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INBC_Item_Interface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNBC_Item_Interface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NBC_Project_8,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNBC_Item_Interface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNBC_Item_Interface_Statics::ClassParams = {
	&UNBC_Item_Interface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNBC_Item_Interface_Statics::Class_MetaDataParams), Z_Construct_UClass_UNBC_Item_Interface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNBC_Item_Interface()
{
	if (!Z_Registration_Info_UClass_UNBC_Item_Interface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNBC_Item_Interface.OuterSingleton, Z_Construct_UClass_UNBC_Item_Interface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNBC_Item_Interface.OuterSingleton;
}
template<> NBC_PROJECT_8_API UClass* StaticClass<UNBC_Item_Interface>()
{
	return UNBC_Item_Interface::StaticClass();
}
UNBC_Item_Interface::UNBC_Item_Interface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNBC_Item_Interface);
UNBC_Item_Interface::~UNBC_Item_Interface() {}
// End Interface UNBC_Item_Interface

// Begin Registration
struct Z_CompiledInDeferFile_FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_Item_Interface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNBC_Item_Interface, UNBC_Item_Interface::StaticClass, TEXT("UNBC_Item_Interface"), &Z_Registration_Info_UClass_UNBC_Item_Interface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNBC_Item_Interface), 4071208879U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_Item_Interface_h_549963047(TEXT("/Script/NBC_Project_8"),
	Z_CompiledInDeferFile_FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_Item_Interface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_Item_Interface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
