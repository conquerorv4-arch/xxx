#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:38 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LobbyVehicle.BP_LobbyVehicle_C
// 0x0104 (0x069C - 0x0598)
class ABP_LobbyVehicle_C : public ASTExtraLobbyVehicle
{
public:
	class UBP_VehicleDIYComp_C*                        BP_VehicleDIYComp;                                        // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_Lobby_VehicleLicenseComponent_C*         BP_Lobby_VehicleLicenseComponent;                         // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleAvatarComponent_BP_C*                VehicleAvatarComponent_BP;                                // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DMI;                                                      // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    FPPDynamicMat;                                            // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       TailLightParamName;                                       // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FrontLightParamName;                                      // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FPPBoostLightParamName;                                   // 0x05D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                vehicleResId;                                             // 0x05D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x05DC(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    DMI_TailLight;                                            // 0x05E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DMI_AdvanceVehicle;                                       // 0x05E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                HighlightTryTime;                                         // 0x05F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x05F4(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData02[0x50];                                      // 0x05F4(0x0050) UNKNOWN PROPERTY: SetProperty BP_LobbyVehicle.BP_LobbyVehicle_C.SkyMotors
	unsigned char                                      UnknownData03[0x50];                                      // 0x0648(0x0050) UNKNOWN PROPERTY: SetProperty BP_LobbyVehicle.BP_LobbyVehicle_C.SpecialMotors
	int                                                ShowType;                                                 // 0x0698(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_LobbyVehicle.BP_LobbyVehicle_C");
		return pStaticClass;
	}


	void TrySetHighLight(float NewParam, float NewParam1, float NewParam2);
	void SetHighLight(float invincible, float FreExp, float Speed);
	void SetDMIParam(class UMaterialInstanceDynamic* Target, const struct FName& Name, float Value);
	void GetVehicleMasterPath(int VehicleSkinID, struct FString* MeshBasePath);
	void UserConstructionScript();
};


}

