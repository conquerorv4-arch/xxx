// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:13 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ServerSwitcher.BP_ServerSwitcher_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_ServerSwitcher_C::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_ServerSwitcher.BP_ServerSwitcher_C.ReceiveBeginPlay");

	UBP_ServerSwitcher_C_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_ServerSwitcher.BP_ServerSwitcher_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BoolValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ServerSwitcher_C::CustomEvent_1(bool BoolValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_ServerSwitcher.BP_ServerSwitcher_C.CustomEvent_1");

	UBP_ServerSwitcher_C_CustomEvent_1_Params params;
	params.BoolValue = BoolValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_ServerSwitcher.BP_ServerSwitcher_C.ExecuteUbergraph_BP_ServerSwitcher
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ServerSwitcher_C::ExecuteUbergraph_BP_ServerSwitcher(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_ServerSwitcher.BP_ServerSwitcher_C.ExecuteUbergraph_BP_ServerSwitcher");

	UBP_ServerSwitcher_C_ExecuteUbergraph_BP_ServerSwitcher_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

