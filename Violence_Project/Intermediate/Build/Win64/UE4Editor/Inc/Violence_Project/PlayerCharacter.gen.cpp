// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Violence_Project/Public/PlayerCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCharacter() {}
// Cross Module References
	VIOLENCE_PROJECT_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();
	VIOLENCE_PROJECT_API UClass* Z_Construct_UClass_APlayerCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Violence_Project();
	VIOLENCE_PROJECT_API UFunction* Z_Construct_UFunction_APlayerCharacter_Reload();
	VIOLENCE_PROJECT_API UFunction* Z_Construct_UFunction_APlayerCharacter_Shoot();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VIOLENCE_PROJECT_API UClass* Z_Construct_UClass_AEnemyCharacter_NoRegister();
	VIOLENCE_PROJECT_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
// End Cross Module References
	void APlayerCharacter::StaticRegisterNativesAPlayerCharacter()
	{
		UClass* Class = APlayerCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Reload", &APlayerCharacter::execReload },
			{ "Shoot", &APlayerCharacter::execShoot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerCharacter_Reload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_Reload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_Reload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, "Reload", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCharacter_Reload_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Reload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_Reload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerCharacter_Reload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_Shoot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_Shoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_Shoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, "Shoot", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCharacter_Shoot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Shoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_Shoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerCharacter_Shoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlayerCharacter_NoRegister()
	{
		return APlayerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_APlayerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxClip_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_maxClip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_clip_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_clip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ammo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ammo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isReloading_MetaData[];
#endif
		static void NewProp_isReloading_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isReloading;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shooting_MetaData[];
#endif
		static void NewProp_shooting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_shooting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWeapon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Violence_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerCharacter_Reload, "Reload" }, // 3530144549
		{ &Z_Construct_UFunction_APlayerCharacter_Shoot, "Shoot" }, // 2054631380
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerCharacter.h" },
		{ "ModuleRelativePath", "Public/PlayerCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_maxClip_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/PlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_maxClip = { UE4CodeGen_Private::EPropertyClass::Int, "maxClip", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APlayerCharacter, maxClip), METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_maxClip_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_maxClip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_clip_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/PlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_clip = { UE4CodeGen_Private::EPropertyClass::Int, "clip", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APlayerCharacter, clip), METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_clip_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_clip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_ammo_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/PlayerCharacter.h" },
		{ "ToolTip", "variables to store current weapon's stuff" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_ammo = { UE4CodeGen_Private::EPropertyClass::Int, "ammo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APlayerCharacter, ammo), METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_ammo_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_ammo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_HitLocation_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Public/PlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_HitLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "HitLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(APlayerCharacter, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_HitLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_HitLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_isReloading_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Public/PlayerCharacter.h" },
	};
#endif
	void Z_Construct_UClass_APlayerCharacter_Statics::NewProp_isReloading_SetBit(void* Obj)
	{
		((APlayerCharacter*)Obj)->isReloading = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_isReloading = { UE4CodeGen_Private::EPropertyClass::Bool, "isReloading", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(APlayerCharacter), &Z_Construct_UClass_APlayerCharacter_Statics::NewProp_isReloading_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_isReloading_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_isReloading_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_shooting_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Public/PlayerCharacter.h" },
	};
#endif
	void Z_Construct_UClass_APlayerCharacter_Statics::NewProp_shooting_SetBit(void* Obj)
	{
		((APlayerCharacter*)Obj)->shooting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_shooting = { UE4CodeGen_Private::EPropertyClass::Bool, "shooting", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(APlayerCharacter), &Z_Construct_UClass_APlayerCharacter_Statics::NewProp_shooting_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_shooting_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_shooting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CurrentTarget_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "Public/PlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CurrentTarget = { UE4CodeGen_Private::EPropertyClass::Object, "CurrentTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APlayerCharacter, CurrentTarget), Z_Construct_UClass_AEnemyCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CurrentTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CurrentTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CurrentWeapon_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/PlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CurrentWeapon = { UE4CodeGen_Private::EPropertyClass::Object, "CurrentWeapon", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APlayerCharacter, CurrentWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CurrentWeapon_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CurrentWeapon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_maxClip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_clip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_ammo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_HitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_isReloading,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_shooting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CurrentTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CurrentWeapon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerCharacter_Statics::ClassParams = {
		&APlayerCharacter::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_APlayerCharacter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerCharacter, 2985080279);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerCharacter(Z_Construct_UClass_APlayerCharacter, &APlayerCharacter::StaticClass, TEXT("/Script/Violence_Project"), TEXT("APlayerCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
