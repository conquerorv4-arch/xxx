#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:59 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.NeedUpdateTranslationInParachuteState
struct ABasePetCharacter_BP_C_NeedUpdateTranslationInParachuteState_Params
{
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.LoadAvatarLater
struct ABasePetCharacter_BP_C_LoadAvatarLater_Params
{
	TArray<int>                                        NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.LoadBehaviorTree
struct ABasePetCharacter_BP_C_LoadBehaviorTree_Params
{
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.ResetPetVisibility
struct ABasePetCharacter_BP_C_ResetPetVisibility_Params
{
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.IsTeammateWithPetOwner
struct ABasePetCharacter_BP_C_IsTeammateWithPetOwner_Params
{
	class ASTExtraPlayerCharacter*                     OtherPlayer;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.HandleAirAttack
struct ABasePetCharacter_BP_C_HandleAirAttack_Params
{
	struct FVector                                     Area;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               IsAirAttacking;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.SetPetHidden
struct ABasePetCharacter_BP_C_SetPetHidden_Params
{
	bool                                               bHidden;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetSwimmingStateChange
struct ABasePetCharacter_BP_C_OnPetSwimmingStateChange_Params
{
	bool                                               bEnter;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetGameModeType
struct ABasePetCharacter_BP_C_GetGameModeType_Params
{
	EGameModeType                                      GameModeType;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.HandleOnOwnerWin
struct ABasePetCharacter_BP_C_HandleOnOwnerWin_Params
{
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetOwnerFallingModeChange
struct ABasePetCharacter_BP_C_OnPetOwnerFallingModeChange_Params
{
	bool                                               IsFalling;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.StopCurMontage
struct ABasePetCharacter_BP_C_StopCurMontage_Params
{
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.ChangeToDefaultAttachInfo
struct ABasePetCharacter_BP_C_ChangeToDefaultAttachInfo_Params
{
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnDelayLeaveDisappear
struct ABasePetCharacter_BP_C_OnDelayLeaveDisappear_Params
{
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetLeaveState
struct ABasePetCharacter_BP_C_OnPetLeaveState_Params
{
	TEnumAsByte<EPetState>                             LeaveState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetEnterState
struct ABasePetCharacter_BP_C_OnPetEnterState_Params
{
	TEnumAsByte<EPetState>                             EnterState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetAppearAnimEnd
struct ABasePetCharacter_BP_C_OnPetAppearAnimEnd_Params
{
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetDisappearStateChange
struct ABasePetCharacter_BP_C_OnPetDisappearStateChange_Params
{
	bool                                               IsEnter;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetPetParachuteEquipments
struct ABasePetCharacter_BP_C_GetPetParachuteEquipments_Params
{
	TArray<int>                                        Out;                                                      // (Parm, OutParm, ZeroConstructor)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.HandlePetStopParachute
struct ABasePetCharacter_BP_C_HandlePetStopParachute_Params
{
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.HandlePetStartParachute
struct ABasePetCharacter_BP_C_HandlePetStartParachute_Params
{
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.DetachFromOwnerPlayer
struct ABasePetCharacter_BP_C_DetachFromOwnerPlayer_Params
{
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.InitPetAvatar
struct ABasePetCharacter_BP_C_InitPetAvatar_Params
{
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.SetPetFollowType
struct ABasePetCharacter_BP_C_SetPetFollowType_Params
{
	TEnumAsByte<EPetFollowOwnerType>                   Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.PetHasDisappearState
struct ABasePetCharacter_BP_C_PetHasDisappearState_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetFlyAroundStateChange
struct ABasePetCharacter_BP_C_OnPetFlyAroundStateChange_Params
{
	bool                                               IsEnter;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetFollowStateChange
struct ABasePetCharacter_BP_C_OnPetFollowStateChange_Params
{
	bool                                               IsEnter;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.UpdateAttachInfoByOwnerDefaultAvatar
struct ABasePetCharacter_BP_C_UpdateAttachInfoByOwnerDefaultAvatar_Params
{
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.ResetAttachInfo
struct ABasePetCharacter_BP_C_ResetAttachInfo_Params
{
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetPetInfo
struct ABasePetCharacter_BP_C_GetPetInfo_Params
{
	struct FGameModePlayerPetInfo                      PetInfo;                                                  // (Parm, OutParm)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetPetEntity
struct ABasePetCharacter_BP_C_GetPetEntity_Params
{
	class UPetEntityComponent_BP_C*                    PetEntity;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.DisableUnuseComponent
struct ABasePetCharacter_BP_C_DisableUnuseComponent_Params
{
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.CalcInAirAttackArea
struct ABasePetCharacter_BP_C_CalcInAirAttackArea_Params
{
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.SelfPetVisibleSettingChanged
struct ABasePetCharacter_BP_C_SelfPetVisibleSettingChanged_Params
{
	bool                                               In;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OtherPetVisibleSettingChanged
struct ABasePetCharacter_BP_C_OtherPetVisibleSettingChanged_Params
{
	bool                                               In;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.PetOtherVisibleSetting
struct ABasePetCharacter_BP_C_PetOtherVisibleSetting_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.PetSelfVisibleSetting
struct ABasePetCharacter_BP_C_PetSelfVisibleSetting_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetPetDefaultFollowType
struct ABasePetCharacter_BP_C_GetPetDefaultFollowType_Params
{
	TEnumAsByte<EPetFollowOwnerType>                   FollowType;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.DrawPetDebugInfo
struct ABasePetCharacter_BP_C_DrawPetDebugInfo_Params
{
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.AttachToOwnerPlayer
struct ABasePetCharacter_BP_C_AttachToOwnerPlayer_Params
{
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.PetOwnerStopEmote
struct ABasePetCharacter_BP_C_PetOwnerStopEmote_Params
{
	int                                                EmoteId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                StopReason;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.PetOwnerPlayEmote
struct ABasePetCharacter_BP_C_PetOwnerPlayEmote_Params
{
	int                                                EmoteId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.AnimIdIsValid
struct ABasePetCharacter_BP_C_AnimIdIsValid_Params
{
	int                                                AnimId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetPetRspInfoWithPlayerEmoteId
struct ABasePetCharacter_BP_C_GetPetRspInfoWithPlayerEmoteId_Params
{
	int                                                PlayerEmoteId;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_PetPlayerEmoteTable_type         Out_Row;                                                  // (Parm, OutParm)
	bool                                               found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetPetAnimLimitePlayerState
struct ABasePetCharacter_BP_C_GetPetAnimLimitePlayerState_Params
{
	int*                                               AnimId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetPetUnlockAnimIds
struct ABasePetCharacter_BP_C_GetPetUnlockAnimIds_Params
{
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetPetOwnerCharacter
struct ABasePetCharacter_BP_C_GetPetOwnerCharacter_Params
{
	class ASTExtraBaseCharacter*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetPetAttachInfo
struct ABasePetCharacter_BP_C_GetPetAttachInfo_Params
{
	struct FPetAttachInfo                              AttachInfo;                                               // (Parm, OutParm)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetPetEventManager
struct ABasePetCharacter_BP_C_GetPetEventManager_Params
{
	class UPetEventManagerComponent*                   PetEventManager;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.SetOwnerCharacterPC
struct ABasePetCharacter_BP_C_SetOwnerCharacterPC_Params
{
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetOwnerCharacter
struct ABasePetCharacter_BP_C_GetOwnerCharacter_Params
{
	class ABP_PlayerPawn_C*                            OwnerCharacter;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.SetOwnerCharacter
struct ABasePetCharacter_BP_C_SetOwnerCharacter_Params
{
	class ABP_PlayerPawn_C*                            Owner;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetFollowPos
struct ABasePetCharacter_BP_C_GetFollowPos_Params
{
	float                                              MinRadius;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxRadius;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Out;                                                      // (Parm, OutParm, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.UserConstructionScript
struct ABasePetCharacter_BP_C_UserConstructionScript_Params
{
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.Timeline_0__FinishedFunc
struct ABasePetCharacter_BP_C_Timeline_0__FinishedFunc_Params
{
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.Timeline_0__UpdateFunc
struct ABasePetCharacter_BP_C_Timeline_0__UpdateFunc_Params
{
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.BindEvent
struct ABasePetCharacter_BP_C_BindEvent_Params
{
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.BndEvt__PetEventManager_K2Node_ComponentBoundEvent_0_PetEventDelegate__DelegateSignature
struct ABasePetCharacter_BP_C_BndEvt__PetEventManager_K2Node_ComponentBoundEvent_0_PetEventDelegate__DelegateSignature_Params
{
	class UPetWaitEventInfo*                           EventInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.PlayerStateChange
struct ABasePetCharacter_BP_C_PlayerStateChange_Params
{
	EPawnState                                         State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPawnStateChangeType>                  ChangeType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.ReceiveBeginPlay
struct ABasePetCharacter_BP_C_ReceiveBeginPlay_Params
{
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.PetOwnerCharacterBecomeValid
struct ABasePetCharacter_BP_C_PetOwnerCharacterBecomeValid_Params
{
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.UpdateSplineInfo
struct ABasePetCharacter_BP_C_UpdateSplineInfo_Params
{
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.PetStopParchute
struct ABasePetCharacter_BP_C_PetStopParchute_Params
{
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.PetStartParachute
struct ABasePetCharacter_BP_C_PetStartParachute_Params
{
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetStateChangeEvent
struct ABasePetCharacter_BP_C_OnPetStateChangeEvent_Params
{
	TEnumAsByte<EPetState>                             State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEnter;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetMontageEvent
struct ABasePetCharacter_BP_C_OnPetMontageEvent_Params
{
	struct FPetMontageData                             MontageData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnAsyncLoadPetAnimRes
struct ABasePetCharacter_BP_C_OnAsyncLoadPetAnimRes_Params
{
	class UObject*                                     LoadObject;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.SetPetVisibility
struct ABasePetCharacter_BP_C_SetPetVisibility_Params
{
	bool*                                              Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnOwnerWinEvent
struct ABasePetCharacter_BP_C_OnOwnerWinEvent_Params
{
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnOwnerKillSomeone
struct ABasePetCharacter_BP_C_OnOwnerKillSomeone_Params
{
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnOwnerAssistKill
struct ABasePetCharacter_BP_C_OnOwnerAssistKill_Params
{
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnMoveVoiceAround
struct ABasePetCharacter_BP_C_OnMoveVoiceAround_Params
{
	class ASTExtraBaseCharacter*                       nowCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     posVector;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              showTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnShotVoiceAround
struct ABasePetCharacter_BP_C_OnShotVoiceAround_Params
{
	class ASTExtraBaseCharacter*                       OwnerPawn;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ASTExtraShootWeapon*                         nowWeapon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     posVector;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              showTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isslience;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isExplosion;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.TriggerPetEvent
struct ABasePetCharacter_BP_C_TriggerPetEvent_Params
{
	class UPetWaitEventInfo**                          Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.NotifyBpDrawDebugLineChange
struct ABasePetCharacter_BP_C_NotifyBpDrawDebugLineChange_Params
{
	bool*                                              Draw;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.DebugLineTimerEvent
struct ABasePetCharacter_BP_C_DebugLineTimerEvent_Params
{
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetOwnerStateInterruptEvent
struct ABasePetCharacter_BP_C_OnPetOwnerStateInterruptEvent_Params
{
	EPawnState                                         State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EPawnState                                         InterruptedBy;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnOwnerAvatarEquipped
struct ABasePetCharacter_BP_C_OnOwnerAvatarEquipped_Params
{
	EAvatarSlotType*                                   SlotType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsEquipped;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InItemID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.PetEnterPlane
struct ABasePetCharacter_BP_C_PetEnterPlane_Params
{
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetOwnerFallingModeChangeEvent
struct ABasePetCharacter_BP_C_OnPetOwnerFallingModeChangeEvent_Params
{
	bool                                               IsFalling;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnOwnerPerspectiveChanged
struct ABasePetCharacter_BP_C_OnOwnerPerspectiveChanged_Params
{
	bool                                               IsFPP;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnOwnerHoldGrenadeStateChange
struct ABasePetCharacter_BP_C_OnOwnerHoldGrenadeStateChange_Params
{
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetOwnerShoot
struct ABasePetCharacter_BP_C_OnPetOwnerShoot_Params
{
	EPawnState                                         State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetVisibility_EnterHide
struct ABasePetCharacter_BP_C_OnPetVisibility_EnterHide_Params
{
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetVisibility_EnterVisible
struct ABasePetCharacter_BP_C_OnPetVisibility_EnterVisible_Params
{
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPlayerEnterParachute
struct ABasePetCharacter_BP_C_OnPlayerEnterParachute_Params
{
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPlayerExitParachute
struct ABasePetCharacter_BP_C_OnPlayerExitParachute_Params
{
	EExitParachuteType                                 exitType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.MyPetVisibleSettingTPP
struct ABasePetCharacter_BP_C_MyPetVisibleSettingTPP_Params
{
	bool                                               BoolValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.MyPetVisibleSettingFPP
struct ABasePetCharacter_BP_C_MyPetVisibleSettingFPP_Params
{
	bool                                               BoolValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.On
struct ABasePetCharacter_BP_C_On_Params
{
	class ASTExtraBaseCharacter*                       DeadCharacter;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Killer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  KillingHitInfo;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     KillingHitImpulseDir;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UClass*                                      KillingHitDamageType;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPlayerScopIN
struct ABasePetCharacter_BP_C_OnPlayerScopIN_Params
{
	bool                                               bIsBegin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.CustomEvent
struct ABasePetCharacter_BP_C_CustomEvent_Params
{
	bool                                               bIsBegin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnAvatarAllMeshLoaded_Event_1
struct ABasePetCharacter_BP_C_OnAvatarAllMeshLoaded_Event_1_Params
{
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.CustomEvent_2
struct ABasePetCharacter_BP_C_CustomEvent_2_Params
{
	bool                                               bIsBegin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.CustomEvent_3
struct ABasePetCharacter_BP_C_CustomEvent_3_Params
{
	bool                                               bIsBegin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPlayerRespawned
struct ABasePetCharacter_BP_C_OnPlayerRespawned_Params
{
	class AUAEPlayerController*                        PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnRep_AttachToPetOwner
struct ABasePetCharacter_BP_C_OnRep_AttachToPetOwner_Params
{
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.ResetMaterialIfNeed
struct ABasePetCharacter_BP_C_ResetMaterialIfNeed_Params
{
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.ExecuteUbergraph_BasePetCharacter_BP
struct ABasePetCharacter_BP_C_ExecuteUbergraph_BasePetCharacter_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.PetOwnerStateChangeDispatcher__DelegateSignature
struct ABasePetCharacter_BP_C_PetOwnerStateChangeDispatcher__DelegateSignature_Params
{
	EPawnState                                         State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPawnStateChangeType>                  ChangeType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

