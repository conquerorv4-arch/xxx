#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:51 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FPPComponent.FPPComponent_C
// 0x00F8 (0x0678 - 0x0580)
class UFPPComponent_C : public UBaseFPPComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0580(0x0008) (Transient, DuplicateTransient)
	class ABP_PlayerPawn_C*                            PawnBP;                                                   // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              DeltaTime;                                                // 0x0590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0594(0x0004) MISSED OFFSET
	class USkeletalMeshComponent*                      NewVar_1;                                                 // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 SightLens;                                                // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInstance*>                   ScopeMaterialOverride;                                    // 0x05A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        Scope4XType1;                                             // 0x05B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        Scope4XType2;                                             // 0x05C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, struct FLinearColor>          ScopeColorMap;                                            // 0x05D8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, class UMaterialInterface*>    MaterialCahceMap;                                         // 0x0628(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass FPPComponent.FPPComponent_C");
		return pStaticClass;
	}


	void IsNeedChangeTexOpacity(bool* bNeedChange);
	void GetMateriaByString(const struct FString& Name, class UMaterialInterface** Material);
	void ScopingAttachToHead();
	void ScopingAttachToGun();
	class UMaterialInstance* GetScopeMaterialOverride(class ASTExtraShootWeapon** Weapon);
	void ResetScreenPercentage();
	void DownScreenPercentage();
	void ChangeScopeTPPGlassMat(class UMeshComponent* ScopeMeshComp, int ScopeID);
	void GetScopeMatTableKey(class ASTExtraPlayerController* PlayerController, class ASTExtraShootWeapon* Weapon, EWeaponAttachmentSocketType ScopeType, struct FString* Key);
	void IsScopeSpecialMatExist(class ASTExtraWeapon* Weapon, EWeaponAttachmentSocketType ScopeType, bool* exist, int* MatTableKey);
	float SwitchAngledSightConfigMaterial(bool* forceSwitch);
	float ShowAngledSightTPPMaterial(bool* forceADSState);
	float SwitchSightConfigMaterial();
	float ShowReflectorSightTPPMaterial(bool* forceADSState);
	float GetScopeFov(class ASTExtraWeapon** Weapon, bool* bIsAngled);
	void SetTagCullingBP(bool IsUse);
	void requestResourceGuarantee(int InOrOut, TEnumAsByte<ELoadMode> loadMode, TEnumAsByte<EApplyStatus> applyStatus);
	void ReceiveTick(float* DeltaSeconds);
	void ReloadEvent();
	void SetTagCulling(bool* IsUse);
	void PlayScopeInTimeline();
	void ScopeInEnd();
	void ScopeOutEnd();
	void StopScopeIn();
	void AttachToSight();
	void AttachTo(class USceneComponent* NewParam);
	void Detach(class USceneComponent* NewParam);
	void AutoReloadEvent(class ASTExtraShootWeapon* ShootWeapon);
	void AttachToSightKeepTransform();
	void ExecuteUbergraph_FPPComponent(int EntryPoint);
};


}

