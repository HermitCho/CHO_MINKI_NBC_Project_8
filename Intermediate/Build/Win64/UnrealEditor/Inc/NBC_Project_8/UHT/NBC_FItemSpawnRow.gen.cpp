// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NBC_Project_8/Public/NBC_FItemSpawnRow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNBC_FItemSpawnRow() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
NBC_PROJECT_8_API UScriptStruct* Z_Construct_UScriptStruct_FNBC_FItemSpawnRow();
UPackage* Z_Construct_UPackage__Script_NBC_Project_8();
// End Cross Module References

// Begin ScriptStruct FNBC_FItemSpawnRow
static_assert(std::is_polymorphic<FNBC_FItemSpawnRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FNBC_FItemSpawnRow cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NBC_FItemSpawnRow;
class UScriptStruct* FNBC_FItemSpawnRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NBC_FItemSpawnRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NBC_FItemSpawnRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNBC_FItemSpawnRow, (UObject*)Z_Construct_UPackage__Script_NBC_Project_8(), TEXT("NBC_FItemSpawnRow"));
	}
	return Z_Registration_Info_UScriptStruct_NBC_FItemSpawnRow.OuterSingleton;
}
template<> NBC_PROJECT_8_API UScriptStruct* StaticStruct<FNBC_FItemSpawnRow>()
{
	return FNBC_FItemSpawnRow::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNBC_FItemSpawnRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NBC_FItemSpawnRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
		{ "Category", "NBC_FItemSpawnRow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x95\x84\xec\x9d\xb4\xed\x85\x9c \xec\x9d\xb4\xeb\xa6\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/NBC_FItemSpawnRow.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x95\x84\xec\x9d\xb4\xed\x85\x9c \xec\x9d\xb4\xeb\xa6\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemClass_MetaData[] = {
		{ "Category", "NBC_FItemSpawnRow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x96\xb4\xeb\x96\xa4 \xec\x95\x84\xec\x9d\xb4\xed\x85\x9c \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4\xeb\xa5\xbc \xec\x8a\xa4\xed\x8f\xb0\xed\x95\xa0\xec\xa7\x80\n" },
#endif
		{ "ModuleRelativePath", "Public/NBC_FItemSpawnRow.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x96\xb4\xeb\x96\xa4 \xec\x95\x84\xec\x9d\xb4\xed\x85\x9c \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4\xeb\xa5\xbc \xec\x8a\xa4\xed\x8f\xb0\xed\x95\xa0\xec\xa7\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnChance_MetaData[] = {
		{ "Category", "NBC_FItemSpawnRow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x9d\xb4 \xec\x95\x84\xec\x9d\xb4\xed\x85\x9c\xec\x9d\x98 \xec\x8a\xa4\xed\x8f\xb0 \xed\x99\x95\xeb\xa5\xa0\n" },
#endif
		{ "ModuleRelativePath", "Public/NBC_FItemSpawnRow.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9d\xb4 \xec\x95\x84\xec\x9d\xb4\xed\x85\x9c\xec\x9d\x98 \xec\x8a\xa4\xed\x8f\xb0 \xed\x99\x95\xeb\xa5\xa0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnChance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNBC_FItemSpawnRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNBC_FItemSpawnRow_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNBC_FItemSpawnRow, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemName_MetaData), NewProp_ItemName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FNBC_FItemSpawnRow_Statics::NewProp_ItemClass = { "ItemClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNBC_FItemSpawnRow, ItemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemClass_MetaData), NewProp_ItemClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNBC_FItemSpawnRow_Statics::NewProp_SpawnChance = { "SpawnChance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNBC_FItemSpawnRow, SpawnChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnChance_MetaData), NewProp_SpawnChance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNBC_FItemSpawnRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNBC_FItemSpawnRow_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNBC_FItemSpawnRow_Statics::NewProp_ItemClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNBC_FItemSpawnRow_Statics::NewProp_SpawnChance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNBC_FItemSpawnRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNBC_FItemSpawnRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NBC_Project_8,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"NBC_FItemSpawnRow",
	Z_Construct_UScriptStruct_FNBC_FItemSpawnRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNBC_FItemSpawnRow_Statics::PropPointers),
	sizeof(FNBC_FItemSpawnRow),
	alignof(FNBC_FItemSpawnRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNBC_FItemSpawnRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNBC_FItemSpawnRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNBC_FItemSpawnRow()
{
	if (!Z_Registration_Info_UScriptStruct_NBC_FItemSpawnRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NBC_FItemSpawnRow.InnerSingleton, Z_Construct_UScriptStruct_FNBC_FItemSpawnRow_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NBC_FItemSpawnRow.InnerSingleton;
}
// End ScriptStruct FNBC_FItemSpawnRow

// Begin Registration
struct Z_CompiledInDeferFile_FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_FItemSpawnRow_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNBC_FItemSpawnRow::StaticStruct, Z_Construct_UScriptStruct_FNBC_FItemSpawnRow_Statics::NewStructOps, TEXT("NBC_FItemSpawnRow"), &Z_Registration_Info_UScriptStruct_NBC_FItemSpawnRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNBC_FItemSpawnRow), 367988286U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_FItemSpawnRow_h_3013167267(TEXT("/Script/NBC_Project_8"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_FItemSpawnRow_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_FItemSpawnRow_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
