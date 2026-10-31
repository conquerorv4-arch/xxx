// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:58 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PetUtils.PetUtils_C.GetPetLevelCfg
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameModePlayerPetInfo  PetInfo                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBP_STRUCT_PetLevelTable_type Out_Row                        (Parm, OutParm)

void UPetUtils_C::GetPetLevelCfg(const struct FGameModePlayerPetInfo& PetInfo, class UObject* __WorldContext, struct FBP_STRUCT_PetLevelTable_type* Out_Row)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PetUtils.PetUtils_C.GetPetLevelCfg");

	UPetUtils_C_GetPetLevelCfg_Params params;
	params.PetInfo = PetInfo;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Out_Row != nullptr)
		*Out_Row = params.Out_Row;
}


}

