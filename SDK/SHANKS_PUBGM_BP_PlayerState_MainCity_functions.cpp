// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:43 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.#[FeatureRPC(InteractivePlayerStateFeature.RPC_Server_ExitInteractiveState)]
// (Net, NetReliable, Public, NetServer)
// Parameters:
// int                            __FeatureRPC_InteractivePlayerStateFeature_RPC_Server_ExitInteractiveState___param1 (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerState_MainCity_C::__FeatureRPC_InteractivePlayerStateFeature_RPC_Server_ExitInteractiveState__(int __FeatureRPC_InteractivePlayerStateFeature_RPC_Server_ExitInteractiveState___param1)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.#[FeatureRPC(InteractivePlayerStateFeature.RPC_Server_ExitInteractiveState)]");

	ABP_PlayerState_MainCity_C___FeatureRPC_InteractivePlayerStateFeature_RPC_Server_ExitInteractiveState___Params params;
	params.__FeatureRPC_InteractivePlayerStateFeature_RPC_Server_ExitInteractiveState___param1 = __FeatureRPC_InteractivePlayerStateFeature_RPC_Server_ExitInteractiveState___param1;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.#[FeatureRPC(InteractivePlayerStateFeature.RPC_Server_EnterInteractiveState)]
// (Net, NetReliable, Public, NetServer)
// Parameters:
// int                            __FeatureRPC_InteractivePlayerStateFeature_RPC_Server_EnterInteractiveState___param1 (Parm, ZeroConstructor, IsPlainOldData)
// int                            __FeatureRPC_InteractivePlayerStateFeature_RPC_Server_EnterInteractiveState___param2 (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerState_MainCity_C::__FeatureRPC_InteractivePlayerStateFeature_RPC_Server_EnterInteractiveState__(int __FeatureRPC_InteractivePlayerStateFeature_RPC_Server_EnterInteractiveState___param1, int __FeatureRPC_InteractivePlayerStateFeature_RPC_Server_EnterInteractiveState___param2)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.#[FeatureRPC(InteractivePlayerStateFeature.RPC_Server_EnterInteractiveState)]");

	ABP_PlayerState_MainCity_C___FeatureRPC_InteractivePlayerStateFeature_RPC_Server_EnterInteractiveState___Params params;
	params.__FeatureRPC_InteractivePlayerStateFeature_RPC_Server_EnterInteractiveState___param1 = __FeatureRPC_InteractivePlayerStateFeature_RPC_Server_EnterInteractiveState___param1;
	params.__FeatureRPC_InteractivePlayerStateFeature_RPC_Server_EnterInteractiveState___param2 = __FeatureRPC_InteractivePlayerStateFeature_RPC_Server_EnterInteractiveState___param2;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.ClientRPCTeammateRealExit
// (Net, NetReliable, Public, NetClient)
// Parameters:
// int                            ClientRPCTeammateRealExit_param1 (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       ClientRPCTeammateRealExit_param2 (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerState_MainCity_C::ClientRPCTeammateRealExit(int ClientRPCTeammateRealExit_param1, uint32_t ClientRPCTeammateRealExit_param2)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.ClientRPCTeammateRealExit");

	ABP_PlayerState_MainCity_C_ClientRPCTeammateRealExit_Params params;
	params.ClientRPCTeammateRealExit_param1 = ClientRPCTeammateRealExit_param1;
	params.ClientRPCTeammateRealExit_param2 = ClientRPCTeammateRealExit_param2;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.ClientRPC_VersionTaskChanged
// (Net, NetReliable, Public, NetClient)
// Parameters:
// int                            ClientRPC_VersionTaskChanged_param1 (Parm, ZeroConstructor, IsPlainOldData)
// int                            ClientRPC_VersionTaskChanged_param2 (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerState_MainCity_C::ClientRPC_VersionTaskChanged(int ClientRPC_VersionTaskChanged_param1, int ClientRPC_VersionTaskChanged_param2)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.ClientRPC_VersionTaskChanged");

	ABP_PlayerState_MainCity_C_ClientRPC_VersionTaskChanged_Params params;
	params.ClientRPC_VersionTaskChanged_param1 = ClientRPC_VersionTaskChanged_param1;
	params.ClientRPC_VersionTaskChanged_param2 = ClientRPC_VersionTaskChanged_param2;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.#[FeatureRPC(TeammateTakeOverFeature.RPC_Client_RequestTeammateTakeOver)]
