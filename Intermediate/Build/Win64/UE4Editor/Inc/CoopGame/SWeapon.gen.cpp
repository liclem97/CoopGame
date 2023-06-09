// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SWeapon.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSWeapon() {}
// Cross Module References
	COOPGAME_API UScriptStruct* Z_Construct_UScriptStruct_FHitScanTrace();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPhysicalSurface();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASWeapon_OnRep_HitScanTrace();
	COOPGAME_API UClass* Z_Construct_UClass_ASWeapon();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASWeapon_ServerFire();
	COOPGAME_API UClass* Z_Construct_UClass_ASWeapon_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShake_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FHitScanTrace::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COOPGAME_API uint32 Get_Z_Construct_UScriptStruct_FHitScanTrace_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHitScanTrace, Z_Construct_UPackage__Script_CoopGame(), TEXT("HitScanTrace"), sizeof(FHitScanTrace), Get_Z_Construct_UScriptStruct_FHitScanTrace_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHitScanTrace(FHitScanTrace::StaticStruct, TEXT("/Script/CoopGame"), TEXT("HitScanTrace"), false, nullptr, nullptr);
static struct FScriptStruct_CoopGame_StaticRegisterNativesFHitScanTrace
{
	FScriptStruct_CoopGame_StaticRegisterNativesFHitScanTrace()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HitScanTrace")),new UScriptStruct::TCppStructOps<FHitScanTrace>);
	}
} ScriptStruct_CoopGame_StaticRegisterNativesFHitScanTrace;
	UScriptStruct* Z_Construct_UScriptStruct_FHitScanTrace()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_CoopGame();
		extern uint32 Get_Z_Construct_UScriptStruct_FHitScanTrace_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HitScanTrace"), sizeof(FHitScanTrace), Get_Z_Construct_UScriptStruct_FHitScanTrace_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("HitScanTrace"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FHitScanTrace>, EStructFlags(0x00000001));
			UProperty* NewProp_TraceTo = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("TraceTo"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(TraceTo, FHitScanTrace), 0x0010000000000000, Z_Construct_UScriptStruct_FVector_NetQuantize());
			UProperty* NewProp_SurfaceType = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SurfaceType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(SurfaceType, FHitScanTrace), 0x0010000000000000, Z_Construct_UEnum_Engine_EPhysicalSurface());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/SWeapon.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Contain information of a single hitscan weapon line trace"));
			MetaData->SetValue(NewProp_TraceTo, TEXT("ModuleRelativePath"), TEXT("Public/SWeapon.h"));
			MetaData->SetValue(NewProp_SurfaceType, TEXT("ModuleRelativePath"), TEXT("Public/SWeapon.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHitScanTrace_CRC() { return 1744454224U; }
	static FName NAME_ASWeapon_ServerFire = FName(TEXT("ServerFire"));
	void ASWeapon::ServerFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASWeapon_ServerFire),NULL);
	}
	void ASWeapon::StaticRegisterNativesASWeapon()
	{
		UClass* Class = ASWeapon::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "OnRep_HitScanTrace", (Native)&ASWeapon::execOnRep_HitScanTrace },
			{ "ServerFire", (Native)&ASWeapon::execServerFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_ASWeapon_OnRep_HitScanTrace()
	{
		UObject* Outer = Z_Construct_UClass_ASWeapon();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnRep_HitScanTrace"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00080401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SWeapon.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASWeapon_ServerFire()
	{
		UObject* Outer = Z_Construct_UClass_ASWeapon();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ServerFire"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x80280CC0, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SWeapon.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASWeapon_NoRegister()
	{
		return ASWeapon::StaticClass();
	}
	UClass* Z_Construct_UClass_ASWeapon()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_CoopGame();
			OuterClass = ASWeapon::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_ASWeapon_OnRep_HitScanTrace());
				OuterClass->LinkChild(Z_Construct_UFunction_ASWeapon_ServerFire());

				UProperty* NewProp_HitScanTeace = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HitScanTeace"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(HitScanTeace, ASWeapon), 0x0020080100000020, Z_Construct_UScriptStruct_FHitScanTrace());
				NewProp_HitScanTeace->RepNotifyFunc = FName(TEXT("OnRep_HitScanTrace"));
				UProperty* NewProp_BulletSpread = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BulletSpread"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BulletSpread, ASWeapon), 0x0020080000010001);
				UProperty* NewProp_RateOfFire = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RateOfFire"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(RateOfFire, ASWeapon), 0x0020080000010001);
				UProperty* NewProp_BaseDamage = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseDamage"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseDamage, ASWeapon), 0x0020080000010001);
				UProperty* NewProp_FireCamShake = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FireCamShake"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(FireCamShake, ASWeapon), 0x0024080000010001, Z_Construct_UClass_UCameraShake_NoRegister(), Z_Construct_UClass_UClass());
				UProperty* NewProp_TracerEffect = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TracerEffect"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(TracerEffect, ASWeapon), 0x0020080000010015, Z_Construct_UClass_UParticleSystem_NoRegister());
				UProperty* NewProp_FleshImpactEffect = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FleshImpactEffect"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FleshImpactEffect, ASWeapon), 0x0020080000010015, Z_Construct_UClass_UParticleSystem_NoRegister());
				UProperty* NewProp_DefaultImpactEffect = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DefaultImpactEffect"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(DefaultImpactEffect, ASWeapon), 0x0020080000010015, Z_Construct_UClass_UParticleSystem_NoRegister());
				UProperty* NewProp_MuzzleEffect = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MuzzleEffect"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MuzzleEffect, ASWeapon), 0x0020080000010015, Z_Construct_UClass_UParticleSystem_NoRegister());
				UProperty* NewProp_TracerTargetName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TracerTargetName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(TracerTargetName, ASWeapon), 0x0020080000030015);
				UProperty* NewProp_MuzzleSocketName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MuzzleSocketName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(MuzzleSocketName, ASWeapon), 0x0020080000030015);
				UProperty* NewProp_DamageType = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DamageType"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(DamageType, ASWeapon), 0x0024080000010015, Z_Construct_UClass_UDamageType_NoRegister(), Z_Construct_UClass_UClass());
				UProperty* NewProp_MeshComp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MeshComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MeshComp, ASWeapon), 0x00200800000a001d, Z_Construct_UClass_USkeletalMeshComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASWeapon_OnRep_HitScanTrace(), "OnRep_HitScanTrace"); // 3372128989
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASWeapon_ServerFire(), "ServerFire"); // 859581697
				static TCppClassTypeInfo<TCppClassTypeTraits<ASWeapon> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SWeapon.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SWeapon.h"));
				MetaData->SetValue(NewProp_HitScanTeace, TEXT("ModuleRelativePath"), TEXT("Public/SWeapon.h"));
				MetaData->SetValue(NewProp_BulletSpread, TEXT("Category"), TEXT("Weapon"));
				MetaData->SetValue(NewProp_BulletSpread, TEXT("ClampMin"), TEXT("0.000000"));
				MetaData->SetValue(NewProp_BulletSpread, TEXT("ModuleRelativePath"), TEXT("Public/SWeapon.h"));
				MetaData->SetValue(NewProp_BulletSpread, TEXT("ToolTip"), TEXT("Bullet Spread in Degrees"));
				MetaData->SetValue(NewProp_RateOfFire, TEXT("Category"), TEXT("Weapon"));
				MetaData->SetValue(NewProp_RateOfFire, TEXT("ModuleRelativePath"), TEXT("Public/SWeapon.h"));
				MetaData->SetValue(NewProp_RateOfFire, TEXT("ToolTip"), TEXT("RPM : ?\x0434? ?\x07fb??\x01f4? \x017a?? ??"));
				MetaData->SetValue(NewProp_BaseDamage, TEXT("Category"), TEXT("Weapon"));
				MetaData->SetValue(NewProp_BaseDamage, TEXT("ModuleRelativePath"), TEXT("Public/SWeapon.h"));
				MetaData->SetValue(NewProp_FireCamShake, TEXT("Category"), TEXT("Weapon"));
				MetaData->SetValue(NewProp_FireCamShake, TEXT("ModuleRelativePath"), TEXT("Public/SWeapon.h"));
				MetaData->SetValue(NewProp_TracerEffect, TEXT("Category"), TEXT("Weapon"));
				MetaData->SetValue(NewProp_TracerEffect, TEXT("ModuleRelativePath"), TEXT("Public/SWeapon.h"));
				MetaData->SetValue(NewProp_FleshImpactEffect, TEXT("Category"), TEXT("Weapon"));
				MetaData->SetValue(NewProp_FleshImpactEffect, TEXT("ModuleRelativePath"), TEXT("Public/SWeapon.h"));
				MetaData->SetValue(NewProp_DefaultImpactEffect, TEXT("Category"), TEXT("Weapon"));
				MetaData->SetValue(NewProp_DefaultImpactEffect, TEXT("ModuleRelativePath"), TEXT("Public/SWeapon.h"));
				MetaData->SetValue(NewProp_MuzzleEffect, TEXT("Category"), TEXT("Weapon"));
				MetaData->SetValue(NewProp_MuzzleEffect, TEXT("ModuleRelativePath"), TEXT("Public/SWeapon.h"));
				MetaData->SetValue(NewProp_TracerTargetName, TEXT("Category"), TEXT("Weapon"));
				MetaData->SetValue(NewProp_TracerTargetName, TEXT("ModuleRelativePath"), TEXT("Public/SWeapon.h"));
				MetaData->SetValue(NewProp_MuzzleSocketName, TEXT("Category"), TEXT("Weapon"));
				MetaData->SetValue(NewProp_MuzzleSocketName, TEXT("ModuleRelativePath"), TEXT("Public/SWeapon.h"));
				MetaData->SetValue(NewProp_DamageType, TEXT("Category"), TEXT("Weapon"));
				MetaData->SetValue(NewProp_DamageType, TEXT("ModuleRelativePath"), TEXT("Public/SWeapon.h"));
				MetaData->SetValue(NewProp_MeshComp, TEXT("Category"), TEXT("Components"));
				MetaData->SetValue(NewProp_MeshComp, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_MeshComp, TEXT("ModuleRelativePath"), TEXT("Public/SWeapon.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASWeapon, 1440019661);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASWeapon(Z_Construct_UClass_ASWeapon, &ASWeapon::StaticClass, TEXT("/Script/CoopGame"), TEXT("ASWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
