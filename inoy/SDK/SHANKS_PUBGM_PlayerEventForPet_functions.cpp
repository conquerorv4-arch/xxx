// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:59 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerEventForPet.PlayerEventForPet_C.PlayerStateChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPawnState                     State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPawnStateChangeType> ChangeType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerEventForPet_C::PlayerStateChange(EPawnState State, TEnumAsByte<EPawnStateChangeType> ChangeType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerEventForPet.PlayerEventForPet_C.PlayerStateChange");

	UPlayerEventForPet_C_PlayerStateChange_Params params;
	params.State = State;
	params.ChangeType = ChangeType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

