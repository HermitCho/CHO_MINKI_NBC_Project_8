// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NBC_Project_8/Public/NBC_GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNBC_GameInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
NBC_PROJECT_8_API UClass* Z_Construct_UClass_UNBC_GameInstance();
NBC_PROJECT_8_API UClass* Z_Construct_UClass_UNBC_GameInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_NBC_Project_8();
// End Cross Module References

// Begin Class UNBC_GameInstance Function AddToScore
struct Z_Construct_UFunction_UNBC_GameInstance_AddToScore_Statics
{
	struct NBC_GameInstance_eventAddToScore_Parms
	{
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameData" },
		{ "ModuleRelativePath", "Public/NBC_GameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNBC_GameInstance_AddToScore_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NBC_GameInstance_eventAddToScore_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNBC_GameInstance_AddToScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNBC_GameInstance_AddToScore_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNBC_GameInstance_AddToScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNBC_GameInstance_AddToScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNBC_GameInstance, nullptr, "AddToScore", nullptr, nullptr, Z_Construct_UFunction_UNBC_GameInstance_AddToScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNBC_GameInstance_AddToScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNBC_GameInstance_AddToScore_Statics::NBC_GameInstance_eventAddToScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNBC_GameInstance_AddToScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNBC_GameInstance_AddToScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNBC_GameInstance_AddToScore_Statics::NBC_GameInstance_eventAddToScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNBC_GameInstance_AddToScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNBC_GameInstance_AddToScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNBC_GameInstance::execAddToScore)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddToScore(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class UNBC_GameInstance Function AddToScore

// Begin Class UNBC_GameInstance
void UNBC_GameInstance::StaticRegisterNativesUNBC_GameInstance()
{
	UClass* Class = UNBC_GameInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddToScore", &UNBC_GameInstance::execAddToScore },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNBC_GameInstance);
UClass* Z_Construct_UClass_UNBC_GameInstance_NoRegister()
{
	return UNBC_GameInstance::StaticClass();
}
struct Z_Construct_UClass_UNBC_GameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "NBC_GameInstance.h" },
		{ "ModuleRelativePath", "Public/NBC_GameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalScore_MetaData[] = {
		{ "Category", "GameData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xea\xb2\x8c\xec\x9e\x84 \xec\xa0\x84\xec\xb2\xb4 \xeb\x88\x84\xec\xa0\x81 \xec\xa0\x90\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/NBC_GameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb2\x8c\xec\x9e\x84 \xec\xa0\x84\xec\xb2\xb4 \xeb\x88\x84\xec\xa0\x81 \xec\xa0\x90\xec\x88\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLevelIndex_MetaData[] = {
		{ "Category", "GameData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x98\x84\xec\x9e\xac \xeb\xa0\x88\xeb\xb2\xa8 \xec\x9d\xb8\xeb\x8d\xb1\xec\x8a\xa4 (GameState\xec\x97\x90\xec\x84\x9c\xeb\x8f\x84 \xea\xb4\x80\xeb\xa6\xac\xed\x95\xa0 \xec\x88\x98 \xec\x9e\x88\xec\xa7\x80\xeb\xa7\x8c, \xeb\xa7\xb5 \xec\xa0\x84\xed\x99\x98 \xed\x9b\x84\xec\x97\x90\xeb\x8f\x84 \xec\x82\xb4\xeb\xa6\xac\xea\xb3\xa0 \xec\x8b\xb6\xeb\x8b\xa4\xeb\xa9\xb4 GameInstance\xec\x97\x90 \xeb\xb3\xb5\xec\xa0\x9c\xed\x95\xa0 \xec\x88\x98 \xec\x9e\x88\xec\x9d\x8c)\n" },
#endif
		{ "ModuleRelativePath", "Public/NBC_GameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x98\x84\xec\x9e\xac \xeb\xa0\x88\xeb\xb2\xa8 \xec\x9d\xb8\xeb\x8d\xb1\xec\x8a\xa4 (GameState\xec\x97\x90\xec\x84\x9c\xeb\x8f\x84 \xea\xb4\x80\xeb\xa6\xac\xed\x95\xa0 \xec\x88\x98 \xec\x9e\x88\xec\xa7\x80\xeb\xa7\x8c, \xeb\xa7\xb5 \xec\xa0\x84\xed\x99\x98 \xed\x9b\x84\xec\x97\x90\xeb\x8f\x84 \xec\x82\xb4\xeb\xa6\xac\xea\xb3\xa0 \xec\x8b\xb6\xeb\x8b\xa4\xeb\xa9\xb4 GameInstance\xec\x97\x90 \xeb\xb3\xb5\xec\xa0\x9c\xed\x95\xa0 \xec\x88\x98 \xec\x9e\x88\xec\x9d\x8c)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLevelDuration_MetaData[] = {
		{ "Category", "GameData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x98\x84\xec\x9e\xac \xeb\xa0\x88\xeb\xb2\xa8 \xea\xb2\x8c\xec\x9e\x84 \xec\x8b\x9c\xea\xb0\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/NBC_GameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x98\x84\xec\x9e\xac \xeb\xa0\x88\xeb\xb2\xa8 \xea\xb2\x8c\xec\x9e\x84 \xec\x8b\x9c\xea\xb0\x84" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalScore;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentLevelIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentLevelDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNBC_GameInstance_AddToScore, "AddToScore" }, // 1631354826
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNBC_GameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNBC_GameInstance_Statics::NewProp_TotalScore = { "TotalScore", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNBC_GameInstance, TotalScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalScore_MetaData), NewProp_TotalScore_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNBC_GameInstance_Statics::NewProp_CurrentLevelIndex = { "CurrentLevelIndex", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNBC_GameInstance, CurrentLevelIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLevelIndex_MetaData), NewProp_CurrentLevelIndex_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNBC_GameInstance_Statics::NewProp_CurrentLevelDuration = { "CurrentLevelDuration", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNBC_GameInstance, CurrentLevelDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLevelDuration_MetaData), NewProp_CurrentLevelDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNBC_GameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNBC_GameInstance_Statics::NewProp_TotalScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNBC_GameInstance_Statics::NewProp_CurrentLevelIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNBC_GameInstance_Statics::NewProp_CurrentLevelDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNBC_GameInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNBC_GameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_NBC_Project_8,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNBC_GameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNBC_GameInstance_Statics::ClassParams = {
	&UNBC_GameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNBC_GameInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNBC_GameInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNBC_GameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UNBC_GameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNBC_GameInstance()
{
	if (!Z_Registration_Info_UClass_UNBC_GameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNBC_GameInstance.OuterSingleton, Z_Construct_UClass_UNBC_GameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNBC_GameInstance.OuterSingleton;
}
template<> NBC_PROJECT_8_API UClass* StaticClass<UNBC_GameInstance>()
{
	return UNBC_GameInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNBC_GameInstance);
UNBC_GameInstance::~UNBC_GameInstance() {}
// End Class UNBC_GameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_GameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNBC_GameInstance, UNBC_GameInstance::StaticClass, TEXT("UNBC_GameInstance"), &Z_Registration_Info_UClass_UNBC_GameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNBC_GameInstance), 2412830914U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_GameInstance_h_2531302206(TEXT("/Script/NBC_Project_8"),
	Z_CompiledInDeferFile_FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_GameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_GameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
