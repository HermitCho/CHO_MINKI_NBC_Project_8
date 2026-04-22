// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NBC_Project_8/Public/NBC_MineItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNBC_MineItem() {}

// Begin Cross Module References
NBC_PROJECT_8_API UClass* Z_Construct_UClass_ANBC_BaseItem();
NBC_PROJECT_8_API UClass* Z_Construct_UClass_ANBC_MineItem();
NBC_PROJECT_8_API UClass* Z_Construct_UClass_ANBC_MineItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_NBC_Project_8();
// End Cross Module References

// Begin Class ANBC_MineItem
void ANBC_MineItem::StaticRegisterNativesANBC_MineItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANBC_MineItem);
UClass* Z_Construct_UClass_ANBC_MineItem_NoRegister()
{
	return ANBC_MineItem::StaticClass();
}
struct Z_Construct_UClass_ANBC_MineItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NBC_MineItem.h" },
		{ "ModuleRelativePath", "Public/NBC_MineItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionDelay_MetaData[] = {
		{ "Category", "Mine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x8f\xad\xeb\xb0\x9c\xea\xb9\x8c\xec\xa7\x80 \xea\xb1\xb8\xeb\xa6\xac\xeb\x8a\x94 \xec\x8b\x9c\xea\xb0\x84 (5\xec\xb4\x88)\n" },
#endif
		{ "ModuleRelativePath", "Public/NBC_MineItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x8f\xad\xeb\xb0\x9c\xea\xb9\x8c\xec\xa7\x80 \xea\xb1\xb8\xeb\xa6\xac\xeb\x8a\x94 \xec\x8b\x9c\xea\xb0\x84 (5\xec\xb4\x88)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionRadius_MetaData[] = {
		{ "Category", "Mine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x8f\xad\xeb\xb0\x9c \xeb\xb2\x94\xec\x9c\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/NBC_MineItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x8f\xad\xeb\xb0\x9c \xeb\xb2\x94\xec\x9c\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionDamage_MetaData[] = {
		{ "Category", "Mine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x8f\xad\xeb\xb0\x9c \xeb\x8d\xb0\xeb\xaf\xb8\xec\xa7\x80\n" },
#endif
		{ "ModuleRelativePath", "Public/NBC_MineItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x8f\xad\xeb\xb0\x9c \xeb\x8d\xb0\xeb\xaf\xb8\xec\xa7\x80" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExplosionDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExplosionRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExplosionDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANBC_MineItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANBC_MineItem_Statics::NewProp_ExplosionDelay = { "ExplosionDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBC_MineItem, ExplosionDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosionDelay_MetaData), NewProp_ExplosionDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANBC_MineItem_Statics::NewProp_ExplosionRadius = { "ExplosionRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBC_MineItem, ExplosionRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosionRadius_MetaData), NewProp_ExplosionRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANBC_MineItem_Statics::NewProp_ExplosionDamage = { "ExplosionDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBC_MineItem, ExplosionDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosionDamage_MetaData), NewProp_ExplosionDamage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANBC_MineItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC_MineItem_Statics::NewProp_ExplosionDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC_MineItem_Statics::NewProp_ExplosionRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC_MineItem_Statics::NewProp_ExplosionDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBC_MineItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANBC_MineItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ANBC_BaseItem,
	(UObject* (*)())Z_Construct_UPackage__Script_NBC_Project_8,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBC_MineItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANBC_MineItem_Statics::ClassParams = {
	&ANBC_MineItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ANBC_MineItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ANBC_MineItem_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANBC_MineItem_Statics::Class_MetaDataParams), Z_Construct_UClass_ANBC_MineItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANBC_MineItem()
{
	if (!Z_Registration_Info_UClass_ANBC_MineItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANBC_MineItem.OuterSingleton, Z_Construct_UClass_ANBC_MineItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANBC_MineItem.OuterSingleton;
}
template<> NBC_PROJECT_8_API UClass* StaticClass<ANBC_MineItem>()
{
	return ANBC_MineItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANBC_MineItem);
ANBC_MineItem::~ANBC_MineItem() {}
// End Class ANBC_MineItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_MineItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANBC_MineItem, ANBC_MineItem::StaticClass, TEXT("ANBC_MineItem"), &Z_Registration_Info_UClass_ANBC_MineItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANBC_MineItem), 4104416058U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_MineItem_h_914393074(TEXT("/Script/NBC_Project_8"),
	Z_CompiledInDeferFile_FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_MineItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_MineItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
