// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NBC_Project_8/Public/NBC_CoinItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNBC_CoinItem() {}

// Begin Cross Module References
NBC_PROJECT_8_API UClass* Z_Construct_UClass_ANBC_BaseItem();
NBC_PROJECT_8_API UClass* Z_Construct_UClass_ANBC_CoinItem();
NBC_PROJECT_8_API UClass* Z_Construct_UClass_ANBC_CoinItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_NBC_Project_8();
// End Cross Module References

// Begin Class ANBC_CoinItem
void ANBC_CoinItem::StaticRegisterNativesANBC_CoinItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANBC_CoinItem);
UClass* Z_Construct_UClass_ANBC_CoinItem_NoRegister()
{
	return ANBC_CoinItem::StaticClass();
}
struct Z_Construct_UClass_ANBC_CoinItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NBC_CoinItem.h" },
		{ "ModuleRelativePath", "Public/NBC_CoinItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointValue_MetaData[] = {
		{ "Category", "Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xbd\x94\xec\x9d\xb8 \xed\x9a\x8d\xeb\x93\x9d \xec\x8b\x9c \xec\x96\xbb\xec\x9d\x84 \xec\xa0\x90\xec\x88\x98 (\xec\x9e\x90\xec\x8b\x9d \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4\xec\x97\x90\xec\x84\x9c \xec\x83\x81\xec\x86\x8d\xeb\xb0\x9b\xec\x95\x84 \xea\xb0\x92\xeb\xa7\x8c \xeb\xb0\x94\xea\xbf\x94\xec\xa4\x84 \xec\x98\x88\xec\xa0\x95)\n" },
#endif
		{ "ModuleRelativePath", "Public/NBC_CoinItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xbd\x94\xec\x9d\xb8 \xed\x9a\x8d\xeb\x93\x9d \xec\x8b\x9c \xec\x96\xbb\xec\x9d\x84 \xec\xa0\x90\xec\x88\x98 (\xec\x9e\x90\xec\x8b\x9d \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4\xec\x97\x90\xec\x84\x9c \xec\x83\x81\xec\x86\x8d\xeb\xb0\x9b\xec\x95\x84 \xea\xb0\x92\xeb\xa7\x8c \xeb\xb0\x94\xea\xbf\x94\xec\xa4\x84 \xec\x98\x88\xec\xa0\x95)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PointValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANBC_CoinItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANBC_CoinItem_Statics::NewProp_PointValue = { "PointValue", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBC_CoinItem, PointValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointValue_MetaData), NewProp_PointValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANBC_CoinItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC_CoinItem_Statics::NewProp_PointValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBC_CoinItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANBC_CoinItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ANBC_BaseItem,
	(UObject* (*)())Z_Construct_UPackage__Script_NBC_Project_8,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBC_CoinItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANBC_CoinItem_Statics::ClassParams = {
	&ANBC_CoinItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ANBC_CoinItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ANBC_CoinItem_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANBC_CoinItem_Statics::Class_MetaDataParams), Z_Construct_UClass_ANBC_CoinItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANBC_CoinItem()
{
	if (!Z_Registration_Info_UClass_ANBC_CoinItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANBC_CoinItem.OuterSingleton, Z_Construct_UClass_ANBC_CoinItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANBC_CoinItem.OuterSingleton;
}
template<> NBC_PROJECT_8_API UClass* StaticClass<ANBC_CoinItem>()
{
	return ANBC_CoinItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANBC_CoinItem);
ANBC_CoinItem::~ANBC_CoinItem() {}
// End Class ANBC_CoinItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_CoinItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANBC_CoinItem, ANBC_CoinItem::StaticClass, TEXT("ANBC_CoinItem"), &Z_Registration_Info_UClass_ANBC_CoinItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANBC_CoinItem), 3101456662U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_CoinItem_h_523271925(TEXT("/Script/NBC_Project_8"),
	Z_CompiledInDeferFile_FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_CoinItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_CoinItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
