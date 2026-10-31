// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:36:06 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BackpackComponent_BP.BackpackComponent_BP_C.CheckItemAttrsFlag
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int*                           ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EItemAttrs*                    ItemAttrEnum                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent_BP_C::CheckItemAttrsFlag(int* ItemId, EItemAttrs* ItemAttrEnum)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackComponent_BP.BackpackComponent_BP_C.CheckItemAttrsFlag");

	UBackpackComponent_BP_C_CheckItemAttrsFlag_Params params;
	params.ItemId = ItemId;
	params.ItemAttrEnum = ItemAttrEnum;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BackpackComponent_BP.BackpackComponent_BP_C.GetItemAttrsFlag
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int*                           ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBackpackComponent_BP_C::GetItemAttrsFlag(int* ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackComponent_BP.BackpackComponent_BP_C.GetItemAttrsFlag");

	UBackpackComponent_BP_C_GetItemAttrsFlag_Params params;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BackpackComponent_BP.BackpackComponent_BP_C.ServerPlaySoundByItemOperation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// EBattleItemOperationType       OperationType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackpackComponent_BP_C::ServerPlaySoundByItemOperation(const struct FItemDefineID& DefineID, EBattleItemOperationType OperationType, unsigned char Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackComponent_BP.BackpackComponent_BP_C.ServerPlaySoundByItemOperation");

	UBackpackComponent_BP_C_ServerPlaySoundByItemOperation_Params params;
	params.DefineID = DefineID;
	params.OperationType = OperationType;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BackpackComponent_BP.BackpackComponent_BP_C.GetChipAssociationType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ChipAssociationType            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBackpackComponent_BP_C::GetChipAssociationType(int Index, int* ChipAssociationType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackComponent_BP.BackpackComponent_BP_C.GetChipAssociationType");

	UBackpackComponent_BP_C_GetChipAssociationType_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ChipAssociationType != nullptr)
		*ChipAssociationType = params.ChipAssociationType;
}


// Function BackpackComponent_BP.BackpackComponent_BP_C.GetSafetyBoxCapacity
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBackpackComponent_BP_C::GetSafetyBoxCapacity()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackComponent_BP.BackpackComponent_BP_C.GetSafetyBoxCapacity");

	UBackpackComponent_BP_C_GetSafetyBoxCapacity_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BackpackComponent_BP.BackpackComponent_BP_C.NewItemDefineID
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FItemDefineID           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FItemDefineID UBackpackComponent_BP_C::NewItemDefineID(struct FItemDefineID* DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackComponent_BP.BackpackComponent_BP_C.NewItemDefineID");

	UBackpackComponent_BP_C_NewItemDefineID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (DefineID != nullptr)
		*DefineID = params.DefineID;

	return params.ReturnValue;
}


// Function BackpackComponent_BP.BackpackComponent_BP_C.CheckLeftLimitCountForItem
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           InItemID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           InCount                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBackpackComponent_BP_C::CheckLeftLimitCountForItem(int* InItemID, int* InCount)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackComponent_BP.BackpackComponent_BP_C.CheckLeftLimitCountForItem");

	UBackpackComponent_BP_C_CheckLeftLimitCountForItem_Params params;
	params.InItemID = InItemID;
	params.InCount = InCount;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BackpackComponent_BP.BackpackComponent_BP_C.IsItemExist
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent_BP_C::IsItemExist(struct FItemDefineID* DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackComponent_BP.BackpackComponent_BP_C.IsItemExist");

	UBackpackComponent_BP_C_IsItemExist_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (DefineID != nullptr)
		*DefineID = params.DefineID;

	return params.ReturnValue;
}


// Function BackpackComponent_BP.BackpackComponent_BP_C.GetEmptyChipSlotIdx
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBattleItemData         ItemData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            SupportChipNum                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBackpackComponent_BP_C::GetEmptyChipSlotIdx(const struct FBattleItemData& ItemData, int SupportChipNum, int* Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackComponent_BP.BackpackComponent_BP_C.GetEmptyChipSlotIdx");

	UBackpackComponent_BP_C_GetEmptyChipSlotIdx_Params params;
	params.ItemData = ItemData;
	params.SupportChipNum = SupportChipNum;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function BackpackComponent_BP.BackpackComponent_BP_C.GetItemSubType
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBackpackComponent_BP_C::GetItemSubType(int* ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackComponent_BP.BackpackComponent_BP_C.GetItemSubType");

	UBackpackComponent_BP_C_GetItemSubType_Params params;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BackpackComponent_BP.BackpackComponent_BP_C.HasTagSub
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int*                           ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TagName                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent_BP_C::HasTagSub(int* ItemId, struct FName* TagName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackComponent_BP.BackpackComponent_BP_C.HasTagSub");

	UBackpackComponent_BP_C_HasTagSub_Params params;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TagName != nullptr)
		*TagName = params.TagName;

	return params.ReturnValue;
}


// Function BackpackComponent_BP.BackpackComponent_BP_C.GetEquipChipNum
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBattleItemData         ItemData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Num                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBackpackComponent_BP_C::GetEquipChipNum(const struct FBattleItemData& ItemData, int* Num)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackComponent_BP.BackpackComponent_BP_C.GetEquipChipNum");

	UBackpackComponent_BP_C_GetEquipChipNum_Params params;
	params.ItemData = ItemData;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Num != nullptr)
		*Num = params.Num;
}


// Function BackpackComponent_BP.BackpackComponent_BP_C.GetAvailableEquipChipSlot
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ChipResID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFindEmptySlot                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsFind                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FBattleItemUseTarget    ItemUseTarget                  (Parm, OutParm)