// (Net, NetReliable, Public, NetClient)

void ABP_PlayerState_MainCity_C::__FeatureRPC_TeammateTakeOverFeature_RPC_Client_RequestTeammateTakeOver__()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.#[FeatureRPC(TeammateTakeOverFeature.RPC_Client_RequestTeammateTakeOver)]");

	ABP_PlayerState_MainCity_C___FeatureRPC_TeammateTakeOverFeature_RPC_Client_RequestTeammateTakeOver___Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.#[FeatureRPC(StoreFeature.RPC_Client_BuyGoodsFinished)]
// (Net, NetReliable, Public, NetClient)
// Parameters:
// bool                           __FeatureRPC_StoreFeature_RPC_Client_BuyGoodsFinished___param1 (Parm)

void ABP_PlayerState_MainCity_C::__FeatureRPC_StoreFeature_RPC_Client_BuyGoodsFinished__(bool __FeatureRPC_StoreFeature_RPC_Client_BuyGoodsFinished___param1)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.#[FeatureRPC(StoreFeature.RPC_Client_BuyGoodsFinished)]");

	ABP_PlayerState_MainCity_C___FeatureRPC_StoreFeature_RPC_Client_BuyGoodsFinished___Params params;
	params.__FeatureRPC_StoreFeature_RPC_Client_BuyGoodsFinished___param1 = __FeatureRPC_StoreFeature_RPC_Client_BuyGoodsFinished___param1;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.ServerRPC_RecordOperationCount
// (Net, NetReliable, Public, NetServer)
// Parameters:
// TArray<int>                    ServerRPC_RecordOperationCount_param1 (Parm, ZeroConstructor)
// bool                           ServerRPC_RecordOperationCount_param2 (Parm)

void ABP_PlayerState_MainCity_C::ServerRPC_RecordOperationCount(TArray<int> ServerRPC_RecordOperationCount_param1, bool ServerRPC_RecordOperationCount_param2)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.ServerRPC_RecordOperationCount");

	ABP_PlayerState_MainCity_C_ServerRPC_RecordOperationCount_Params params;
	params.ServerRPC_RecordOperationCount_param1 = ServerRPC_RecordOperationCount_param1;
	params.ServerRPC_RecordOperationCount_param2 = ServerRPC_RecordOperationCount_param2;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.ServerRPC_EnableVoiceChanger
// (Net, NetReliable, Public, NetServer)
// Parameters:
// bool                           ServerRPC_EnableVoiceChanger_param1 (Parm)

void ABP_PlayerState_MainCity_C::ServerRPC_EnableVoiceChanger(bool ServerRPC_EnableVoiceChanger_param1)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.ServerRPC_EnableVoiceChanger");

	ABP_PlayerState_MainCity_C_ServerRPC_EnableVoiceChanger_Params params;
	params.ServerRPC_EnableVoiceChanger_param1 = ServerRPC_EnableVoiceChanger_param1;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.ServerRPC_AddCommonTLogData
// (Net, NetReliable, Public, NetServer)
// Parameters:
// int                            ServerRPC_AddCommonTLogData_param1 (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 StrProperty_1                  (Parm, ZeroConstructor)
// int                            ServerRPC_AddCommonTLogData_param3 (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerState_MainCity_C::ServerRPC_AddCommonTLogData(int ServerRPC_AddCommonTLogData_param1, const struct FString& StrProperty_1, int ServerRPC_AddCommonTLogData_param3)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.ServerRPC_AddCommonTLogData");

	ABP_PlayerState_MainCity_C_ServerRPC_AddCommonTLogData_Params params;
	params.ServerRPC_AddCommonTLogData_param1 = ServerRPC_AddCommonTLogData_param1;
	params.StrProperty_1 = StrProperty_1;
	params.ServerRPC_AddCommonTLogData_param3 = ServerRPC_AddCommonTLogData_param3;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.ReportClientPing
