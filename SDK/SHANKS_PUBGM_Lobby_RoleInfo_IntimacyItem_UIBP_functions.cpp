// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:36:26 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Lobby_RoleInfo_IntimacyItem_UIBP.Lobby_RoleInfo_IntimacyItem_UIBP_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobby_RoleInfo_IntimacyItem_UIBP_C::PreConstruct(bool* IsDesignTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Lobby_RoleInfo_IntimacyItem_UIBP.Lobby_RoleInfo_IntimacyItem_UIBP_C.PreConstruct");

	ULobby_RoleInfo_IntimacyItem_UIBP_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Lobby_RoleInfo_IntimacyItem_UIBP.Lobby_RoleInfo_IntimacyItem_UIBP_C.ExecuteUbergraph_Lobby_RoleInfo_IntimacyItem_UIBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobby_RoleInfo_IntimacyItem_UIBP_C::ExecuteUbergraph_Lobby_RoleInfo_IntimacyItem_UIBP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Lobby_RoleInfo_IntimacyItem_UIBP.Lobby_RoleInfo_IntimacyItem_UIBP_C.ExecuteUbergraph_Lobby_RoleInfo_IntimacyItem_UIBP");

	ULobby_RoleInfo_IntimacyItem_UIBP_C_ExecuteUbergraph_Lobby_RoleInfo_IntimacyItem_UIBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

