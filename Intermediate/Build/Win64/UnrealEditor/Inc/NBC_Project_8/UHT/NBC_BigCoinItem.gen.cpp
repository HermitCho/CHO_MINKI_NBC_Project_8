// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NBC_Project_8/Public/NBC_BigCoinItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNBC_BigCoinItem() {}

// Begin Cross Module References
NBC_PROJECT_8_API UClass* Z_Construct_UClass_ANBC_BigCoinItem();
NBC_PROJECT_8_API UClass* Z_Construct_UClass_ANBC_BigCoinItem_NoRegister();
NBC_PROJECT_8_API UClass* Z_Construct_UClass_ANBC_CoinItem();
UPackage* Z_Construct_UPackage__Script_NBC_Project_8();
// End Cross Module References

// Begin Class ANBC_BigCoinItem
void ANBC_BigCoinItem::StaticRegisterNativesANBC_BigCoinItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANBC_BigCoinItem);
UClass* Z_Construct_UClass_ANBC_BigCoinItem_NoRegister()
{
	return ANBC_BigCoinItem::StaticClass();
}
struct Z_Construct_UClass_ANBC_BigCoinItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NBC_BigCoinItem.h" },
		{ "ModuleRelativePath", "Public/NBC_BigCoinItem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANBC_BigCoinItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANBC_BigCoinItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ANBC_CoinItem,
	(UObject* (*)())Z_Construct_UPackage__Script_NBC_Project_8,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBC_BigCoinItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANBC_BigCoinItem_Statics::ClassParams = {
	&ANBC_BigCoinItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANBC_BigCoinItem_Statics::Class_MetaDataParams), Z_Construct_UClass_ANBC_BigCoinItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANBC_BigCoinItem()
{
	if (!Z_Registration_Info_UClass_ANBC_BigCoinItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANBC_BigCoinItem.OuterSingleton, Z_Construct_UClass_ANBC_BigCoinItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANBC_BigCoinItem.OuterSingleton;
}
template<> NBC_PROJECT_8_API UClass* StaticClass<ANBC_BigCoinItem>()
{
	return ANBC_BigCoinItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANBC_BigCoinItem);
ANBC_BigCoinItem::~ANBC_BigCoinItem() {}
// End Class ANBC_BigCoinItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_BigCoinItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANBC_BigCoinItem, ANBC_BigCoinItem::StaticClass, TEXT("ANBC_BigCoinItem"), &Z_Registration_Info_UClass_ANBC_BigCoinItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANBC_BigCoinItem), 3606462635U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_BigCoinItem_h_1519052367(TEXT("/Script/NBC_Project_8"),
	Z_CompiledInDeferFile_FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_BigCoinItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_BigCoinItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
