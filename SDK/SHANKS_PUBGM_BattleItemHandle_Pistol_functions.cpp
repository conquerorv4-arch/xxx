// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:32 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.GetWrapperClass
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  WrapperClass                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_Pistol_C::GetWrapperClass(bool* found, class UClass** WrapperClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.GetWrapperClass");

	UBattleItemHandle_Pistol_C_GetWrapperClass_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (found != nullptr)
		*found = params.found;
	if (WrapperClass != nullptr)
		*WrapperClass = params.WrapperClass;
}


// Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.HandleWeaponDestroy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleItemDisuseReason        Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_Pistol_C::HandleWeaponDestroy(EBattleItemDisuseReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.HandleWeaponDestroy");

	UBattleItemHandle_Pistol_C_HandleWeaponDestroy_Params params;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.IsMainSlotsHaveWeapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           HasWeapon                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_Pistol_C::IsMainSlotsHaveWeapon(bool* HasWeapon)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.IsMainSlotsHaveWeapon");

	UBattleItemHandle_Pistol_C_IsMainSlotsHaveWeapon_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (HasWeapon != nullptr)
		*HasWeapon = params.HasWeapon;
}


// Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.GetOwingtWeapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASTExtraWeapon*          NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_Pistol_C::GetOwingtWeapon(class ASTExtraWeapon** NewParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.GetOwingtWeapon");

	UBattleItemHandle_Pistol_C_GetOwingtWeapon_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.LocalHandleDisuse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleItemDisuseReason        Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_Pistol_C::LocalHandleDisuse(EBattleItemDisuseReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.LocalHandleDisuse");

	UBattleItemHandle_Pistol_C_LocalHandleDisuse_Params params;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.GetAvailableTargetLogicSocketName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   TargetSocket                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bNeedPutDownOldWeapon          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoUse                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_Pistol_C::GetAvailableTargetLogicSocketName(const struct FName& TargetSocket, struct FName* Ret, bool* bNeedPutDownOldWeapon, bool* bAutoUse)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.GetAvailableTargetLogicSocketName");

	UBattleItemHandle_Pistol_C_GetAvailableTargetLogicSocketName_Params params;
	params.TargetSocket = TargetSocket;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
	if (bNeedPutDownOldWeapon != nullptr)
		*bNeedPutDownOldWeapon = params.bNeedPutDownOldWeapon;
	if (bAutoUse != nullptr)
		*bAutoUse = params.bAutoUse;
}


// Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.GetAvailableInstantLogicSocketName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bNeedPutDownOldWeapon          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoUse                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_Pistol_C::GetAvailableInstantLogicSocketName(struct FName* Ret, bool* bNeedPutDownOldWeapon, bool* bAutoUse)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.GetAvailableInstantLogicSocketName");

	UBattleItemHandle_Pistol_C_GetAvailableInstantLogicSocketName_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
	if (bNeedPutDownOldWeapon != nullptr)
		*bNeedPutDownOldWeapon = params.bNeedPutDownOldWeapon;
	if (bAutoUse != nullptr)
		*bAutoUse = params.bAutoUse;
}


// Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.CreateWrapperOnGround
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBattleItemHandle_Pistol_C::CreateWrapperOnGround()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.CreateWrapperOnGround");

	UBattleItemHandle_Pistol_C_CreateWrapperOnGround_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.HandlePickup
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UItemContainerInterface> ItemContainer                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FBattleItemPickupInfo*  PickupInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)
// EBattleItemPickupReason*       Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandle_Pistol_C::HandlePickup(struct FBattleItemPickupInfo* PickupInfo, EBattleItemPickupReason* Reason, TScriptInterface<class UItemContainerInterface>* ItemContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.HandlePickup");

	UBattleItemHandle_Pistol_C_HandlePickup_Params params;
	params.PickupInfo = PickupInfo;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ItemContainer != nullptr)
		*ItemContainer = params.ItemContainer;

	return params.ReturnValue;
}


// Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.HandleUse
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBattleItemUseTarget*   Target                         (BlueprintVisible, BlueprintReadOnly, Parm)
// EBattleItemUseReason*          Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandle_Pistol_C::HandleUse(struct FBattleItemUseTarget* Target, EBattleItemUseReason* Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.HandleUse");

	UBattleItemHandle_Pistol_C_HandleUse_Params params;
	params.Target = Target;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.HandleDrop
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           InCount                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBattleItemDropReason*         Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandle_Pistol_C::HandleDrop(int* InCount, EBattleItemDropReason* Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.HandleDrop");

	UBattleItemHandle_Pistol_C_HandleDrop_Params params;
	params.InCount = InCount;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.HandleDisuse
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleItemDisuseReason*       Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandle_Pistol_C::HandleDisuse(EBattleItemDisuseReason* Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.HandleDisuse");

	UBattleItemHandle_Pistol_C_HandleDisuse_Params params;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

