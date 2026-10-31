#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:17 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C
// 0x0068 (0x2218 - 0x21B0)
class ABP_STExtraWheeledVehicle_C : public ASTExtraWheeledVehicle
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x21B0(0x0008) (Transient, DuplicateTransient)
	class UBP_VehicleMusic_C*                          BP_VehicleMusic;                                          // 0x21B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWheeledVehicleProtectionComponent*          VehicleProtection;                                        // 0x21C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_VehicleShowFrameComp_C*                  BP_VehicleShowFrameComp;                                  // 0x21C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleAvatarComponent_BP_C*                VehicleAvatarComponent_BP;                                // 0x21D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCameraComponent*                            Camera;                                                   // 0x21D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSpringArmComponent*                  vehicleSpringArm;                                         // 0x21E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsPlayingEngineAk;                                        // 0x21E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x21E9(0x0007) MISSED OFFSET
	struct FName                                       TailLightParamName;                                       // 0x21F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FrontLightParamName;                                      // 0x21F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FPPBoostLightParamName;                                   // 0x2200(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEngineStarted;                                           // 0x2208(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x2209(0x0003) MISSED OFFSET
	float                                              LastOverlapShakeTime;                                     // 0x220C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OverlapShakeInterval;                                     // 0x2210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLobbyShow;                                               // 0x2214(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInvincibleProtect;                                       // 0x2215(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableLightEffect;                                        // 0x2216(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableUpdateExhuastEffectBP;                             // 0x2217(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C");
		return pStaticClass;
	}


	void OnClientVehicleHealthStateChangedToDestory();
	void CreateDMI();
	void SetDMIParam(class UMaterialInstanceDynamic* Dim, const struct FName& Name, float Value);
	void UpdateExhaustFx(const struct FName& ExhaustName);
	void UserConstructionScript();
	void OnEngineStart();
	void OnEngineStop();
	void ReceiveBeginPlay();
	void OnSetTailLightValue(float* LightValue);
	void OnBoostingChanged();
	void VehicleMeshChanged();
	void BPPlayOverlapDamageCameraShake();
	void ReceiveActorBeginOverlap(class AActor** OtherActor);
	void AdvanceVehicleMeshChanged();
	void ExecuteUbergraph_BP_STExtraWheeledVehicle(int EntryPoint);
};


}

