#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:55 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BasePetController_BP.BasePetController_BP_C
// 0x0048 (0x0678 - 0x0630)
class ABasePetController_BP_C : public ASTExtraFightPetController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0630(0x0008) (Transient, DuplicateTransient)
	class UBehaviorTree*                               CurBT;                                                    // 0x0638(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       PetOwnerEmoteId;                                          // 0x0640(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       IsAirAttacking;                                           // 0x0648(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       AirAttackArea;                                            // 0x0650(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                CheckAirAttackTimer;                                      // 0x0658(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     CurAttackArea;                                            // 0x0660(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x066C(0x0004) MISSED OFFSET
	class UBehaviorTree*                               FlyBt;                                                    // 0x0670(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BasePetController_BP.BasePetController_BP_C");
		return pStaticClass;
	}


	void LoadBehaviorTree(int Clothes);
	void CalcInAirAttackArea();
	void OnPlayerStopEmote(int EmoteId, int Reason);
	void OnPlayerPlayEmote(int Emote);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ExecuteUbergraph_BasePetController_BP(int EntryPoint);
};


}

