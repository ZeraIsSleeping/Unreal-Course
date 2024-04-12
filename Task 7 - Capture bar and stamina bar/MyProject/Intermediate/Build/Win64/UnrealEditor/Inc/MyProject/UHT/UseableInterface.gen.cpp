// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/UseableInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUseableInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	MYPROJECT_API UClass* Z_Construct_UClass_UUseableInterface();
	MYPROJECT_API UClass* Z_Construct_UClass_UUseableInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	DEFINE_FUNCTION(IUseableInterface::execUse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Use_Implementation();
		P_NATIVE_END;
	}
	void IUseableInterface::Use()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Use instead.");
	}
	void UUseableInterface::StaticRegisterNativesUUseableInterface()
	{
		UClass* Class = UUseableInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Use", &IUseableInterface::execUse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUseableInterface_Use_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUseableInterface_Use_Statics::Function_MetaDataParams[] = {
		{ "Category", "Useable" },
		{ "ModuleRelativePath", "UseableInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUseableInterface_Use_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUseableInterface, nullptr, "Use", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUseableInterface_Use_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUseableInterface_Use_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UUseableInterface_Use()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUseableInterface_Use_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUseableInterface);
	UClass* Z_Construct_UClass_UUseableInterface_NoRegister()
	{
		return UUseableInterface::StaticClass();
	}
	struct Z_Construct_UClass_UUseableInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUseableInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUseableInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UUseableInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUseableInterface_Use, "Use" }, // 699933031
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUseableInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUseableInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "UseableInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUseableInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IUseableInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUseableInterface_Statics::ClassParams = {
		&UUseableInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUseableInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UUseableInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UUseableInterface()
	{
		if (!Z_Registration_Info_UClass_UUseableInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUseableInterface.OuterSingleton, Z_Construct_UClass_UUseableInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUseableInterface.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<UUseableInterface>()
	{
		return UUseableInterface::StaticClass();
	}
	UUseableInterface::UUseableInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUseableInterface);
	UUseableInterface::~UUseableInterface() {}
	static FName NAME_UUseableInterface_Use = FName(TEXT("Use"));
	void IUseableInterface::Execute_Use(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUseableInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UUseableInterface_Use);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IUseableInterface*)(O->GetNativeInterfaceAddress(UUseableInterface::StaticClass())))
		{
			I->Use_Implementation();
		}
	}
	struct Z_CompiledInDeferFile_FID_Users_rytix_Documents_GitHub_Dania_Games_Unreal_Course_Task_7___Capture_bar_and_stamina_bar_MyProject_Source_MyProject_UseableInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rytix_Documents_GitHub_Dania_Games_Unreal_Course_Task_7___Capture_bar_and_stamina_bar_MyProject_Source_MyProject_UseableInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUseableInterface, UUseableInterface::StaticClass, TEXT("UUseableInterface"), &Z_Registration_Info_UClass_UUseableInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUseableInterface), 3648825642U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rytix_Documents_GitHub_Dania_Games_Unreal_Course_Task_7___Capture_bar_and_stamina_bar_MyProject_Source_MyProject_UseableInterface_h_1013114762(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_Users_rytix_Documents_GitHub_Dania_Games_Unreal_Course_Task_7___Capture_bar_and_stamina_bar_MyProject_Source_MyProject_UseableInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rytix_Documents_GitHub_Dania_Games_Unreal_Course_Task_7___Capture_bar_and_stamina_bar_MyProject_Source_MyProject_UseableInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
