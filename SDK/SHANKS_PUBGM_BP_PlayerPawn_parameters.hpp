#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:36:05 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PlayerPawn.BP_PlayerPawn_C.ShowScreenDamage
struct ABP_PlayerPawn_C_ShowScreenDamage_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDamageType>                           DamageEventType;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetBattleItemHandlePath
struct ABP_PlayerPawn_C_GetBattleItemHandlePath_Params
{
	int                                                ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     EmotePath;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.RefreshWeaponSight
struct ABP_PlayerPawn_C_RefreshWeaponSight_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.HandleOnLandedSetAutoSprint
struct ABP_PlayerPawn_C_HandleOnLandedSetAutoSprint_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ChangeParticleEffect
struct ABP_PlayerPawn_C_ChangeParticleEffect_Params
{
	class UParticleSystemComponent*                    Particle;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     _3DScale;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.SpawnEmitterEffect
struct ABP_PlayerPawn_C_SpawnEmitterEffect_Params
{
	struct FVector                                     RelativeLocation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UParticleSystem*                             PSRef;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             AttachParent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RelativeScale;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetEmoteHandlePath
struct ABP_PlayerPawn_C_GetEmoteHandlePath_Params
{
	int*                                               ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.Replay_IsEnemyFrameUIExisted
struct ABP_PlayerPawn_C_Replay_IsEnemyFrameUIExisted_Params
{
	bool                                               bIsExisted;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.HandleOnLanded
struct ABP_PlayerPawn_C_HandleOnLanded_Params
{
	float                                              ForceLandTime;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetGameModeState
struct ABP_PlayerPawn_C_GetGameModeState_Params
{
	struct FName                                       CurModeState;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.SetTpCameraFov
struct ABP_PlayerPawn_C_SetTpCameraFov_Params
{
	float                                              FOV;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.SetCapsuleParentBounds
struct ABP_PlayerPawn_C_SetCapsuleParentBounds_Params
{
	bool                                               UseParentBounds;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ClearDecalBakingRTCache
struct ABP_PlayerPawn_C_ClearDecalBakingRTCache_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.IsAngledSightAvailable
struct ABP_PlayerPawn_C_IsAngledSightAvailable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.RefreshAngledSightUI
struct ABP_PlayerPawn_C_RefreshAngledSightUI_Params
{
	bool                                               HaveAngledSight;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAngledSight;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ShowAngledSightState
struct ABP_PlayerPawn_C_ShowAngledSightState_Params
{
	bool                                               IsAngled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetAngledSightRotator
struct ABP_PlayerPawn_C_GetAngledSightRotator_Params
{
	class ASTExtraShootWeapon*                         NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    NewParam1;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.AngledSightAnimLogic
struct ABP_PlayerPawn_C_AngledSightAnimLogic_Params
{
	TEnumAsByte<EAngledSightType>                      Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.AngledSightAnimUpdate
struct ABP_PlayerPawn_C_AngledSightAnimUpdate_Params
{
	float                                              InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsOnlyTurn;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.Replay_CreateEnemyFrameUI
struct ABP_PlayerPawn_C_Replay_CreateEnemyFrameUI_Params
{
	bool                                               isPlayingCompletePlayback;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               is_enemy;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.Replay_SetVisiableOfFrameUI
struct ABP_PlayerPawn_C_Replay_SetVisiableOfFrameUI_Params
{
	bool                                               is_Visiable;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.UpdateEmoteWeaponIdInfo
struct ABP_PlayerPawn_C_UpdateEmoteWeaponIdInfo_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.AllowWater
struct ABP_PlayerPawn_C_AllowWater_Params
{
	bool                                               bCanEnter;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ShouldRedBlood
struct ABP_PlayerPawn_C_ShouldRedBlood_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.CheckHasVehicleAvatar
struct ABP_PlayerPawn_C_CheckHasVehicleAvatar_Params
{
	class ASTExtraVehicleBase*                         InVehicle;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ASTExtraBaseCharacter*                       PlayerCharacter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InItemID;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ChangeCurVehicleAvatar
struct ABP_PlayerPawn_C_ChangeCurVehicleAvatar_Params
{
	class ASTExtraVehicleBase*                         InVehicle;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.HandleOnChangedVehicleSeat
struct ABP_PlayerPawn_C_HandleOnChangedVehicleSeat_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetMasterBoneComponent
struct ABP_PlayerPawn_C_GetMasterBoneComponent_Params
{
	class UMeshComponent*                              MasterBoneComponent;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.InitDefaultAvatarByResID
struct ABP_PlayerPawn_C_InitDefaultAvatarByResID_Params
{
	int                                                AGender;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Head;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                hair;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetGrenadeCameraShakeByDir
struct ABP_PlayerPawn_C_GetGrenadeCameraShakeByDir_Params
{
	struct FVector                                     ImpulseDir;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UClass*                                      RetVar;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetEmoteHandle
struct ABP_PlayerPawn_C_GetEmoteHandle_Params
{
	int*                                               ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBackpackEmoteHandle*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetShootWeaponNameByWeapon
struct ABP_PlayerPawn_C_GetShootWeaponNameByWeapon_Params
{
	int*                                               ItemDefineID;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetThirdPersonCamera
struct ABP_PlayerPawn_C_GetThirdPersonCamera_Params
{
	class UCameraComponent*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetThirdPersonSpringArm
struct ABP_PlayerPawn_C_GetThirdPersonSpringArm_Params
{
	class USpringArmComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetFPPCamera
struct ABP_PlayerPawn_C_GetFPPCamera_Params
{
	class UCameraComponent*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetFPPSpringArm
struct ABP_PlayerPawn_C_GetFPPSpringArm_Params
{
	class USpringArmComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetFirstPersonCamera
struct ABP_PlayerPawn_C_GetFirstPersonCamera_Params
{
	class UCameraComponent*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetFirstPersonSpringArm
struct ABP_PlayerPawn_C_GetFirstPersonSpringArm_Params
{
	class USpringArmComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetScopeCamera
struct ABP_PlayerPawn_C_GetScopeCamera_Params
{
	class UCameraComponent*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetScopeSpringArm
struct ABP_PlayerPawn_C_GetScopeSpringArm_Params
{
	class USpringArmComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ShouldAutoScopeWhenPeek
struct ABP_PlayerPawn_C_ShouldAutoScopeWhenPeek_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetControllerViewCamera
struct ABP_PlayerPawn_C_GetControllerViewCamera_Params
{
	class UCameraComponent*                            Camera;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.HandleOnDetachedVehicle
struct ABP_PlayerPawn_C_HandleOnDetachedVehicle_Params
{
	class ASTExtraVehicleBase*                         NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.HandleOnAttachedVehicle
struct ABP_PlayerPawn_C_HandleOnAttachedVehicle_Params
{
	class ASTExtraVehicleBase*                         InVehicle;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetActiveSpringArm
struct ABP_PlayerPawn_C_GetActiveSpringArm_Params
{
	class USpringArmComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.AimInterupted
struct ABP_PlayerPawn_C_AimInterupted_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetWeapon
struct ABP_PlayerPawn_C_GetWeapon_Params
{
	struct FVector                                     NewParam;                                                 // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    NewParam1;                                                // (Parm, OutParm, IsPlainOldData)
	bool                                               bHaveWeapon;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ResetBPCameraSetting
struct ABP_PlayerPawn_C_ResetBPCameraSetting_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ShowDebugArrow
struct ABP_PlayerPawn_C_ShowDebugArrow_Params
{
	class USceneComponent*                             self2;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    InRot;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.IsAutonomous
struct ABP_PlayerPawn_C_IsAutonomous_Params
{
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.PickUp
struct ABP_PlayerPawn_C_PickUp_Params
{
	class APickUpWrapperActor*                         NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.DoPickUpTarget
struct ABP_PlayerPawn_C_DoPickUpTarget_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.RotateMesh
struct ABP_PlayerPawn_C_RotateMesh_Params
{
	struct FRotator                                    NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.SetAllCollisionEnabled
struct ABP_PlayerPawn_C_SetAllCollisionEnabled_Params
{
	bool                                               bEnable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.MoveOutScope
struct ABP_PlayerPawn_C_MoveOutScope_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.MoveInScope
struct ABP_PlayerPawn_C_MoveInScope_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.Reload
struct ABP_PlayerPawn_C_Reload_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.SwitchCrouch
struct ABP_PlayerPawn_C_SwitchCrouch_Params
{
	TEnumAsByte<ESTEPoseState>                         NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESTEPoseState>                         preState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.UserConstructionScript
struct ABP_PlayerPawn_C_UserConstructionScript_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ScopeTimeline__FinishedFunc
struct ABP_PlayerPawn_C_ScopeTimeline__FinishedFunc_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ScopeTimeline__UpdateFunc
struct ABP_PlayerPawn_C_ScopeTimeline__UpdateFunc_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnPetOwnerPossessed
struct ABP_PlayerPawn_C_OnPetOwnerPossessed_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ReceiveBeginPlay
struct ABP_PlayerPawn_C_ReceiveBeginPlay_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.BPNotifyStartDying
struct ABP_PlayerPawn_C_BPNotifyStartDying_Params
{
	class AController**                                Killer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 KillingHitInfo;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector*                                    KillingHitImpulseDir;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UClass**                                     KillingHitDamageType;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ReloadEvent
struct ABP_PlayerPawn_C_ReloadEvent_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnEquipWeapon
struct ABP_PlayerPawn_C_OnEquipWeapon_Params
{
	TEnumAsByte<ESurviveWeaponPropSlot>*               Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnNotifyHurt
struct ABP_PlayerPawn_C_OnNotifyHurt_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnLanded
struct ABP_PlayerPawn_C_OnLanded_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnPoseStateChange
struct ABP_PlayerPawn_C_OnPoseStateChange_Params
{
	TEnumAsByte<ESTEPoseState>*                        LastState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESTEPoseState>*                        CurState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.BPReceiveDamage
struct ABP_PlayerPawn_C_BPReceiveDamage_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDamageType>*                          DamageEventType;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ParachuteOnWater
struct ABP_PlayerPawn_C_ParachuteOnWater_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnUnEquipWeapon
struct ABP_PlayerPawn_C_OnUnEquipWeapon_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.PawnVaultServerBluePrint
struct ABP_PlayerPawn_C_PawnVaultServerBluePrint_Params
{
	float*                                             dis;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Height;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Length;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    VaultKey;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector*                                    StartPos;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor**                                     checkActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             crossblockMaxFall;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             crossblockMaxDis;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitPoint;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor**                                     WindowActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   MoveDir;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.PawnVaultAllBluePrint
struct ABP_PlayerPawn_C_PawnVaultAllBluePrint_Params
{
	float*                                             dis;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Height;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Length;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    VaultKey;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector*                                    StartPos;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor**                                     checkActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             crossblockMaxFall;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             crossblockMaxDis;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitPoint;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator*                                   MoveDir;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ScopeInStop
struct ABP_PlayerPawn_C_ScopeInStop_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.PlayScopeInTimeline
struct ABP_PlayerPawn_C_PlayScopeInTimeline_Params
{
	float                                              Rate;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.BPReceiveRadialDamage
struct ABP_PlayerPawn_C_BPReceiveRadialDamage_Params
{
	float*                                             DamageReceived;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Origin;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             Radius;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    ImpulseDir;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float*                                             CamerShakeScale;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ReceivePossessed
struct ABP_PlayerPawn_C_ReceivePossessed_Params
{
	class AController**                                NewController;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ParachutePlaySound
struct ABP_PlayerPawn_C_ParachutePlaySound_Params
{
	class UAkAudioEvent**                              LocalAkEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent**                              RemoteAkEvent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnWeaponEquipmentUpdate
struct ABP_PlayerPawn_C_OnWeaponEquipmentUpdate_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.BindAndExecStateChanged
struct ABP_PlayerPawn_C_BindAndExecStateChanged_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.StateEnterHandler_Event_1
struct ABP_PlayerPawn_C_StateEnterHandler_Event_1_Params
{
	EPawnState                                         State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnHitByCake
struct ABP_PlayerPawn_C_OnHitByCake_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.EnablePet
struct ABP_PlayerPawn_C_EnablePet_Params
{
	bool*                                              Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnEnterStateForBp
struct ABP_PlayerPawn_C_OnEnterStateForBp_Params
{
	EPawnState*                                        State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnLeaveStateForBp
struct ABP_PlayerPawn_C_OnLeaveStateForBp_Params
{
	EPawnState*                                        State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ReceiveDestroyed
struct ABP_PlayerPawn_C_ReceiveDestroyed_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.PawnVaultServerStopCheckBluePrint
struct ABP_PlayerPawn_C_PawnVaultServerStopCheckBluePrint_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.PawnVaultStopBluePrint
struct ABP_PlayerPawn_C_PawnVaultStopBluePrint_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.SwitchSightAngledLocal
struct ABP_PlayerPawn_C_SwitchSightAngledLocal_Params
{
	TEnumAsByte<EAngledSightType>*                     Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsOnlyTurn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.DoAngledSight
struct ABP_PlayerPawn_C_DoAngledSight_Params
{
	bool                                               IsPush;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.DoNormalSight
struct ABP_PlayerPawn_C_DoNormalSight_Params
{
	bool                                               IsPush;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.StopSwitchAngledSight
struct ABP_PlayerPawn_C_StopSwitchAngledSight_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.CustomEvent_4
struct ABP_PlayerPawn_C_CustomEvent_4_Params
{
	class ASTExtraShootWeapon*                         Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EWeaponAttachmentSocketType                        Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEquip;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.CustomEvent_1
struct ABP_PlayerPawn_C_CustomEvent_1_Params
{
	bool                                               bIsBegin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnVehicleStateChange
struct ABP_PlayerPawn_C_OnVehicleStateChange_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnBPStateCheckIn
struct ABP_PlayerPawn_C_OnBPStateCheckIn_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.LuaReceiveBeginPlay
struct ABP_PlayerPawn_C_LuaReceiveBeginPlay_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.SwitchRearSight
struct ABP_PlayerPawn_C_SwitchRearSight_Params
{
	int                                                PrevIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    AngleRotator;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.BPOnRespawned
struct ABP_PlayerPawn_C_BPOnRespawned_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.RemoveRemainingCameraBlood
struct ABP_PlayerPawn_C_RemoveRemainingCameraBlood_Params
{
	int                                                SeatType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.DoWeaponSight
struct ABP_PlayerPawn_C_DoWeaponSight_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.SetWeaponSightStateLocal
struct ABP_PlayerPawn_C_SetWeaponSightStateLocal_Params
{
	bool*                                              IsOpenWeaponSight;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.RearSightTimeLineUpdate
struct ABP_PlayerPawn_C_RearSightTimeLineUpdate_Params
{
	float*                                             Alpha;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.RearSightTimeLineFinish
struct ABP_PlayerPawn_C_RearSightTimeLineFinish_Params
{
	int*                                               InRearSightNewIndex;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.AngleSightTimeLineUpdate
struct ABP_PlayerPawn_C_AngleSightTimeLineUpdate_Params
{
	float*                                             Alpha;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.AngleSightTimeLineFinish
struct ABP_PlayerPawn_C_AngleSightTimeLineFinish_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.DoAutoReloadCurrentWeapon
struct ABP_PlayerPawn_C_DoAutoReloadCurrentWeapon_Params
{
	class ASTExtraShootWeapon**                        ShootWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ExecuteUbergraph_BP_PlayerPawn
struct ABP_PlayerPawn_C_ExecuteUbergraph_BP_PlayerPawn_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnCakePlacement__DelegateSignature
struct ABP_PlayerPawn_C_OnCakePlacement__DelegateSignature_Params
{
	bool                                               Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

