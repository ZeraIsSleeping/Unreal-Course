// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/CaptureZone.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCaptureZone() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	MYPROJECT_API UClass* Z_Construct_UClass_ACaptureZone();
	MYPROJECT_API UClass* Z_Construct_UClass_ACaptureZone_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_UUseableInterface_NoRegister();
	MYPROJECT_API UEnum* Z_Construct_UEnum_MyProject_EFlagState();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFlagState;
	static UEnum* EFlagState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFlagState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFlagState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MyProject_EFlagState, (UObject*)Z_Construct_UPackage__Script_MyProject(), TEXT("EFlagState"));
		}
		return Z_Registration_Info_UEnum_EFlagState.OuterSingleton;
	}
	template<> MYPROJECT_API UEnum* StaticEnum<EFlagState>()
	{
		return EFlagState_StaticEnum();
	}
	struct Z_Construct_UEnum_MyProject_EFlagState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MyProject_EFlagState_Statics::Enumerators[] = {
		{ "EFlagState::UP", (int64)EFlagState::UP },
		{ "EFlagState::DOWN", (int64)EFlagState::DOWN },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MyProject_EFlagState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DOWN.Name", "EFlagState::DOWN" },
		{ "ModuleRelativePath", "CaptureZone.h" },
		{ "UP.Name", "EFlagState::UP" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MyProject_EFlagState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MyProject,
		nullptr,
		"EFlagState",
		"EFlagState",
		Z_Construct_UEnum_MyProject_EFlagState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MyProject_EFlagState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MyProject_EFlagState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MyProject_EFlagState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_MyProject_EFlagState()
	{
		if (!Z_Registration_Info_UEnum_EFlagState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFlagState.InnerSingleton, Z_Construct_UEnum_MyProject_EFlagState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFlagState.InnerSingleton;
	}
	DEFINE_FUNCTION(ACaptureZone::execOnOverlapEnd)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACaptureZone::execOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void ACaptureZone::StaticRegisterNativesACaptureZone()
	{
		UClass* Class = ACaptureZone::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBegin", &ACaptureZone::execOnOverlapBegin },
			{ "OnOverlapEnd", &ACaptureZone::execOnOverlapEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACaptureZone_OnOverlapBegin_Statics
	{
		struct CaptureZone_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACaptureZone_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACaptureZone_OnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CaptureZone_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureZone_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData), Z_Construct_UFunction_ACaptureZone_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACaptureZone_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CaptureZone_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACaptureZone_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACaptureZone_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CaptureZone_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureZone_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ACaptureZone_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACaptureZone_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CaptureZone_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ACaptureZone_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((CaptureZone_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACaptureZone_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CaptureZone_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_ACaptureZone_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACaptureZone_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACaptureZone_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CaptureZone_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureZone_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_ACaptureZone_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaptureZone_OnOverlapBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureZone_OnOverlapBegin_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureZone_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureZone_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureZone_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureZone_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureZone_OnOverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACaptureZone_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** called when something enters the sphere component */" },
#endif
		{ "ModuleRelativePath", "CaptureZone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "called when something enters the sphere component" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptureZone_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACaptureZone, nullptr, "OnOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_ACaptureZone_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureZone_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACaptureZone_OnOverlapBegin_Statics::CaptureZone_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureZone_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACaptureZone_OnOverlapBegin_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureZone_OnOverlapBegin_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACaptureZone_OnOverlapBegin_Statics::CaptureZone_eventOnOverlapBegin_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACaptureZone_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptureZone_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACaptureZone_OnOverlapEnd_Statics
	{
		struct CaptureZone_eventOnOverlapEnd_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACaptureZone_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACaptureZone_OnOverlapEnd_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CaptureZone_eventOnOverlapEnd_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureZone_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData), Z_Construct_UFunction_ACaptureZone_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACaptureZone_OnOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CaptureZone_eventOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACaptureZone_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACaptureZone_OnOverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CaptureZone_eventOnOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureZone_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ACaptureZone_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACaptureZone_OnOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CaptureZone_eventOnOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaptureZone_OnOverlapEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureZone_OnOverlapEnd_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureZone_OnOverlapEnd_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureZone_OnOverlapEnd_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureZone_OnOverlapEnd_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACaptureZone_OnOverlapEnd_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** called when something leaves the sphere component */" },
#endif
		{ "ModuleRelativePath", "CaptureZone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "called when something leaves the sphere component" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptureZone_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACaptureZone, nullptr, "OnOverlapEnd", nullptr, nullptr, Z_Construct_UFunction_ACaptureZone_OnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureZone_OnOverlapEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACaptureZone_OnOverlapEnd_Statics::CaptureZone_eventOnOverlapEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureZone_OnOverlapEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACaptureZone_OnOverlapEnd_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureZone_OnOverlapEnd_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACaptureZone_OnOverlapEnd_Statics::CaptureZone_eventOnOverlapEnd_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACaptureZone_OnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptureZone_OnOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACaptureZone);
	UClass* Z_Construct_UClass_ACaptureZone_NoRegister()
	{
		return ACaptureZone::StaticClass();
	}
	struct Z_Construct_UClass_ACaptureZone_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoleMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PoleMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlagMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FlagMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CaptureTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_drawnPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_drawnPercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_capturing_MetaData[];
#endif
		static void NewProp_capturing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_capturing;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACaptureZone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureZone_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ACaptureZone_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACaptureZone_OnOverlapBegin, "OnOverlapBegin" }, // 2766409584
		{ &Z_Construct_UFunction_ACaptureZone_OnOverlapEnd, "OnOverlapEnd" }, // 500648224
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureZone_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptureZone_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CaptureZone.h" },
		{ "ModuleRelativePath", "CaptureZone.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptureZone_Statics::NewProp_CollisionComponent_MetaData[] = {
		{ "Category", "CaptureZone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CaptureZone.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptureZone_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaptureZone, CollisionComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureZone_Statics::NewProp_CollisionComponent_MetaData), Z_Construct_UClass_ACaptureZone_Statics::NewProp_CollisionComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptureZone_Statics::NewProp_PoleMesh_MetaData[] = {
		{ "Category", "CaptureZone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CaptureZone.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptureZone_Statics::NewProp_PoleMesh = { "PoleMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaptureZone, PoleMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureZone_Statics::NewProp_PoleMesh_MetaData), Z_Construct_UClass_ACaptureZone_Statics::NewProp_PoleMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptureZone_Statics::NewProp_FlagMesh_MetaData[] = {
		{ "Category", "CaptureZone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CaptureZone.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptureZone_Statics::NewProp_FlagMesh = { "FlagMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaptureZone, FlagMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureZone_Statics::NewProp_FlagMesh_MetaData), Z_Construct_UClass_ACaptureZone_Statics::NewProp_FlagMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptureZone_Statics::NewProp_CaptureTime_MetaData[] = {
		{ "Category", "CaptureZone" },
		{ "ModuleRelativePath", "CaptureZone.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACaptureZone_Statics::NewProp_CaptureTime = { "CaptureTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaptureZone, CaptureTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureZone_Statics::NewProp_CaptureTime_MetaData), Z_Construct_UClass_ACaptureZone_Statics::NewProp_CaptureTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptureZone_Statics::NewProp_drawnPercentage_MetaData[] = {
		{ "Category", "Capturing | Percent" },
		{ "ModuleRelativePath", "CaptureZone.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACaptureZone_Statics::NewProp_drawnPercentage = { "drawnPercentage", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaptureZone, drawnPercentage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureZone_Statics::NewProp_drawnPercentage_MetaData), Z_Construct_UClass_ACaptureZone_Statics::NewProp_drawnPercentage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptureZone_Statics::NewProp_capturing_MetaData[] = {
		{ "Category", "Capturing | CurrentlyCapturing" },
		{ "ModuleRelativePath", "CaptureZone.h" },
	};
#endif
	void Z_Construct_UClass_ACaptureZone_Statics::NewProp_capturing_SetBit(void* Obj)
	{
		((ACaptureZone*)Obj)->capturing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACaptureZone_Statics::NewProp_capturing = { "capturing", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACaptureZone), &Z_Construct_UClass_ACaptureZone_Statics::NewProp_capturing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureZone_Statics::NewProp_capturing_MetaData), Z_Construct_UClass_ACaptureZone_Statics::NewProp_capturing_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACaptureZone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureZone_Statics::NewProp_CollisionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureZone_Statics::NewProp_PoleMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureZone_Statics::NewProp_FlagMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureZone_Statics::NewProp_CaptureTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureZone_Statics::NewProp_drawnPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureZone_Statics::NewProp_capturing,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACaptureZone_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UUseableInterface_NoRegister, (int32)VTABLE_OFFSET(ACaptureZone, IUseableInterface), false },  // 3648825642
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureZone_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACaptureZone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACaptureZone>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACaptureZone_Statics::ClassParams = {
		&ACaptureZone::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACaptureZone_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureZone_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureZone_Statics::Class_MetaDataParams), Z_Construct_UClass_ACaptureZone_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureZone_Statics::PropPointers) < 2048);
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
	struct Z_CompiledInDeferFile_FID_Users_rytix_Documents_GitHub_Dania_Games_Unreal_Course_Task_7___Capture_bar_and_stamina_bar_MyProject_Source_MyProject_CaptureZone_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rytix_Documents_GitHub_Dania_Games_Unreal_Course_Task_7___Capture_bar_and_stamina_bar_MyProject_Source_MyProject_CaptureZone_h_Statics::EnumInfo[] = {
		{ EFlagState_StaticEnum, TEXT("EFlagState"), &Z_Registration_Info_UEnum_EFlagState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2121913239U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rytix_Documents_GitHub_Dania_Games_Unreal_Course_Task_7___Capture_bar_and_stamina_bar_MyProject_Source_MyProject_CaptureZone_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACaptureZone, ACaptureZone::StaticClass, TEXT("ACaptureZone"), &Z_Registration_Info_UClass_ACaptureZone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACaptureZone), 208421150U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rytix_Documents_GitHub_Dania_Games_Unreal_Course_Task_7___Capture_bar_and_stamina_bar_MyProject_Source_MyProject_CaptureZone_h_1398257056(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_Users_rytix_Documents_GitHub_Dania_Games_Unreal_Course_Task_7___Capture_bar_and_stamina_bar_MyProject_Source_MyProject_CaptureZone_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rytix_Documents_GitHub_Dania_Games_Unreal_Course_Task_7___Capture_bar_and_stamina_bar_MyProject_Source_MyProject_CaptureZone_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_rytix_Documents_GitHub_Dania_Games_Unreal_Course_Task_7___Capture_bar_and_stamina_bar_MyProject_Source_MyProject_CaptureZone_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rytix_Documents_GitHub_Dania_Games_Unreal_Course_Task_7___Capture_bar_and_stamina_bar_MyProject_Source_MyProject_CaptureZone_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
