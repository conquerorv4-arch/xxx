#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:36:04 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerDeadInventoryBox.PlayerDeadInventoryBox_C
// 0x006E (0x0756 - 0x06E8)
class APlayerDeadInventoryBox_C : public APlayerTombBox
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06E8(0x0008) (Transient, DuplicateTransient)
	class UAkComponent*                                AkComponent;                                              // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USTScreenAppearanceComponent*                STScreenAppearance;                                       // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SM_plane_01;                                              // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USplineComponent*                            Spline;                                                   // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCameraComponent*                            Camera;                                                   // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Survive_FMC_Chest1;                                       // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynamicMat;                                               // 0x0720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TeammateParticleLoc;                                      // 0x0728(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0734(0x0004) MISSED OFFSET
	class UParticleSystem*                             TeammateParticle;                                         // 0x0738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             DeadParticle;                                             // 0x0740(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DeadParticleLoc;                                          // 0x0748(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bIsPlayingAudio;                                          // 0x0754(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasOpenAnim;                                             // 0x0755(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass PlayerDeadInventoryBox.PlayerDeadInventoryBox_C");
		return pStaticClass;
	}


	void LuaCheckCanPlayAudio(bool* bCanPlayAudio);
	struct FVector GetGroundLocation();
	void GetVector4(const struct FVector& Dest, float Ratio);
	void UserConstructionScript();
	void HideDeadTombApparence();
	void ReceiveTick(float* DeltaSeconds);
	void SwitchToDeadTombBox();
	void ReceiveBeginPlay();
	void ShowNormal();
	void ShowShine();
	void OpenListenUIEvent(bool* bOpen);
	void ExecuteUbergraph_PlayerDeadInventoryBox(int EntryPoint);
};


}

