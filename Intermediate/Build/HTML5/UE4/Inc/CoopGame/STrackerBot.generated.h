// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOPGAME_STrackerBot_generated_h
#error "STrackerBot.generated.h already included, missing '#pragma once' in STrackerBot.h"
#endif
#define COOPGAME_STrackerBot_generated_h

#define CoopGame_Source_CoopGame_Public_AI_STrackerBot_h_12_RPC_WRAPPERS
#define CoopGame_Source_CoopGame_Public_AI_STrackerBot_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define CoopGame_Source_CoopGame_Public_AI_STrackerBot_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASTrackerBot(); \
	friend COOPGAME_API class UClass* Z_Construct_UClass_ASTrackerBot(); \
public: \
	DECLARE_CLASS(ASTrackerBot, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASTrackerBot) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CoopGame_Source_CoopGame_Public_AI_STrackerBot_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASTrackerBot(); \
	friend COOPGAME_API class UClass* Z_Construct_UClass_ASTrackerBot(); \
public: \
	DECLARE_CLASS(ASTrackerBot, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASTrackerBot) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CoopGame_Source_CoopGame_Public_AI_STrackerBot_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASTrackerBot(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASTrackerBot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTrackerBot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTrackerBot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTrackerBot(ASTrackerBot&&); \
	NO_API ASTrackerBot(const ASTrackerBot&); \
public:


#define CoopGame_Source_CoopGame_Public_AI_STrackerBot_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTrackerBot(ASTrackerBot&&); \
	NO_API ASTrackerBot(const ASTrackerBot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTrackerBot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTrackerBot); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASTrackerBot)


#define CoopGame_Source_CoopGame_Public_AI_STrackerBot_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(ASTrackerBot, MeshComp); }


#define CoopGame_Source_CoopGame_Public_AI_STrackerBot_h_9_PROLOG
#define CoopGame_Source_CoopGame_Public_AI_STrackerBot_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_AI_STrackerBot_h_12_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_AI_STrackerBot_h_12_RPC_WRAPPERS \
	CoopGame_Source_CoopGame_Public_AI_STrackerBot_h_12_INCLASS \
	CoopGame_Source_CoopGame_Public_AI_STrackerBot_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopGame_Source_CoopGame_Public_AI_STrackerBot_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_AI_STrackerBot_h_12_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_AI_STrackerBot_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_AI_STrackerBot_h_12_INCLASS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_AI_STrackerBot_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopGame_Source_CoopGame_Public_AI_STrackerBot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
