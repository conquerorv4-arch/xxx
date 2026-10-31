// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:22 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PetSwimInterface.PetSwimInterface_C.ISetLeaveSwimMode
// (Public, BlueprintCallable, BlueprintEvent)

void UPetSwimInterface_C::ISetLeaveSwimMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PetSwimInterface.PetSwimInterface_C.ISetLeaveSwimMode");

	UPetSwimInterface_C_ISetLeaveSwimMode_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PetSwimInterface.PetSwimInterface_C.ISetEnterSwimMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          WaterSurface                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPetSwimInterface_C::ISetEnterSwimMode(float WaterSurface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PetSwimInterface.PetSwimInterface_C.ISetEnterSwimMode");

	UPetSwimInterface_C_ISetEnterSwimMode_Params params;
	params.WaterSurface = WaterSurface;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

