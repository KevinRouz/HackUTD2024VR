// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WavFileSender.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_WavFileSender_generated_h
#error "WavFileSender.generated.h already included, missing '#pragma once' in WavFileSender.h"
#endif
#define MYPROJECT_WavFileSender_generated_h

#define FID_MyProject_Source_MyProject_WavFileSender_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWavFileSender(); \
	friend struct Z_Construct_UClass_AWavFileSender_Statics; \
public: \
	DECLARE_CLASS(AWavFileSender, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AWavFileSender)


#define FID_MyProject_Source_MyProject_WavFileSender_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWavFileSender(AWavFileSender&&); \
	AWavFileSender(const AWavFileSender&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWavFileSender); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWavFileSender); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWavFileSender) \
	NO_API virtual ~AWavFileSender();


#define FID_MyProject_Source_MyProject_WavFileSender_h_7_PROLOG
#define FID_MyProject_Source_MyProject_WavFileSender_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject_Source_MyProject_WavFileSender_h_10_INCLASS_NO_PURE_DECLS \
	FID_MyProject_Source_MyProject_WavFileSender_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class AWavFileSender>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject_Source_MyProject_WavFileSender_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
