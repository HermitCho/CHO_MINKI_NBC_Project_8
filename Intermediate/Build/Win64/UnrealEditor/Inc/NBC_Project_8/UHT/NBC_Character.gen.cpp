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
UPackage* Z_Construct_UPackage__Script_NBC_Project_8();
// End Cross Module References

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
		{ "Comment", "// IA_Move\xef\xbf\xbd\xef\xbf\xbd IA_Jump \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n// Enhanced Input\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd7\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd FInputActionValue\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xde\xb5\xcb\xb4\xcf\xb4\xef\xbf\xbd.\n" },
#endif
		{ "ModuleRelativePath", "Public/NBC_Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IA_Move\xef\xbf\xbd\xef\xbf\xbd IA_Jump \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\nEnhanced Input\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd7\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd FInputActionValue\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xde\xb5\xcb\xb4\xcf\xb4\xef\xbf\xbd." },
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
		{ "Look", &ANBC_Character::execLook },
		{ "Move", &ANBC_Character::execMove },
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
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NBC_Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xc4\xab\xef\xbf\xbd\xde\xb6\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NBC_Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc4\xab\xef\xbf\xbd\xde\xb6\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalSpeed_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd \xef\xbf\xbd\xd3\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xbc\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/NBC_Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xcc\xb5\xef\xbf\xbd \xef\xbf\xbd\xd3\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xbc\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintSpeedMultiplier_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xe2\xba\xbb \xef\xbf\xbd\xc8\xb1\xef\xbf\xbd \xef\xbf\xbd\xd3\xb5\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/NBC_Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xe2\xba\xbb \xef\xbf\xbd\xc8\xb1\xef\xbf\xbd \xef\xbf\xbd\xd3\xb5\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintSpeed_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \"\xef\xbf\xbd\xe2\xba\xbb \xef\xbf\xbd\xd3\xb5\xef\xbf\xbd\" \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xde\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/NBC_Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\"\xef\xbf\xbd\xe2\xba\xbb \xef\xbf\xbd\xd3\xb5\xef\xbf\xbd\" \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xde\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintSpeedMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANBC_Character_Look, "Look" }, // 3209175963
		{ &Z_Construct_UFunction_ANBC_Character_Move, "Move" }, // 3651604817
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANBC_Character_Statics::NewProp_NormalSpeed = { "NormalSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBC_Character, NormalSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalSpeed_MetaData), NewProp_NormalSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANBC_Character_Statics::NewProp_SprintSpeedMultiplier = { "SprintSpeedMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBC_Character, SprintSpeedMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintSpeedMultiplier_MetaData), NewProp_SprintSpeedMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANBC_Character_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBC_Character, SprintSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintSpeed_MetaData), NewProp_SprintSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANBC_Character_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC_Character_Statics::NewProp_SpringArmComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC_Character_Statics::NewProp_CameraComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC_Character_Statics::NewProp_NormalSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC_Character_Statics::NewProp_SprintSpeedMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC_Character_Statics::NewProp_SprintSpeed,
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
		{ Z_Construct_UClass_ANBC_Character, ANBC_Character::StaticClass, TEXT("ANBC_Character"), &Z_Registration_Info_UClass_ANBC_Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANBC_Character), 2109035106U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_Character_h_1552565139(TEXT("/Script/NBC_Project_8"),
	Z_CompiledInDeferFile_FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NBC_Project_8_Source_NBC_Project_8_Public_NBC_Character_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
