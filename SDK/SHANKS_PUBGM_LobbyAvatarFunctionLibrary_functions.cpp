// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:36:28 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LobbyAvatarFunctionLibrary.LobbyAvatarFunctionLibrary_C.OnPlayerRotate
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCharacterAvatarComp2_BP_C* AvatarComp                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobbyAvatarFunctionLibrary_C::OnPlayerRotate(class UCharacterAvatarComp2_BP_C* AvatarComp, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LobbyAvatarFunctionLibrary.LobbyAvatarFunctionLibrary_C.OnPlayerRotate");

	ULobbyAvatarFunctionLibrary_C_OnPlayerRotate_Params params;
	params.AvatarComp = AvatarComp;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

