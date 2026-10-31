// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:36:21 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Phone_Anim.BP_Phone_Anim_C.AnimNotify_ShowPhone
// (BlueprintCallable, BlueprintEvent)

void UBP_Phone_Anim_C::AnimNotify_ShowPhone()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_Phone_Anim.BP_Phone_Anim_C.AnimNotify_ShowPhone");

	UBP_Phone_Anim_C_AnimNotify_ShowPhone_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_Phone_Anim.BP_Phone_Anim_C.ExecuteUbergraph_BP_Phone_Anim
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Phone_Anim_C::ExecuteUbergraph_BP_Phone_Anim(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_Phone_Anim.BP_Phone_Anim_C.ExecuteUbergraph_BP_Phone_Anim");

	UBP_Phone_Anim_C_ExecuteUbergraph_BP_Phone_Anim_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