// (Net, NetReliable, Public, NetServer)
// Parameters:
// int                            ReportClientPing_param1        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReportClientPing_param2        (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerState_MainCity_C::ReportClientPing(int ReportClientPing_param1, int ReportClientPing_param2)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.ReportClientPing");

	ABP_PlayerState_MainCity_C_ReportClientPing_Params params;
	params.ReportClientPing_param1 = ReportClientPing_param1;
	params.ReportClientPing_param2 = ReportClientPing_param2;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.#[FeatureRPC(TeammateTakeOverFeature.RPC_Server_ResponseTeammateTakeOver)]
// (Net, NetReliable, Public, NetServer)
// Parameters:
// bool                           __FeatureRPC_TeammateTakeOverFeature_RPC_Server_ResponseTeammateTakeOver___param1 (Parm)
// bool                           __FeatureRPC_TeammateTakeOverFeature_RPC_Server_ResponseTeammateTakeOver___param2 (Parm)

void ABP_PlayerState_MainCity_C::__FeatureRPC_TeammateTakeOverFeature_RPC_Server_ResponseTeammateTakeOver__(bool __FeatureRPC_TeammateTakeOverFeature_RPC_Server_ResponseTeammateTakeOver___param1, bool __FeatureRPC_TeammateTakeOverFeature_RPC_Server_ResponseTeammateTakeOver___param2)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.#[FeatureRPC(TeammateTakeOverFeature.RPC_Server_ResponseTeammateTakeOver)]");

	ABP_PlayerState_MainCity_C___FeatureRPC_TeammateTakeOverFeature_RPC_Server_ResponseTeammateTakeOver___Params params;
	params.__FeatureRPC_TeammateTakeOverFeature_RPC_Server_ResponseTeammateTakeOver___param1 = __FeatureRPC_TeammateTakeOverFeature_RPC_Server_ResponseTeammateTakeOver___param1;
	params.__FeatureRPC_TeammateTakeOverFeature_RPC_Server_ResponseTeammateTakeOver___param2 = __FeatureRPC_TeammateTakeOverFeature_RPC_Server_ResponseTeammateTakeOver___param2;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.#[FeatureRPC(StoreFeature.RPC_Server_ShowNearestStore)]
// (Net, NetReliable, Public, NetServer)

void ABP_PlayerState_MainCity_C::__FeatureRPC_StoreFeature_RPC_Server_ShowNearestStore__()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.#[FeatureRPC(StoreFeature.RPC_Server_ShowNearestStore)]");

	ABP_PlayerState_MainCity_C___FeatureRPC_StoreFeature_RPC_Server_ShowNearestStore___Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.#[FeatureRPC(StoreFeature.RPC_Server_OpenStore)]
// (Net, NetReliable, Public, NetServer)
// Parameters:
// class AActor*                  __FeatureRPC_StoreFeature_RPC_Server_OpenStore___param1 (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerState_MainCity_C::__FeatureRPC_StoreFeature_RPC_Server_OpenStore__(class AActor* __FeatureRPC_StoreFeature_RPC_Server_OpenStore___param1)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.#[FeatureRPC(StoreFeature.RPC_Server_OpenStore)]");

	ABP_PlayerState_MainCity_C___FeatureRPC_StoreFeature_RPC_Server_OpenStore___Params params;
	params.__FeatureRPC_StoreFeature_RPC_Server_OpenStore___param1 = __FeatureRPC_StoreFeature_RPC_Server_OpenStore___param1;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.#[FeatureRPC(StoreFeature.RPC_Server_CloseStore)]
