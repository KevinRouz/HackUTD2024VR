// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/WavFileSender.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWavFileSender() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
MYPROJECT_API UClass* Z_Construct_UClass_AWavFileSender();
MYPROJECT_API UClass* Z_Construct_UClass_AWavFileSender_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References

// Begin Class AWavFileSender
void AWavFileSender::StaticRegisterNativesAWavFileSender()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWavFileSender);
UClass* Z_Construct_UClass_AWavFileSender_NoRegister()
{
	return AWavFileSender::StaticClass();
}
struct Z_Construct_UClass_AWavFileSender_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WavFileSender.h" },
		{ "ModuleRelativePath", "WavFileSender.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWavFileSender>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AWavFileSender_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWavFileSender_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWavFileSender_Statics::ClassParams = {
	&AWavFileSender::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWavFileSender_Statics::Class_MetaDataParams), Z_Construct_UClass_AWavFileSender_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWavFileSender()
{
	if (!Z_Registration_Info_UClass_AWavFileSender.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWavFileSender.OuterSingleton, Z_Construct_UClass_AWavFileSender_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWavFileSender.OuterSingleton;
}
template<> MYPROJECT_API UClass* StaticClass<AWavFileSender>()
{
	return AWavFileSender::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWavFileSender);
AWavFileSender::~AWavFileSender() {}
// End Class AWavFileSender

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_WavFileSender_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWavFileSender, AWavFileSender::StaticClass, TEXT("AWavFileSender"), &Z_Registration_Info_UClass_AWavFileSender, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWavFileSender), 1990764594U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_WavFileSender_h_3140202992(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_WavFileSender_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_WavFileSender_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
