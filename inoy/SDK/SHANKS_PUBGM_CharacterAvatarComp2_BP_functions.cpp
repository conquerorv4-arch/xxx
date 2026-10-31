// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:36:03 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.GetHeadIgnoreSlots
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           InItemHeadID                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> UCharacterAvatarComp2_BP_C::GetHeadIgnoreSlots(int* InItemHeadID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.GetHeadIgnoreSlots");

	UCharacterAvatarComp2_BP_C_GetHeadIgnoreSlots_Params params;
	params.InItemHeadID = InItemHeadID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.CanUseDefaultAvatarHandleItem
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           InSlotID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           InItemID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCharacterAvatarComp2_BP_C::CanUseDefaultAvatarHandleItem(int* InSlotID, int* InItemID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.CanUseDefaultAvatarHandleItem");

	UCharacterAvatarComp2_BP_C_CanUseDefaultAvatarHandleItem_Params params;
	params.InSlotID = InSlotID;
	params.InItemID = InItemID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.GetDefaultAvatarHandleItem
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           InSlotID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           InItemID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           AdditionalItemID               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCharacterAvatarComp2_BP_C::GetDefaultAvatarHandleItem(int* InSlotID, int* InItemID, int* AdditionalItemID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.GetDefaultAvatarHandleItem");

	UCharacterAvatarComp2_BP_C_GetDefaultAvatarHandleItem_Params params;
	params.InSlotID = InSlotID;
	params.InItemID = InItemID;
	params.AdditionalItemID = AdditionalItemID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.PrintDefaultConfig
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterAvatarComp2_BP_C::PrintDefaultConfig()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.PrintDefaultConfig");

	UCharacterAvatarComp2_BP_C_PrintDefaultConfig_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.HandleCharacterHiddenChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bHidden                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterAvatarComp2_BP_C::HandleCharacterHiddenChange(bool bHidden)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.HandleCharacterHiddenChange");

	UCharacterAvatarComp2_BP_C_HandleCharacterHiddenChange_Params params;
	params.bHidden = bHidden;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.HandlePlayerScopeInOrOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bScopeIn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterAvatarComp2_BP_C::HandlePlayerScopeInOrOut(bool bScopeIn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.HandlePlayerScopeInOrOut");

	UCharacterAvatarComp2_BP_C_HandlePlayerScopeInOrOut_Params params;
	params.bScopeIn = bScopeIn;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.EnableAvatarAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnable                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterAvatarComp2_BP_C::EnableAvatarAnimation(bool IsEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.EnableAvatarAnimation");

	UCharacterAvatarComp2_BP_C_EnableAvatarAnimation_Params params;
	params.IsEnable = IsEnable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.GetRepalceIDOnVehicle
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           OriginID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCharacterAvatarComp2_BP_C::GetRepalceIDOnVehicle(int* OriginID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.GetRepalceIDOnVehicle");

	UCharacterAvatarComp2_BP_C_GetRepalceIDOnVehicle_Params params;
	params.OriginID = OriginID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.GetBPSlotNameConfigType
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBackpackAvatarHandle**  InAvatarHandle                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EAvatarSlotNameConfig          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EAvatarSlotNameConfig UCharacterAvatarComp2_BP_C::GetBPSlotNameConfigType(class UBackpackAvatarHandle** InAvatarHandle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.GetBPSlotNameConfigType");

	UCharacterAvatarComp2_BP_C_GetBPSlotNameConfigType_Params params;
	params.InAvatarHandle = InAvatarHandle;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.IsEnableItemDownload
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCharacterAvatarComp2_BP_C::IsEnableItemDownload(int* ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.IsEnableItemDownload");

	UCharacterAvatarComp2_BP_C_IsEnableItemDownload_Params params;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.GetBatchDefaultBodyPath
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSoftObjectPath         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSoftObjectPath UCharacterAvatarComp2_BP_C::GetBatchDefaultBodyPath()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.GetBatchDefaultBodyPath");

	UCharacterAvatarComp2_BP_C_GetBatchDefaultBodyPath_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.HideHeadMesh
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent**         MasterBoneComp                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh**          SkeletalMesh                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCharacterAvatarComp2_BP_C::HideHeadMesh(class UMeshComponent** MasterBoneComp, class USkeletalMesh** SkeletalMesh)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.HideHeadMesh");

	UCharacterAvatarComp2_BP_C_HideHeadMesh_Params params;
	params.MasterBoneComp = MasterBoneComp;
	params.SkeletalMesh = SkeletalMesh;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.PutOffEquimentByResID
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCharacterAvatarComp2_BP_C::PutOffEquimentByResID(int* resID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.PutOffEquimentByResID");

	UCharacterAvatarComp2_BP_C_PutOffEquimentByResID_Params params;
	params.resID = resID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.PutOnEquipmentByResID
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCharacterAvatarComp2_BP_C::PutOnEquipmentByResID(int* resID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.PutOnEquipmentByResID");

	UCharacterAvatarComp2_BP_C_PutOnEquipmentByResID_Params params;
	params.resID = resID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.GetFakeAvatarHandleItem_InDev
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           InSlotID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           InItemID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           AdditionalItemID               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCharacterAvatarComp2_BP_C::GetFakeAvatarHandleItem_InDev(int* InSlotID, int* InItemID, int* AdditionalItemID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.GetFakeAvatarHandleItem_InDev");

	UCharacterAvatarComp2_BP_C_GetFakeAvatarHandleItem_InDev_Params params;
	params.InSlotID = InSlotID;
	params.InItemID = InItemID;
	params.AdditionalItemID = AdditionalItemID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.GenerateClientDefaultAvatar
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBattleItemHandleBase**  InAvatarHandle                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCharacterAvatarComp2_BP_C::GenerateClientDefaultAvatar(class UBattleItemHandleBase** InAvatarHandle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.GenerateClientDefaultAvatar");

	UCharacterAvatarComp2_BP_C_GenerateClientDefaultAvatar_Params params;
	params.InAvatarHandle = InAvatarHandle;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.BPClientPostProcessViewDataMiddle
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCharacterAvatarComp2_BP_C::BPClientPostProcessViewDataMiddle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.BPClientPostProcessViewDataMiddle");

	UCharacterAvatarComp2_BP_C_BPClientPostProcessViewDataMiddle_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.ProcessGodzillaSuit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCharacterAvatarComp2_BP_C::ProcessGodzillaSuit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.ProcessGodzillaSuit");

	UCharacterAvatarComp2_BP_C_ProcessGodzillaSuit_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.GetFakeAvatarHandleItem
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           InSlotID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           InItemID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           AdditionalItemID               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCharacterAvatarComp2_BP_C::GetFakeAvatarHandleItem(int* InSlotID, int* InItemID, int* AdditionalItemID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.GetFakeAvatarHandleItem");

	UCharacterAvatarComp2_BP_C_GetFakeAvatarHandleItem_Params params;
	params.InSlotID = InSlotID;
	params.InItemID = InItemID;
	params.AdditionalItemID = AdditionalItemID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.CheckAvatarWhoHideWho
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAvatarSlotType                SlotType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FItemDefineID           resID                          (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<int>                    HideSomeAvatar                 (Parm, OutParm, ZeroConstructor)
// TArray<int>                    HideBySomeAvatar               (Parm, OutParm, ZeroConstructor)

void UCharacterAvatarComp2_BP_C::CheckAvatarWhoHideWho(EAvatarSlotType SlotType, const struct FItemDefineID& resID, TArray<int>* HideSomeAvatar, TArray<int>* HideBySomeAvatar)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.CheckAvatarWhoHideWho");

	UCharacterAvatarComp2_BP_C_CheckAvatarWhoHideWho_Params params;
	params.SlotType = SlotType;
	params.resID = resID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (HideSomeAvatar != nullptr)
		*HideSomeAvatar = params.HideSomeAvatar;
	if (HideBySomeAvatar != nullptr)
		*HideBySomeAvatar = params.HideBySomeAvatar;
}


// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.SetEquipmentPattern
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAvatarSlotType                SlotType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterAvatarComp2_BP_C::SetEquipmentPattern(EAvatarSlotType SlotType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.SetEquipmentPattern");

	UCharacterAvatarComp2_BP_C_SetEquipmentPattern_Params params;
	params.SlotType = SlotType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.SetEquipmentColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAvatarSlotType                SlotType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            MaskColor1                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            MaskColor2                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            MaskColor3                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UCharacterAvatarComp2_BP_C::SetEquipmentColor(EAvatarSlotType SlotType, const struct FLinearColor& MaskColor1, const struct FLinearColor& MaskColor2, const struct FLinearColor& MaskColor3)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.SetEquipmentColor");

	UCharacterAvatarComp2_BP_C_SetEquipmentColor_Params params;
	params.SlotType = SlotType;
	params.MaskColor1 = MaskColor1;
	params.MaskColor2 = MaskColor2;
	params.MaskColor3 = MaskColor3;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.CreateAvatarItemPattern
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAvatarSlotType*               InSlotType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           InPatternID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBackpackAvatarItemPattern* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBackpackAvatarItemPattern* UCharacterAvatarComp2_BP_C::CreateAvatarItemPattern(EAvatarSlotType* InSlotType, int* InPatternID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.CreateAvatarItemPattern");

	UCharacterAvatarComp2_BP_C_CreateAvatarItemPattern_Params params;
	params.InSlotType = InSlotType;
	params.InPatternID = InPatternID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.CreateAvatarItemColor
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAvatarSlotType*               InSlotType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           InColorID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBackpackAvatarItemColor* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBackpackAvatarItemColor* UCharacterAvatarComp2_BP_C::CreateAvatarItemColor(EAvatarSlotType* InSlotType, int* InColorID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.CreateAvatarItemColor");

	UCharacterAvatarComp2_BP_C_CreateAvatarItemColor_Params params;
	params.InSlotType = InSlotType;
	params.InColorID = InColorID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.GetEquipmentSkinItemID
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           InItemID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCharacterAvatarComp2_BP_C::GetEquipmentSkinItemID(int* InItemID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.GetEquipmentSkinItemID");

	UCharacterAvatarComp2_BP_C_GetEquipmentSkinItemID_Params params;
	params.InItemID = InItemID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.Bp_ProcessAvatarLogicUnequipped
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FItemDefineID           OldItemID                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UCharacterAvatarComp2_BP_C::Bp_ProcessAvatarLogicUnequipped(int SlotID, const struct FItemDefineID& OldItemID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.Bp_ProcessAvatarLogicUnequipped");

	UCharacterAvatarComp2_BP_C_Bp_ProcessAvatarLogicUnequipped_Params params;
	params.SlotID = SlotID;
	params.OldItemID = OldItemID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.Bp_ProcessAvatarLogicEquipped
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FItemDefineID           NewItemID                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FItemDefineID           OldItemID                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UCharacterAvatarComp2_BP_C::Bp_ProcessAvatarLogicEquipped(int SlotID, const struct FItemDefineID& NewItemID, const struct FItemDefineID& OldItemID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.Bp_ProcessAvatarLogicEquipped");

	UCharacterAvatarComp2_BP_C_Bp_ProcessAvatarLogicEquipped_Params params;
	params.SlotID = SlotID;
	params.NewItemID = NewItemID;
	params.OldItemID = OldItemID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.PutOnDefaultEquipment
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBackpackAvatarHandle*   ItemHandle                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCharacterAvatarComp2_BP_C::PutOnDefaultEquipment(class UBackpackAvatarHandle* ItemHandle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.PutOnDefaultEquipment");

	UCharacterAvatarComp2_BP_C_PutOnDefaultEquipment_Params params;
	params.ItemHandle = ItemHandle;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.InitBodyMeshByHead
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           InItemID                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCharacterAvatarComp2_BP_C::InitBodyMeshByHead(struct FItemDefineID* InItemID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.InitBodyMeshByHead");

	UCharacterAvatarComp2_BP_C_InitBodyMeshByHead_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InItemID != nullptr)
		*InItemID = params.InItemID;

	return params.ReturnValue;
}


// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UCharacterAvatarComp2_BP_C::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.ReceiveBeginPlay");

	UCharacterAvatarComp2_BP_C_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.Bp_EventAvatarLogicEquipped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FItemDefineID           NewItemID                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FItemDefineID           OldItemID                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UCharacterAvatarComp2_BP_C::Bp_EventAvatarLogicEquipped(int SlotID, const struct FItemDefineID& NewItemID, const struct FItemDefineID& OldItemID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.Bp_EventAvatarLogicEquipped");

	UCharacterAvatarComp2_BP_C_Bp_EventAvatarLogicEquipped_Params params;
	params.SlotID = SlotID;
	params.NewItemID = NewItemID;
	params.OldItemID = OldItemID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.Bp_EventAvatarLogicUnequipped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FItemDefineID           OldItemID                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UCharacterAvatarComp2_BP_C::Bp_EventAvatarLogicUnequipped(int SlotID, const struct FItemDefineID& OldItemID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.Bp_EventAvatarLogicUnequipped");

	UCharacterAvatarComp2_BP_C_Bp_EventAvatarLogicUnequipped_Params params;
	params.SlotID = SlotID;
	params.OldItemID = OldItemID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.PreHanleEquipCloth
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBattleItemUseTarget*   Target                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// class UBackpackAvatarHandle**  InAvatarHandle                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBattleItemUseReason*          Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterAvatarComp2_BP_C::PreHanleEquipCloth(struct FBattleItemUseTarget* Target, class UBackpackAvatarHandle** InAvatarHandle, EBattleItemUseReason* Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.PreHanleEquipCloth");

	UCharacterAvatarComp2_BP_C_PreHanleEquipCloth_Params params;
	params.Target = Target;
	params.InAvatarHandle = InAvatarHandle;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.ClearEventFromOnAvatarEquippedEvent
// (BlueprintCallable, BlueprintEvent)

void UCharacterAvatarComp2_BP_C::ClearEventFromOnAvatarEquippedEvent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.ClearEventFromOnAvatarEquippedEvent");

	UCharacterAvatarComp2_BP_C_ClearEventFromOnAvatarEquippedEvent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.OnPlayerScopeIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsBegin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterAvatarComp2_BP_C::OnPlayerScopeIn(bool bIsBegin)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.OnPlayerScopeIn");

	UCharacterAvatarComp2_BP_C_OnPlayerScopeIn_Params params;
	params.bIsBegin = bIsBegin;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.OnPlayerScopeOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsBegin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterAvatarComp2_BP_C::OnPlayerScopeOut(bool bIsBegin)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.OnPlayerScopeOut");

	UCharacterAvatarComp2_BP_C_OnPlayerScopeOut_Params params;
	params.bIsBegin = bIsBegin;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.OnCharacterHiddenStateChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsHidden                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterAvatarComp2_BP_C::OnCharacterHiddenStateChange(bool bIsHidden)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.OnCharacterHiddenStateChange");

	UCharacterAvatarComp2_BP_C_OnCharacterHiddenStateChange_Params params;
	params.bIsHidden = bIsHidden;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.ExecuteUbergraph_CharacterAvatarComp2_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterAvatarComp2_BP_C::ExecuteUbergraph_CharacterAvatarComp2_BP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.ExecuteUbergraph_CharacterAvatarComp2_BP");

	UCharacterAvatarComp2_BP_C_ExecuteUbergraph_CharacterAvatarComp2_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