// (Net, NetReliable, Public, NetServer)
// Parameters:
// class AActor*                  __FeatureRPC_StoreFeature_RPC_Server_CloseStore___param1 (Parm, ZeroConstructor, IsPlainOldData)
// int                            __FeatureRPC_StoreFeature_RPC_Server_CloseStore___param2 (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerState_MainCity_C::__FeatureRPC_StoreFeature_RPC_Server_CloseStore__(class AActor* __FeatureRPC_StoreFeature_RPC_Server_CloseStore___param1, int __FeatureRPC_StoreFeature_RPC_Server_CloseStore___param2)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.#[FeatureRPC(StoreFeature.RPC_Server_CloseStore)]");

	ABP_PlayerState_MainCity_C___FeatureRPC_StoreFeature_RPC_Server_CloseStore___Params params;
	params.__FeatureRPC_StoreFeature_RPC_Server_CloseStore___param1 = __FeatureRPC_StoreFeature_RPC_Server_CloseStore___param1;
	params.__FeatureRPC_StoreFeature_RPC_Server_CloseStore___param2 = __FeatureRPC_StoreFeature_RPC_Server_CloseStore___param2;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.#[FeatureRPC(StoreFeature.RPC_Server_BuyGoods)]
// (Net, NetReliable, Public, NetServer)
// Parameters:
// class AActor*                  __FeatureRPC_StoreFeature_RPC_Server_BuyGoods___param1 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    __FeatureRPC_StoreFeature_RPC_Server_BuyGoods___param2 (Parm, ZeroConstructor)
// TArray<int>                    __FeatureRPC_StoreFeature_RPC_Server_BuyGoods___param3 (Parm, ZeroConstructor)
// TArray<int>                    __FeatureRPC_StoreFeature_RPC_Server_BuyGoods___param4 (Parm, ZeroConstructor)

void ABP_PlayerState_MainCity_C::__FeatureRPC_StoreFeature_RPC_Server_BuyGoods__(class AActor* __FeatureRPC_StoreFeature_RPC_Server_BuyGoods___param1, TArray<int> __FeatureRPC_StoreFeature_RPC_Server_BuyGoods___param2, TArray<int> __FeatureRPC_StoreFeature_RPC_Server_BuyGoods___param3, TArray<int> __FeatureRPC_StoreFeature_RPC_Server_BuyGoods___param4)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.#[FeatureRPC(StoreFeature.RPC_Server_BuyGoods)]");

	ABP_PlayerState_MainCity_C___FeatureRPC_StoreFeature_RPC_Server_BuyGoods___Params params;
	params.__FeatureRPC_StoreFeature_RPC_Server_BuyGoods___param1 = __FeatureRPC_StoreFeature_RPC_Server_BuyGoods___param1;
	params.__FeatureRPC_StoreFeature_RPC_Server_BuyGoods___param2 = __FeatureRPC_StoreFeature_RPC_Server_BuyGoods___param2;
	params.__FeatureRPC_StoreFeature_RPC_Server_BuyGoods___param3 = __FeatureRPC_StoreFeature_RPC_Server_BuyGoods___param3;
	params.__FeatureRPC_StoreFeature_RPC_Server_BuyGoods___param4 = __FeatureRPC_StoreFeature_RPC_Server_BuyGoods___param4;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.#[FeatureRPC(PhotoGrapherFeature.RPC_Server_PlayPetFeature)]
// (Net, NetReliable, Public, NetServer)

void ABP_PlayerState_MainCity_C::__FeatureRPC_PhotoGrapherFeature_RPC_Server_PlayPetFeature__()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.#[FeatureRPC(PhotoGrapherFeature.RPC_Server_PlayPetFeature)]");

	ABP_PlayerState_MainCity_C___FeatureRPC_PhotoGrapherFeature_RPC_Server_PlayPetFeature___Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.#[FeatureRPC(PhotoGrapherFeature.RPC_Server_PhotographerOp)]
