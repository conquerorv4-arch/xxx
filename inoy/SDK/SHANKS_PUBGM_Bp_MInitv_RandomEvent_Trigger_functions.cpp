// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:44 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Bp_MInitv_RandomEvent_Trigger.Bp_MInitv_RandomEvent_Trigger_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABp_MInitv_RandomEvent_Trigger_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Bp_MInitv_RandomEvent_Trigger.Bp_MInitv_RandomEvent_Trigger_C.UserConstructionScript");

	ABp_MInitv_RandomEvent_Trigger_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

