// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AI/STrackerBot.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTrackerBot() {}
// Cross Module References
	COOPGAME_API UFunction* Z_Construct_UFunction_ASTrackerBot_HandleTakeDamage();
	COOPGAME_API UClass* Z_Construct_UClass_ASTrackerBot();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_USHealthComponent_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_ASTrackerBot_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ASTrackerBot::StaticRegisterNativesASTrackerBot()
	{
		UClass* Class = ASTrackerBot::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "HandleTakeDamage", (Native)&ASTrackerBot::execHandleTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_ASTrackerBot_HandleTakeDamage()
	{
		struct STrackerBot_eventHandleTakeDamage_Parms
		{
			USHealthComponent* OwnigHealthComp;
			float Health;
			float HealthDelta;
			const UDamageType* DamageType;
			AController* InstigatedBy;
			AActor* DamageCauser;
		};
		UObject* Outer = Z_Construct_UClass_ASTrackerBot();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("HandleTakeDamage"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00080401, 65535, sizeof(STrackerBot_eventHandleTakeDamage_Parms));
			UProperty* NewProp_DamageCauser = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DamageCauser"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(DamageCauser, STrackerBot_eventHandleTakeDamage_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_InstigatedBy = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InstigatedBy"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(InstigatedBy, STrackerBot_eventHandleTakeDamage_Parms), 0x0010000000000080, Z_Construct_UClass_AController_NoRegister());
			UProperty* NewProp_DamageType = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DamageType"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(DamageType, STrackerBot_eventHandleTakeDamage_Parms), 0x0010000000000082, Z_Construct_UClass_UDamageType_NoRegister());
			UProperty* NewProp_HealthDelta = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HealthDelta"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(HealthDelta, STrackerBot_eventHandleTakeDamage_Parms), 0x0010000000000080);
			UProperty* NewProp_Health = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Health"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Health, STrackerBot_eventHandleTakeDamage_Parms), 0x0010000000000080);
			UProperty* NewProp_OwnigHealthComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OwnigHealthComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OwnigHealthComp, STrackerBot_eventHandleTakeDamage_Parms), 0x0010000000080080, Z_Construct_UClass_USHealthComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/AI/STrackerBot.h"));
			MetaData->SetValue(NewProp_DamageType, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_OwnigHealthComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASTrackerBot_NoRegister()
	{
		return ASTrackerBot::StaticClass();
	}
	UClass* Z_Construct_UClass_ASTrackerBot()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APawn();
			Z_Construct_UPackage__Script_CoopGame();
			OuterClass = ASTrackerBot::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_ASTrackerBot_HandleTakeDamage());

				UProperty* NewProp_ExplodeSound = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ExplodeSound"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ExplodeSound, ASTrackerBot), 0x0020080000010001, Z_Construct_UClass_USoundCue_NoRegister());
				UProperty* NewProp_SelfDestructSound = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SelfDestructSound"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SelfDestructSound, ASTrackerBot), 0x0020080000010001, Z_Construct_UClass_USoundCue_NoRegister());
				UProperty* NewProp_SelfDamageInterval = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SelfDamageInterval"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SelfDamageInterval, ASTrackerBot), 0x0020080000010001);
				UProperty* NewProp_ExplosionDamage = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ExplosionDamage"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ExplosionDamage, ASTrackerBot), 0x0020080000010001);
				UProperty* NewProp_ExplosionRadius = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ExplosionRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ExplosionRadius, ASTrackerBot), 0x0020080000010001);
				UProperty* NewProp_ExplosionEffect = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ExplosionEffect"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ExplosionEffect, ASTrackerBot), 0x0020080000010001, Z_Construct_UClass_UParticleSystem_NoRegister());
				UProperty* NewProp_RequiredDistanceToTarget = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RequiredDistanceToTarget"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(RequiredDistanceToTarget, ASTrackerBot), 0x0020080000010001);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseVelocityChange, ASTrackerBot);
				UProperty* NewProp_bUseVelocityChange = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bUseVelocityChange"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseVelocityChange, ASTrackerBot), 0x0020080000010001, CPP_BOOL_PROPERTY_BITMASK(bUseVelocityChange, ASTrackerBot), sizeof(bool), true);
				UProperty* NewProp_MovementForce = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MovementForce"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MovementForce, ASTrackerBot), 0x0020080000010001);
				UProperty* NewProp_SphereComp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SphereComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SphereComp, ASTrackerBot), 0x00200800000b0009, Z_Construct_UClass_USphereComponent_NoRegister());
				UProperty* NewProp_HealthComp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HealthComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(HealthComp, ASTrackerBot), 0x00200800000b0009, Z_Construct_UClass_USHealthComponent_NoRegister());
				UProperty* NewProp_MeshComp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MeshComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MeshComp, ASTrackerBot), 0x00200800000b0009, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASTrackerBot_HandleTakeDamage(), "HandleTakeDamage"); // 1582759330
				static TCppClassTypeInfo<TCppClassTypeTraits<ASTrackerBot> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AI/STrackerBot.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/AI/STrackerBot.h"));
				MetaData->SetValue(NewProp_ExplodeSound, TEXT("Category"), TEXT("TrackerBot"));
				MetaData->SetValue(NewProp_ExplodeSound, TEXT("ModuleRelativePath"), TEXT("Public/AI/STrackerBot.h"));
				MetaData->SetValue(NewProp_SelfDestructSound, TEXT("Category"), TEXT("TrackerBot"));
				MetaData->SetValue(NewProp_SelfDestructSound, TEXT("ModuleRelativePath"), TEXT("Public/AI/STrackerBot.h"));
				MetaData->SetValue(NewProp_SelfDamageInterval, TEXT("Category"), TEXT("TrackerBot"));
				MetaData->SetValue(NewProp_SelfDamageInterval, TEXT("ModuleRelativePath"), TEXT("Public/AI/STrackerBot.h"));
				MetaData->SetValue(NewProp_ExplosionDamage, TEXT("Category"), TEXT("TrackerBot"));
				MetaData->SetValue(NewProp_ExplosionDamage, TEXT("ModuleRelativePath"), TEXT("Public/AI/STrackerBot.h"));
				MetaData->SetValue(NewProp_ExplosionRadius, TEXT("Category"), TEXT("TrackerBot"));
				MetaData->SetValue(NewProp_ExplosionRadius, TEXT("ModuleRelativePath"), TEXT("Public/AI/STrackerBot.h"));
				MetaData->SetValue(NewProp_ExplosionEffect, TEXT("Category"), TEXT("TrackerBot"));
				MetaData->SetValue(NewProp_ExplosionEffect, TEXT("ModuleRelativePath"), TEXT("Public/AI/STrackerBot.h"));
				MetaData->SetValue(NewProp_RequiredDistanceToTarget, TEXT("Category"), TEXT("TrackerBot"));
				MetaData->SetValue(NewProp_RequiredDistanceToTarget, TEXT("ModuleRelativePath"), TEXT("Public/AI/STrackerBot.h"));
				MetaData->SetValue(NewProp_bUseVelocityChange, TEXT("Category"), TEXT("TrackerBot"));
				MetaData->SetValue(NewProp_bUseVelocityChange, TEXT("ModuleRelativePath"), TEXT("Public/AI/STrackerBot.h"));
				MetaData->SetValue(NewProp_MovementForce, TEXT("Category"), TEXT("TrackerBot"));
				MetaData->SetValue(NewProp_MovementForce, TEXT("ModuleRelativePath"), TEXT("Public/AI/STrackerBot.h"));
				MetaData->SetValue(NewProp_SphereComp, TEXT("Category"), TEXT("Components"));
				MetaData->SetValue(NewProp_SphereComp, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_SphereComp, TEXT("ModuleRelativePath"), TEXT("Public/AI/STrackerBot.h"));
				MetaData->SetValue(NewProp_HealthComp, TEXT("Category"), TEXT("Components"));
				MetaData->SetValue(NewProp_HealthComp, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_HealthComp, TEXT("ModuleRelativePath"), TEXT("Public/AI/STrackerBot.h"));
				MetaData->SetValue(NewProp_MeshComp, TEXT("Category"), TEXT("Components"));
				MetaData->SetValue(NewProp_MeshComp, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_MeshComp, TEXT("ModuleRelativePath"), TEXT("Public/AI/STrackerBot.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASTrackerBot, 2216567913);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASTrackerBot(Z_Construct_UClass_ASTrackerBot, &ASTrackerBot::StaticClass, TEXT("/Script/CoopGame"), TEXT("ASTrackerBot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASTrackerBot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
