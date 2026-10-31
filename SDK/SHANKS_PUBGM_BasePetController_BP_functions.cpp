// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:55 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BasePetController_BP.BasePetController_BP_C.LoadBehaviorTree
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Clothes                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABasePetController_BP_C::LoadBehaviorTree(int Clothes)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetController_BP.BasePetController_BP_C.LoadBehaviorTree");

	ABasePetController_BP_C_LoadBehaviorTree_Params params;
	params.Clothes = Clothes;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetController_BP.BasePetController_BP_C.CalcInAirAttackArea
// (Public, BlueprintCallable, BlueprintEvent)

void ABasePetController_BP_C::CalcInAirAttackArea()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetController_BP.BasePetController_BP_C.CalcInAirAttackArea");

	ABasePetController_BP_C_CalcInAirAttackArea_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetController_BP.BasePetController_BP_C.OnPlayerStopEmote
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EmoteId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABasePetController_BP_C::OnPlayerStopEmote(int EmoteId, int Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetController_BP.BasePetController_BP_C.OnPlayerStopEmote");

	ABasePetController_BP_C_OnPlayerStopEmote_Params params;
	params.EmoteId = EmoteId;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetController_BP.BasePetController_BP_C.OnPlayerPlayEmote
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Emote                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABasePetController_BP_C::OnPlayerPlayEmote(int Emote)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetController_BP.BasePetController_BP_C.OnPlayerPlayEmote");

	ABasePetController_BP_C_OnPlayerPlayEmote_Params params;
	params.Emote = Emote;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetController_BP.BasePetController_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABasePetController_BP_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetController_BP.BasePetController_BP_C.UserConstructionScript");

	ABasePetController_BP_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetController_BP.BasePetController_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABasePetController_BP_C::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetController_BP.BasePetController_BP_C.ReceiveBeginPlay");

	ABasePetController_BP_C_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetController_BP.BasePetController_BP_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABasePetController_BP_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetController_BP.BasePetController_BP_C.ReceiveEndPlay");

	ABasePetController_BP_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetController_BP.BasePetController_BP_C.ExecuteUbergraph_BasePetController_BP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABasePetController_BP_C::ExecuteUbergraph_BasePetController_BP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetController_BP.BasePetController_BP_C.ExecuteUbergraph_BasePetController_BP");

	ABasePetController_BP_C_ExecuteUbergraph_BasePetController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

