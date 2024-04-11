// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/MyDoor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyDoor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AMyDoor();
	MYPROJECT_API UClass* Z_Construct_UClass_AMyDoor_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_UUseableInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void AMyDoor::StaticRegisterNativesAMyDoor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyDoor);
	UClass* Z_Construct_UClass_AMyDoor_NoRegister()
	{
		return AMyDoor::StaticClass();
	}
	struct Z_Construct_UClass_AMyDoor_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoorMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpenTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OpenTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyDoor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyDoor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyDoor.h" },
		{ "ModuleRelativePath", "MyDoor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyDoor_Statics::NewProp_CollisionComponent_MetaData[] = {
		{ "Category", "MyDoor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyDoor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyDoor_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyDoor, CollisionComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyDoor_Statics::NewProp_CollisionComponent_MetaData), Z_Construct_UClass_AMyDoor_Statics::NewProp_CollisionComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyDoor_Statics::NewProp_DoorMesh_MetaData[] = {
		{ "Category", "MyDoor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyDoor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyDoor_Statics::NewProp_DoorMesh = { "DoorMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyDoor, DoorMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyDoor_Statics::NewProp_DoorMesh_MetaData), Z_Construct_UClass_AMyDoor_Statics::NewProp_DoorMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyDoor_Statics::NewProp_OpenTime_MetaData[] = {
		{ "Category", "MyDoor" },
		{ "ModuleRelativePath", "MyDoor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyDoor_Statics::NewProp_OpenTime = { "OpenTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyDoor, OpenTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyDoor_Statics::NewProp_OpenTime_MetaData), Z_Construct_UClass_AMyDoor_Statics::NewProp_OpenTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyDoor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyDoor_Statics::NewProp_CollisionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyDoor_Statics::NewProp_DoorMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyDoor_Statics::NewProp_OpenTime,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMyDoor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UUseableInterface_NoRegister, (int32)VTABLE_OFFSET(AMyDoor, IUseableInterface), false },  // 3648825642
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyDoor_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyDoor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyDoor_Statics::ClassParams = {
		&AMyDoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyDoor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyDoor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyDoor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyDoor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyDoor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMyDoor()
	{
		if (!Z_Registration_Info_UClass_AMyDoor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyDoor.OuterSingleton, Z_Construct_UClass_AMyDoor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyDoor.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<AMyDoor>()
	{
		return AMyDoor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyDoor);
	AMyDoor::~AMyDoor() {}
	struct Z_CompiledInDeferFile_FID_Users_rytix_Documents_GitHub_Dania_Games_Unreal_Course_Task_6___Light_switch_and_door_MyProject_Source_MyProject_MyDoor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rytix_Documents_GitHub_Dania_Games_Unreal_Course_Task_6___Light_switch_and_door_MyProject_Source_MyProject_MyDoor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyDoor, AMyDoor::StaticClass, TEXT("AMyDoor"), &Z_Registration_Info_UClass_AMyDoor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyDoor), 1324186703U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rytix_Documents_GitHub_Dania_Games_Unreal_Course_Task_6___Light_switch_and_door_MyProject_Source_MyProject_MyDoor_h_2813068864(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_Users_rytix_Documents_GitHub_Dania_Games_Unreal_Course_Task_6___Light_switch_and_door_MyProject_Source_MyProject_MyDoor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rytix_Documents_GitHub_Dania_Games_Unreal_Course_Task_6___Light_switch_and_door_MyProject_Source_MyProject_MyDoor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
