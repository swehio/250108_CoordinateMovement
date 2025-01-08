// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cordinate_Movement/CordinateMovement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCordinateMovement() {}

// Begin Cross Module References
CORDINATE_MOVEMENT_API UClass* Z_Construct_UClass_ACordinateMovement();
CORDINATE_MOVEMENT_API UClass* Z_Construct_UClass_ACordinateMovement_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Cordinate_Movement();
// End Cross Module References

// Begin Class ACordinateMovement
void ACordinateMovement::StaticRegisterNativesACordinateMovement()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACordinateMovement);
UClass* Z_Construct_UClass_ACordinateMovement_NoRegister()
{
	return ACordinateMovement::StaticClass();
}
struct Z_Construct_UClass_ACordinateMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CordinateMovement.h" },
		{ "ModuleRelativePath", "CordinateMovement.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACordinateMovement>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACordinateMovement_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Cordinate_Movement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACordinateMovement_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACordinateMovement_Statics::ClassParams = {
	&ACordinateMovement::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACordinateMovement_Statics::Class_MetaDataParams), Z_Construct_UClass_ACordinateMovement_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACordinateMovement()
{
	if (!Z_Registration_Info_UClass_ACordinateMovement.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACordinateMovement.OuterSingleton, Z_Construct_UClass_ACordinateMovement_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACordinateMovement.OuterSingleton;
}
template<> CORDINATE_MOVEMENT_API UClass* StaticClass<ACordinateMovement>()
{
	return ACordinateMovement::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACordinateMovement);
ACordinateMovement::~ACordinateMovement() {}
// End Class ACordinateMovement

// Begin Registration
struct Z_CompiledInDeferFile_FID_Cordinate_Movement_Source_Cordinate_Movement_CordinateMovement_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACordinateMovement, ACordinateMovement::StaticClass, TEXT("ACordinateMovement"), &Z_Registration_Info_UClass_ACordinateMovement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACordinateMovement), 2976433543U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Cordinate_Movement_Source_Cordinate_Movement_CordinateMovement_h_184307672(TEXT("/Script/Cordinate_Movement"),
	Z_CompiledInDeferFile_FID_Cordinate_Movement_Source_Cordinate_Movement_CordinateMovement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Cordinate_Movement_Source_Cordinate_Movement_CordinateMovement_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