void UBackpackComponent_BP_C::GetAvailableEquipChipSlot(int ChipResID, bool bFindEmptySlot, bool* IsFind, struct FBattleItemUseTarget* ItemUseTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackComponent_BP.BackpackComponent_BP_C.GetAvailableEquipChipSlot");

	UBackpackComponent_BP_C_GetAvailableEquipChipSlot_Params params;
	params.ChipResID = ChipResID;
	params.bFindEmptySlot = bFindEmptySlot;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (IsFind != nullptr)
		*IsFind = params.IsFind;
	if (ItemUseTarget != nullptr)
		*ItemUseTarget = params.ItemUseTarget;
}


// Function BackpackComponent_BP.BackpackComponent_BP_C.IsAutoUse
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent_BP_C::IsAutoUse(int* ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackComponent_BP.BackpackComponent_BP_C.IsAutoUse");

	UBackpackComponent_BP_C_IsAutoUse_Params params;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BackpackComponent_BP.BackpackComponent_BP_C.CheckSkillPropItemCanBePickup
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UBackpackComponent**     BackpackComp                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FItemDefineID*          DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent_BP_C::CheckSkillPropItemCanBePickup(class UBackpackComponent** BackpackComp, struct FItemDefineID* DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackComponent_BP.BackpackComponent_BP_C.CheckSkillPropItemCanBePickup");

	UBackpackComponent_BP_C_CheckSkillPropItemCanBePickup_Params params;
	params.BackpackComp = BackpackComp;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BackpackComponent_BP.BackpackComponent_BP_C.UpdateCapacity
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBackpackComponent_BP_C::UpdateCapacity()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackComponent_BP.BackpackComponent_BP_C.UpdateCapacity");

	UBackpackComponent_BP_C_UpdateCapacity_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BackpackComponent_BP.BackpackComponent_BP_C.GetBattleItemFeatureDataByDefineID
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FBattleItemFeatureData  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBattleItemFeatureData UBackpackComponent_BP_C::GetBattleItemFeatureDataByDefineID(struct FItemDefineID* DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackComponent_BP.BackpackComponent_BP_C.GetBattleItemFeatureDataByDefineID");

	UBackpackComponent_BP_C_GetBattleItemFeatureDataByDefineID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (DefineID != nullptr)
		*DefineID = params.DefineID;

	return params.ReturnValue;
}


// Function BackpackComponent_BP.BackpackComponent_BP_C.NewItemHandle
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UBattleItemHandleBase*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBattleItemHandleBase* UBackpackComponent_BP_C::NewItemHandle(struct FItemDefineID* DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackComponent_BP.BackpackComponent_BP_C.NewItemHandle");

	UBackpackComponent_BP_C_NewItemHandle_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (DefineID != nullptr)
		*DefineID = params.DefineID;

	return params.ReturnValue;
}


// Function BackpackComponent_BP.BackpackComponent_BP_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBackpackComponent_BP_C::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackComponent_BP.BackpackComponent_BP_C.ReceiveBeginPlay");

	UBackpackComponent_BP_C_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BackpackComponent_BP.BackpackComponent_BP_C.ServerPlaySound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// EBattleItemOperationType       OperationType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackpackComponent_BP_C::ServerPlaySound(const struct FItemDefineID& DefineID, EBattleItemOperationType OperationType, unsigned char Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackComponent_BP.BackpackComponent_BP_C.ServerPlaySound");

	UBackpackComponent_BP_C_ServerPlaySound_Params params;
	params.DefineID = DefineID;
	params.OperationType = OperationType;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BackpackComponent_BP.BackpackComponent_BP_C.OperationFailed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// EBattleItemOperationType       OperationType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBattleItemOperationFailedReason OperationFailedReason          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackpackComponent_BP_C::OperationFailed(const struct FItemDefineID& DefineID, EBattleItemOperationType OperationType, EBattleItemOperationFailedReason OperationFailedReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackComponent_BP.BackpackComponent_BP_C.OperationFailed");

	UBackpackComponent_BP_C_OperationFailed_Params params;
	params.DefineID = DefineID;
	params.OperationType = OperationType;
	params.OperationFailedReason = OperationFailedReason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BackpackComponent_BP.BackpackComponent_BP_C.ClientPlayerSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// EBattleItemOperationType       OperationType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackpackComponent_BP_C::ClientPlayerSound(const struct FItemDefineID& DefineID, EBattleItemOperationType OperationType, unsigned char Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackComponent_BP.BackpackComponent_BP_C.ClientPlayerSound");

	UBackpackComponent_BP_C_ClientPlayerSound_Params params;
	params.DefineID = DefineID;
	params.OperationType = OperationType;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BackpackComponent_BP.BackpackComponent_BP_C.EventAutoEquipAim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BoolValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackpackComponent_BP_C::EventAutoEquipAim(bool BoolValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackComponent_BP.BackpackComponent_BP_C.EventAutoEquipAim");

	UBackpackComponent_BP_C_EventAutoEquipAim_Params params;
	params.BoolValue = BoolValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BackpackComponent_BP.BackpackComponent_BP_C.EventPickClipType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            IntValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackpackComponent_BP_C::EventPickClipType(int IntValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackComponent_BP.BackpackComponent_BP_C.EventPickClipType");

	UBackpackComponent_BP_C_EventPickClipType_Params params;
	params.IntValue = IntValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BackpackComponent_BP.BackpackComponent_BP_C.ExecuteUbergraph_BackpackComponent_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackpackComponent_BP_C::ExecuteUbergraph_BackpackComponent_BP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackComponent_BP.BackpackComponent_BP_C.ExecuteUbergraph_BackpackComponent_BP");

	UBackpackComponent_BP_C_ExecuteUbergraph_BackpackComponent_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

