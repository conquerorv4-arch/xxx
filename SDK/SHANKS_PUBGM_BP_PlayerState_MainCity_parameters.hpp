#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:43 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.#[FeatureRPC(InteractivePlayerStateFeature.RPC_Server_ExitInteractiveState)]
struct ABP_PlayerState_MainCity_C___FeatureRPC_InteractivePlayerStateFeature_RPC_Server_ExitInteractiveState___Params
{
	int                                                __FeatureRPC_InteractivePlayerStateFeature_RPC_Server_ExitInteractiveState___param1;// (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.#[FeatureRPC(InteractivePlayerStateFeature.RPC_Server_EnterInteractiveState)]
struct ABP_PlayerState_MainCity_C___FeatureRPC_InteractivePlayerStateFeature_RPC_Server_EnterInteractiveState___Params
{
	int                                                __FeatureRPC_InteractivePlayerStateFeature_RPC_Server_EnterInteractiveState___param1;// (Parm, ZeroConstructor, IsPlainOldData)
	int                                                __FeatureRPC_InteractivePlayerStateFeature_RPC_Server_EnterInteractiveState___param2;// (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.ClientRPCTeammateRealExit
struct ABP_PlayerState_MainCity_C_ClientRPCTeammateRealExit_Params
{
	int                                                ClientRPCTeammateRealExit_param1;                         // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           ClientRPCTeammateRealExit_param2;                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.ClientRPC_VersionTaskChanged
struct ABP_PlayerState_MainCity_C_ClientRPC_VersionTaskChanged_Params
{
	int                                                ClientRPC_VersionTaskChanged_param1;                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ClientRPC_VersionTaskChanged_param2;                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.#[FeatureRPC(TeammateTakeOverFeature.RPC_Client_RequestTeammateTakeOver)]
struct ABP_PlayerState_MainCity_C___FeatureRPC_TeammateTakeOverFeature_RPC_Client_RequestTeammateTakeOver___Params
{
};

// Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.#[FeatureRPC(StoreFeature.RPC_Client_BuyGoodsFinished)]
struct ABP_PlayerState_MainCity_C___FeatureRPC_StoreFeature_RPC_Client_BuyGoodsFinished___Params
{
	bool                                               __FeatureRPC_StoreFeature_RPC_Client_BuyGoodsFinished___param1;// (Parm)
};

// Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.ServerRPC_RecordOperationCount
struct ABP_PlayerState_MainCity_C_ServerRPC_RecordOperationCount_Params
{
	TArray<int>                                        ServerRPC_RecordOperationCount_param1;                    // (Parm, ZeroConstructor)
	bool                                               ServerRPC_RecordOperationCount_param2;                    // (Parm)
};

// Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.ServerRPC_EnableVoiceChanger
struct ABP_PlayerState_MainCity_C_ServerRPC_EnableVoiceChanger_Params
{
	bool                                               ServerRPC_EnableVoiceChanger_param1;                      // (Parm)
};

// Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.ServerRPC_AddCommonTLogData
struct ABP_PlayerState_MainCity_C_ServerRPC_AddCommonTLogData_Params
{
	int                                                ServerRPC_AddCommonTLogData_param1;                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     StrProperty_1;                                            // (Parm, ZeroConstructor)
	int                                                ServerRPC_AddCommonTLogData_param3;                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.ReportClientPing
struct ABP_PlayerState_MainCity_C_ReportClientPing_Params
{
	int                                                ReportClientPing_param1;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReportClientPing_param2;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.#[FeatureRPC(TeammateTakeOverFeature.RPC_Server_ResponseTeammateTakeOver)]
struct ABP_PlayerState_MainCity_C___FeatureRPC_TeammateTakeOverFeature_RPC_Server_ResponseTeammateTakeOver___Params
{
	bool                                               __FeatureRPC_TeammateTakeOverFeature_RPC_Server_ResponseTeammateTakeOver___param1;// (Parm)
	bool                                               __FeatureRPC_TeammateTakeOverFeature_RPC_Server_ResponseTeammateTakeOver___param2;// (Parm)
};

// Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.#[FeatureRPC(StoreFeature.RPC_Server_ShowNearestStore)]
struct ABP_PlayerState_MainCity_C___FeatureRPC_StoreFeature_RPC_Server_ShowNearestStore___Params
{
};

// Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.#[FeatureRPC(StoreFeature.RPC_Server_OpenStore)]
struct ABP_PlayerState_MainCity_C___FeatureRPC_StoreFeature_RPC_Server_OpenStore___Params
{
	class AActor*                                      __FeatureRPC_StoreFeature_RPC_Server_OpenStore___param1;  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.#[FeatureRPC(StoreFeature.RPC_Server_CloseStore)]
struct ABP_PlayerState_MainCity_C___FeatureRPC_StoreFeature_RPC_Server_CloseStore___Params
{
	class AActor*                                      __FeatureRPC_StoreFeature_RPC_Server_CloseStore___param1; // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                __FeatureRPC_StoreFeature_RPC_Server_CloseStore___param2; // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.#[FeatureRPC(StoreFeature.RPC_Server_BuyGoods)]
struct ABP_PlayerState_MainCity_C___FeatureRPC_StoreFeature_RPC_Server_BuyGoods___Params
{
	class AActor*                                      __FeatureRPC_StoreFeature_RPC_Server_BuyGoods___param1;   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        __FeatureRPC_StoreFeature_RPC_Server_BuyGoods___param2;   // (Parm, ZeroConstructor)
	TArray<int>                                        __FeatureRPC_StoreFeature_RPC_Server_BuyGoods___param3;   // (Parm, ZeroConstructor)
	TArray<int>                                        __FeatureRPC_StoreFeature_RPC_Server_BuyGoods___param4;   // (Parm, ZeroConstructor)
};

// Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.#[FeatureRPC(PhotoGrapherFeature.RPC_Server_PlayPetFeature)]
struct ABP_PlayerState_MainCity_C___FeatureRPC_PhotoGrapherFeature_RPC_Server_PlayPetFeature___Params
{
};

// Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.#[FeatureRPC(PhotoGrapherFeature.RPC_Server_PhotographerOp)]
struct ABP_PlayerState_MainCity_C___FeatureRPC_PhotoGrapherFeature_RPC_Server_PhotographerOp___Params
{
	int                                                __FeatureRPC_PhotoGrapherFeature_RPC_Server_PhotographerOp___param1;// (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.#[FeatureRPC(PhotoGrapherFeature.RPC_Server_ChangePhotoGrapherOpenState)]
struct ABP_PlayerState_MainCity_C___FeatureRPC_PhotoGrapherFeature_RPC_Server_ChangePhotoGrapherOpenState___Params
{
	bool                                               __FeatureRPC_PhotoGrapherFeature_RPC_Server_ChangePhotoGrapherOpenState___param1;// (Parm)
	int                                                __FeatureRPC_PhotoGrapherFeature_RPC_Server_ChangePhotoGrapherOpenState___param2;// (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.#[FeatureRPC(PhotoGrapherFeature.RPC_Server_ChangeEmotePlayRate)]
struct ABP_PlayerState_MainCity_C___FeatureRPC_PhotoGrapherFeature_RPC_Server_ChangeEmotePlayRate___Params
{
	int                                                __FeatureRPC_PhotoGrapherFeature_RPC_Server_ChangeEmotePlayRate___param1;// (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.MultiCast_GenericRPC
struct ABP_PlayerState_MainCity_C_MultiCast_GenericRPC_Params
{
	int                                                MultiCast_GenericRPC_param1;                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              MultiCast_GenericRPC_param2;                              // (Parm, ZeroConstructor)
};

// Function BP_PlayerState_MainCity.BP_PlayerState_MainCity_C.UserConstructionScript
struct ABP_PlayerState_MainCity_C_UserConstructionScript_Params
{
};

}

