// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:52 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ShineInterface.ShineInterface_C.ShowNormal
// (Public, BlueprintCallable, BlueprintEvent)

void UShineInterface_C::ShowNormal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ShineInterface.ShineInterface_C.ShowNormal");

	UShineInterface_C_ShowNormal_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ShineInterface.ShineInterface_C.ShowShine
// (Public, BlueprintCallable, BlueprintEvent)

void UShineInterface_C::ShowShine()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ShineInterface.ShineInterface_C.ShowShine");

	UShineInterface_C_ShowShine_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

