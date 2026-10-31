#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:51 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerDeadBox.PlayerDeadBox_C
// 0x00C8 (0x07B0 - 0x06E8)
class APlayerDeadBox_C : public APlayerTombBox
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06E8(0x0008) (Transient, DuplicateTransient)
	class UInteractiveComponent_C*                     InteractiveComponent;                                     // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    TeammateParticleSystem;                                   // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    DeadParticleSystem;                                       // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDeadBoxAvatarComponent_BP_C*                DeadBoxAvatarComponent_BP;                                // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkComponent*                                AkComponent;                                              // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USTScreenAppearanceComponent*                STScreenAppearance;                                       // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SM_plane_01;                                              // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USplineComponent*                            Spline;                                                   // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCameraComponent*                            Camera;                                                   // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Survive_FMC_Chest1;                                       // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PitchTimeline_NewTrack_2_968FF7FD4B819605A16739A661556F94;// 0x0750(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    PitchTimeline__Direction_968FF7FD4B819605A16739A661556F94;// 0x0754(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0755(0x0003) MISSED OFFSET
	class UTimelineComponent*                          PitchTimeline;                                            // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MatParamTimeline_NewTrack_1_BC760681429EE06B831346878CD5F7A7;// 0x0760(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    MatParamTimeline__Direction_BC760681429EE06B831346878CD5F7A7;// 0x0764(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0765(0x0003) MISSED OFFSET
	class UTimelineComponent*                          MatParamTimeline;                                         // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraMove_NewTrack_0_D08AF709411B99835C3653A068B1A989;   // 0x0770(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    CameraMove__Direction_D08AF709411B99835C3653A068B1A989;   // 0x0774(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0775(0x0003) MISSED OFFSET
	class UTimelineComponent*                          CameraMove;                                               // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynamicMat;                                               // 0x0780(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsPlayingAudio;                                          // 0x0788(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasOpenAnim;                                             // 0x0789(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x078A(0x0006) MISSED OFFSET
	class UStaticMesh*                                 DefaultMesh;                                              // 0x0790(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CarryBoxScale;                                            // 0x0798(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     DefaultBoxScale;                                          // 0x07A4(0x000C) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass PlayerDeadBox.PlayerDeadBox_C");
		return pStaticClass;
	}


	void WarmodeEnterSpectating();
	void LuaCheckCanPlayAudio(bool* bCanPlayAudio);
	struct FVector GetGroundLocation();
	void UserConstructionScript();
	void CameraMove__FinishedFunc();
	void CameraMove__UpdateFunc();
	void MatParamTimeline__FinishedFunc();
	void MatParamTimeline__UpdateFunc();
	void PitchTimeline__FinishedFunc();
	void PitchTimeline__UpdateFunc();
	void ShowShine();
	void ShowNormal();
	void ReceiveBeginPlay();
	void SwitchToDeadTombBox();
	void HideDeadTombApparence();
	void OnRep_AvatarId();
	void OnAvatarLoadedDone();
	void ResetToDefaultMesh();
	void ExecuteUbergraph_PlayerDeadBox(int EntryPoint);
};


}

