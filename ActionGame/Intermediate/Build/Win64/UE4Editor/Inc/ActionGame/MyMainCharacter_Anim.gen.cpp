// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionGame/MyMainCharacter_Anim.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyMainCharacter_Anim() {}
// Cross Module References
	ACTIONGAME_API UClass* Z_Construct_UClass_UMyMainCharacter_Anim_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UMyMainCharacter_Anim();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
	ACTIONGAME_API UClass* Z_Construct_UClass_AMainCharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMyMainCharacter_Anim::execUpdateAnimationProperties)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAnimationProperties(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	void UMyMainCharacter_Anim::StaticRegisterNativesUMyMainCharacter_Anim()
	{
		UClass* Class = UMyMainCharacter_Anim::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateAnimationProperties", &UMyMainCharacter_Anim::execUpdateAnimationProperties },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyMainCharacter_Anim_UpdateAnimationProperties_Statics
	{
		struct MyMainCharacter_Anim_eventUpdateAnimationProperties_Parms
		{
			float DeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMyMainCharacter_Anim_UpdateAnimationProperties_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyMainCharacter_Anim_eventUpdateAnimationProperties_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyMainCharacter_Anim_UpdateAnimationProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyMainCharacter_Anim_UpdateAnimationProperties_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyMainCharacter_Anim_UpdateAnimationProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "//?A?j???[?V?????X?V\n" },
		{ "ModuleRelativePath", "MyMainCharacter_Anim.h" },
		{ "ToolTip", "?A?j???[?V?????X?V" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyMainCharacter_Anim_UpdateAnimationProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyMainCharacter_Anim, nullptr, "UpdateAnimationProperties", nullptr, nullptr, sizeof(MyMainCharacter_Anim_eventUpdateAnimationProperties_Parms), Z_Construct_UFunction_UMyMainCharacter_Anim_UpdateAnimationProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyMainCharacter_Anim_UpdateAnimationProperties_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyMainCharacter_Anim_UpdateAnimationProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyMainCharacter_Anim_UpdateAnimationProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyMainCharacter_Anim_UpdateAnimationProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyMainCharacter_Anim_UpdateAnimationProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMyMainCharacter_Anim_NoRegister()
	{
		return UMyMainCharacter_Anim::StaticClass();
	}
	struct Z_Construct_UClass_UMyMainCharacter_Anim_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAccelerating_MetaData[];
#endif
		static void NewProp_bIsAccelerating_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAccelerating;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInAir_MetaData[];
#endif
		static void NewProp_bIsInAir_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInAir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyChar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyChar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyMainCharacter_Anim_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyMainCharacter_Anim_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyMainCharacter_Anim_UpdateAnimationProperties, "UpdateAnimationProperties" }, // 969925782
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyMainCharacter_Anim_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "MyMainCharacter_Anim.h" },
		{ "ModuleRelativePath", "MyMainCharacter_Anim.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyMainCharacter_Anim_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "//?X?s?[?h?l\n" },
		{ "ModuleRelativePath", "MyMainCharacter_Anim.h" },
		{ "ToolTip", "?X?s?[?h?l" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyMainCharacter_Anim_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyMainCharacter_Anim, Speed), METADATA_PARAMS(Z_Construct_UClass_UMyMainCharacter_Anim_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyMainCharacter_Anim_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyMainCharacter_Anim_Statics::NewProp_bIsAccelerating_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "//???????\xe9\x82\xa9?\xc7\x82???\n" },
		{ "ModuleRelativePath", "MyMainCharacter_Anim.h" },
		{ "ToolTip", "???????\xe9\x82\xa9?\xc7\x82???" },
	};
#endif
	void Z_Construct_UClass_UMyMainCharacter_Anim_Statics::NewProp_bIsAccelerating_SetBit(void* Obj)
	{
		((UMyMainCharacter_Anim*)Obj)->bIsAccelerating = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyMainCharacter_Anim_Statics::NewProp_bIsAccelerating = { "bIsAccelerating", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMyMainCharacter_Anim), &Z_Construct_UClass_UMyMainCharacter_Anim_Statics::NewProp_bIsAccelerating_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMyMainCharacter_Anim_Statics::NewProp_bIsAccelerating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyMainCharacter_Anim_Statics::NewProp_bIsAccelerating_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyMainCharacter_Anim_Statics::NewProp_bIsInAir_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "//?\xf3\x92\x86\x82\xc9\x95????\xc4\x82??\xe9\x82\xa9?\xc7\x82???\n" },
		{ "ModuleRelativePath", "MyMainCharacter_Anim.h" },
		{ "ToolTip", "?\xf3\x92\x86\x82\xc9\x95????\xc4\x82??\xe9\x82\xa9?\xc7\x82???" },
	};
#endif
	void Z_Construct_UClass_UMyMainCharacter_Anim_Statics::NewProp_bIsInAir_SetBit(void* Obj)
	{
		((UMyMainCharacter_Anim*)Obj)->bIsInAir = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyMainCharacter_Anim_Statics::NewProp_bIsInAir = { "bIsInAir", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMyMainCharacter_Anim), &Z_Construct_UClass_UMyMainCharacter_Anim_Statics::NewProp_bIsInAir_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMyMainCharacter_Anim_Statics::NewProp_bIsInAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyMainCharacter_Anim_Statics::NewProp_bIsInAir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyMainCharacter_Anim_Statics::NewProp_MyChar_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "//?A?j???[?V?????\xce\x8f\xdb\x83L?????N?^?[\n" },
		{ "ModuleRelativePath", "MyMainCharacter_Anim.h" },
		{ "ToolTip", "?A?j???[?V?????\xce\x8f\xdb\x83L?????N?^?[" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyMainCharacter_Anim_Statics::NewProp_MyChar = { "MyChar", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyMainCharacter_Anim, MyChar), Z_Construct_UClass_AMainCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyMainCharacter_Anim_Statics::NewProp_MyChar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyMainCharacter_Anim_Statics::NewProp_MyChar_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyMainCharacter_Anim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyMainCharacter_Anim_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyMainCharacter_Anim_Statics::NewProp_bIsAccelerating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyMainCharacter_Anim_Statics::NewProp_bIsInAir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyMainCharacter_Anim_Statics::NewProp_MyChar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyMainCharacter_Anim_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyMainCharacter_Anim>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyMainCharacter_Anim_Statics::ClassParams = {
		&UMyMainCharacter_Anim::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMyMainCharacter_Anim_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyMainCharacter_Anim_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMyMainCharacter_Anim_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyMainCharacter_Anim_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyMainCharacter_Anim()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyMainCharacter_Anim_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyMainCharacter_Anim, 2563801863);
	template<> ACTIONGAME_API UClass* StaticClass<UMyMainCharacter_Anim>()
	{
		return UMyMainCharacter_Anim::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyMainCharacter_Anim(Z_Construct_UClass_UMyMainCharacter_Anim, &UMyMainCharacter_Anim::StaticClass, TEXT("/Script/ActionGame"), TEXT("UMyMainCharacter_Anim"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyMainCharacter_Anim);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
