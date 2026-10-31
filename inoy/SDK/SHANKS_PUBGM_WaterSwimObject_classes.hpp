#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:53 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WaterSwimObject.WaterSwimObject_C
// 0x0699 (0x0B99 - 0x0500)
class AWaterSwimObject_C : public AWaterSwimActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0500(0x0008) (Transient, DuplicateTransient)
	class UGameEventListener*                          GameEventListener;                                        // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    P_Water_down_01;                                          // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkComponent*                                Ak;                                                       // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPostProcessComponent*                       PostProcess;                                              // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               PostSceneBox;                                             // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        watermesh;                                                // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Gamma;                                                    // 0x0540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0544(0x000C) MISSED OFFSET
	struct FPostProcessSettings                        NewVar_1;                                                 // 0x0550(0x0560) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class ASTExtraBaseCharacter*>               playerList;                                               // 0x0AB0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TEnumAsByte<ESTEPoseState>                         NewVar_2;                                                 // 0x0AC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0AC1(0x0003) MISSED OFFSET
	float                                              FogDensity;                                               // 0x0AC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AExponentialHeightFog*                       HeightFog;                                                // 0x0AC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    NoHDRWater;                                               // 0x0AD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    HDROcean;                                                 // 0x0AD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    HDRSwamp;                                                 // 0x0AE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          HDROceanMaterial;                                         // 0x0AE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          SUPHDROceanMaterial;                                      // 0x0AF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          HDRSwampMaterial;                                         // 0x0AF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          SUPHDRSwampMaterial;                                      // 0x0B00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          NoHDRWaterMaterial;                                       // 0x0B08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CurrentMaterialIndex;                                     // 0x0B10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0B14(0x0004) MISSED OFFSET
	TArray<class UMaterialInterface*>                  MaterialList;                                             // 0x0B18(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsSetSwamp;                                               // 0x0B28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0B29(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData04[0x50];                                      // 0x0B29(0x0050) UNKNOWN PROPERTY: SetProperty WaterSwimObject.WaterSwimObject_C.newIOSDevice
	class UMaterialInterface*                          WaterMaterial_SUP_HDR;                                    // 0x0B80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          WaterMaterial_HDR;                                        // 0x0B88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          WaterMaterial_Normal;                                     // 0x0B90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsIphoneNewWater;                                         // 0x0B98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass WaterSwimObject.WaterSwimObject_C");
		return pStaticClass;
	}


	void SetWaterMaterialByGamePawnEvent(TEnumAsByte<EGamePawnEvent> Event);
	void SetWaterMaterial(int NewParam);
	void RefreshWaterMaterial();
	void DoTrySetWaterMaterial(int NewParam);
	void TrySetWaterMaterial(int NewParam);
	void IsSupportIndex(int NewParam, bool* NewParam1);
	void IsNewIphone(bool* IsNewIphone);
	void SetWateMaterial(bool bHDR);
	void HideUnderWaterEffect(class UStaticMeshComponent* WaterPlane, class UExponentialHeightFogComponent* CamFog);
	void ShowUnderWaterEffect(class UStaticMeshComponent* WaterPlane, class UExponentialHeightFogComponent* CamFog);
	bool IsCapsult(class UObject* PlayerPawn, class UActorComponent* comp);
	void UserConstructionScript();
	void BndEvt__PostSceneBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__PostSceneBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ReceiveBeginPlay();
	void CustomEvent_2(int UserQualitySettingLevel);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void CustomEvent_3(bool UserMsaaSetting);
	void CustomEvent_4(bool bOpenWaterReflection);
	void ExecuteUbergraph_WaterSwimObject(int EntryPoint);
};


}

