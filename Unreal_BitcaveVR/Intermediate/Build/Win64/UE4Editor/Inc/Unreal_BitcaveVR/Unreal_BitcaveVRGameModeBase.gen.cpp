// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Unreal_BitcaveVR/Unreal_BitcaveVRGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnreal_BitcaveVRGameModeBase() {}
// Cross Module References
	UNREAL_BITCAVEVR_API UClass* Z_Construct_UClass_AUnreal_BitcaveVRGameModeBase_NoRegister();
	UNREAL_BITCAVEVR_API UClass* Z_Construct_UClass_AUnreal_BitcaveVRGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Unreal_BitcaveVR();
// End Cross Module References
	void AUnreal_BitcaveVRGameModeBase::StaticRegisterNativesAUnreal_BitcaveVRGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AUnreal_BitcaveVRGameModeBase_NoRegister()
	{
		return AUnreal_BitcaveVRGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUnreal_BitcaveVRGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnreal_BitcaveVRGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Unreal_BitcaveVR,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnreal_BitcaveVRGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Unreal_BitcaveVRGameModeBase.h" },
		{ "ModuleRelativePath", "Unreal_BitcaveVRGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnreal_BitcaveVRGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnreal_BitcaveVRGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnreal_BitcaveVRGameModeBase_Statics::ClassParams = {
		&AUnreal_BitcaveVRGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUnreal_BitcaveVRGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnreal_BitcaveVRGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnreal_BitcaveVRGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnreal_BitcaveVRGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnreal_BitcaveVRGameModeBase, 982862587);
	template<> UNREAL_BITCAVEVR_API UClass* StaticClass<AUnreal_BitcaveVRGameModeBase>()
	{
		return AUnreal_BitcaveVRGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnreal_BitcaveVRGameModeBase(Z_Construct_UClass_AUnreal_BitcaveVRGameModeBase, &AUnreal_BitcaveVRGameModeBase::StaticClass, TEXT("/Script/Unreal_BitcaveVR"), TEXT("AUnreal_BitcaveVRGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnreal_BitcaveVRGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