// (Net, NetReliable, Public, NetServer)
// Parameters:
// int                            __FeatureRPC_PhotoGrapherFeature_RPC_Server_PhotographerOp___param1 (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerState_MainCity_C::__FeatureRPC_PhotoGrapherFeature_RPC_Server_PhotographerOp__(int __FeatureRPC_PhotoGrapherFeature_RPC_Server_PhotographerOp___param1)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.#[FeatureRPC(PhotoGrapherFeature.RPC_Server_PhotographerOp)]");

	ABP_PlayerState_MainCity_C___FeatureRPC_PhotoGrapherFeature_RPC_Server_PhotographerOp___Params params;
	params.__FeatureRPC_PhotoGrapherFeature_RPC_Server_PhotographerOp___param1 = __FeatureRPC_PhotoGrapherFeature_RPC_Server_PhotographerOp___param1;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.#[FeatureRPC(PhotoGrapherFeature.RPC_Server_ChangePhotoGrapherOpenState)]
// (Net, NetReliable, Public, NetServer)
// Parameters:
// bool                           __FeatureRPC_PhotoGrapherFeature_RPC_Server_ChangePhotoGrapherOpenState___param1 (Parm)
// int                            __FeatureRPC_PhotoGrapherFeature_RPC_Server_ChangePhotoGrapherOpenState___param2 (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerState_MainCity_C::__FeatureRPC_PhotoGrapherFeature_RPC_Server_ChangePhotoGrapherOpenState__(bool __FeatureRPC_PhotoGrapherFeature_RPC_Server_ChangePhotoGrapherOpenState___param1, int __FeatureRPC_PhotoGrapherFeature_RPC_Server_ChangePhotoGrapherOpenState___param2)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.#[FeatureRPC(PhotoGrapherFeature.RPC_Server_ChangePhotoGrapherOpenState)]");

	ABP_PlayerState_MainCity_C___FeatureRPC_PhotoGrapherFeature_RPC_Server_ChangePhotoGrapherOpenState___Params params;
	params.__FeatureRPC_PhotoGrapherFeature_RPC_Server_ChangePhotoGrapherOpenState___param1 = __FeatureRPC_PhotoGrapherFeature_RPC_Server_ChangePhotoGrapherOpenState___param1;
	params.__FeatureRPC_PhotoGrapherFeature_RPC_Server_ChangePhotoGrapherOpenState___param2 = __FeatureRPC_PhotoGrapherFeature_RPC_Server_ChangePhotoGrapherOpenState___param2;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.#[FeatureRPC(PhotoGrapherFeature.RPC_Server_ChangeEmotePlayRate)]
// (Net, NetReliable, Public, NetServer)
// Parameters:
// int                            __FeatureRPC_PhotoGrapherFeature_RPC_Server_ChangeEmotePlayRate___param1 (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerState_MainCity_C::__FeatureRPC_PhotoGrapherFeature_RPC_Server_ChangeEmotePlayRate__(int __FeatureRPC_PhotoGrapherFeature_RPC_Server_ChangeEmotePlayRate___param1)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.#[FeatureRPC(PhotoGrapherFeature.RPC_Server_ChangeEmotePlayRate)]");

	ABP_PlayerState_MainCity_C___FeatureRPC_PhotoGrapherFeature_RPC_Server_ChangeEmotePlayRate___Params params;
	params.__FeatureRPC_PhotoGrapherFeature_RPC_Server_ChangeEmotePlayRate___param1 = __FeatureRPC_PhotoGrapherFeature_RPC_Server_ChangeEmotePlayRate___param1;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.MultiCast_GenericRPC
// (Net, NetReliable, NetMulticast, Public)
// Parameters:
// int                            MultiCast_GenericRPC_param1    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          MultiCast_GenericRPC_param2    (Parm, ZeroConstructor)

void ABP_PlayerState_MainCity_C::MultiCast_GenericRPC(int MultiCast_GenericRPC_param1, TArray<unsigned char> MultiCast_GenericRPC_param2)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.MultiCast_GenericRPC");

	ABP_PlayerState_MainCity_C_MultiCast_GenericRPC_Params params;
	params.MultiCast_GenericRPC_param1 = MultiCast_GenericRPC_param1;
	params.MultiCast_GenericRPC_param2 = MultiCast_GenericRPC_param2;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerState_MainCity_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.UserConstructionScript");

	ABP_PlayerState_MainCity_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

