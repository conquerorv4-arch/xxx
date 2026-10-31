#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:36:29 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.UpdateCameraLocation
struct ABP_PlayerLobbyPawn_C_UpdateCameraLocation_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetCompRotate
struct ABP_PlayerLobbyPawn_C_SetCompRotate_Params
{
	class USceneComponent*                             RotateComp;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rotate;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetAddCharacterWeaponAnimListHandle
struct ABP_PlayerLobbyPawn_C_SetAddCharacterWeaponAnimListHandle_Params
{
	TArray<struct FLobbyCharacterWeaponAnimData>       addAnimData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CharEquipWeaponPendant
struct ABP_PlayerLobbyPawn_C_CharEquipWeaponPendant_Params
{
	int                                                WeaponId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EWeaponPendantSocketType                           PendantSocketType;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.WeaponAllAssetLoadFinish
struct ABP_PlayerLobbyPawn_C_WeaponAllAssetLoadFinish_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CharUnEquipWeaponByResId
struct ABP_PlayerLobbyPawn_C_CharUnEquipWeaponByResId_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CharUnEquipExtraWeapon
struct ABP_PlayerLobbyPawn_C_CharUnEquipExtraWeapon_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetForceUseDefaultIdle
struct ABP_PlayerLobbyPawn_C_SetForceUseDefaultIdle_Params
{
	bool                                               Force;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.UpdateClothInten
struct ABP_PlayerLobbyPawn_C_UpdateClothInten_Params
{
	float                                              leten;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.UpdateClothMatParam
struct ABP_PlayerLobbyPawn_C_UpdateClothMatParam_Params
{
	float                                              RotateSpeed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.StopActionCamera
struct ABP_PlayerLobbyPawn_C_StopActionCamera_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.RotateOnTickInternal
struct ABP_PlayerLobbyPawn_C_RotateOnTickInternal_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetCurrentActionID
struct ABP_PlayerLobbyPawn_C_GetCurrentActionID_Params
{
	int                                                ActionID;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnAvatarAllMeshLoaded
struct ABP_PlayerLobbyPawn_C_OnAvatarAllMeshLoaded_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.TryRotateAvatar
struct ABP_PlayerLobbyPawn_C_TryRotateAvatar_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetAvatarVisibleForEmote
struct ABP_PlayerLobbyPawn_C_SetAvatarVisibleForEmote_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.RequestWeaponDIYData
struct ABP_PlayerLobbyPawn_C_RequestWeaponDIYData_Params
{
	struct FString                                     InPlayerUID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                WeaponAvatarID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InDIYPlanID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetIsMVPMotion
struct ABP_PlayerLobbyPawn_C_SetIsMVPMotion_Params
{
	bool                                               isMVPMotion;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.InitDefaultAvatarByResID
struct ABP_PlayerLobbyPawn_C_InitDefaultAvatarByResID_Params
{
	int                                                AGender;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Head;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                hair;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetClothAnimDyAlphaInst
struct ABP_PlayerLobbyPawn_C_SetClothAnimDyAlphaInst_Params
{
	float                                              Alpha;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetClothAnimDyAlphaGrad
struct ABP_PlayerLobbyPawn_C_SetClothAnimDyAlphaGrad_Params
{
	float                                              Alpha;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetClothAnimDyAlpha
struct ABP_PlayerLobbyPawn_C_SetClothAnimDyAlpha_Params
{
	float                                              Alpha;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.RotateOnTick
struct ABP_PlayerLobbyPawn_C_RotateOnTick_Params
{
	float                                              RotateTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TargetRotation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnEndActionHandle
struct ABP_PlayerLobbyPawn_C_OnEndActionHandle_Params
{
	int                                                ActionID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnPlayActionHandle
struct ABP_PlayerLobbyPawn_C_OnPlayActionHandle_Params
{
	int                                                ActionID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetConflictRuleEnable
struct ABP_PlayerLobbyPawn_C_SetConflictRuleEnable_Params
{
	bool                                               bEnableConflictRule;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.PutOffEquipmentBySlot
struct ABP_PlayerLobbyPawn_C_PutOffEquipmentBySlot_Params
{
	EAvatarSlotType                                    SlotType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.PlayEmoteLoop
struct ABP_PlayerLobbyPawn_C_PlayEmoteLoop_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.ShouldCurEmoteShowWeapon
struct ABP_PlayerLobbyPawn_C_ShouldCurEmoteShowWeapon_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.HandleWeaponDisplayWhenPlayEmote
struct ABP_PlayerLobbyPawn_C_HandleWeaponDisplayWhenPlayEmote_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetAllEquipmentList
struct ABP_PlayerLobbyPawn_C_GetAllEquipmentList_Params
{
	TArray<int>                                        Result;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetCanRotate
struct ABP_PlayerLobbyPawn_C_SetCanRotate_Params
{
	bool                                               canRotate;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.PutOffEquipmentByResID
struct ABP_PlayerLobbyPawn_C_PutOffEquipmentByResID_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.HideWeapon
struct ABP_PlayerLobbyPawn_C_HideWeapon_Params
{
	bool                                               isHide;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CharPlayEmoteByResId
struct ABP_PlayerLobbyPawn_C_CharPlayEmoteByResId_Params
{
	int                                                EmoteId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ExtraInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CharUnEquipWeapon
struct ABP_PlayerLobbyPawn_C_CharUnEquipWeapon_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CharEquipWeaponByResId
struct ABP_PlayerLobbyPawn_C_CharEquipWeaponByResId_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUse;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAsync;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ASTExtraWeapon*                              Weapon;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetEmoteHandle
struct ABP_PlayerLobbyPawn_C_GetEmoteHandle_Params
{
	int*                                               ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBackpackEmoteHandle*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetBPID
struct ABP_PlayerLobbyPawn_C_GetBPID_Params
{
	int                                                RowName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                BPID;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.UserConstructionScript
struct ABP_PlayerLobbyPawn_C_UserConstructionScript_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.Timeline_0__FinishedFunc
struct ABP_PlayerLobbyPawn_C_Timeline_0__FinishedFunc_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.Timeline_0__UpdateFunc
struct ABP_PlayerLobbyPawn_C_Timeline_0__UpdateFunc_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.ReceiveTick
struct ABP_PlayerLobbyPawn_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.TickClothLeten
struct ABP_PlayerLobbyPawn_C_TickClothLeten_Params
{
	float                                              From;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.ExecuteUbergraph_BP_PlayerLobbyPawn
struct ABP_PlayerLobbyPawn_C_ExecuteUbergraph_BP_PlayerLobbyPawn_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnPreChangeEquip__DelegateSignature
struct ABP_PlayerLobbyPawn_C_OnPreChangeEquip__DelegateSignature_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnSceneType2Change__DelegateSignature
struct ABP_PlayerLobbyPawn_C_OnSceneType2Change__DelegateSignature_Params
{
	int                                                sceneType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnchangeGender__DelegateSignature
struct ABP_PlayerLobbyPawn_C_OnchangeGender__DelegateSignature_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnChangeEquipment__DelegateSignature
struct ABP_PlayerLobbyPawn_C_OnChangeEquipment__DelegateSignature_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnStopAction__DelegateSignature
struct ABP_PlayerLobbyPawn_C_OnStopAction__DelegateSignature_Params
{
	int                                                ActionID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnPlayAction__DelegateSignature
struct ABP_PlayerLobbyPawn_C_OnPlayAction__DelegateSignature_Params
{
	int                                                ActionID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

