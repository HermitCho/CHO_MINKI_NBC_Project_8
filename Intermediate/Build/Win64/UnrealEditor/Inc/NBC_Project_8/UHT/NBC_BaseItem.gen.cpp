// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NBC_Project_8/Public/NBC_BaseItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNBC_BaseItem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
NBC_PROJECT_8_API UClass* Z_Construct_UClass_ANBC_BaseItem();
NBC_PROJECT_8_API UClass* Z_Construct_UClass_ANBC_BaseItem_NoRegister();
NBC_PROJECT_8_API UClass* Z_Construct_UClass_UNBC_Item_Interface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NBC_Project_8();
// End Cross Module References

// Begin Class ANBC_BaseItem
void ANBC_BaseItem::StaticRegisterNativesANBC_BaseItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANBC_BaseItem);
UClass* Z_Construct_UClass_ANBC_BaseItem_NoRegister()
{
	return ANBC_BaseItem::StaticClass();
}
struct Z_Construct_UClass_ANBC_BaseItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NBC_BaseItem.h" },
		{ "ModuleRelativePath", "Public/NBC_BaseItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[] = {
		{ "Category", "Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x95\x84\xec\x9d\xb4\xed\x85\x9c \xec\x9c\xa0\xed\x98\x95(\xed\x83\x80\xec\x9e\x85)\xec\x9d\x84 \xed\x8e\xb8\xec\xa7\x91 \xea\xb0\x80\xeb\x8a\xa5\xed\x95\x98\xea\xb2\x8c \xec\xa7\x80\xec\xa0\x95\n" },
#endif
		{ "ModuleRelativePath", "Public/NBC_BaseItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x95\x84\xec\x9d\xb4\xed\x85\x9c \xec\x9c\xa0\xed\x98\x95(\xed\x83\x80\xec\x9e\x85)\xec\x9d\x84 \xed\x8e\xb8\xec\xa7\x91 \xea\xb0\x80\xeb\x8a\xa5\xed\x95\x98\xea\xb2\x8c \xec\xa7\x80\xec\xa0\x95" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANBC_BaseItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ANBC_BaseItem_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBC_BaseItem, ItemType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemType_MetaData), NewProp_ItemType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANBC_BaseItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC_BaseItem_Statics::NewProp_ItemType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBC_BaseItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANBC_BaseItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NBC_Project_8,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBC_BaseItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANBC_BaseItem_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UNBC_Item_Interface_NoRegister, (int32)VTABLE_OFFSET(ANBC_BaseItem, INBC_Item_Interface), false },  // 4071208879
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANBC_BaseItem_Statics::ClassParams = {
	&ANBC_BaseItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ANBC_BaseItem_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ANBC_BaseItem_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANBC_BaseItem_Statics::Class_MetaDataParams), Z_Construct_UClass_ANBC_BaseItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANBC_BaseItem()
{
	if (!Z_Registration_Info_UClass_ANBC_BaseItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANBC_BaseItem.OuterSingleton, Z_Construct_UClass_ANBC_BaseItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANBC_BaseItem.OuterSingleton;
}
template<> NBC_PROJECT_8_API UClass* StaticClass<ANBC_BaseItem>()
{
	return ANBC_BaseItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANBC_BaseItem);
ANBC_BaseItem::~ANBC_BaseItem() {}
// End Class ANBC_BaseItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_BaseItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANBC_BaseItem, ANBC_BaseItem::StaticClass, TEXT("ANBC_BaseItem"), &Z_Registration_Info_UClass_ANBC_BaseItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANBC_BaseItem), 414703293U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_BaseItem_h_2255560169(TEXT("/Script/NBC_Project_8"),
	Z_CompiledInDeferFile_FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_BaseItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_BaseItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
