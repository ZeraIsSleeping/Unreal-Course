// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/LightSwitch.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightSwitch() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_ALightSwitch();
	MYPROJECT_API UClass* Z_Construct_UClass_ALightSwitch_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_UUseableInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void ALightSwitch::StaticRegisterNativesALightSwitch()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALightSwitch);
	UClass* Z_Construct_UClass_ALightSwitch_NoRegister()
	{
		return ALightSwitch::StaticClass();
	}
	struct Z_Construct_UClass_ALightSwitch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointLightComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PointLightComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALightSwitch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALightSwitch_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightSwitch_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LightSwitch.h" },
		{ "ModuleRelativePath", "LightSwitch.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightSwitch_Statics::NewProp_CollisionComponent_MetaData[] = {
		{ "Category", "LightSwitch" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LightSwitch.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALightSwitch_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALightSwitch, CollisionComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALightSwitch_Statics::NewProp_CollisionComponent_MetaData), Z_Construct_UClass_ALightSwitch_Statics::NewProp_CollisionComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightSwitch_Statics::NewProp_PointLightComponent_MetaData[] = {
		{ "Category", "Light Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LightSwitch.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALightSwitch_Statics::NewProp_PointLightComponent = { "PointLightComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALightSwitch, PointLightComponent), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALightSwitch_Statics::NewProp_PointLightComponent_MetaData), Z_Construct_UClass_ALightSwitch_Statics::NewProp_PointLightComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALightSwitch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightSwitch_Statics::NewProp_CollisionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightSwitch_Statics::NewProp_PointLightComponent,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALightSwitch_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UUseableInterface_NoRegister, (int32)VTABLE_OFFSET(ALightSwitch, IUseableInterface), false },  // 3648825642
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALightSwitch_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALightSwitch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALightSwitch>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALightSwitch_Statics::ClassParams = {
		&ALightSwitch::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALightSwitch_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALightSwitch_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALightSwitch_Statics::Class_MetaDataParams), Z_Construct_UClass_ALightSwitch_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALightSwitch_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ALightSwitch()
	{
		if (!Z_Registration_Info_UClass_ALightSwitch.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALightSwitch.OuterSingleton, Z_Construct_UClass_ALightSwitch_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALightSwitch.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<ALightSwitch>()
	{
		return ALightSwitch::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALightSwitch);
	ALightSwitch::~ALightSwitch() {}
	struct Z_CompiledInDeferFile_FID_Users_rytix_Documents_GitHub_Dania_Games_Unreal_Course_Task_7___Capture_bar_and_stamina_bar_MyProject_Source_MyProject_LightSwitch_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rytix_Documents_GitHub_Dania_Games_Unreal_Course_Task_7___Capture_bar_and_stamina_bar_MyProject_Source_MyProject_LightSwitch_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALightSwitch, ALightSwitch::StaticClass, TEXT("ALightSwitch"), &Z_Registration_Info_UClass_ALightSwitch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALightSwitch), 502389434U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rytix_Documents_GitHub_Dania_Games_Unreal_Course_Task_7___Capture_bar_and_stamina_bar_MyProject_Source_MyProject_LightSwitch_h_3445334885(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_Users_rytix_Documents_GitHub_Dania_Games_Unreal_Course_Task_7___Capture_bar_and_stamina_bar_MyProject_Source_MyProject_LightSwitch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rytix_Documents_GitHub_Dania_Games_Unreal_Course_Task_7___Capture_bar_and_stamina_bar_MyProject_Source_MyProject_LightSwitch_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
