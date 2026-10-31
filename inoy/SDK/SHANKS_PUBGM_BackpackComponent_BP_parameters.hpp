#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:36:06 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BackpackComponent_BP.BackpackComponent_BP_C.CheckItemAttrsFlag
struct UBackpackComponent_BP_C_CheckItemAttrsFlag_Params
{
	int*                                               ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EItemAttrs*                                        ItemAttrEnum;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BackpackComponent_BP.BackpackComponent_BP_C.GetItemAttrsFlag
struct UBackpackComponent_BP_C_GetItemAttrsFlag_Params
{
	int*                                               ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BackpackComponent_BP.BackpackComponent_BP_C.ServerPlaySoundByItemOperation
struct UBackpackComponent_BP_C_ServerPlaySoundByItemOperation_Params
{
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	EBattleItemOperationType                           OperationType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackComponent_BP.BackpackComponent_BP_C.GetChipAssociationType
struct UBackpackComponent_BP_C_GetChipAssociationType_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ChipAssociationType;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackComponent_BP.BackpackComponent_BP_C.GetSafetyBoxCapacity
struct UBackpackComponent_BP_C_GetSafetyBoxCapacity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BackpackComponent_BP.BackpackComponent_BP_C.NewItemDefineID
struct UBackpackComponent_BP_C_NewItemDefineID_Params
{
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FItemDefineID                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BackpackComponent_BP.BackpackComponent_BP_C.CheckLeftLimitCountForItem
struct UBackpackComponent_BP_C_CheckLeftLimitCountForItem_Params
{
	int*                                               InItemID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InCount;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BackpackComponent_BP.BackpackComponent_BP_C.IsItemExist
struct UBackpackComponent_BP_C_IsItemExist_Params
{
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BackpackComponent_BP.BackpackComponent_BP_C.GetEmptyChipSlotIdx
struct UBackpackComponent_BP_C_GetEmptyChipSlotIdx_Params
{
	struct FBattleItemData                             ItemData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                SupportChipNum;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackComponent_BP.BackpackComponent_BP_C.GetItemSubType
struct UBackpackComponent_BP_C_GetItemSubType_Params
{
	int*                                               ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BackpackComponent_BP.BackpackComponent_BP_C.HasTagSub
struct UBackpackComponent_BP_C_HasTagSub_Params
{
	int*                                               ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TagName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BackpackComponent_BP.BackpackComponent_BP_C.GetEquipChipNum
struct UBackpackComponent_BP_C_GetEquipChipNum_Params
{
	struct FBattleItemData                             ItemData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Num;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackComponent_BP.BackpackComponent_BP_C.GetAvailableEquipChipSlot
struct UBackpackComponent_BP_C_GetAvailableEquipChipSlot_Params
{
	int                                                ChipResID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFindEmptySlot;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFind;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FBattleItemUseTarget                        ItemUseTarget;                                            // (Parm, OutParm)
};

// Function BackpackComponent_BP.BackpackComponent_BP_C.IsAutoUse
struct UBackpackComponent_BP_C_IsAutoUse_Params
{
	int*                                               ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BackpackComponent_BP.BackpackComponent_BP_C.CheckSkillPropItemCanBePickup
struct UBackpackComponent_BP_C_CheckSkillPropItemCanBePickup_Params
{
	class UBackpackComponent**                         BackpackComp;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FItemDefineID*                              DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BackpackComponent_BP.BackpackComponent_BP_C.UpdateCapacity
struct UBackpackComponent_BP_C_UpdateCapacity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BackpackComponent_BP.BackpackComponent_BP_C.GetBattleItemFeatureDataByDefineID
struct UBackpackComponent_BP_C_GetBattleItemFeatureDataByDefineID_Params
{
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FBattleItemFeatureData                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BackpackComponent_BP.BackpackComponent_BP_C.NewItemHandle
struct UBackpackComponent_BP_C_NewItemHandle_Params
{
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UBattleItemHandleBase*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BackpackComponent_BP.BackpackComponent_BP_C.ReceiveBeginPlay
struct UBackpackComponent_BP_C_ReceiveBeginPlay_Params
{
};

// Function BackpackComponent_BP.BackpackComponent_BP_C.ServerPlaySound
struct UBackpackComponent_BP_C_ServerPlaySound_Params
{
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	EBattleItemOperationType                           OperationType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackComponent_BP.BackpackComponent_BP_C.OperationFailed
struct UBackpackComponent_BP_C_OperationFailed_Params
{
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	EBattleItemOperationType                           OperationType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBattleItemOperationFailedReason                   OperationFailedReason;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackComponent_BP.BackpackComponent_BP_C.ClientPlayerSound
struct UBackpackComponent_BP_C_ClientPlayerSound_Params
{
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	EBattleItemOperationType                           OperationType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackComponent_BP.BackpackComponent_BP_C.EventAutoEquipAim
struct UBackpackComponent_BP_C_EventAutoEquipAim_Params
{
	bool                                               BoolValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackComponent_BP.BackpackComponent_BP_C.EventPickClipType
struct UBackpackComponent_BP_C_EventPickClipType_Params
{
	int                                                IntValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackComponent_BP.BackpackComponent_BP_C.ExecuteUbergraph_BackpackComponent_BP
struct UBackpackComponent_BP_C_ExecuteUbergraph_BackpackComponent_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

