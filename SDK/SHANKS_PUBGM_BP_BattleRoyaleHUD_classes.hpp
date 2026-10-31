#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:36:05 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C
// 0x0030 (0x08D8 - 0x08A8)
class ABP_BattleRoyaleHUD_C : public ASurviveHUD
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08A8(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x08B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        DamageNumberDamageTypes;                                  // 0x08B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<EWeaponTypeNew>>                InvalidDamageNumberWeaponTypes;                           // 0x08C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C");
		return pStaticClass;
	}


	bool IsValidDamageNumber(class AActor** DamageCauser, int* DamageTypeId);
	struct FLinearColor GetPlayerNameColorByTeamID(int* TeamID);
	struct FLinearColor GetColorByTeamID(int* TeamID);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void HitFeedBackChanged(bool BoolValue);
	void OBSHitFeedbackChanged(bool BoolValue);
	void ExecuteUbergraph_BP_BattleRoyaleHUD(int EntryPoint);
};


}

