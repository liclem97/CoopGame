// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SCharacter.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSCharacter() {}
// Cross Module References
	COOPGAME_API UFunction* Z_Construct_UFunction_ASCharacter_OnHealthChanged();
	COOPGAME_API UClass* Z_Construct_UClass_ASCharacter();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_USHealthComponent_NoRegister();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASCharacter_StartFire();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASCharacter_StopFire();
	COOPGAME_API UClass* Z_Construct_UClass_ASCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
	COOPGAME_API UClass* Z_Construct_UClass_ASWeapon_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void ASCharacter::StaticRegisterNativesASCharacter()
	{
		UClass* Class = ASCharacter::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "OnHealthChanged", (Native)&ASCharacter::execOnHealthChanged },
			{ "StartFire", (Native)&ASCharacter::execStartFire },
			{ "StopFire", (Native)&ASCharacter::execStopFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_ASCharacter_OnHealthChanged()
	{
		struct SCharacter_eventOnHealthChanged_Parms
		{
			USHealthComponent* OwningHealthComp;
			float Health;
			float HealthDelta;
			const UDamageType* DamageType;
			AController* InstigatedBy;
			AActor* DamageCauser;
		};
		UObject* Outer = Z_Construct_UClass_ASCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnHealthChanged"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00080401, 65535, sizeof(SCharacter_eventOnHealthChanged_Parms));
			UProperty* NewProp_DamageCauser = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DamageCauser"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(DamageCauser, SCharacter_eventOnHealthChanged_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_InstigatedBy = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InstigatedBy"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(InstigatedBy, SCharacter_eventOnHealthChanged_Parms), 0x0010000000000080, Z_Construct_UClass_AController_NoRegister());
			UProperty* NewProp_DamageType = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DamageType"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(DamageType, SCharacter_eventOnHealthChanged_Parms), 0x0010000000000082, Z_Construct_UClass_UDamageType_NoRegister());
			UProperty* NewProp_HealthDelta = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HealthDelta"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(HealthDelta, SCharacter_eventOnHealthChanged_Parms), 0x0010000000000080);
			UProperty* NewProp_Health = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Health"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Health, SCharacter_eventOnHealthChanged_Parms), 0x0010000000000080);
			UProperty* NewProp_OwningHealthComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OwningHealthComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OwningHealthComp, SCharacter_eventOnHealthChanged_Parms), 0x0010000000080080, Z_Construct_UClass_USHealthComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SCharacter.h"));
			MetaData->SetValue(NewProp_DamageType, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_OwningHealthComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASCharacter_StartFire()
	{
		UObject* Outer = Z_Construct_UClass_ASCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StartFire"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Player"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASCharacter_StopFire()
	{
		UObject* Outer = Z_Construct_UClass_ASCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StopFire"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Player"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASCharacter_NoRegister()
	{
		return ASCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_ASCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_CoopGame();
			OuterClass = ASCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_ASCharacter_OnHealthChanged());
				OuterClass->LinkChild(Z_Construct_UFunction_ASCharacter_StartFire());
				OuterClass->LinkChild(Z_Construct_UFunction_ASCharacter_StopFire());

				UProperty* NewProp_WeaponAttachSocketName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WeaponAttachSocketName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(WeaponAttachSocketName, ASCharacter), 0x0020080000020801);
				UProperty* NewProp_StarterWeaponClass = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("StarterWeaponClass"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(StarterWeaponClass, ASCharacter), 0x0024080000010001, Z_Construct_UClass_ASWeapon_NoRegister(), Z_Construct_UClass_UClass());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bDied, ASCharacter);
				UProperty* NewProp_bDied = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bDied"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bDied, ASCharacter), 0x0020080000000034, CPP_BOOL_PROPERTY_BITMASK(bDied, ASCharacter), sizeof(bool), true);
				UProperty* NewProp_CurrentWeapon = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentWeapon"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CurrentWeapon, ASCharacter), 0x0020080000000020, Z_Construct_UClass_ASWeapon_NoRegister());
				UProperty* NewProp_ZoomInterpSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ZoomInterpSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ZoomInterpSpeed, ASCharacter), 0x0020080000010001);
				UProperty* NewProp_ZoomedFOV = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ZoomedFOV"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ZoomedFOV, ASCharacter), 0x0020080000010001);
				UProperty* NewProp_HealthComp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HealthComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(HealthComp, ASCharacter), 0x00200800000a001d, Z_Construct_UClass_USHealthComponent_NoRegister());
				UProperty* NewProp_SpringArmComp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SpringArmComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SpringArmComp, ASCharacter), 0x00200800000a001d, Z_Construct_UClass_USpringArmComponent_NoRegister());
				UProperty* NewProp_CameraComp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CameraComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CameraComp, ASCharacter), 0x00200800000a001d, Z_Construct_UClass_UCameraComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASCharacter_OnHealthChanged(), "OnHealthChanged"); // 3247702481
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASCharacter_StartFire(), "StartFire"); // 2274916401
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASCharacter_StopFire(), "StopFire"); // 90868899
				static TCppClassTypeInfo<TCppClassTypeTraits<ASCharacter> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SCharacter.h"));
				MetaData->SetValue(NewProp_WeaponAttachSocketName, TEXT("Category"), TEXT("Player"));
				MetaData->SetValue(NewProp_WeaponAttachSocketName, TEXT("ModuleRelativePath"), TEXT("Public/SCharacter.h"));
				MetaData->SetValue(NewProp_StarterWeaponClass, TEXT("Category"), TEXT("Player"));
				MetaData->SetValue(NewProp_StarterWeaponClass, TEXT("ModuleRelativePath"), TEXT("Public/SCharacter.h"));
				MetaData->SetValue(NewProp_bDied, TEXT("Category"), TEXT("Player"));
				MetaData->SetValue(NewProp_bDied, TEXT("ModuleRelativePath"), TEXT("Public/SCharacter.h"));
				MetaData->SetValue(NewProp_CurrentWeapon, TEXT("ModuleRelativePath"), TEXT("Public/SCharacter.h"));
				MetaData->SetValue(NewProp_ZoomInterpSpeed, TEXT("Category"), TEXT("Player"));
				MetaData->SetValue(NewProp_ZoomInterpSpeed, TEXT("ClampMax"), TEXT("100"));
				MetaData->SetValue(NewProp_ZoomInterpSpeed, TEXT("ClampMin"), TEXT("0.100000"));
				MetaData->SetValue(NewProp_ZoomInterpSpeed, TEXT("ModuleRelativePath"), TEXT("Public/SCharacter.h"));
				MetaData->SetValue(NewProp_ZoomedFOV, TEXT("Category"), TEXT("Player"));
				MetaData->SetValue(NewProp_ZoomedFOV, TEXT("ModuleRelativePath"), TEXT("Public/SCharacter.h"));
				MetaData->SetValue(NewProp_HealthComp, TEXT("Category"), TEXT("Components"));
				MetaData->SetValue(NewProp_HealthComp, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_HealthComp, TEXT("ModuleRelativePath"), TEXT("Public/SCharacter.h"));
				MetaData->SetValue(NewProp_SpringArmComp, TEXT("Category"), TEXT("Components"));
				MetaData->SetValue(NewProp_SpringArmComp, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_SpringArmComp, TEXT("ModuleRelativePath"), TEXT("Public/SCharacter.h"));
				MetaData->SetValue(NewProp_CameraComp, TEXT("Category"), TEXT("Components"));
				MetaData->SetValue(NewProp_CameraComp, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraComp, TEXT("ModuleRelativePath"), TEXT("Public/SCharacter.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASCharacter, 1650754889);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASCharacter(Z_Construct_UClass_ASCharacter, &ASCharacter::StaticClass, TEXT("/Script/CoopGame"), TEXT("ASCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
