// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:36:04 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CameraShakeForFalling.CameraShakeForFalling_C.ReceivePlayShake
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCameraShakeForFalling_C::ReceivePlayShake(float* Scale)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CameraShakeForFalling.CameraShakeForFalling_C.ReceivePlayShake");

	UCameraShakeForFalling_C_ReceivePlayShake_Params params;
	params.Scale = Scale;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function CameraShakeForFalling.CameraShakeForFalling_C.ExecuteUbergraph_CameraShakeForFalling
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCameraShakeForFalling_C::ExecuteUbergraph_CameraShakeForFalling(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CameraShakeForFalling.CameraShakeForFalling_C.ExecuteUbergraph_CameraShakeForFalling");

	UCameraShakeForFalling_C_ExecuteUbergraph_CameraShakeForFalling_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

