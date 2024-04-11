// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/CaptureZone.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCaptureZone() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	MYPROJECT_API UClass* Z_Construct_UClass_ACaptureZone();
	MYPROJECT_API UClass* Z_Construct_UClass_ACaptureZone_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void ACaptureZone::StaticRegisterNativesACaptureZone()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACaptureZone);
	UClass* Z_Construct_UClass_ACaptureZone_NoRegister()
	{
		return ACaptureZone::StaticClass();
	}
	struct Z_Construct_UClass_ACaptureZone_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACaptureZone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureZone_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptureZone_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CaptureZone.h" },
		{ "ModuleRelativePath", "CaptureZone.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACaptureZone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACaptureZone>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACaptureZone_Statics::ClassParams = {
		&ACaptureZone::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureZone_Statics::Class_MetaDataParams), Z_Construct_UClass_ACaptureZone_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ACaptureZone()
	{
		if (!Z_Registration_Info_UClass_ACaptureZone.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACaptureZone.OuterSingleton, Z_Construct_UClass_ACaptureZone_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACaptureZone.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<ACaptureZone>()
	{
		return ACaptureZone::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACaptureZone);
	ACaptureZone::~ACaptureZone() {}
	struct Z_CompiledInDeferFile_FID_Users_rytix_Documents_GitHub_Dania_Games_Unreal_Course_Task_6___Light_switch_and_door_MyProject_Source_MyProject_CaptureZone_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rytix_Documents_GitHub_Dania_Games_Unreal_Course_Task_6___Light_switch_and_door_MyProject_Source_MyProject_CaptureZone_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACaptureZone, ACaptureZone::StaticClass, TEXT("ACaptureZone"), &Z_Registration_Info_UClass_ACaptureZone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACaptureZone), 823820252U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rytix_Documents_GitHub_Dania_Games_Unreal_Course_Task_6___Light_switch_and_door_MyProject_Source_MyProject_CaptureZone_h_910515203(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_Users_rytix_Documents_GitHub_Dania_Games_Unreal_Course_Task_6___Light_switch_and_door_MyProject_Source_MyProject_CaptureZone_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rytix_Documents_GitHub_Dania_Games_Unreal_Course_Task_6___Light_switch_and_door_MyProject_Source_MyProject_CaptureZone_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
