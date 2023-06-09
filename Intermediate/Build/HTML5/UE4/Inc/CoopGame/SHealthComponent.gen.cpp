// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Component/SHealthComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSHealthComponent() {}
// Cross Module References
	COOPGAME_API UFunction* Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_USHealthComponent_NoRegister();
	COOPGAME_API UFunction* Z_Construct_UFunction_USHealthComponent_HandleTakeAnyDamage();
	COOPGAME_API UClass* Z_Construct_UClass_USHealthComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature()
	{
		struct _Script_CoopGame_eventOnHealthChangedSignature_Parms
		{
			USHealthComponent* HealthComp;
			float Health;
			float HealthDelta;
			const UDamageType* DamageType;
			AController* InstigatedBy;
			AActor* DamageCauser;
		};
		UObject* Outer = Z_Construct_UPackage__Script_CoopGame();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnHealthChangedSignature__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535, sizeof(_Script_CoopGame_eventOnHealthChangedSignature_Parms));
			UProperty* NewProp_DamageCauser = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DamageCauser"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(DamageCauser, _Script_CoopGame_eventOnHealthChangedSignature_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_InstigatedBy = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InstigatedBy"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(InstigatedBy, _Script_CoopGame_eventOnHealthChangedSignature_Parms), 0x0010000000000080, Z_Construct_UClass_AController_NoRegister());
			UProperty* NewProp_DamageType = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DamageType"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(DamageType, _Script_CoopGame_eventOnHealthChangedSignature_Parms), 0x0010000000000082, Z_Construct_UClass_UDamageType_NoRegister());
			UProperty* NewProp_HealthDelta = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HealthDelta"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(HealthDelta, _Script_CoopGame_eventOnHealthChangedSignature_Parms), 0x0010000000000080);
			UProperty* NewProp_Health = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Health"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Health, _Script_CoopGame_eventOnHealthChangedSignature_Parms), 0x0010000000000080);
			UProperty* NewProp_HealthComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HealthComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(HealthComp, _Script_CoopGame_eventOnHealthChangedSignature_Parms), 0x0010000000080080, Z_Construct_UClass_USHealthComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Component/SHealthComponent.h"));
			MetaData->SetValue(NewProp_DamageType, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_HealthComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	void USHealthComponent::StaticRegisterNativesUSHealthComponent()
	{
		UClass* Class = USHealthComponent::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "HandleTakeAnyDamage", (Native)&USHealthComponent::execHandleTakeAnyDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_USHealthComponent_HandleTakeAnyDamage()
	{
		struct SHealthComponent_eventHandleTakeAnyDamage_Parms
		{
			AActor* DamagedActor;
			float Damage;
			const UDamageType* DamageType;
			AController* InstigatedBy;
			AActor* DamageCauser;
		};
		UObject* Outer = Z_Construct_UClass_USHealthComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("HandleTakeAnyDamage"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00080401, 65535, sizeof(SHealthComponent_eventHandleTakeAnyDamage_Parms));
			UProperty* NewProp_DamageCauser = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DamageCauser"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(DamageCauser, SHealthComponent_eventHandleTakeAnyDamage_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_InstigatedBy = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InstigatedBy"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(InstigatedBy, SHealthComponent_eventHandleTakeAnyDamage_Parms), 0x0010000000000080, Z_Construct_UClass_AController_NoRegister());
			UProperty* NewProp_DamageType = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DamageType"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(DamageType, SHealthComponent_eventHandleTakeAnyDamage_Parms), 0x0010000000000082, Z_Construct_UClass_UDamageType_NoRegister());
			UProperty* NewProp_Damage = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Damage"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Damage, SHealthComponent_eventHandleTakeAnyDamage_Parms), 0x0010000000000080);
			UProperty* NewProp_DamagedActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DamagedActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(DamagedActor, SHealthComponent_eventHandleTakeAnyDamage_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Component/SHealthComponent.h"));
			MetaData->SetValue(NewProp_DamageType, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USHealthComponent_NoRegister()
	{
		return USHealthComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_USHealthComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_CoopGame();
			OuterClass = USHealthComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;

				OuterClass->LinkChild(Z_Construct_UFunction_USHealthComponent_HandleTakeAnyDamage());

				UProperty* NewProp_OnHealthChanged = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnHealthChanged"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnHealthChanged, USHealthComponent), 0x0010000010080000, Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature());
				UProperty* NewProp_DefaultHealth = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DefaultHealth"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(DefaultHealth, USHealthComponent), 0x0020080000010015);
				UProperty* NewProp_Health = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Health"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Health, USHealthComponent), 0x0020080000000034);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USHealthComponent_HandleTakeAnyDamage(), "HandleTakeAnyDamage"); // 148961495
				static TCppClassTypeInfo<TCppClassTypeTraits<USHealthComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("COOP"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Component/SHealthComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Component/SHealthComponent.h"));
				MetaData->SetValue(NewProp_OnHealthChanged, TEXT("Category"), TEXT("Events"));
				MetaData->SetValue(NewProp_OnHealthChanged, TEXT("ModuleRelativePath"), TEXT("Public/Component/SHealthComponent.h"));
				MetaData->SetValue(NewProp_DefaultHealth, TEXT("Category"), TEXT("HealthComponent"));
				MetaData->SetValue(NewProp_DefaultHealth, TEXT("ModuleRelativePath"), TEXT("Public/Component/SHealthComponent.h"));
				MetaData->SetValue(NewProp_Health, TEXT("Category"), TEXT("HealthComponent"));
				MetaData->SetValue(NewProp_Health, TEXT("ModuleRelativePath"), TEXT("Public/Component/SHealthComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USHealthComponent, 1138167836);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USHealthComponent(Z_Construct_UClass_USHealthComponent, &USHealthComponent::StaticClass, TEXT("/Script/CoopGame"), TEXT("USHealthComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USHealthComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
