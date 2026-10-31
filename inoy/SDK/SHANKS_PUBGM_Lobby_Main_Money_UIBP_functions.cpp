// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:28 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Lobby_Main_Money_UIBP.Lobby_Main_Money_UIBP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULobby_Main_Money_UIBP_C::Construct()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Lobby_Main_Money_UIBP.Lobby_Main_Money_UIBP_C.Construct");

	ULobby_Main_Money_UIBP_C_Construct_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Lobby_Main_Money_UIBP.Lobby_Main_Money_UIBP_C.ExecuteUbergraph_Lobby_Main_Money_UIBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobby_Main_Money_UIBP_C::ExecuteUbergraph_Lobby_Main_Money_UIBP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Lobby_Main_Money_UIBP.Lobby_Main_Money_UIBP_C.ExecuteUbergraph_Lobby_Main_Money_UIBP");

	ULobby_Main_Money_UIBP_C_ExecuteUbergraph_Lobby_Main_Money_UIBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

