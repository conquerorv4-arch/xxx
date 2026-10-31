// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:36:29 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.UpdateCameraLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PlayerLobbyPawn_C::UpdateCameraLocation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.UpdateCameraLocation");

	ABP_PlayerLobbyPawn_C_UpdateCameraLocation_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetCompRotate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         RotateComp                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Rotate                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::SetCompRotate(class USceneComponent* RotateComp, float Rotate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetCompRotate");

	ABP_PlayerLobbyPawn_C_SetCompRotate_Params params;
	params.RotateComp = RotateComp;
	params.Rotate = Rotate;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetAddCharacterWeaponAnimListHandle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FLobbyCharacterWeaponAnimData> addAnimData                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_PlayerLobbyPawn_C::SetAddCharacterWeaponAnimListHandle(TArray<struct FLobbyCharacterWeaponAnimData>* addAnimData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetAddCharacterWeaponAnimListHandle");

	ABP_PlayerLobbyPawn_C_SetAddCharacterWeaponAnimListHandle_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (addAnimData != nullptr)
		*addAnimData = params.addAnimData;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CharEquipWeaponPendant
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WeaponId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EWeaponPendantSocketType       PendantSocketType              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::CharEquipWeaponPendant(int WeaponId, EWeaponPendantSocketType PendantSocketType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CharEquipWeaponPendant");

	ABP_PlayerLobbyPawn_C_CharEquipWeaponPendant_Params params;
	params.WeaponId = WeaponId;
	params.PendantSocketType = PendantSocketType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.WeaponAllAssetLoadFinish
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerLobbyPawn_C::WeaponAllAssetLoadFinish()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.WeaponAllAssetLoadFinish");

	ABP_PlayerLobbyPawn_C_WeaponAllAssetLoadFinish_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CharUnEquipWeaponByResId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SocketName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::CharUnEquipWeaponByResId(int resID, const struct FName& SocketName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CharUnEquipWeaponByResId");

	ABP_PlayerLobbyPawn_C_CharUnEquipWeaponByResId_Params params;
	params.resID = resID;
	params.SocketName = SocketName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CharUnEquipExtraWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerLobbyPawn_C::CharUnEquipExtraWeapon()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CharUnEquipExtraWeapon");

	ABP_PlayerLobbyPawn_C_CharUnEquipExtraWeapon_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetForceUseDefaultIdle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Force                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::SetForceUseDefaultIdle(bool Force)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetForceUseDefaultIdle");

	ABP_PlayerLobbyPawn_C_SetForceUseDefaultIdle_Params params;
	params.Force = Force;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.UpdateClothInten
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          leten                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::UpdateClothInten(float leten)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.UpdateClothInten");

	ABP_PlayerLobbyPawn_C_UpdateClothInten_Params params;
	params.leten = leten;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.UpdateClothMatParam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          RotateSpeed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::UpdateClothMatParam(float RotateSpeed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.UpdateClothMatParam");

	ABP_PlayerLobbyPawn_C_UpdateClothMatParam_Params params;
	params.RotateSpeed = RotateSpeed;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.StopActionCamera
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerLobbyPawn_C::StopActionCamera()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.StopActionCamera");

	ABP_PlayerLobbyPawn_C_StopActionCamera_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.RotateOnTickInternal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PlayerLobbyPawn_C::RotateOnTickInternal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.RotateOnTickInternal");

	ABP_PlayerLobbyPawn_C_RotateOnTickInternal_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetCurrentActionID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ActionID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::GetCurrentActionID(int* ActionID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetCurrentActionID");

	ABP_PlayerLobbyPawn_C_GetCurrentActionID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ActionID != nullptr)
		*ActionID = params.ActionID;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnAvatarAllMeshLoaded
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerLobbyPawn_C::OnAvatarAllMeshLoaded()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnAvatarAllMeshLoaded");

	ABP_PlayerLobbyPawn_C_OnAvatarAllMeshLoaded_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.TryRotateAvatar
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerLobbyPawn_C::TryRotateAvatar()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.TryRotateAvatar");

	ABP_PlayerLobbyPawn_C_TryRotateAvatar_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetAvatarVisibleForEmote
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::SetAvatarVisibleForEmote(bool Visible)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetAvatarVisibleForEmote");

	ABP_PlayerLobbyPawn_C_SetAvatarVisibleForEmote_Params params;
	params.Visible = Visible;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.RequestWeaponDIYData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InPlayerUID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            WeaponAvatarID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InDIYPlanID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::RequestWeaponDIYData(const struct FString& InPlayerUID, int WeaponAvatarID, int InDIYPlanID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.RequestWeaponDIYData");

	ABP_PlayerLobbyPawn_C_RequestWeaponDIYData_Params params;
	params.InPlayerUID = InPlayerUID;
	params.WeaponAvatarID = WeaponAvatarID;
	params.InDIYPlanID = InDIYPlanID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetIsMVPMotion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isMVPMotion                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::SetIsMVPMotion(bool isMVPMotion)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetIsMVPMotion");

	ABP_PlayerLobbyPawn_C_SetIsMVPMotion_Params params;
	params.isMVPMotion = isMVPMotion;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.InitDefaultAvatarByResID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AGender                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Head                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            hair                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::InitDefaultAvatarByResID(int AGender, int Head, int hair)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.InitDefaultAvatarByResID");

	ABP_PlayerLobbyPawn_C_InitDefaultAvatarByResID_Params params;
	params.AGender = AGender;
	params.Head = Head;
	params.hair = hair;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetClothAnimDyAlphaInst
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::SetClothAnimDyAlphaInst(float Alpha)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetClothAnimDyAlphaInst");

	ABP_PlayerLobbyPawn_C_SetClothAnimDyAlphaInst_Params params;
	params.Alpha = Alpha;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetClothAnimDyAlphaGrad
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::SetClothAnimDyAlphaGrad(float Alpha)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetClothAnimDyAlphaGrad");

	ABP_PlayerLobbyPawn_C_SetClothAnimDyAlphaGrad_Params params;
	params.Alpha = Alpha;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetClothAnimDyAlpha
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::SetClothAnimDyAlpha(float Alpha)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetClothAnimDyAlpha");

	ABP_PlayerLobbyPawn_C_SetClothAnimDyAlpha_Params params;
	params.Alpha = Alpha;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.RotateOnTick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          RotateTime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TargetRotation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::RotateOnTick(float RotateTime, float TargetRotation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.RotateOnTick");

	ABP_PlayerLobbyPawn_C_RotateOnTick_Params params;
	params.RotateTime = RotateTime;
	params.TargetRotation = TargetRotation;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnEndActionHandle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ActionID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::OnEndActionHandle(int ActionID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnEndActionHandle");

	ABP_PlayerLobbyPawn_C_OnEndActionHandle_Params params;
	params.ActionID = ActionID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnPlayActionHandle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ActionID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::OnPlayActionHandle(int ActionID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnPlayActionHandle");

	ABP_PlayerLobbyPawn_C_OnPlayActionHandle_Params params;
	params.ActionID = ActionID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetConflictRuleEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnableConflictRule            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::SetConflictRuleEnable(bool bEnableConflictRule)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetConflictRuleEnable");

	ABP_PlayerLobbyPawn_C_SetConflictRuleEnable_Params params;
	params.bEnableConflictRule = bEnableConflictRule;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.PutOffEquipmentBySlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAvatarSlotType                SlotType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::PutOffEquipmentBySlot(EAvatarSlotType SlotType, bool* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.PutOffEquipmentBySlot");

	ABP_PlayerLobbyPawn_C_PutOffEquipmentBySlot_Params params;
	params.SlotType = SlotType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.PlayEmoteLoop
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerLobbyPawn_C::PlayEmoteLoop()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.PlayEmoteLoop");

	ABP_PlayerLobbyPawn_C_PlayEmoteLoop_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.ShouldCurEmoteShowWeapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::ShouldCurEmoteShowWeapon(bool* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.ShouldCurEmoteShowWeapon");

	ABP_PlayerLobbyPawn_C_ShouldCurEmoteShowWeapon_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.HandleWeaponDisplayWhenPlayEmote
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerLobbyPawn_C::HandleWeaponDisplayWhenPlayEmote()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.HandleWeaponDisplayWhenPlayEmote");

	ABP_PlayerLobbyPawn_C_HandleWeaponDisplayWhenPlayEmote_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetAllEquipmentList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    Result                         (Parm, OutParm, ZeroConstructor)

void ABP_PlayerLobbyPawn_C::GetAllEquipmentList(TArray<int>* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetAllEquipmentList");

	ABP_PlayerLobbyPawn_C_GetAllEquipmentList_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetCanRotate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           canRotate                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::SetCanRotate(bool canRotate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetCanRotate");

	ABP_PlayerLobbyPawn_C_SetCanRotate_Params params;
	params.canRotate = canRotate;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.PutOffEquipmentByResID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::PutOffEquipmentByResID(int resID, bool* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.PutOffEquipmentByResID");

	ABP_PlayerLobbyPawn_C_PutOffEquipmentByResID_Params params;
	params.resID = resID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.HideWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isHide                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::HideWeapon(bool isHide)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.HideWeapon");

	ABP_PlayerLobbyPawn_C_HideWeapon_Params params;
	params.isHide = isHide;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CharPlayEmoteByResId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EmoteId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ExtraInfo                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_PlayerLobbyPawn_C::CharPlayEmoteByResId(int EmoteId, const struct FString& ExtraInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CharPlayEmoteByResId");

	ABP_PlayerLobbyPawn_C_CharPlayEmoteByResId_Params params;
	params.EmoteId = EmoteId;
	params.ExtraInfo = ExtraInfo;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CharUnEquipWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerLobbyPawn_C::CharUnEquipWeapon()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CharUnEquipWeapon");

	ABP_PlayerLobbyPawn_C_CharUnEquipWeapon_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CharEquipWeaponByResId
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUse                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAsync                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SocketName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ASTExtraWeapon*          Weapon                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::CharEquipWeaponByResId(int resID, bool bUse, bool bAsync, const struct FName& SocketName, class ASTExtraWeapon** Weapon)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CharEquipWeaponByResId");

	ABP_PlayerLobbyPawn_C_CharEquipWeaponByResId_Params params;
	params.resID = resID;
	params.bUse = bUse;
	params.bAsync = bAsync;
	params.SocketName = SocketName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Weapon != nullptr)
		*Weapon = params.Weapon;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetEmoteHandle
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBackpackEmoteHandle*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBackpackEmoteHandle* ABP_PlayerLobbyPawn_C::GetEmoteHandle(int* ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetEmoteHandle");

	ABP_PlayerLobbyPawn_C_GetEmoteHandle_Params params;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetBPID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            BPID                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::GetBPID(int RowName, int* BPID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetBPID");

	ABP_PlayerLobbyPawn_C_GetBPID_Params params;
	params.RowName = RowName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (BPID != nullptr)
		*BPID = params.BPID;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerLobbyPawn_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.UserConstructionScript");

	ABP_PlayerLobbyPawn_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_PlayerLobbyPawn_C::Timeline_0__FinishedFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.Timeline_0__FinishedFunc");

	ABP_PlayerLobbyPawn_C_Timeline_0__FinishedFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_PlayerLobbyPawn_C::Timeline_0__UpdateFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.Timeline_0__UpdateFunc");

	ABP_PlayerLobbyPawn_C_Timeline_0__UpdateFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::ReceiveTick(float* DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.ReceiveTick");

	ABP_PlayerLobbyPawn_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.TickClothLeten
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          From                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::TickClothLeten(float From)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.TickClothLeten");

	ABP_PlayerLobbyPawn_C_TickClothLeten_Params params;
	params.From = From;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.ExecuteUbergraph_BP_PlayerLobbyPawn
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::ExecuteUbergraph_BP_PlayerLobbyPawn(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.ExecuteUbergraph_BP_PlayerLobbyPawn");

	ABP_PlayerLobbyPawn_C_ExecuteUbergraph_BP_PlayerLobbyPawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnPreChangeEquip__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_PlayerLobbyPawn_C::OnPreChangeEquip__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnPreChangeEquip__DelegateSignature");

	ABP_PlayerLobbyPawn_C_OnPreChangeEquip__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnSceneType2Change__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            sceneType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::OnSceneType2Change__DelegateSignature(int sceneType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnSceneType2Change__DelegateSignature");

	ABP_PlayerLobbyPawn_C_OnSceneType2Change__DelegateSignature_Params params;
	params.sceneType = sceneType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnchangeGender__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_PlayerLobbyPawn_C::OnchangeGender__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnchangeGender__DelegateSignature");

	ABP_PlayerLobbyPawn_C_OnchangeGender__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnChangeEquipment__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_PlayerLobbyPawn_C::OnChangeEquipment__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnChangeEquipment__DelegateSignature");

	ABP_PlayerLobbyPawn_C_OnChangeEquipment__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnStopAction__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ActionID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::OnStopAction__DelegateSignature(int ActionID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnStopAction__DelegateSignature");

	ABP_PlayerLobbyPawn_C_OnStopAction__DelegateSignature_Params params;
	params.ActionID = ActionID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnPlayAction__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ActionID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::OnPlayAction__DelegateSignature(int ActionID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnPlayAction__DelegateSignature");

	ABP_PlayerLobbyPawn_C_OnPlayAction__DelegateSignature_Params params;
	params.ActionID = ActionID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

