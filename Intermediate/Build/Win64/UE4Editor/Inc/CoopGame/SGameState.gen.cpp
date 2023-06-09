// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SGameState.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSGameState() {}
// Cross Module References
	COOPGAME_API UEnum* Z_Construct_UEnum_CoopGame_EWaveState();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASGameState_OnRep_WaveState();
	COOPGAME_API UClass* Z_Construct_UClass_ASGameState();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASGameState_WaveStateChanged();
	COOPGAME_API UClass* Z_Construct_UClass_ASGameState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
// End Cross Module References
static UEnum* EWaveState_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_CoopGame_EWaveState, Z_Construct_UPackage__Script_CoopGame(), TEXT("EWaveState"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWaveState(EWaveState_StaticEnum, TEXT("/Script/CoopGame"), TEXT("EWaveState"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_CoopGame_EWaveState()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_CoopGame();
		extern uint32 Get_Z_Construct_UEnum_CoopGame_EWaveState_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWaveState"), 0, Get_Z_Construct_UEnum_CoopGame_EWaveState_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EWaveState"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EWaveState::WaitingToStart"), 0);
			EnumNames.Emplace(TEXT("EWaveState::PreparingNextWave"), 1);
			EnumNames.Emplace(TEXT("EWaveState::WaitingInProgress"), 2);
			EnumNames.Emplace(TEXT("EWaveState::WaitingToComplete"), 3);
			EnumNames.Emplace(TEXT("EWaveState::GameOver"), 4);
			EnumNames.Emplace(TEXT("EWaveState::EWaveState_MAX"), 5);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EWaveState");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/SGameState.h"));
			MetaData->SetValue(ReturnEnum, TEXT("WaitingToComplete.ToolTip"), TEXT("No longer spawning new bots, waiting for players to kill remaining bots"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_CoopGame_EWaveState_CRC() { return 3169534231U; }
	static FName NAME_ASGameState_WaveStateChanged = FName(TEXT("WaveStateChanged"));
	void ASGameState::WaveStateChanged(EWaveState NewState, EWaveState OldState)
	{
		SGameState_eventWaveStateChanged_Parms Parms;
		Parms.NewState=NewState;
		Parms.OldState=OldState;
		ProcessEvent(FindFunctionChecked(NAME_ASGameState_WaveStateChanged),&Parms);
	}
	void ASGameState::StaticRegisterNativesASGameState()
	{
		UClass* Class = ASGameState::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "OnRep_WaveState", (Native)&ASGameState::execOnRep_WaveState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_ASGameState_OnRep_WaveState()
	{
		struct SGameState_eventOnRep_WaveState_Parms
		{
			EWaveState OldState;
		};
		UObject* Outer = Z_Construct_UClass_ASGameState();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnRep_WaveState"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00080401, 65535, sizeof(SGameState_eventOnRep_WaveState_Parms));
			UProperty* NewProp_OldState = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OldState"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(OldState, SGameState_eventOnRep_WaveState_Parms), 0x0010000000000080, Z_Construct_UEnum_CoopGame_EWaveState());
			UProperty* NewProp_OldState_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_OldState, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SGameState.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASGameState_WaveStateChanged()
	{
		UObject* Outer = Z_Construct_UClass_ASGameState();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("WaveStateChanged"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x08080800, 65535, sizeof(SGameState_eventWaveStateChanged_Parms));
			UProperty* NewProp_OldState = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OldState"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(OldState, SGameState_eventWaveStateChanged_Parms), 0x0010000000000080, Z_Construct_UEnum_CoopGame_EWaveState());
			UProperty* NewProp_OldState_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_OldState, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_NewState = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewState"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(NewState, SGameState_eventWaveStateChanged_Parms), 0x0010000000000080, Z_Construct_UEnum_CoopGame_EWaveState());
			UProperty* NewProp_NewState_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_NewState, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("GameState"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SGameState.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASGameState_NoRegister()
	{
		return ASGameState::StaticClass();
	}
	UClass* Z_Construct_UClass_ASGameState()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameStateBase();
			Z_Construct_UPackage__Script_CoopGame();
			OuterClass = ASGameState::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900280u;

				OuterClass->LinkChild(Z_Construct_UFunction_ASGameState_OnRep_WaveState());
				OuterClass->LinkChild(Z_Construct_UFunction_ASGameState_WaveStateChanged());

				UProperty* NewProp_WaveState = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WaveState"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(WaveState, ASGameState), 0x0020080100000034, Z_Construct_UEnum_CoopGame_EWaveState());
				NewProp_WaveState->RepNotifyFunc = FName(TEXT("OnRep_WaveState"));
				UProperty* NewProp_WaveState_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_WaveState, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASGameState_OnRep_WaveState(), "OnRep_WaveState"); // 312170946
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASGameState_WaveStateChanged(), "WaveStateChanged"); // 4263747189
				static TCppClassTypeInfo<TCppClassTypeTraits<ASGameState> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SGameState.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SGameState.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
				MetaData->SetValue(NewProp_WaveState, TEXT("Category"), TEXT("GameState"));
				MetaData->SetValue(NewProp_WaveState, TEXT("ModuleRelativePath"), TEXT("Public/SGameState.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASGameState, 1491545815);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASGameState(Z_Construct_UClass_ASGameState, &ASGameState::StaticClass, TEXT("/Script/CoopGame"), TEXT("ASGameState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
