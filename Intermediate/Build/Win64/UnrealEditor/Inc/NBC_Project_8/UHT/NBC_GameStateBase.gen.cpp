// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NBC_Project_8/Public/NBC_GameStateBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNBC_GameStateBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
NBC_PROJECT_8_API UClass* Z_Construct_UClass_ANBC_GameStateBase();
NBC_PROJECT_8_API UClass* Z_Construct_UClass_ANBC_GameStateBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_NBC_Project_8();
// End Cross Module References

// Begin Class ANBC_GameStateBase Function AddScore
struct Z_Construct_UFunction_ANBC_GameStateBase_AddScore_Statics
{
	struct NBC_GameStateBase_eventAddScore_Parms
	{
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Score" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xa0\x90\xec\x88\x98\xeb\xa5\xbc \xec\xb6\x94\xea\xb0\x80\xed\x95\xb4\xec\xa3\xbc\xeb\x8a\x94 \xed\x95\xa8\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/NBC_GameStateBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xa0\x90\xec\x88\x98\xeb\xa5\xbc \xec\xb6\x94\xea\xb0\x80\xed\x95\xb4\xec\xa3\xbc\xeb\x8a\x94 \xed\x95\xa8\xec\x88\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ANBC_GameStateBase_AddScore_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NBC_GameStateBase_eventAddScore_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANBC_GameStateBase_AddScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANBC_GameStateBase_AddScore_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_GameStateBase_AddScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANBC_GameStateBase_AddScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANBC_GameStateBase, nullptr, "AddScore", nullptr, nullptr, Z_Construct_UFunction_ANBC_GameStateBase_AddScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_GameStateBase_AddScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANBC_GameStateBase_AddScore_Statics::NBC_GameStateBase_eventAddScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_GameStateBase_AddScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANBC_GameStateBase_AddScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANBC_GameStateBase_AddScore_Statics::NBC_GameStateBase_eventAddScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANBC_GameStateBase_AddScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANBC_GameStateBase_AddScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANBC_GameStateBase::execAddScore)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddScore(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class ANBC_GameStateBase Function AddScore

// Begin Class ANBC_GameStateBase Function GetScore
struct Z_Construct_UFunction_ANBC_GameStateBase_GetScore_Statics
{
	struct NBC_GameStateBase_eventGetScore_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Score" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x98\x84\xec\x9e\xac \xec\xa0\x90\xec\x88\x98\xeb\xa5\xbc \xec\x9d\xbd\xeb\x8a\x94 \xed\x95\xa8\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/NBC_GameStateBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x98\x84\xec\x9e\xac \xec\xa0\x90\xec\x88\x98\xeb\xa5\xbc \xec\x9d\xbd\xeb\x8a\x94 \xed\x95\xa8\xec\x88\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ANBC_GameStateBase_GetScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NBC_GameStateBase_eventGetScore_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANBC_GameStateBase_GetScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANBC_GameStateBase_GetScore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_GameStateBase_GetScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANBC_GameStateBase_GetScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANBC_GameStateBase, nullptr, "GetScore", nullptr, nullptr, Z_Construct_UFunction_ANBC_GameStateBase_GetScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_GameStateBase_GetScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANBC_GameStateBase_GetScore_Statics::NBC_GameStateBase_eventGetScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_GameStateBase_GetScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANBC_GameStateBase_GetScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANBC_GameStateBase_GetScore_Statics::NBC_GameStateBase_eventGetScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANBC_GameStateBase_GetScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANBC_GameStateBase_GetScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANBC_GameStateBase::execGetScore)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetScore();
	P_NATIVE_END;
}
// End Class ANBC_GameStateBase Function GetScore

// Begin Class ANBC_GameStateBase
void ANBC_GameStateBase::StaticRegisterNativesANBC_GameStateBase()
{
	UClass* Class = ANBC_GameStateBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddScore", &ANBC_GameStateBase::execAddScore },
		{ "GetScore", &ANBC_GameStateBase::execGetScore },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANBC_GameStateBase);
UClass* Z_Construct_UClass_ANBC_GameStateBase_NoRegister()
{
	return ANBC_GameStateBase::StaticClass();
}
struct Z_Construct_UClass_ANBC_GameStateBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "NBC_GameStateBase.h" },
		{ "ModuleRelativePath", "Public/NBC_GameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[] = {
		{ "Category", "Score" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xa0\x84\xec\x97\xad \xec\xa0\x90\xec\x88\x98\xeb\xa5\xbc \xec\xa0\x80\xec\x9e\xa5\xed\x95\x98\xeb\x8a\x94 \xeb\xb3\x80\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/NBC_GameStateBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xa0\x84\xec\x97\xad \xec\xa0\x90\xec\x88\x98\xeb\xa5\xbc \xec\xa0\x80\xec\x9e\xa5\xed\x95\x98\xeb\x8a\x94 \xeb\xb3\x80\xec\x88\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANBC_GameStateBase_AddScore, "AddScore" }, // 2319397554
		{ &Z_Construct_UFunction_ANBC_GameStateBase_GetScore, "GetScore" }, // 618927215
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANBC_GameStateBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANBC_GameStateBase_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBC_GameStateBase, Score), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Score_MetaData), NewProp_Score_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANBC_GameStateBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC_GameStateBase_Statics::NewProp_Score,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBC_GameStateBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANBC_GameStateBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NBC_Project_8,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBC_GameStateBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANBC_GameStateBase_Statics::ClassParams = {
	&ANBC_GameStateBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANBC_GameStateBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANBC_GameStateBase_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANBC_GameStateBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ANBC_GameStateBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANBC_GameStateBase()
{
	if (!Z_Registration_Info_UClass_ANBC_GameStateBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANBC_GameStateBase.OuterSingleton, Z_Construct_UClass_ANBC_GameStateBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANBC_GameStateBase.OuterSingleton;
}
template<> NBC_PROJECT_8_API UClass* StaticClass<ANBC_GameStateBase>()
{
	return ANBC_GameStateBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANBC_GameStateBase);
ANBC_GameStateBase::~ANBC_GameStateBase() {}
// End Class ANBC_GameStateBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_GameStateBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANBC_GameStateBase, ANBC_GameStateBase::StaticClass, TEXT("ANBC_GameStateBase"), &Z_Registration_Info_UClass_ANBC_GameStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANBC_GameStateBase), 262267198U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_GameStateBase_h_331773356(TEXT("/Script/NBC_Project_8"),
	Z_CompiledInDeferFile_FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_GameStateBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_GameStateBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
