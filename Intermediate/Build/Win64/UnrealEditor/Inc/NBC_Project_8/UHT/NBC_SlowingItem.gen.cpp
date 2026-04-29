// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NBC_Project_8/Public/NBC_SlowingItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNBC_SlowingItem() {}

// Begin Cross Module References
NBC_PROJECT_8_API UClass* Z_Construct_UClass_ANBC_BaseItem();
NBC_PROJECT_8_API UClass* Z_Construct_UClass_ANBC_SlowingItem();
NBC_PROJECT_8_API UClass* Z_Construct_UClass_ANBC_SlowingItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_NBC_Project_8();
// End Cross Module References

// Begin Class ANBC_SlowingItem
void ANBC_SlowingItem::StaticRegisterNativesANBC_SlowingItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANBC_SlowingItem);
UClass* Z_Construct_UClass_ANBC_SlowingItem_NoRegister()
{
	return ANBC_SlowingItem::StaticClass();
}
struct Z_Construct_UClass_ANBC_SlowingItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NBC_SlowingItem.h" },
		{ "ModuleRelativePath", "Public/NBC_SlowingItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlowMultiplier_MetaData[] = {
		{ "Category", "Slow" },
		{ "ModuleRelativePath", "Public/NBC_SlowingItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlowDuration_MetaData[] = {
		{ "Category", "Slow" },
		{ "ModuleRelativePath", "Public/NBC_SlowingItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SlowMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SlowDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANBC_SlowingItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANBC_SlowingItem_Statics::NewProp_SlowMultiplier = { "SlowMultiplier", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBC_SlowingItem, SlowMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlowMultiplier_MetaData), NewProp_SlowMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANBC_SlowingItem_Statics::NewProp_SlowDuration = { "SlowDuration", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBC_SlowingItem, SlowDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlowDuration_MetaData), NewProp_SlowDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANBC_SlowingItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC_SlowingItem_Statics::NewProp_SlowMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC_SlowingItem_Statics::NewProp_SlowDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBC_SlowingItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANBC_SlowingItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ANBC_BaseItem,
	(UObject* (*)())Z_Construct_UPackage__Script_NBC_Project_8,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBC_SlowingItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANBC_SlowingItem_Statics::ClassParams = {
	&ANBC_SlowingItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ANBC_SlowingItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ANBC_SlowingItem_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANBC_SlowingItem_Statics::Class_MetaDataParams), Z_Construct_UClass_ANBC_SlowingItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANBC_SlowingItem()
{
	if (!Z_Registration_Info_UClass_ANBC_SlowingItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANBC_SlowingItem.OuterSingleton, Z_Construct_UClass_ANBC_SlowingItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANBC_SlowingItem.OuterSingleton;
}
template<> NBC_PROJECT_8_API UClass* StaticClass<ANBC_SlowingItem>()
{
	return ANBC_SlowingItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANBC_SlowingItem);
ANBC_SlowingItem::~ANBC_SlowingItem() {}
// End Class ANBC_SlowingItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_SlowingItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANBC_SlowingItem, ANBC_SlowingItem::StaticClass, TEXT("ANBC_SlowingItem"), &Z_Registration_Info_UClass_ANBC_SlowingItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANBC_SlowingItem), 2834880591U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_SlowingItem_h_2662158266(TEXT("/Script/NBC_Project_8"),
	Z_CompiledInDeferFile_FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_SlowingItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_SlowingItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
