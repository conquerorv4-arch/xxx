#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:36:03 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.GetHeadIgnoreSlots
struct UCharacterAvatarComp2_BP_C_GetHeadIgnoreSlots_Params
{
	int*                                               InItemHeadID;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.CanUseDefaultAvatarHandleItem
struct UCharacterAvatarComp2_BP_C_CanUseDefaultAvatarHandleItem_Params
{
	int*                                               InSlotID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InItemID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.GetDefaultAvatarHandleItem
struct UCharacterAvatarComp2_BP_C_GetDefaultAvatarHandleItem_Params
{
	int*                                               InSlotID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InItemID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               AdditionalItemID;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.PrintDefaultConfig
struct UCharacterAvatarComp2_BP_C_PrintDefaultConfig_Params
{
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.HandleCharacterHiddenChange
struct UCharacterAvatarComp2_BP_C_HandleCharacterHiddenChange_Params
{
	bool                                               bHidden;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.HandlePlayerScopeInOrOut
struct UCharacterAvatarComp2_BP_C_HandlePlayerScopeInOrOut_Params
{
	bool                                               bScopeIn;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.EnableAvatarAnimation
struct UCharacterAvatarComp2_BP_C_EnableAvatarAnimation_Params
{
	bool                                               IsEnable;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.GetRepalceIDOnVehicle
struct UCharacterAvatarComp2_BP_C_GetRepalceIDOnVehicle_Params
{
	int*                                               OriginID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.GetBPSlotNameConfigType
struct UCharacterAvatarComp2_BP_C_GetBPSlotNameConfigType_Params
{
	class UBackpackAvatarHandle**                      InAvatarHandle;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EAvatarSlotNameConfig                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.IsEnableItemDownload
struct UCharacterAvatarComp2_BP_C_IsEnableItemDownload_Params
{
	int*                                               ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.GetBatchDefaultBodyPath
struct UCharacterAvatarComp2_BP_C_GetBatchDefaultBodyPath_Params
{
	struct FSoftObjectPath                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.HideHeadMesh
struct UCharacterAvatarComp2_BP_C_HideHeadMesh_Params
{
	class UMeshComponent**                             MasterBoneComp;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh**                              SkeletalMesh;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.PutOffEquimentByResID
struct UCharacterAvatarComp2_BP_C_PutOffEquimentByResID_Params
{
	int*                                               resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.PutOnEquipmentByResID
struct UCharacterAvatarComp2_BP_C_PutOnEquipmentByResID_Params
{
	int*                                               resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.GetFakeAvatarHandleItem_InDev
struct UCharacterAvatarComp2_BP_C_GetFakeAvatarHandleItem_InDev_Params
{
	int*                                               InSlotID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InItemID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               AdditionalItemID;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.GenerateClientDefaultAvatar
struct UCharacterAvatarComp2_BP_C_GenerateClientDefaultAvatar_Params
{
	class UBattleItemHandleBase**                      InAvatarHandle;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.BPClientPostProcessViewDataMiddle
struct UCharacterAvatarComp2_BP_C_BPClientPostProcessViewDataMiddle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.ProcessGodzillaSuit
struct UCharacterAvatarComp2_BP_C_ProcessGodzillaSuit_Params
{
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.GetFakeAvatarHandleItem
struct UCharacterAvatarComp2_BP_C_GetFakeAvatarHandleItem_Params
{
	int*                                               InSlotID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InItemID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               AdditionalItemID;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.CheckAvatarWhoHideWho
struct UCharacterAvatarComp2_BP_C_CheckAvatarWhoHideWho_Params
{
	EAvatarSlotType                                    SlotType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FItemDefineID                               resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<int>                                        HideSomeAvatar;                                           // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        HideBySomeAvatar;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.SetEquipmentPattern
struct UCharacterAvatarComp2_BP_C_SetEquipmentPattern_Params
{
	EAvatarSlotType                                    SlotType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.SetEquipmentColor
struct UCharacterAvatarComp2_BP_C_SetEquipmentColor_Params
{
	EAvatarSlotType                                    SlotType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                MaskColor1;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                MaskColor2;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                MaskColor3;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.CreateAvatarItemPattern
struct UCharacterAvatarComp2_BP_C_CreateAvatarItemPattern_Params
{
	EAvatarSlotType*                                   InSlotType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InPatternID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBackpackAvatarItemPattern*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.CreateAvatarItemColor
struct UCharacterAvatarComp2_BP_C_CreateAvatarItemColor_Params
{
	EAvatarSlotType*                                   InSlotType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InColorID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBackpackAvatarItemColor*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.GetEquipmentSkinItemID
struct UCharacterAvatarComp2_BP_C_GetEquipmentSkinItemID_Params
{
	int*                                               InItemID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.Bp_ProcessAvatarLogicUnequipped
struct UCharacterAvatarComp2_BP_C_Bp_ProcessAvatarLogicUnequipped_Params
{
	int                                                SlotID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FItemDefineID                               OldItemID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.Bp_ProcessAvatarLogicEquipped
struct UCharacterAvatarComp2_BP_C_Bp_ProcessAvatarLogicEquipped_Params
{
	int                                                SlotID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FItemDefineID                               NewItemID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FItemDefineID                               OldItemID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.PutOnDefaultEquipment
struct UCharacterAvatarComp2_BP_C_PutOnDefaultEquipment_Params
{
	class UBackpackAvatarHandle*                       ItemHandle;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.InitBodyMeshByHead
struct UCharacterAvatarComp2_BP_C_InitBodyMeshByHead_Params
{
	struct FItemDefineID                               InItemID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.ReceiveBeginPlay
struct UCharacterAvatarComp2_BP_C_ReceiveBeginPlay_Params
{
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.Bp_EventAvatarLogicEquipped
struct UCharacterAvatarComp2_BP_C_Bp_EventAvatarLogicEquipped_Params
{
	int                                                SlotID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FItemDefineID                               NewItemID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FItemDefineID                               OldItemID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.Bp_EventAvatarLogicUnequipped
struct UCharacterAvatarComp2_BP_C_Bp_EventAvatarLogicUnequipped_Params
{
	int                                                SlotID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FItemDefineID                               OldItemID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.PreHanleEquipCloth
struct UCharacterAvatarComp2_BP_C_PreHanleEquipCloth_Params
{
	struct FBattleItemUseTarget*                       Target;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	class UBackpackAvatarHandle**                      InAvatarHandle;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBattleItemUseReason*                              Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.ClearEventFromOnAvatarEquippedEvent
struct UCharacterAvatarComp2_BP_C_ClearEventFromOnAvatarEquippedEvent_Params
{
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.OnPlayerScopeIn
struct UCharacterAvatarComp2_BP_C_OnPlayerScopeIn_Params
{
	bool                                               bIsBegin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.OnPlayerScopeOut
struct UCharacterAvatarComp2_BP_C_OnPlayerScopeOut_Params
{
	bool                                               bIsBegin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.OnCharacterHiddenStateChange
struct UCharacterAvatarComp2_BP_C_OnCharacterHiddenStateChange_Params
{
	bool                                               bIsHidden;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.ExecuteUbergraph_CharacterAvatarComp2_BP
struct UCharacterAvatarComp2_BP_C_ExecuteUbergraph_CharacterAvatarComp2_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

