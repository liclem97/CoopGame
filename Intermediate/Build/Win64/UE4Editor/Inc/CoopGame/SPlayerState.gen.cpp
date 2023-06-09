// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SPlayerState.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPlayerState() {}
// Cross Module References
	COOPGAME_API UFunction* Z_Construct_UFunction_ASPlayerState_AddScore();
	COOPGAME_API UClass* Z_Construct_UClass_ASPlayerState();
	COOPGAME_API UClass* Z_Construct_UClass_ASPlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
// End Cross Module References
	void ASPlayerState::StaticRegisterNativesASPlayerState()
	{
		UClass* Class = ASPlayerState::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "AddScore", (Native)&ASPlayerState::execAddScore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_ASPlayerState_AddScore()
	{
		struct SPlayerState_eventAddScore_Parms
		{
			float ScoreDelta;
		};
		UObject* Outer = Z_Construct_UClass_ASPlayerState();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AddScore"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(SPlayerState_eventAddScore_Parms));
			UProperty* NewProp_ScoreDelta = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ScoreDelta"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ScoreDelta, SPlayerState_eventAddScore_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("PlayerState"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SPlayerState.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASPlayerState_NoRegister()
	{
		return ASPlayerState::StaticClass();
	}
	UClass* Z_Construct_UClass_ASPlayerState()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APlayerState();
			Z_Construct_UPackage__Script_CoopGame();
			OuterClass = ASPlayerState::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900280u;

				OuterClass->LinkChild(Z_Construct_UFunction_ASPlayerState_AddScore());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASPlayerState_AddScore(), "AddScore"); // 2918341673
				static TCppClassTypeInfo<TCppClassTypeTraits<ASPlayerState> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SPlayerState.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SPlayerState.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASPlayerState, 884524163);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASPlayerState(Z_Construct_UClass_ASPlayerState, &ASPlayerState::StaticClass, TEXT("/Script/CoopGame"), TEXT("ASPlayerState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASPlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
