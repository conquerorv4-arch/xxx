// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:50 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BattleItemHandle_WeapAttachment_SpecialScope.BattleItemHandle_WeapAttachment_SpecialScope_C.GetFov
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FOV                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_WeapAttachment_SpecialScope_C::GetFov(float* FOV)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_WeapAttachment_SpecialScope.BattleItemHandle_WeapAttachment_SpecialScope_C.GetFov");

	UBattleItemHandle_WeapAttachment_SpecialScope_C_GetFov_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (FOV != nullptr)
		*FOV = params.FOV;
}


}

