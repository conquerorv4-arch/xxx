#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:43 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlayerState_MainCity.BP_PlayerState_MainCity_C
// 0x0008 (0x1CE0 - 0x1CD8)
class ABP_PlayerState_MainCity_C : public AMainCityPlayerState
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x1CD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_PlayerState_MainCity.BP_PlayerState_MainCity_C");
		return pStaticClass;
	}


	void __FeatureRPC_InteractivePlayerStateFeature_RPC_Server_ExitInteractiveState__(int __FeatureRPC_InteractivePlayerStateFeature_RPC_Server_ExitInteractiveState___param1);
	void __FeatureRPC_InteractivePlayerStateFeature_RPC_Server_EnterInteractiveState__(int __FeatureRPC_InteractivePlayerStateFeature_RPC_Server_EnterInteractiveState___param1, int __FeatureRPC_InteractivePlayerStateFeature_RPC_Server_EnterInteractiveState___param2);
	void ClientRPCTeammateRealExit(int ClientRPCTeammateRealExit_param1, uint32_t ClientRPCTeammateRealExit_param2);
	void ClientRPC_VersionTaskChanged(int ClientRPC_VersionTaskChanged_param1, int ClientRPC_VersionTaskChanged_param2);
	void __FeatureRPC_TeammateTakeOverFeature_RPC_Client_RequestTeammateTakeOver__();
	void __FeatureRPC_StoreFeature_RPC_Client_BuyGoodsFinished__(bool __FeatureRPC_StoreFeature_RPC_Client_BuyGoodsFinished___param1);
	void ServerRPC_RecordOperationCount(TArray<int> ServerRPC_RecordOperationCount_param1, bool ServerRPC_RecordOperationCount_param2);
	void ServerRPC_EnableVoiceChanger(bool ServerRPC_EnableVoiceChanger_param1);
	void ServerRPC_AddCommonTLogData(int ServerRPC_AddCommonTLogData_param1, const struct FString& StrProperty_1, int ServerRPC_AddCommonTLogData_param3);
	void ReportClientPing(int ReportClientPing_param1, int ReportClientPing_param2);
	void __FeatureRPC_TeammateTakeOverFeature_RPC_Server_ResponseTeammateTakeOver__(bool __FeatureRPC_TeammateTakeOverFeature_RPC_Server_ResponseTeammateTakeOver___param1, bool __FeatureRPC_TeammateTakeOverFeature_RPC_Server_ResponseTeammateTakeOver___param2);
	void __FeatureRPC_StoreFeature_RPC_Server_ShowNearestStore__();
	void __FeatureRPC_StoreFeature_RPC_Server_OpenStore__(class AActor* __FeatureRPC_StoreFeature_RPC_Server_OpenStore___param1);
	void __FeatureRPC_StoreFeature_RPC_Server_CloseStore__(class AActor* __FeatureRPC_StoreFeature_RPC_Server_CloseStore___param1, int __FeatureRPC_StoreFeature_RPC_Server_CloseStore___param2);
	void __FeatureRPC_StoreFeature_RPC_Server_BuyGoods__(class AActor* __FeatureRPC_StoreFeature_RPC_Server_BuyGoods___param1, TArray<int> __FeatureRPC_StoreFeature_RPC_Server_BuyGoods___param2, TArray<int> __FeatureRPC_StoreFeature_RPC_Server_BuyGoods___param3, TArray<int> __FeatureRPC_StoreFeature_RPC_Server_BuyGoods___param4);
	void __FeatureRPC_PhotoGrapherFeature_RPC_Server_PlayPetFeature__();
	void __FeatureRPC_PhotoGrapherFeature_RPC_Server_PhotographerOp__(int __FeatureRPC_PhotoGrapherFeature_RPC_Server_PhotographerOp___param1);
	void __FeatureRPC_PhotoGrapherFeature_RPC_Server_ChangePhotoGrapherOpenState__(bool __FeatureRPC_PhotoGrapherFeature_RPC_Server_ChangePhotoGrapherOpenState___param1, int __FeatureRPC_PhotoGrapherFeature_RPC_Server_ChangePhotoGrapherOpenState___param2);
	void __FeatureRPC_PhotoGrapherFeature_RPC_Server_ChangeEmotePlayRate__(int __FeatureRPC_PhotoGrapherFeature_RPC_Server_ChangeEmotePlayRate___param1);
	void MultiCast_GenericRPC(int MultiCast_GenericRPC_param1, TArray<unsigned char> MultiCast_GenericRPC_param2);
	void UserConstructionScript();
};


}

