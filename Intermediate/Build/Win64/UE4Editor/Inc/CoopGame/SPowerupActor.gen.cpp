// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SPowerupActor.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPowerupActor() {}
// Cross Module References
	COOPGAME_API UFunction* Z_Construct_UFunction_ASPowerupActor_OnActivated();
	COOPGAME_API UClass* Z_Construct_UClass_ASPowerupActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASPowerupActor_OnExpired();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASPowerupActor_OnPowerupStateChanged();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASPowerupActor_OnPowerupTicked();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASPowerupActor_OnRep_PowerupActive();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASPowerupActor_OnTickPowerup();
	COOPGAME_API UClass* Z_Construct_UClass_ASPowerupActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
// End Cross Module References
	static FName NAME_ASPowerupActor_OnActivated = FName(TEXT("OnActivated"));
	void ASPowerupActor::OnActivated(AActor* ActiveFor)
	{
		SPowerupActor_eventOnActivated_Parms Parms;
		Parms.ActiveFor=ActiveFor;
		ProcessEvent(FindFunctionChecked(NAME_ASPowerupActor_OnActivated),&Parms);
	}
	static FName NAME_ASPowerupActor_OnExpired = FName(TEXT("OnExpired"));
	void ASPowerupActor::OnExpired()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASPowerupActor_OnExpired),NULL);
	}
	static FName NAME_ASPowerupActor_OnPowerupStateChanged = FName(TEXT("OnPowerupStateChanged"));
	void ASPowerupActor::OnPowerupStateChanged(bool bNewIsAcvie)
	{
		SPowerupActor_eventOnPowerupStateChanged_Parms Parms;
		Parms.bNewIsAcvie=bNewIsAcvie ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASPowerupActor_OnPowerupStateChanged),&Parms);
	}
	static FName NAME_ASPowerupActor_OnPowerupTicked = FName(TEXT("OnPowerupTicked"));
	void ASPowerupActor::OnPowerupTicked()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASPowerupActor_OnPowerupTicked),NULL);
	}
	void ASPowerupActor::StaticRegisterNativesASPowerupActor()
	{
		UClass* Class = ASPowerupActor::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "OnRep_PowerupActive", (Native)&ASPowerupActor::execOnRep_PowerupActive },
			{ "OnTickPowerup", (Native)&ASPowerupActor::execOnTickPowerup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_ASPowerupActor_OnActivated()
	{
		UObject* Outer = Z_Construct_UClass_ASPowerupActor();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnActivated"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x08020800, 65535, sizeof(SPowerupActor_eventOnActivated_Parms));
			UProperty* NewProp_ActiveFor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ActiveFor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ActiveFor, SPowerupActor_eventOnActivated_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Powerups"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SPowerupActor.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASPowerupActor_OnExpired()
	{
		UObject* Outer = Z_Construct_UClass_ASPowerupActor();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnExpired"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x08020800, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Powerups"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SPowerupActor.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASPowerupActor_OnPowerupStateChanged()
	{
		UObject* Outer = Z_Construct_UClass_ASPowerupActor();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnPowerupStateChanged"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x08080800, 65535, sizeof(SPowerupActor_eventOnPowerupStateChanged_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bNewIsAcvie, SPowerupActor_eventOnPowerupStateChanged_Parms);
			UProperty* NewProp_bNewIsAcvie = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bNewIsAcvie"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bNewIsAcvie, SPowerupActor_eventOnPowerupStateChanged_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bNewIsAcvie, SPowerupActor_eventOnPowerupStateChanged_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Powerups"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SPowerupActor.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASPowerupActor_OnPowerupTicked()
	{
		UObject* Outer = Z_Construct_UClass_ASPowerupActor();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnPowerupTicked"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x08020800, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Powerups"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SPowerupActor.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASPowerupActor_OnRep_PowerupActive()
	{
		UObject* Outer = Z_Construct_UClass_ASPowerupActor();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnRep_PowerupActive"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00080401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SPowerupActor.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASPowerupActor_OnTickPowerup()
	{
		UObject* Outer = Z_Construct_UClass_ASPowerupActor();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnTickPowerup"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00080401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SPowerupActor.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASPowerupActor_NoRegister()
	{
		return ASPowerupActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ASPowerupActor()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_CoopGame();
			OuterClass = ASPowerupActor::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_ASPowerupActor_OnActivated());
				OuterClass->LinkChild(Z_Construct_UFunction_ASPowerupActor_OnExpired());
				OuterClass->LinkChild(Z_Construct_UFunction_ASPowerupActor_OnPowerupStateChanged());
				OuterClass->LinkChild(Z_Construct_UFunction_ASPowerupActor_OnPowerupTicked());
				OuterClass->LinkChild(Z_Construct_UFunction_ASPowerupActor_OnRep_PowerupActive());
				OuterClass->LinkChild(Z_Construct_UFunction_ASPowerupActor_OnTickPowerup());

				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsPowerupActive, ASPowerupActor);
				UProperty* NewProp_bIsPowerupActive = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bIsPowerupActive"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsPowerupActive, ASPowerupActor), 0x0020080100000020, CPP_BOOL_PROPERTY_BITMASK(bIsPowerupActive, ASPowerupActor), sizeof(bool), true);
				NewProp_bIsPowerupActive->RepNotifyFunc = FName(TEXT("OnRep_PowerupActive"));
				UProperty* NewProp_TotalNrOfTicks = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TotalNrOfTicks"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(TotalNrOfTicks, ASPowerupActor), 0x0020080000010001);
				UProperty* NewProp_PowerupInterval = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PowerupInterval"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(PowerupInterval, ASPowerupActor), 0x0020080000010001);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASPowerupActor_OnActivated(), "OnActivated"); // 2031013020
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASPowerupActor_OnExpired(), "OnExpired"); // 592047245
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASPowerupActor_OnPowerupStateChanged(), "OnPowerupStateChanged"); // 41625024
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASPowerupActor_OnPowerupTicked(), "OnPowerupTicked"); // 2224896732
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASPowerupActor_OnRep_PowerupActive(), "OnRep_PowerupActive"); // 202665794
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASPowerupActor_OnTickPowerup(), "OnTickPowerup"); // 298684407
				static TCppClassTypeInfo<TCppClassTypeTraits<ASPowerupActor> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SPowerupActor.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SPowerupActor.h"));
				MetaData->SetValue(NewProp_bIsPowerupActive, TEXT("ModuleRelativePath"), TEXT("Public/SPowerupActor.h"));
				MetaData->SetValue(NewProp_bIsPowerupActive, TEXT("ToolTip"), TEXT("Keeps state of the power-up"));
				MetaData->SetValue(NewProp_TotalNrOfTicks, TEXT("Category"), TEXT("Powerups"));
				MetaData->SetValue(NewProp_TotalNrOfTicks, TEXT("ModuleRelativePath"), TEXT("Public/SPowerupActor.h"));
				MetaData->SetValue(NewProp_TotalNrOfTicks, TEXT("ToolTip"), TEXT("Total times we apply the power effect"));
				MetaData->SetValue(NewProp_PowerupInterval, TEXT("Category"), TEXT("Powerups"));
				MetaData->SetValue(NewProp_PowerupInterval, TEXT("ModuleRelativePath"), TEXT("Public/SPowerupActor.h"));
				MetaData->SetValue(NewProp_PowerupInterval, TEXT("ToolTip"), TEXT("Time between powerup ticks"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASPowerupActor, 2722767955);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASPowerupActor(Z_Construct_UClass_ASPowerupActor, &ASPowerupActor::StaticClass, TEXT("/Script/CoopGame"), TEXT("ASPowerupActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASPowerupActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
