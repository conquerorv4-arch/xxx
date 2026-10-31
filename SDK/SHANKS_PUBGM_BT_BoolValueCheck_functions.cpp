// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:54 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BT_BoolValueCheck.BT_BoolValueCheck_C.PerformConditionCheck
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBT_BoolValueCheck_C::PerformConditionCheck(class AActor** OwnerActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BT_BoolValueCheck.BT_BoolValueCheck_C.PerformConditionCheck");

	UBT_BoolValueCheck_C_PerformConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BT_BoolValueCheck.BT_BoolValueCheck_C.ExecuteUbergraph_BT_BoolValueCheck
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBT_BoolValueCheck_C::ExecuteUbergraph_BT_BoolValueCheck(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BT_BoolValueCheck.BT_BoolValueCheck_C.ExecuteUbergraph_BT_BoolValueCheck");

	UBT_BoolValueCheck_C_ExecuteUbergraph_BT_BoolValueCheck_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

