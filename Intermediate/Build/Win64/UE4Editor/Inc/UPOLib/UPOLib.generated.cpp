// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "Private/UPOLibPrivatePCH.h"
#include "UPOLib.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1UPOLib() {}
class UScriptStruct* FHelperCapsule::StaticStruct()
{
	extern UPOLIB_API class UPackage* Z_Construct_UPackage__Script_UPOLib();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UPOLIB_API class UScriptStruct* Z_Construct_UScriptStruct_FHelperCapsule();
		extern UPOLIB_API uint32 Get_Z_Construct_UScriptStruct_FHelperCapsule_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHelperCapsule, Z_Construct_UPackage__Script_UPOLib(), TEXT("HelperCapsule"), sizeof(FHelperCapsule), Get_Z_Construct_UScriptStruct_FHelperCapsule_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHelperCapsule(FHelperCapsule::StaticStruct, TEXT("/Script/UPOLib"), TEXT("HelperCapsule"), false, nullptr, nullptr);
static struct FScriptStruct_UPOLib_StaticRegisterNativesFHelperCapsule
{
	FScriptStruct_UPOLib_StaticRegisterNativesFHelperCapsule()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HelperCapsule")),new UScriptStruct::TCppStructOps<FHelperCapsule>);
	}
} ScriptStruct_UPOLib_StaticRegisterNativesFHelperCapsule;
class UScriptStruct* FHelperBox::StaticStruct()
{
	extern UPOLIB_API class UPackage* Z_Construct_UPackage__Script_UPOLib();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UPOLIB_API class UScriptStruct* Z_Construct_UScriptStruct_FHelperBox();
		extern UPOLIB_API uint32 Get_Z_Construct_UScriptStruct_FHelperBox_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHelperBox, Z_Construct_UPackage__Script_UPOLib(), TEXT("HelperBox"), sizeof(FHelperBox), Get_Z_Construct_UScriptStruct_FHelperBox_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHelperBox(FHelperBox::StaticStruct, TEXT("/Script/UPOLib"), TEXT("HelperBox"), false, nullptr, nullptr);
static struct FScriptStruct_UPOLib_StaticRegisterNativesFHelperBox
{
	FScriptStruct_UPOLib_StaticRegisterNativesFHelperBox()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HelperBox")),new UScriptStruct::TCppStructOps<FHelperBox>);
	}
} ScriptStruct_UPOLib_StaticRegisterNativesFHelperBox;
class UScriptStruct* FHelperSphere::StaticStruct()
{
	extern UPOLIB_API class UPackage* Z_Construct_UPackage__Script_UPOLib();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UPOLIB_API class UScriptStruct* Z_Construct_UScriptStruct_FHelperSphere();
		extern UPOLIB_API uint32 Get_Z_Construct_UScriptStruct_FHelperSphere_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHelperSphere, Z_Construct_UPackage__Script_UPOLib(), TEXT("HelperSphere"), sizeof(FHelperSphere), Get_Z_Construct_UScriptStruct_FHelperSphere_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHelperSphere(FHelperSphere::StaticStruct, TEXT("/Script/UPOLib"), TEXT("HelperSphere"), false, nullptr, nullptr);
static struct FScriptStruct_UPOLib_StaticRegisterNativesFHelperSphere
{
	FScriptStruct_UPOLib_StaticRegisterNativesFHelperSphere()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HelperSphere")),new UScriptStruct::TCppStructOps<FHelperSphere>);
	}
} ScriptStruct_UPOLib_StaticRegisterNativesFHelperSphere;
	void UShapeHelperComponent::StaticRegisterNativesUShapeHelperComponent()
	{
		FNativeFunctionRegistrar::RegisterFunction(UShapeHelperComponent::StaticClass(), "IsPointInAnyBoxes",(Native)&UShapeHelperComponent::execIsPointInAnyBoxes);
		FNativeFunctionRegistrar::RegisterFunction(UShapeHelperComponent::StaticClass(), "IsPointInAnyCapsules",(Native)&UShapeHelperComponent::execIsPointInAnyCapsules);
		FNativeFunctionRegistrar::RegisterFunction(UShapeHelperComponent::StaticClass(), "IsPointInAnySpheres",(Native)&UShapeHelperComponent::execIsPointInAnySpheres);
	}
	IMPLEMENT_CLASS(UShapeHelperComponent, 2086544140);
	void UUPOLibBPLibrary::StaticRegisterNativesUUPOLibBPLibrary()
	{
		FNativeFunctionRegistrar::RegisterFunction(UUPOLibBPLibrary::StaticClass(), "IsPoinInShapeComponent",(Native)&UUPOLibBPLibrary::execIsPoinInShapeComponent);
	}
	IMPLEMENT_CLASS(UUPOLibBPLibrary, 3119212158);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API class UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API class UClass* Z_Construct_UClass_UShapeComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();

	UPOLIB_API class UScriptStruct* Z_Construct_UScriptStruct_FHelperCapsule();
	UPOLIB_API class UScriptStruct* Z_Construct_UScriptStruct_FHelperBox();
	UPOLIB_API class UScriptStruct* Z_Construct_UScriptStruct_FHelperSphere();
	UPOLIB_API class UFunction* Z_Construct_UFunction_UShapeHelperComponent_IsPointInAnyBoxes();
	UPOLIB_API class UFunction* Z_Construct_UFunction_UShapeHelperComponent_IsPointInAnyCapsules();
	UPOLIB_API class UFunction* Z_Construct_UFunction_UShapeHelperComponent_IsPointInAnySpheres();
	UPOLIB_API class UClass* Z_Construct_UClass_UShapeHelperComponent_NoRegister();
	UPOLIB_API class UClass* Z_Construct_UClass_UShapeHelperComponent();
	UPOLIB_API class UFunction* Z_Construct_UFunction_UUPOLibBPLibrary_IsPoinInShapeComponent();
	UPOLIB_API class UClass* Z_Construct_UClass_UUPOLibBPLibrary_NoRegister();
	UPOLIB_API class UClass* Z_Construct_UClass_UUPOLibBPLibrary();
	UPOLIB_API class UPackage* Z_Construct_UPackage__Script_UPOLib();
	UScriptStruct* Z_Construct_UScriptStruct_FHelperCapsule()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_UPOLib();
		extern uint32 Get_Z_Construct_UScriptStruct_FHelperCapsule_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HelperCapsule"), sizeof(FHelperCapsule), Get_Z_Construct_UScriptStruct_FHelperCapsule_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("HelperCapsule"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FHelperCapsule>, EStructFlags(0x00000001));
			UProperty* NewProp_Tag = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Tag"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(Tag, FHelperCapsule), 0x0010000000000001);
			UProperty* NewProp_Rotation = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Rotation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Rotation, FHelperCapsule), 0x0010000000000001, Z_Construct_UScriptStruct_FQuat());
			UProperty* NewProp_Radius = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Radius"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Radius, FHelperCapsule), 0x0010000000000001);
			UProperty* NewProp_HalfHeight = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("HalfHeight"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(HalfHeight, FHelperCapsule), 0x0010000000000001);
			UProperty* NewProp_Location = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Location"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Location, FHelperCapsule), 0x0010000000000001, Z_Construct_UScriptStruct_FVector());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/ShapeHelperComponent.h"));
			MetaData->SetValue(NewProp_Tag, TEXT("Category"), TEXT("HelperCapsule"));
			MetaData->SetValue(NewProp_Tag, TEXT("ModuleRelativePath"), TEXT("Classes/ShapeHelperComponent.h"));
			MetaData->SetValue(NewProp_Rotation, TEXT("Category"), TEXT("HelperCapsule"));
			MetaData->SetValue(NewProp_Rotation, TEXT("ModuleRelativePath"), TEXT("Classes/ShapeHelperComponent.h"));
			MetaData->SetValue(NewProp_Radius, TEXT("Category"), TEXT("HelperCapsule"));
			MetaData->SetValue(NewProp_Radius, TEXT("ClampMin"), TEXT("0"));
			MetaData->SetValue(NewProp_Radius, TEXT("ModuleRelativePath"), TEXT("Classes/ShapeHelperComponent.h"));
			MetaData->SetValue(NewProp_HalfHeight, TEXT("Category"), TEXT("HelperCapsule"));
			MetaData->SetValue(NewProp_HalfHeight, TEXT("ClampMin"), TEXT("0"));
			MetaData->SetValue(NewProp_HalfHeight, TEXT("ModuleRelativePath"), TEXT("Classes/ShapeHelperComponent.h"));
			MetaData->SetValue(NewProp_Location, TEXT("Category"), TEXT("HelperCapsule"));
			MetaData->SetValue(NewProp_Location, TEXT("ModuleRelativePath"), TEXT("Classes/ShapeHelperComponent.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHelperCapsule_CRC() { return 940907456U; }
	UScriptStruct* Z_Construct_UScriptStruct_FHelperBox()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_UPOLib();
		extern uint32 Get_Z_Construct_UScriptStruct_FHelperBox_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HelperBox"), sizeof(FHelperBox), Get_Z_Construct_UScriptStruct_FHelperBox_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("HelperBox"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FHelperBox>, EStructFlags(0x00000001));
			UProperty* NewProp_Tag = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Tag"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(Tag, FHelperBox), 0x0010000000000001);
			UProperty* NewProp_Rotation = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Rotation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Rotation, FHelperBox), 0x0010000000000001, Z_Construct_UScriptStruct_FQuat());
			UProperty* NewProp_Extent = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Extent"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Extent, FHelperBox), 0x0010000000000001, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_Location = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Location"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Location, FHelperBox), 0x0010000000000001, Z_Construct_UScriptStruct_FVector());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/ShapeHelperComponent.h"));
			MetaData->SetValue(NewProp_Tag, TEXT("Category"), TEXT("HelperBox"));
			MetaData->SetValue(NewProp_Tag, TEXT("ModuleRelativePath"), TEXT("Classes/ShapeHelperComponent.h"));
			MetaData->SetValue(NewProp_Rotation, TEXT("Category"), TEXT("HelperBox"));
			MetaData->SetValue(NewProp_Rotation, TEXT("ModuleRelativePath"), TEXT("Classes/ShapeHelperComponent.h"));
			MetaData->SetValue(NewProp_Extent, TEXT("Category"), TEXT("HelperBox"));
			MetaData->SetValue(NewProp_Extent, TEXT("ModuleRelativePath"), TEXT("Classes/ShapeHelperComponent.h"));
			MetaData->SetValue(NewProp_Location, TEXT("Category"), TEXT("HelperBox"));
			MetaData->SetValue(NewProp_Location, TEXT("ModuleRelativePath"), TEXT("Classes/ShapeHelperComponent.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHelperBox_CRC() { return 4066994895U; }
	UScriptStruct* Z_Construct_UScriptStruct_FHelperSphere()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_UPOLib();
		extern uint32 Get_Z_Construct_UScriptStruct_FHelperSphere_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HelperSphere"), sizeof(FHelperSphere), Get_Z_Construct_UScriptStruct_FHelperSphere_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("HelperSphere"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FHelperSphere>, EStructFlags(0x00000001));
			UProperty* NewProp_Tag = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Tag"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(Tag, FHelperSphere), 0x0010000000000001);
			UProperty* NewProp_Radius = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Radius"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Radius, FHelperSphere), 0x0010000000000001);
			UProperty* NewProp_Location = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Location"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Location, FHelperSphere), 0x0010000000000001, Z_Construct_UScriptStruct_FVector());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/ShapeHelperComponent.h"));
			MetaData->SetValue(NewProp_Tag, TEXT("Category"), TEXT("HelperSphere"));
			MetaData->SetValue(NewProp_Tag, TEXT("ModuleRelativePath"), TEXT("Classes/ShapeHelperComponent.h"));
			MetaData->SetValue(NewProp_Radius, TEXT("Category"), TEXT("HelperSphere"));
			MetaData->SetValue(NewProp_Radius, TEXT("ClampMin"), TEXT("0"));
			MetaData->SetValue(NewProp_Radius, TEXT("ModuleRelativePath"), TEXT("Classes/ShapeHelperComponent.h"));
			MetaData->SetValue(NewProp_Location, TEXT("Category"), TEXT("HelperSphere"));
			MetaData->SetValue(NewProp_Location, TEXT("ModuleRelativePath"), TEXT("Classes/ShapeHelperComponent.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHelperSphere_CRC() { return 4249232118U; }
	UFunction* Z_Construct_UFunction_UShapeHelperComponent_IsPointInAnyBoxes()
	{
		struct ShapeHelperComponent_eventIsPointInAnyBoxes_Parms
		{
			FVector point;
			int32 outIndex;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UShapeHelperComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsPointInAnyBoxes"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54C20401, 65535, sizeof(ShapeHelperComponent_eventIsPointInAnyBoxes_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, ShapeHelperComponent_eventIsPointInAnyBoxes_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, ShapeHelperComponent_eventIsPointInAnyBoxes_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, ShapeHelperComponent_eventIsPointInAnyBoxes_Parms), sizeof(bool), true);
			UProperty* NewProp_outIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("outIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(outIndex, ShapeHelperComponent_eventIsPointInAnyBoxes_Parms), 0x0010000000000180);
			UProperty* NewProp_point = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("point"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(point, ShapeHelperComponent_eventIsPointInAnyBoxes_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("ShapeHelper"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/ShapeHelperComponent.h"));
			MetaData->SetValue(NewProp_point, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UShapeHelperComponent_IsPointInAnyCapsules()
	{
		struct ShapeHelperComponent_eventIsPointInAnyCapsules_Parms
		{
			FVector point;
			int32 outIndex;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UShapeHelperComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsPointInAnyCapsules"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54C20401, 65535, sizeof(ShapeHelperComponent_eventIsPointInAnyCapsules_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, ShapeHelperComponent_eventIsPointInAnyCapsules_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, ShapeHelperComponent_eventIsPointInAnyCapsules_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, ShapeHelperComponent_eventIsPointInAnyCapsules_Parms), sizeof(bool), true);
			UProperty* NewProp_outIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("outIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(outIndex, ShapeHelperComponent_eventIsPointInAnyCapsules_Parms), 0x0010000000000180);
			UProperty* NewProp_point = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("point"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(point, ShapeHelperComponent_eventIsPointInAnyCapsules_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("ShapeHelper"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/ShapeHelperComponent.h"));
			MetaData->SetValue(NewProp_point, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UShapeHelperComponent_IsPointInAnySpheres()
	{
		struct ShapeHelperComponent_eventIsPointInAnySpheres_Parms
		{
			FVector point;
			int32 outIndex;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UShapeHelperComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsPointInAnySpheres"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54C20401, 65535, sizeof(ShapeHelperComponent_eventIsPointInAnySpheres_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, ShapeHelperComponent_eventIsPointInAnySpheres_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, ShapeHelperComponent_eventIsPointInAnySpheres_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, ShapeHelperComponent_eventIsPointInAnySpheres_Parms), sizeof(bool), true);
			UProperty* NewProp_outIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("outIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(outIndex, ShapeHelperComponent_eventIsPointInAnySpheres_Parms), 0x0010000000000180);
			UProperty* NewProp_point = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("point"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(point, ShapeHelperComponent_eventIsPointInAnySpheres_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("ShapeHelper"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/ShapeHelperComponent.h"));
			MetaData->SetValue(NewProp_point, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UShapeHelperComponent_NoRegister()
	{
		return UShapeHelperComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UShapeHelperComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USceneComponent();
			Z_Construct_UPackage__Script_UPOLib();
			OuterClass = UShapeHelperComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00080;

				OuterClass->LinkChild(Z_Construct_UFunction_UShapeHelperComponent_IsPointInAnyBoxes());
				OuterClass->LinkChild(Z_Construct_UFunction_UShapeHelperComponent_IsPointInAnyCapsules());
				OuterClass->LinkChild(Z_Construct_UFunction_UShapeHelperComponent_IsPointInAnySpheres());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#if WITH_EDITORONLY_DATA
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bDrawShapes, UShapeHelperComponent, bool);
				UProperty* NewProp_bDrawShapes = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bDrawShapes"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bDrawShapes, UShapeHelperComponent), 0x0010040800000001, CPP_BOOL_PROPERTY_BITMASK(bDrawShapes, UShapeHelperComponent), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bDrawTags, UShapeHelperComponent, bool);
				UProperty* NewProp_bDrawTags = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bDrawTags"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bDrawTags, UShapeHelperComponent), 0x0010040800000001, CPP_BOOL_PROPERTY_BITMASK(bDrawTags, UShapeHelperComponent), sizeof(bool), true);
#endif // WITH_EDITORONLY_DATA
				UProperty* NewProp_Capsules = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Capsules"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Capsules, UShapeHelperComponent), 0x0010000000000001);
				UProperty* NewProp_Capsules_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Capsules, TEXT("Capsules"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FHelperCapsule());
				UProperty* NewProp_Boxes = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Boxes"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Boxes, UShapeHelperComponent), 0x0010000000000001);
				UProperty* NewProp_Boxes_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Boxes, TEXT("Boxes"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FHelperBox());
				UProperty* NewProp_Spheres = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Spheres"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Spheres, UShapeHelperComponent), 0x0010000000000001);
				UProperty* NewProp_Spheres_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Spheres, TEXT("Spheres"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FHelperSphere());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UShapeHelperComponent_IsPointInAnyBoxes(), "IsPointInAnyBoxes"); // 574899510
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UShapeHelperComponent_IsPointInAnyCapsules(), "IsPointInAnyCapsules"); // 3764973652
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UShapeHelperComponent_IsPointInAnySpheres(), "IsPointInAnySpheres"); // 956097608
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Trigger PhysicsVolume ComponentReplication"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ShapeHelperComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/ShapeHelperComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("OnlyDefaultConstructorDeclared"), TEXT(""));
				MetaData->SetValue(NewProp_bDrawShapes, TEXT("Category"), TEXT("ShapeHelperComponent"));
				MetaData->SetValue(NewProp_bDrawShapes, TEXT("ModuleRelativePath"), TEXT("Classes/ShapeHelperComponent.h"));
				MetaData->SetValue(NewProp_bDrawTags, TEXT("Category"), TEXT("ShapeHelperComponent"));
				MetaData->SetValue(NewProp_bDrawTags, TEXT("ModuleRelativePath"), TEXT("Classes/ShapeHelperComponent.h"));
				MetaData->SetValue(NewProp_Capsules, TEXT("Category"), TEXT("ShapeHelperComponent"));
				MetaData->SetValue(NewProp_Capsules, TEXT("ModuleRelativePath"), TEXT("Classes/ShapeHelperComponent.h"));
				MetaData->SetValue(NewProp_Boxes, TEXT("Category"), TEXT("ShapeHelperComponent"));
				MetaData->SetValue(NewProp_Boxes, TEXT("ModuleRelativePath"), TEXT("Classes/ShapeHelperComponent.h"));
				MetaData->SetValue(NewProp_Spheres, TEXT("Category"), TEXT("ShapeHelperComponent"));
				MetaData->SetValue(NewProp_Spheres, TEXT("ModuleRelativePath"), TEXT("Classes/ShapeHelperComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShapeHelperComponent(Z_Construct_UClass_UShapeHelperComponent, &UShapeHelperComponent::StaticClass, TEXT("UShapeHelperComponent"), false, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShapeHelperComponent);
	UFunction* Z_Construct_UFunction_UUPOLibBPLibrary_IsPoinInShapeComponent()
	{
		struct UPOLibBPLibrary_eventIsPoinInShapeComponent_Parms
		{
			UShapeComponent* shape;
			FVector pointWS;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UUPOLibBPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsPoinInShapeComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04C42401, 65535, sizeof(UPOLibBPLibrary_eventIsPoinInShapeComponent_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, UPOLibBPLibrary_eventIsPoinInShapeComponent_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, UPOLibBPLibrary_eventIsPoinInShapeComponent_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, UPOLibBPLibrary_eventIsPoinInShapeComponent_Parms), sizeof(bool), true);
			UProperty* NewProp_pointWS = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("pointWS"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(pointWS, UPOLibBPLibrary_eventIsPoinInShapeComponent_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_shape = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("shape"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(shape, UPOLibBPLibrary_eventIsPoinInShapeComponent_Parms), 0x0010000000080080, Z_Construct_UClass_UShapeComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Helper"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/UPOLibBPLibrary.h"));
			MetaData->SetValue(NewProp_pointWS, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_shape, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUPOLibBPLibrary_NoRegister()
	{
		return UUPOLibBPLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UUPOLibBPLibrary()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_UPOLib();
			OuterClass = UUPOLibBPLibrary::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20000080;

				OuterClass->LinkChild(Z_Construct_UFunction_UUPOLibBPLibrary_IsPoinInShapeComponent());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UUPOLibBPLibrary_IsPoinInShapeComponent(), "IsPoinInShapeComponent"); // 4157564392
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("UPOLibBPLibrary.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/UPOLibBPLibrary.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUPOLibBPLibrary(Z_Construct_UClass_UUPOLibBPLibrary, &UUPOLibBPLibrary::StaticClass, TEXT("UUPOLibBPLibrary"), false, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUPOLibBPLibrary);
	UPackage* Z_Construct_UPackage__Script_UPOLib()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/UPOLib")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000080);
			FGuid Guid;
			Guid.A = 0x7AF8BC15;
			Guid.B = 0xA9B29DF9;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
