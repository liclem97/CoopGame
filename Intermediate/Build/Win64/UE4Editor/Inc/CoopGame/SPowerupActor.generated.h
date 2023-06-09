// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef COOPGAME_SPowerupActor_generated_h
#error "SPowerupActor.generated.h already included, missing '#pragma once' in SPowerupActor.h"
#endif
#define COOPGAME_SPowerupActor_generated_h

#define CoopGame_Source_CoopGame_Public_SPowerupActor_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_PowerupActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_PowerupActive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTickPowerup) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnTickPowerup(); \
		P_NATIVE_END; \
	}


#define CoopGame_Source_CoopGame_Public_SPowerupActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_PowerupActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_PowerupActive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTickPowerup) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnTickPowerup(); \
		P_NATIVE_END; \
	}


#define CoopGame_Source_CoopGame_Public_SPowerupActor_h_12_EVENT_PARMS \
	struct SPowerupActor_eventOnActivated_Parms \
	{ \
		AActor* ActiveFor; \
	}; \
	struct SPowerupActor_eventOnPowerupStateChanged_Parms \
	{ \
		bool bNewIsAcvie; \
	};


#define CoopGame_Source_CoopGame_Public_SPowerupActor_h_12_CALLBACK_WRAPPERS
#define CoopGame_Source_CoopGame_Public_SPowerupActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASPowerupActor(); \
	friend COOPGAME_API class UClass* Z_Construct_UClass_ASPowerupActor(); \
public: \
	DECLARE_CLASS(ASPowerupActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASPowerupActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define CoopGame_Source_CoopGame_Public_SPowerupActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASPowerupActor(); \
	friend COOPGAME_API class UClass* Z_Construct_UClass_ASPowerupActor(); \
public: \
	DECLARE_CLASS(ASPowerupActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASPowerupActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define CoopGame_Source_CoopGame_Public_SPowerupActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASPowerupActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASPowerupActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASPowerupActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASPowerupActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASPowerupActor(ASPowerupActor&&); \
	NO_API ASPowerupActor(const ASPowerupActor&); \
public:


#define CoopGame_Source_CoopGame_Public_SPowerupActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASPowerupActor(ASPowerupActor&&); \
	NO_API ASPowerupActor(const ASPowerupActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASPowerupActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASPowerupActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASPowerupActor)


#define CoopGame_Source_CoopGame_Public_SPowerupActor_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PowerupInterval() { return STRUCT_OFFSET(ASPowerupActor, PowerupInterval); } \
	FORCEINLINE static uint32 __PPO__TotalNrOfTicks() { return STRUCT_OFFSET(ASPowerupActor, TotalNrOfTicks); } \
	FORCEINLINE static uint32 __PPO__bIsPowerupActive() { return STRUCT_OFFSET(ASPowerupActor, bIsPowerupActive); }


#define CoopGame_Source_CoopGame_Public_SPowerupActor_h_9_PROLOG \
	CoopGame_Source_CoopGame_Public_SPowerupActor_h_12_EVENT_PARMS


#define CoopGame_Source_CoopGame_Public_SPowerupActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_SPowerupActor_h_12_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_SPowerupActor_h_12_RPC_WRAPPERS \
	CoopGame_Source_CoopGame_Public_SPowerupActor_h_12_CALLBACK_WRAPPERS \
	CoopGame_Source_CoopGame_Public_SPowerupActor_h_12_INCLASS \
	CoopGame_Source_CoopGame_Public_SPowerupActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopGame_Source_CoopGame_Public_SPowerupActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_SPowerupActor_h_12_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_SPowerupActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_SPowerupActor_h_12_CALLBACK_WRAPPERS \
	CoopGame_Source_CoopGame_Public_SPowerupActor_h_12_INCLASS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_SPowerupActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopGame_Source_CoopGame_Public_SPowerupActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
