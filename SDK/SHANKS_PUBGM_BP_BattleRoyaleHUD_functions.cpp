// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:36:05 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.IsValidDamageNumber
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           DamageTypeId                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_BattleRoyaleHUD_C::IsValidDamageNumber(class AActor** DamageCauser, int* DamageTypeId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.IsValidDamageNumber");

	ABP_BattleRoyaleHUD_C_IsValidDamageNumber_Params params;
	params.DamageCauser = DamageCauser;
	params.DamageTypeId = DamageTypeId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.GetPlayerNameColorByTeamID
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int*                           TeamID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor ABP_BattleRoyaleHUD_C::GetPlayerNameColorByTeamID(int* TeamID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.GetPlayerNameColorByTeamID");

	ABP_BattleRoyaleHUD_C_GetPlayerNameColorByTeamID_Params params;
	params.TeamID = TeamID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.GetColorByTeamID
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int*                           TeamID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor ABP_BattleRoyaleHUD_C::GetColorByTeamID(int* TeamID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.GetColorByTeamID");

	ABP_BattleRoyaleHUD_C_GetColorByTeamID_Params params;
	params.TeamID = TeamID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleRoyaleHUD_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.UserConstructionScript");

	ABP_BattleRoyaleHUD_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BattleRoyaleHUD_C::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.ReceiveBeginPlay");

	ABP_BattleRoyaleHUD_C_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.HitFeedBackChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BoolValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleRoyaleHUD_C::HitFeedBackChanged(bool BoolValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.HitFeedBackChanged");

	ABP_BattleRoyaleHUD_C_HitFeedBackChanged_Params params;
	params.BoolValue = BoolValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.OBSHitFeedbackChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BoolValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleRoyaleHUD_C::OBSHitFeedbackChanged(bool BoolValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.OBSHitFeedbackChanged");

	ABP_BattleRoyaleHUD_C_OBSHitFeedbackChanged_Params params;
	params.BoolValue = BoolValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.ExecuteUbergraph_BP_BattleRoyaleHUD
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleRoyaleHUD_C::ExecuteUbergraph_BP_BattleRoyaleHUD(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.ExecuteUbergraph_BP_BattleRoyaleHUD");

	ABP_BattleRoyaleHUD_C_ExecuteUbergraph_BP_BattleRoyaleHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

