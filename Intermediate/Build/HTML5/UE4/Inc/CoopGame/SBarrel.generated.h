// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USHealthComponent;
class UDamageType;
class AController;
class AActor;
#ifdef COOPGAME_SBarrel_generated_h
#error "SBarrel.generated.h already included, missing '#pragma once' in SBarrel.h"
#endif
#define COOPGAME_SBarrel_generated_h

#define CoopGame_Source_CoopGame_Public_SBarrel_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnReq_Exploded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnReq_Exploded(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHealthChanged) \
	{ \
		P_GET_OBJECT(USHealthComponent,Z_Param_OwningHealthComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Health); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HealthDelta); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHealthChanged(Z_Param_OwningHealthComp,Z_Param_Health,Z_Param_HealthDelta,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	}


#define CoopGame_Source_CoopGame_Public_SBarrel_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnReq_Exploded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnReq_Exploded(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHealthChanged) \
	{ \
		P_GET_OBJECT(USHealthComponent,Z_Param_OwningHealthComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Health); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HealthDelta); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHealthChanged(Z_Param_OwningHealthComp,Z_Param_Health,Z_Param_HealthDelta,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	}


#define CoopGame_Source_CoopGame_Public_SBarrel_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBarrel(); \
	friend COOPGAME_API class UClass* Z_Construct_UClass_ASBarrel(); \
public: \
	DECLARE_CLASS(ASBarrel, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASBarrel) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define CoopGame_Source_CoopGame_Public_SBarrel_h_17_INCLASS \
private: \
	static void StaticRegisterNativesASBarrel(); \
	friend COOPGAME_API class UClass* Z_Construct_UClass_ASBarrel(); \
public: \
	DECLARE_CLASS(ASBarrel, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASBarrel) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define CoopGame_Source_CoopGame_Public_SBarrel_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBarrel(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBarrel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBarrel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBarrel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBarrel(ASBarrel&&); \
	NO_API ASBarrel(const ASBarrel&); \
public:


#define CoopGame_Source_CoopGame_Public_SBarrel_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBarrel(ASBarrel&&); \
	NO_API ASBarrel(const ASBarrel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBarrel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBarrel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASBarrel)


#define CoopGame_Source_CoopGame_Public_SBarrel_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HealthComp() { return STRUCT_OFFSET(ASBarrel, HealthComp); } \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(ASBarrel, MeshComp); } \
	FORCEINLINE static uint32 __PPO__RadialForceComp() { return STRUCT_OFFSET(ASBarrel, RadialForceComp); } \
	FORCEINLINE static uint32 __PPO__bExploded() { return STRUCT_OFFSET(ASBarrel, bExploded); } \
	FORCEINLINE static uint32 __PPO__ExplosionImpulse() { return STRUCT_OFFSET(ASBarrel, ExplosionImpulse); } \
	FORCEINLINE static uint32 __PPO__ExplosionEffect() { return STRUCT_OFFSET(ASBarrel, ExplosionEffect); } \
	FORCEINLINE static uint32 __PPO__ExplodedMaterial() { return STRUCT_OFFSET(ASBarrel, ExplodedMaterial); }


#define CoopGame_Source_CoopGame_Public_SBarrel_h_14_PROLOG
#define CoopGame_Source_CoopGame_Public_SBarrel_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_SBarrel_h_17_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_SBarrel_h_17_RPC_WRAPPERS \
	CoopGame_Source_CoopGame_Public_SBarrel_h_17_INCLASS \
	CoopGame_Source_CoopGame_Public_SBarrel_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopGame_Source_CoopGame_Public_SBarrel_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_SBarrel_h_17_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_SBarrel_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_SBarrel_h_17_INCLASS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_SBarrel_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopGame_Source_CoopGame_Public_SBarrel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
