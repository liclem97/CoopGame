// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SBarrel.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBarrel() {}
// Cross Module References
	COOPGAME_API UFunction* Z_Construct_UFunction_ASBarrel_OnHealthChanged();
	COOPGAME_API UClass* Z_Construct_UClass_ASBarrel();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_USHealthComponent_NoRegister();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASBarrel_OnReq_Exploded();
	COOPGAME_API UClass* Z_Construct_UClass_ASBarrel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URadialForceComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ASBarrel::StaticRegisterNativesASBarrel()
	{
		UClass* Class = ASBarrel::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "OnHealthChanged", (Native)&ASBarrel::execOnHealthChanged },
			{ "OnReq_Exploded", (Native)&ASBarrel::execOnReq_Exploded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_ASBarrel_OnHealthChanged()
	{
		struct SBarrel_eventOnHealthChanged_Parms
		{
			USHealthComponent* OwningHealthComp;
			float Health;
			float HealthDelta;
			const UDamageType* DamageType;
			AController* InstigatedBy;
			AActor* DamageCauser;
		};
		UObject* Outer = Z_Construct_UClass_ASBarrel();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnHealthChanged"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00080401, 65535, sizeof(SBarrel_eventOnHealthChanged_Parms));
			UProperty* NewProp_DamageCauser = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DamageCauser"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(DamageCauser, SBarrel_eventOnHealthChanged_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_InstigatedBy = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InstigatedBy"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(InstigatedBy, SBarrel_eventOnHealthChanged_Parms), 0x0010000000000080, Z_Construct_UClass_AController_NoRegister());
			UProperty* NewProp_DamageType = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DamageType"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(DamageType, SBarrel_eventOnHealthChanged_Parms), 0x0010000000000082, Z_Construct_UClass_UDamageType_NoRegister());
			UProperty* NewProp_HealthDelta = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HealthDelta"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(HealthDelta, SBarrel_eventOnHealthChanged_Parms), 0x0010000000000080);
			UProperty* NewProp_Health = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Health"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Health, SBarrel_eventOnHealthChanged_Parms), 0x0010000000000080);
			UProperty* NewProp_OwningHealthComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OwningHealthComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OwningHealthComp, SBarrel_eventOnHealthChanged_Parms), 0x0010000000080080, Z_Construct_UClass_USHealthComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SBarrel.h"));
			MetaData->SetValue(NewProp_DamageType, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_OwningHealthComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASBarrel_OnReq_Exploded()
	{
		UObject* Outer = Z_Construct_UClass_ASBarrel();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnReq_Exploded"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00080401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SBarrel.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBarrel_NoRegister()
	{
		return ASBarrel::StaticClass();
	}
	UClass* Z_Construct_UClass_ASBarrel()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_CoopGame();
			OuterClass = ASBarrel::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_ASBarrel_OnHealthChanged());
				OuterClass->LinkChild(Z_Construct_UFunction_ASBarrel_OnReq_Exploded());

				UProperty* NewProp_ExplodedMaterial = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ExplodedMaterial"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ExplodedMaterial, ASBarrel), 0x0020080000010001, Z_Construct_UClass_UMaterialInterface_NoRegister());
				UProperty* NewProp_ExplosionEffect = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ExplosionEffect"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ExplosionEffect, ASBarrel), 0x0020080000010001, Z_Construct_UClass_UParticleSystem_NoRegister());
				UProperty* NewProp_ExplosionImpulse = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ExplosionImpulse"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ExplosionImpulse, ASBarrel), 0x0020080000010001);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bExploded, ASBarrel);
				UProperty* NewProp_bExploded = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bExploded"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bExploded, ASBarrel), 0x0020080100000020, CPP_BOOL_PROPERTY_BITMASK(bExploded, ASBarrel), sizeof(bool), true);
				NewProp_bExploded->RepNotifyFunc = FName(TEXT("OnReq_Exploded"));
				UProperty* NewProp_RadialForceComp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RadialForceComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(RadialForceComp, ASBarrel), 0x00200800000a0009, Z_Construct_UClass_URadialForceComponent_NoRegister());
				UProperty* NewProp_MeshComp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MeshComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MeshComp, ASBarrel), 0x00200800000a0009, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_HealthComp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HealthComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(HealthComp, ASBarrel), 0x00200800000a0009, Z_Construct_UClass_USHealthComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASBarrel_OnHealthChanged(), "OnHealthChanged"); // 3878579024
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASBarrel_OnReq_Exploded(), "OnReq_Exploded"); // 2648204970
				static TCppClassTypeInfo<TCppClassTypeTraits<ASBarrel> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SBarrel.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SBarrel.h"));
				MetaData->SetValue(NewProp_ExplodedMaterial, TEXT("Category"), TEXT("FX"));
				MetaData->SetValue(NewProp_ExplodedMaterial, TEXT("ModuleRelativePath"), TEXT("Public/SBarrel.h"));
				MetaData->SetValue(NewProp_ExplosionEffect, TEXT("Category"), TEXT("FX"));
				MetaData->SetValue(NewProp_ExplosionEffect, TEXT("ModuleRelativePath"), TEXT("Public/SBarrel.h"));
				MetaData->SetValue(NewProp_ExplosionImpulse, TEXT("Category"), TEXT("FX"));
				MetaData->SetValue(NewProp_ExplosionImpulse, TEXT("ModuleRelativePath"), TEXT("Public/SBarrel.h"));
				MetaData->SetValue(NewProp_bExploded, TEXT("ModuleRelativePath"), TEXT("Public/SBarrel.h"));
				MetaData->SetValue(NewProp_RadialForceComp, TEXT("Category"), TEXT("Components"));
				MetaData->SetValue(NewProp_RadialForceComp, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_RadialForceComp, TEXT("ModuleRelativePath"), TEXT("Public/SBarrel.h"));
				MetaData->SetValue(NewProp_MeshComp, TEXT("Category"), TEXT("Components"));
				MetaData->SetValue(NewProp_MeshComp, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_MeshComp, TEXT("ModuleRelativePath"), TEXT("Public/SBarrel.h"));
				MetaData->SetValue(NewProp_HealthComp, TEXT("Category"), TEXT("Components"));
				MetaData->SetValue(NewProp_HealthComp, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_HealthComp, TEXT("ModuleRelativePath"), TEXT("Public/SBarrel.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBarrel, 638352554);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBarrel(Z_Construct_UClass_ASBarrel, &ASBarrel::StaticClass, TEXT("/Script/CoopGame"), TEXT("ASBarrel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBarrel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
