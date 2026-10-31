// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:55 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PetEntityComponent_BP.PetEntityComponent_BP_C.GetAttachInfoFromTable
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFixPetAttachInfo*      Info                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPetAttachInfo          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPetAttachInfo UPetEntityComponent_BP_C::GetAttachInfoFromTable(struct FFixPetAttachInfo* Info)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PetEntityComponent_BP.PetEntityComponent_BP_C.GetAttachInfoFromTable");

	UPetEntityComponent_BP_C_GetAttachInfoFromTable_Params params;
	params.Info = Info;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

