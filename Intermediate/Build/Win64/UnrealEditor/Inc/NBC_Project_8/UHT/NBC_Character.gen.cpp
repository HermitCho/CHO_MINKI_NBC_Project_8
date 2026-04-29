// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NBC_Project_8/Public/NBC_Character.h"
#include "EnhancedInput/Public/InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNBC_Character() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
NBC_PROJECT_8_API UClass* Z_Construct_UClass_ANBC_Character();
NBC_PROJECT_8_API UClass* Z_Construct_UClass_ANBC_Character_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NBC_Project_8();
// End Cross Module References

// Begin Class ANBC_Character Function AddHealth
struct Z_Construct_UFunction_ANBC_Character_AddHealth_Statics
{
	struct NBC_Character_eventAddHealth_Parms
	{
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb2\xb4\xeb\xa0\xa5\xec\x9d\x84 \xed\x9a\x8c\xeb\xb3\xb5\xec\x8b\x9c\xed\x82\xa4\xeb\x8a\x94 \xed\x95\xa8\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/NBC_Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb2\xb4\xeb\xa0\xa5\xec\x9d\x84 \xed\x9a\x8c\xeb\xb3\xb5\xec\x8b\x9c\xed\x82\xa4\xeb\x8a\x94 \xed\x95\xa8\xec\x88\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANBC_Character_AddHealth_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NBC_Character_eventAddHealth_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANBC_Character_AddHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANBC_Character_AddHealth_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Character_AddHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANBC_Character_AddHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANBC_Character, nullptr, "AddHealth", nullptr, nullptr, Z_Construct_UFunction_ANBC_Character_AddHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Character_AddHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANBC_Character_AddHealth_Statics::NBC_Character_eventAddHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Character_AddHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANBC_Character_AddHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANBC_Character_AddHealth_Statics::NBC_Character_eventAddHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANBC_Character_AddHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANBC_Character_AddHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANBC_Character::execAddHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddHealth(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class ANBC_Character Function AddHealth

// Begin Class ANBC_Character Function ApplyReverseControl
struct Z_Construct_UFunction_ANBC_Character_ApplyReverseControl_Statics
{
	struct NBC_Character_eventApplyReverseControl_Parms
	{
		float Duration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\xbb\xa8\xed\x8a\xb8\xeb\xa1\xa4\xeb\x9f\xac \xeb\xb0\x98\xec\xa0\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/NBC_Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xbb\xa8\xed\x8a\xb8\xeb\xa1\xa4\xeb\x9f\xac \xeb\xb0\x98\xec\xa0\x84" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANBC_Character_ApplyReverseControl_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NBC_Character_eventApplyReverseControl_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANBC_Character_ApplyReverseControl_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANBC_Character_ApplyReverseControl_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Character_ApplyReverseControl_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANBC_Character_ApplyReverseControl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANBC_Character, nullptr, "ApplyReverseControl", nullptr, nullptr, Z_Construct_UFunction_ANBC_Character_ApplyReverseControl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Character_ApplyReverseControl_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANBC_Character_ApplyReverseControl_Statics::NBC_Character_eventApplyReverseControl_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Character_ApplyReverseControl_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANBC_Character_ApplyReverseControl_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANBC_Character_ApplyReverseControl_Statics::NBC_Character_eventApplyReverseControl_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANBC_Character_ApplyReverseControl()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANBC_Character_ApplyReverseControl_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANBC_Character::execApplyReverseControl)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyReverseControl(Z_Param_Duration);
	P_NATIVE_END;
}
// End Class ANBC_Character Function ApplyReverseControl

// Begin Class ANBC_Character Function ApplySlow
struct Z_Construct_UFunction_ANBC_Character_ApplySlow_Statics
{
	struct NBC_Character_eventApplySlow_Parms
	{
		float SlowMultiplier;
		float Duration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\x8a\xac\xeb\xa1\x9c\xec\x9a\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/NBC_Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8a\xac\xeb\xa1\x9c\xec\x9a\xb0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SlowMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANBC_Character_ApplySlow_Statics::NewProp_SlowMultiplier = { "SlowMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NBC_Character_eventApplySlow_Parms, SlowMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANBC_Character_ApplySlow_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NBC_Character_eventApplySlow_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANBC_Character_ApplySlow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANBC_Character_ApplySlow_Statics::NewProp_SlowMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANBC_Character_ApplySlow_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Character_ApplySlow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANBC_Character_ApplySlow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANBC_Character, nullptr, "ApplySlow", nullptr, nullptr, Z_Construct_UFunction_ANBC_Character_ApplySlow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Character_ApplySlow_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANBC_Character_ApplySlow_Statics::NBC_Character_eventApplySlow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Character_ApplySlow_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANBC_Character_ApplySlow_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANBC_Character_ApplySlow_Statics::NBC_Character_eventApplySlow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANBC_Character_ApplySlow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANBC_Character_ApplySlow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANBC_Character::execApplySlow)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_SlowMultiplier);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplySlow(Z_Param_SlowMultiplier,Z_Param_Duration);
	P_NATIVE_END;
}
// End Class ANBC_Character Function ApplySlow

// Begin Class ANBC_Character Function GetDebuffText
struct Z_Construct_UFunction_ANBC_Character_GetDebuffText_Statics
{
	struct NBC_Character_eventGetDebuffText_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debuff" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\x94\x94\xeb\xb2\x84\xed\x94\x84 \xec\x8b\x9c\xea\xb0\x84 UI\xeb\xa5\xbc \xec\x9c\x84\xed\x95\x9c Text\n" },
#endif
		{ "ModuleRelativePath", "Public/NBC_Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\x94\x94\xeb\xb2\x84\xed\x94\x84 \xec\x8b\x9c\xea\xb0\x84 UI\xeb\xa5\xbc \xec\x9c\x84\xed\x95\x9c Text" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ANBC_Character_GetDebuffText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NBC_Character_eventGetDebuffText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANBC_Character_GetDebuffText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANBC_Character_GetDebuffText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Character_GetDebuffText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANBC_Character_GetDebuffText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANBC_Character, nullptr, "GetDebuffText", nullptr, nullptr, Z_Construct_UFunction_ANBC_Character_GetDebuffText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Character_GetDebuffText_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANBC_Character_GetDebuffText_Statics::NBC_Character_eventGetDebuffText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Character_GetDebuffText_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANBC_Character_GetDebuffText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANBC_Character_GetDebuffText_Statics::NBC_Character_eventGetDebuffText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANBC_Character_GetDebuffText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANBC_Character_GetDebuffText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANBC_Character::execGetDebuffText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetDebuffText();
	P_NATIVE_END;
}
// End Class ANBC_Character Function GetDebuffText

// Begin Class ANBC_Character Function GetHealth
struct Z_Construct_UFunction_ANBC_Character_GetHealth_Statics
{
	struct NBC_Character_eventGetHealth_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\x8b\xa4\xeb\xa5\xb8 \xea\xb3\xb3\xec\x97\x90\xec\x84\x9c \xed\x98\x84\xec\x9e\xac \xec\xb2\xb4\xeb\xa0\xa5\xec\x9d\x84 \xea\xb0\x80\xec\xa0\xb8\xec\x98\xa4\xeb\x8a\x94 \xed\x95\xa8\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/NBC_Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\x8b\xa4\xeb\xa5\xb8 \xea\xb3\xb3\xec\x97\x90\xec\x84\x9c \xed\x98\x84\xec\x9e\xac \xec\xb2\xb4\xeb\xa0\xa5\xec\x9d\x84 \xea\xb0\x80\xec\xa0\xb8\xec\x98\xa4\xeb\x8a\x94 \xed\x95\xa8\xec\x88\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ANBC_Character_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NBC_Character_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANBC_Character_GetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANBC_Character_GetHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Character_GetHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANBC_Character_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANBC_Character, nullptr, "GetHealth", nullptr, nullptr, Z_Construct_UFunction_ANBC_Character_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Character_GetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANBC_Character_GetHealth_Statics::NBC_Character_eventGetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Character_GetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANBC_Character_GetHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANBC_Character_GetHealth_Statics::NBC_Character_eventGetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANBC_Character_GetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANBC_Character_GetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANBC_Character::execGetHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetHealth();
	P_NATIVE_END;
}
// End Class ANBC_Character Function GetHealth

// Begin Class ANBC_Character Function GetMaxtHealth
struct Z_Construct_UFunction_ANBC_Character_GetMaxtHealth_Statics
{
	struct NBC_Character_eventGetMaxtHealth_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\x8b\xa4\xeb\xa5\xb8 \xea\xb3\xb3\xec\x97\x90\xec\x84\x9c \xec\xb5\x9c\xeb\x8c\x80 \xec\xb2\xb4\xeb\xa0\xa5\xec\x9d\x84 \xea\xb0\x80\xec\xa0\xb8\xec\x98\xa4\xeb\x8a\x94 \xed\x95\xa8\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/NBC_Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\x8b\xa4\xeb\xa5\xb8 \xea\xb3\xb3\xec\x97\x90\xec\x84\x9c \xec\xb5\x9c\xeb\x8c\x80 \xec\xb2\xb4\xeb\xa0\xa5\xec\x9d\x84 \xea\xb0\x80\xec\xa0\xb8\xec\x98\xa4\xeb\x8a\x94 \xed\x95\xa8\xec\x88\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ANBC_Character_GetMaxtHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NBC_Character_eventGetMaxtHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANBC_Character_GetMaxtHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANBC_Character_GetMaxtHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Character_GetMaxtHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANBC_Character_GetMaxtHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANBC_Character, nullptr, "GetMaxtHealth", nullptr, nullptr, Z_Construct_UFunction_ANBC_Character_GetMaxtHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Character_GetMaxtHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANBC_Character_GetMaxtHealth_Statics::NBC_Character_eventGetMaxtHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Character_GetMaxtHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANBC_Character_GetMaxtHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANBC_Character_GetMaxtHealth_Statics::NBC_Character_eventGetMaxtHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANBC_Character_GetMaxtHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANBC_Character_GetMaxtHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANBC_Character::execGetMaxtHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMaxtHealth();
	P_NATIVE_END;
}
// End Class ANBC_Character Function GetMaxtHealth

// Begin Class ANBC_Character Function GetReverseRemainingTime
struct Z_Construct_UFunction_ANBC_Character_GetReverseRemainingTime_Statics
{
	struct NBC_Character_eventGetReverseRemainingTime_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debuff" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xbb\xa8\xed\x8a\xb8\xeb\xa1\xa4\xeb\x9f\xac \xeb\xb0\x98\xec\xa0\x84 \xec\x8b\x9c\xea\xb0\x84 \xea\xb0\x80\xec\xa0\xb8\xec\x98\xa4\xea\xb8\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/NBC_Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xbb\xa8\xed\x8a\xb8\xeb\xa1\xa4\xeb\x9f\xac \xeb\xb0\x98\xec\xa0\x84 \xec\x8b\x9c\xea\xb0\x84 \xea\xb0\x80\xec\xa0\xb8\xec\x98\xa4\xea\xb8\xb0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANBC_Character_GetReverseRemainingTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NBC_Character_eventGetReverseRemainingTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANBC_Character_GetReverseRemainingTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANBC_Character_GetReverseRemainingTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Character_GetReverseRemainingTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANBC_Character_GetReverseRemainingTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANBC_Character, nullptr, "GetReverseRemainingTime", nullptr, nullptr, Z_Construct_UFunction_ANBC_Character_GetReverseRemainingTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Character_GetReverseRemainingTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANBC_Character_GetReverseRemainingTime_Statics::NBC_Character_eventGetReverseRemainingTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Character_GetReverseRemainingTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANBC_Character_GetReverseRemainingTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANBC_Character_GetReverseRemainingTime_Statics::NBC_Character_eventGetReverseRemainingTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANBC_Character_GetReverseRemainingTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANBC_Character_GetReverseRemainingTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANBC_Character::execGetReverseRemainingTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetReverseRemainingTime();
	P_NATIVE_END;
}
// End Class ANBC_Character Function GetReverseRemainingTime

// Begin Class ANBC_Character Function GetSlowRemainingTime
struct Z_Construct_UFunction_ANBC_Character_GetSlowRemainingTime_Statics
{
	struct NBC_Character_eventGetSlowRemainingTime_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debuff" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x8a\xac\xeb\xa1\x9c\xec\x9a\xb0 \xec\x8b\x9c\xea\xb0\x84 \xea\xb0\x80\xec\xa0\xb8\xec\x98\xa4\xea\xb8\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/NBC_Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8a\xac\xeb\xa1\x9c\xec\x9a\xb0 \xec\x8b\x9c\xea\xb0\x84 \xea\xb0\x80\xec\xa0\xb8\xec\x98\xa4\xea\xb8\xb0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANBC_Character_GetSlowRemainingTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NBC_Character_eventGetSlowRemainingTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANBC_Character_GetSlowRemainingTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANBC_Character_GetSlowRemainingTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Character_GetSlowRemainingTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANBC_Character_GetSlowRemainingTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANBC_Character, nullptr, "GetSlowRemainingTime", nullptr, nullptr, Z_Construct_UFunction_ANBC_Character_GetSlowRemainingTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Character_GetSlowRemainingTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANBC_Character_GetSlowRemainingTime_Statics::NBC_Character_eventGetSlowRemainingTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Character_GetSlowRemainingTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANBC_Character_GetSlowRemainingTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANBC_Character_GetSlowRemainingTime_Statics::NBC_Character_eventGetSlowRemainingTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANBC_Character_GetSlowRemainingTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANBC_Character_GetSlowRemainingTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANBC_Character::execGetSlowRemainingTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSlowRemainingTime();
	P_NATIVE_END;
}
// End Class ANBC_Character Function GetSlowRemainingTime

// Begin Class ANBC_Character Function Look
struct Z_Construct_UFunction_ANBC_Character_Look_Statics
{
	struct NBC_Character_eventLook_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NBC_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANBC_Character_Look_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NBC_Character_eventLook_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANBC_Character_Look_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANBC_Character_Look_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Character_Look_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANBC_Character_Look_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANBC_Character, nullptr, "Look", nullptr, nullptr, Z_Construct_UFunction_ANBC_Character_Look_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Character_Look_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANBC_Character_Look_Statics::NBC_Character_eventLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Character_Look_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANBC_Character_Look_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANBC_Character_Look_Statics::NBC_Character_eventLook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANBC_Character_Look()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANBC_Character_Look_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANBC_Character::execLook)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Look(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class ANBC_Character Function Look

// Begin Class ANBC_Character Function Move
struct Z_Construct_UFunction_ANBC_Character_Move_Statics
{
	struct NBC_Character_eventMove_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// IA_Move\xec\x99\x80 IA_Jump \xeb\x93\xb1\xec\x9d\x84 \xec\xb2\x98\xeb\xa6\xac\xed\x95\xa0 \xed\x95\xa8\xec\x88\x98 \xec\x9b\x90\xed\x98\x95\n// Enhanced Input\xec\x97\x90\xec\x84\x9c \xec\x95\xa1\xec\x85\x98 \xea\xb0\x92\xec\x9d\x80 FInputActionValue\xeb\xa1\x9c \xec\xa0\x84\xeb\x8b\xac\xeb\x90\xa9\xeb\x8b\x88\xeb\x8b\xa4.\n" },
#endif
		{ "ModuleRelativePath", "Public/NBC_Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IA_Move\xec\x99\x80 IA_Jump \xeb\x93\xb1\xec\x9d\x84 \xec\xb2\x98\xeb\xa6\xac\xed\x95\xa0 \xed\x95\xa8\xec\x88\x98 \xec\x9b\x90\xed\x98\x95\nEnhanced Input\xec\x97\x90\xec\x84\x9c \xec\x95\xa1\xec\x85\x98 \xea\xb0\x92\xec\x9d\x80 FInputActionValue\xeb\xa1\x9c \xec\xa0\x84\xeb\x8b\xac\xeb\x90\xa9\xeb\x8b\x88\xeb\x8b\xa4." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANBC_Character_Move_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NBC_Character_eventMove_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANBC_Character_Move_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANBC_Character_Move_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Character_Move_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANBC_Character_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANBC_Character, nullptr, "Move", nullptr, nullptr, Z_Construct_UFunction_ANBC_Character_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Character_Move_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANBC_Character_Move_Statics::NBC_Character_eventMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Character_Move_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANBC_Character_Move_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANBC_Character_Move_Statics::NBC_Character_eventMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANBC_Character_Move()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANBC_Character_Move_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANBC_Character::execMove)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Move(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class ANBC_Character Function Move

// Begin Class ANBC_Character Function ResetReverseControl
struct Z_Construct_UFunction_ANBC_Character_ResetReverseControl_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\xbb\xa8\xed\x8a\xb8\xeb\xa1\xa4\xeb\x9f\xac \xeb\xb0\x98\xec\xa0\x84 \xec\xa0\x95\xec\x83\x81\xec\x9c\xbc\xeb\xa1\x9c \xec\xb4\x88\xea\xb8\xb0\xed\x99\x94\n" },
#endif
		{ "ModuleRelativePath", "Public/NBC_Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xbb\xa8\xed\x8a\xb8\xeb\xa1\xa4\xeb\x9f\xac \xeb\xb0\x98\xec\xa0\x84 \xec\xa0\x95\xec\x83\x81\xec\x9c\xbc\xeb\xa1\x9c \xec\xb4\x88\xea\xb8\xb0\xed\x99\x94" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANBC_Character_ResetReverseControl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANBC_Character, nullptr, "ResetReverseControl", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Character_ResetReverseControl_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANBC_Character_ResetReverseControl_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANBC_Character_ResetReverseControl()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANBC_Character_ResetReverseControl_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANBC_Character::execResetReverseControl)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetReverseControl();
	P_NATIVE_END;
}
// End Class ANBC_Character Function ResetReverseControl

// Begin Class ANBC_Character Function ResetSpeed
struct Z_Construct_UFunction_ANBC_Character_ResetSpeed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\x9d\xb4\xeb\x8f\x99 \xec\x86\x8d\xeb\x8f\x84 \xea\xb8\xb0\xeb\xb3\xb8\xec\x9c\xbc\xeb\xa1\x9c \xec\xb4\x88\xea\xb8\xb0\xed\x99\x94\n" },
#endif
		{ "ModuleRelativePath", "Public/NBC_Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9d\xb4\xeb\x8f\x99 \xec\x86\x8d\xeb\x8f\x84 \xea\xb8\xb0\xeb\xb3\xb8\xec\x9c\xbc\xeb\xa1\x9c \xec\xb4\x88\xea\xb8\xb0\xed\x99\x94" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANBC_Character_ResetSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANBC_Character, nullptr, "ResetSpeed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Character_ResetSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANBC_Character_ResetSpeed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANBC_Character_ResetSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANBC_Character_ResetSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANBC_Character::execResetSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetSpeed();
	P_NATIVE_END;
}
// End Class ANBC_Character Function ResetSpeed

// Begin Class ANBC_Character Function StartJump
struct Z_Construct_UFunction_ANBC_Character_StartJump_Statics
{
	struct NBC_Character_eventStartJump_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NBC_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANBC_Character_StartJump_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NBC_Character_eventStartJump_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANBC_Character_StartJump_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANBC_Character_StartJump_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Character_StartJump_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANBC_Character_StartJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANBC_Character, nullptr, "StartJump", nullptr, nullptr, Z_Construct_UFunction_ANBC_Character_StartJump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Character_StartJump_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANBC_Character_StartJump_Statics::NBC_Character_eventStartJump_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Character_StartJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANBC_Character_StartJump_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANBC_Character_StartJump_Statics::NBC_Character_eventStartJump_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANBC_Character_StartJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANBC_Character_StartJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANBC_Character::execStartJump)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartJump(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class ANBC_Character Function StartJump

// Begin Class ANBC_Character Function StartSprint
struct Z_Construct_UFunction_ANBC_Character_StartSprint_Statics
{
	struct NBC_Character_eventStartSprint_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NBC_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANBC_Character_StartSprint_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NBC_Character_eventStartSprint_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANBC_Character_StartSprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANBC_Character_StartSprint_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Character_StartSprint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANBC_Character_StartSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANBC_Character, nullptr, "StartSprint", nullptr, nullptr, Z_Construct_UFunction_ANBC_Character_StartSprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Character_StartSprint_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANBC_Character_StartSprint_Statics::NBC_Character_eventStartSprint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Character_StartSprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANBC_Character_StartSprint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANBC_Character_StartSprint_Statics::NBC_Character_eventStartSprint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANBC_Character_StartSprint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANBC_Character_StartSprint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANBC_Character::execStartSprint)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartSprint(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class ANBC_Character Function StartSprint

// Begin Class ANBC_Character Function StopJump
struct Z_Construct_UFunction_ANBC_Character_StopJump_Statics
{
	struct NBC_Character_eventStopJump_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NBC_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANBC_Character_StopJump_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NBC_Character_eventStopJump_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANBC_Character_StopJump_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANBC_Character_StopJump_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Character_StopJump_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANBC_Character_StopJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANBC_Character, nullptr, "StopJump", nullptr, nullptr, Z_Construct_UFunction_ANBC_Character_StopJump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Character_StopJump_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANBC_Character_StopJump_Statics::NBC_Character_eventStopJump_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Character_StopJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANBC_Character_StopJump_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANBC_Character_StopJump_Statics::NBC_Character_eventStopJump_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANBC_Character_StopJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANBC_Character_StopJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANBC_Character::execStopJump)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopJump(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class ANBC_Character Function StopJump

// Begin Class ANBC_Character Function StopSprint
struct Z_Construct_UFunction_ANBC_Character_StopSprint_Statics
{
	struct NBC_Character_eventStopSprint_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NBC_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANBC_Character_StopSprint_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NBC_Character_eventStopSprint_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANBC_Character_StopSprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANBC_Character_StopSprint_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Character_StopSprint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANBC_Character_StopSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANBC_Character, nullptr, "StopSprint", nullptr, nullptr, Z_Construct_UFunction_ANBC_Character_StopSprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Character_StopSprint_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANBC_Character_StopSprint_Statics::NBC_Character_eventStopSprint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Character_StopSprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANBC_Character_StopSprint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANBC_Character_StopSprint_Statics::NBC_Character_eventStopSprint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANBC_Character_StopSprint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANBC_Character_StopSprint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANBC_Character::execStopSprint)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopSprint(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class ANBC_Character Function StopSprint

// Begin Class ANBC_Character
void ANBC_Character::StaticRegisterNativesANBC_Character()
{
	UClass* Class = ANBC_Character::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddHealth", &ANBC_Character::execAddHealth },
		{ "ApplyReverseControl", &ANBC_Character::execApplyReverseControl },
		{ "ApplySlow", &ANBC_Character::execApplySlow },
		{ "GetDebuffText", &ANBC_Character::execGetDebuffText },
		{ "GetHealth", &ANBC_Character::execGetHealth },
		{ "GetMaxtHealth", &ANBC_Character::execGetMaxtHealth },
		{ "GetReverseRemainingTime", &ANBC_Character::execGetReverseRemainingTime },
		{ "GetSlowRemainingTime", &ANBC_Character::execGetSlowRemainingTime },
		{ "Look", &ANBC_Character::execLook },
		{ "Move", &ANBC_Character::execMove },
		{ "ResetReverseControl", &ANBC_Character::execResetReverseControl },
		{ "ResetSpeed", &ANBC_Character::execResetSpeed },
		{ "StartJump", &ANBC_Character::execStartJump },
		{ "StartSprint", &ANBC_Character::execStartSprint },
		{ "StopJump", &ANBC_Character::execStopJump },
		{ "StopSprint", &ANBC_Character::execStopSprint },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANBC_Character);
UClass* Z_Construct_UClass_ANBC_Character_NoRegister()
{
	return ANBC_Character::StaticClass();
}
struct Z_Construct_UClass_ANBC_Character_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NBC_Character.h" },
		{ "ModuleRelativePath", "Public/NBC_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x8a\xa4\xed\x94\x84\xeb\xa7\x81 \xec\x95\x94 \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NBC_Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8a\xa4\xed\x94\x84\xeb\xa7\x81 \xec\x95\x94 \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb9\xb4\xeb\xa9\x94\xeb\x9d\xbc \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NBC_Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb9\xb4\xeb\xa9\x94\xeb\x9d\xbc \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverheadWidget_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x9c\x84\xec\xa0\xaf \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NBC_Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9c\x84\xec\xa0\xaf \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LerpSpeed_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb2\xb4\xeb\xa0\xa5\xeb\xb0\x94 \xec\x95\xa0\xeb\x8b\x88\xeb\xa9\x94\xec\x9d\xb4\xec\x85\x98 \xec\x86\x8d\xeb\x8f\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/NBC_Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb2\xb4\xeb\xa0\xa5\xeb\xb0\x94 \xec\x95\xa0\xeb\x8b\x88\xeb\xa9\x94\xec\x9d\xb4\xec\x85\x98 \xec\x86\x8d\xeb\x8f\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalSpeed_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x9d\xb4\xeb\x8f\x99 \xec\x86\x8d\xeb\x8f\x84 \xea\xb4\x80\xeb\xa0\xa8 \xed\x94\x84\xeb\xa1\x9c\xed\x8d\xbc\xed\x8b\xb0\xeb\x93\xa4\n" },
#endif
		{ "ModuleRelativePath", "Public/NBC_Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9d\xb4\xeb\x8f\x99 \xec\x86\x8d\xeb\x8f\x84 \xea\xb4\x80\xeb\xa0\xa8 \xed\x94\x84\xeb\xa1\x9c\xed\x8d\xbc\xed\x8b\xb0\xeb\x93\xa4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintSpeedMultiplier_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xea\xb8\xb0\xeb\xb3\xb8 \xea\xb1\xb7\xea\xb8\xb0 \xec\x86\x8d\xeb\x8f\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/NBC_Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb8\xb0\xeb\xb3\xb8 \xea\xb1\xb7\xea\xb8\xb0 \xec\x86\x8d\xeb\x8f\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintSpeed_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \"\xea\xb8\xb0\xeb\xb3\xb8 \xec\x86\x8d\xeb\x8f\x84\" \xeb\x8c\x80\xeb\xb9\x84 \xeb\xaa\x87 \xeb\xb0\xb0\xeb\xa1\x9c \xeb\xb9\xa0\xeb\xa5\xb4\xea\xb2\x8c \xeb\x8b\xac\xeb\xa6\xb4\xec\xa7\x80 \xea\xb2\xb0\xec\xa0\x95\n" },
#endif
		{ "ModuleRelativePath", "Public/NBC_Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\"\xea\xb8\xb0\xeb\xb3\xb8 \xec\x86\x8d\xeb\x8f\x84\" \xeb\x8c\x80\xeb\xb9\x84 \xeb\xaa\x87 \xeb\xb0\xb0\xeb\xa1\x9c \xeb\xb9\xa0\xeb\xa5\xb4\xea\xb2\x8c \xeb\x8b\xac\xeb\xa6\xb4\xec\xa7\x80 \xea\xb2\xb0\xec\xa0\x95" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb5\x9c\xeb\x8c\x80 \xec\xb2\xb4\xeb\xa0\xa5\n" },
#endif
		{ "ModuleRelativePath", "Public/NBC_Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb5\x9c\xeb\x8c\x80 \xec\xb2\xb4\xeb\xa0\xa5" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x98\x84\xec\x9e\xac \xec\xb2\xb4\xeb\xa0\xa5\n" },
#endif
		{ "ModuleRelativePath", "Public/NBC_Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x98\x84\xec\x9e\xac \xec\xb2\xb4\xeb\xa0\xa5" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverheadWidget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LerpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintSpeedMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANBC_Character_AddHealth, "AddHealth" }, // 1157720492
		{ &Z_Construct_UFunction_ANBC_Character_ApplyReverseControl, "ApplyReverseControl" }, // 303186191
		{ &Z_Construct_UFunction_ANBC_Character_ApplySlow, "ApplySlow" }, // 3363303245
		{ &Z_Construct_UFunction_ANBC_Character_GetDebuffText, "GetDebuffText" }, // 2351483139
		{ &Z_Construct_UFunction_ANBC_Character_GetHealth, "GetHealth" }, // 540739032
		{ &Z_Construct_UFunction_ANBC_Character_GetMaxtHealth, "GetMaxtHealth" }, // 1320746611
		{ &Z_Construct_UFunction_ANBC_Character_GetReverseRemainingTime, "GetReverseRemainingTime" }, // 217825052
		{ &Z_Construct_UFunction_ANBC_Character_GetSlowRemainingTime, "GetSlowRemainingTime" }, // 1922502937
		{ &Z_Construct_UFunction_ANBC_Character_Look, "Look" }, // 3209175963
		{ &Z_Construct_UFunction_ANBC_Character_Move, "Move" }, // 2664117361
		{ &Z_Construct_UFunction_ANBC_Character_ResetReverseControl, "ResetReverseControl" }, // 3215974862
		{ &Z_Construct_UFunction_ANBC_Character_ResetSpeed, "ResetSpeed" }, // 2853518955
		{ &Z_Construct_UFunction_ANBC_Character_StartJump, "StartJump" }, // 2060470345
		{ &Z_Construct_UFunction_ANBC_Character_StartSprint, "StartSprint" }, // 3955973404
		{ &Z_Construct_UFunction_ANBC_Character_StopJump, "StopJump" }, // 1101286584
		{ &Z_Construct_UFunction_ANBC_Character_StopSprint, "StopSprint" }, // 1369208772
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANBC_Character>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANBC_Character_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBC_Character, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmComp_MetaData), NewProp_SpringArmComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANBC_Character_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBC_Character, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComp_MetaData), NewProp_CameraComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANBC_Character_Statics::NewProp_OverheadWidget = { "OverheadWidget", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBC_Character, OverheadWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverheadWidget_MetaData), NewProp_OverheadWidget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANBC_Character_Statics::NewProp_LerpSpeed = { "LerpSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBC_Character, LerpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LerpSpeed_MetaData), NewProp_LerpSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANBC_Character_Statics::NewProp_NormalSpeed = { "NormalSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBC_Character, NormalSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalSpeed_MetaData), NewProp_NormalSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANBC_Character_Statics::NewProp_SprintSpeedMultiplier = { "SprintSpeedMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBC_Character, SprintSpeedMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintSpeedMultiplier_MetaData), NewProp_SprintSpeedMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANBC_Character_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBC_Character, SprintSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintSpeed_MetaData), NewProp_SprintSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANBC_Character_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBC_Character, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANBC_Character_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBC_Character, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANBC_Character_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC_Character_Statics::NewProp_SpringArmComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC_Character_Statics::NewProp_CameraComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC_Character_Statics::NewProp_OverheadWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC_Character_Statics::NewProp_LerpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC_Character_Statics::NewProp_NormalSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC_Character_Statics::NewProp_SprintSpeedMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC_Character_Statics::NewProp_SprintSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC_Character_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC_Character_Statics::NewProp_Health,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBC_Character_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANBC_Character_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_NBC_Project_8,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBC_Character_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANBC_Character_Statics::ClassParams = {
	&ANBC_Character::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANBC_Character_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANBC_Character_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANBC_Character_Statics::Class_MetaDataParams), Z_Construct_UClass_ANBC_Character_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANBC_Character()
{
	if (!Z_Registration_Info_UClass_ANBC_Character.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANBC_Character.OuterSingleton, Z_Construct_UClass_ANBC_Character_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANBC_Character.OuterSingleton;
}
template<> NBC_PROJECT_8_API UClass* StaticClass<ANBC_Character>()
{
	return ANBC_Character::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANBC_Character);
ANBC_Character::~ANBC_Character() {}
// End Class ANBC_Character

// Begin Registration
struct Z_CompiledInDeferFile_FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_Character_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANBC_Character, ANBC_Character::StaticClass, TEXT("ANBC_Character"), &Z_Registration_Info_UClass_ANBC_Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANBC_Character), 1275842568U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_Character_h_2797752539(TEXT("/Script/NBC_Project_8"),
	Z_CompiledInDeferFile_FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_Character_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
