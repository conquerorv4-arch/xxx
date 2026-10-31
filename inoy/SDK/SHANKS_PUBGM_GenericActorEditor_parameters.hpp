#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:34:48 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GenericActorEditor.ActorEditorAnimInstanceBase.ClearAnimReferences
struct UActorEditorAnimInstanceBase_ClearAnimReferences_Params
{
};

// Function GenericActorEditor.ActorEditorCharacterMovementComponent.OnRep_CharacterMovementSyncData
struct UActorEditorCharacterMovementComponent_OnRep_CharacterMovementSyncData_Params
{
};

// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.UnregisterComponent
struct UActorEditorComponentBlueprintLibrary_UnregisterComponent_Params
{
	class UActorComponent*                             InComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.SetWidgetOpacityFromTexture
struct UActorEditorComponentBlueprintLibrary_SetWidgetOpacityFromTexture_Params
{
	class UWidgetComponent*                            InComp;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Opacity;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.SetWidgetDrawAtDesiredSize
struct UActorEditorComponentBlueprintLibrary_SetWidgetDrawAtDesiredSize_Params
{
	class UWidgetComponent*                            InComp;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bDrawAtDesiredSize;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.SetParticleSystemAutoDestroy
struct UActorEditorComponentBlueprintLibrary_SetParticleSystemAutoDestroy_Params
{
	class UParticleSystemComponent*                    InComp;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bAutoDestroy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.SetMobility
struct UActorEditorComponentBlueprintLibrary_SetMobility_Params
{
	class USceneComponent*                             InSceneComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EComponentMobility>                    NewMobility;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.SetComponentAutoActivate
struct UActorEditorComponentBlueprintLibrary_SetComponentAutoActivate_Params
{
	class UActorComponent*                             InComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bAutoActivate;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.SetActorRootComponent
struct UActorEditorComponentBlueprintLibrary_SetActorRootComponent_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             NewRootComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.ReregisterComponent
struct UActorEditorComponentBlueprintLibrary_ReregisterComponent_Params
{
	class UActorComponent*                             InComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.RegisterComponent
struct UActorEditorComponentBlueprintLibrary_RegisterComponent_Params
{
	class UActorComponent*                             InComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.IsSimulatingPhysics
struct UActorEditorComponentBlueprintLibrary_IsSimulatingPhysics_Params
{
	class UPrimitiveComponent*                         InComp;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.IsComponentRegistered
struct UActorEditorComponentBlueprintLibrary_IsComponentRegistered_Params
{
	class UActorComponent*                             InComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.GetParticleSystemAutoDestroy
struct UActorEditorComponentBlueprintLibrary_GetParticleSystemAutoDestroy_Params
{
	class UParticleSystemComponent*                    InComp;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.GetFloatParameter
struct UActorEditorComponentBlueprintLibrary_GetFloatParameter_Params
{
	class UParticleSystemComponent*                    InComp;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       InName;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.GetComponentBounds
struct UActorEditorComponentBlueprintLibrary_GetComponentBounds_Params
{
	class USceneComponent*                             InSceneComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // (Parm, OutParm, IsPlainOldData)
	float                                              SphereRadius;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.GetCollisionTraceFlag
struct UActorEditorComponentBlueprintLibrary_GetCollisionTraceFlag_Params
{
	class UPrimitiveComponent*                         InComp;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ECollisionTraceFlag>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.GetBoneTransform
struct UActorEditorComponentBlueprintLibrary_GetBoneTransform_Params
{
	class USkinnedMeshComponent*                       InComp;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BoneIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  LocalToWorld;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.GetBoneLocation
struct UActorEditorComponentBlueprintLibrary_GetBoneLocation_Params
{
	class USkinnedMeshComponent*                       InComp;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneSpaces>                           Space;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.GetActorRootComponent
struct UActorEditorComponentBlueprintLibrary_GetActorRootComponent_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.ChangeRootComponent
struct UActorEditorComponentBlueprintLibrary_ChangeRootComponent_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             NewRootComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorDisableTransformReplicationInterface.SetDisableTransformReplication
struct UActorEditorDisableTransformReplicationInterface_SetDisableTransformReplication_Params
{
	bool                                               bInDisable;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorParticleSystemComponent.GetEmitterInstanceNum
struct UActorEditorParticleSystemComponent_GetEmitterInstanceNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorSkeletalMeshComponent.SetSkeletalModelPreset
struct UActorEditorSkeletalMeshComponent_SetSkeletalModelPreset_Params
{
	struct FString                                     ModePresetIDStr;                                          // (Parm, ZeroConstructor)
};

// Function GenericActorEditor.ActorEditorSkeletalMeshComponent.PlaySkeletalAnimationPreset
struct UActorEditorSkeletalMeshComponent_PlaySkeletalAnimationPreset_Params
{
	struct FString                                     AnimationPresetIDStr;                                     // (Parm, ZeroConstructor)
};

// Function GenericActorEditor.ActorEditorStaticMeshComponent.SetStaticMeshPath
struct UActorEditorStaticMeshComponent_SetStaticMeshPath_Params
{
	struct FString                                     InMeshPath;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorStaticMeshComponent.OnRep_StaticMeshPath
struct UActorEditorStaticMeshComponent_OnRep_StaticMeshPath_Params
{
	struct FString                                     OldPath;                                                  // (Parm, ZeroConstructor)
};

}

