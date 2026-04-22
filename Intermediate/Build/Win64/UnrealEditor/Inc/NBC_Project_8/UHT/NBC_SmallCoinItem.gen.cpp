// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NBC_Project_8/Public/NBC_SmallCoinItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNBC_SmallCoinItem() {}

// Begin Cross Module References
NBC_PROJECT_8_API UClass* Z_Construct_UClass_ANBC_CoinItem();
NBC_PROJECT_8_API UClass* Z_Construct_UClass_ANBC_SmallCoinItem();
NBC_PROJECT_8_API UClass* Z_Construct_UClass_ANBC_SmallCoinItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_NBC_Project_8();
// End Cross Module References

// Begin Class ANBC_SmallCoinItem
void ANBC_SmallCoinItem::StaticRegisterNativesANBC_SmallCoinItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANBC_SmallCoinItem);
UClass* Z_Construct_UClass_ANBC_SmallCoinItem_NoRegister()
{
	return ANBC_SmallCoinItem::StaticClass();
}
struct Z_Construct_UClass_ANBC_SmallCoinItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NBC_SmallCoinItem.h" },
		{ "ModuleRelativePath", "Public/NBC_SmallCoinItem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANBC_SmallCoinItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANBC_SmallCoinItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ANBC_CoinItem,
	(UObject* (*)())Z_Construct_UPackage__Script_NBC_Project_8,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBC_SmallCoinItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANBC_SmallCoinItem_Statics::ClassParams = {
	&ANBC_SmallCoinItem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANBC_SmallCoinItem_Statics::Class_MetaDataParams), Z_Construct_UClass_ANBC_SmallCoinItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANBC_SmallCoinItem()
{
	if (!Z_Registration_Info_UClass_ANBC_SmallCoinItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANBC_SmallCoinItem.OuterSingleton, Z_Construct_UClass_ANBC_SmallCoinItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANBC_SmallCoinItem.OuterSingleton;
}
template<> NBC_PROJECT_8_API UClass* StaticClass<ANBC_SmallCoinItem>()
{
	return ANBC_SmallCoinItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANBC_SmallCoinItem);
ANBC_SmallCoinItem::~ANBC_SmallCoinItem() {}
// End Class ANBC_SmallCoinItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_SmallCoinItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANBC_SmallCoinItem, ANBC_SmallCoinItem::StaticClass, TEXT("ANBC_SmallCoinItem"), &Z_Registration_Info_UClass_ANBC_SmallCoinItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANBC_SmallCoinItem), 1745259892U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_SmallCoinItem_h_3349154349(TEXT("/Script/NBC_Project_8"),
	Z_CompiledInDeferFile_FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_SmallCoinItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_SmallCoinItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
