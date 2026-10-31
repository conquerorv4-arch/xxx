#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:36:01 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PetComponent_BP.PetComponent_BP_C
// 0x0071 (0x02F1 - 0x0280)
class UPetComponent_BP_C : public USTExtraFightPetComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (Transient, DuplicateTransient)
	class UClass*                                      SpawnPetClass;                                            // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  SpawnTrans;                                               // 0x0290(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              NewVar_1;                                                 // 0x02C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnRepPetPawnCalled;                                       // 0x02D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRepPetInfo;                                             // 0x02E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bNeedRecreateMiniTv;                                      // 0x02F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass PetComponent_BP.PetComponent_BP_C");
		return pStaticClass;
	}


	void SetSpawnPetPosZ();
	void IsFPPMode(bool* Out);
	void GetPetOwnerPlayerPawn(class ABP_PlayerPawn_C** Out);
	void GetPetPawn(class ABasePetCharacter_BP_C** Out);
	void SetPetPawn(class ASTExtraPetCharacter* InPetPawn, class ASTExtraPetCharacter** Out);
	void SetPetOwnerPlayerPawn(class ASTExtraBaseCharacter* InPlayerPawn, class ASTExtraBaseCharacter** Out);
	void ResetAttachTrans();
	void SpawnPetWithInfo(const struct FGameModePlayerPetInfo& Info);
	void SpawnPet(class UClass* PetClass);
	void RemovePet();
	void PlayerStateChange(EPawnState State, TEnumAsByte<EPawnStateChangeType> ChangeType);
	void OnOwnerPlayerPossessed(const struct FGameModePlayerPetInfo& PetInfo);
	void OnOwnerDetachedVehicle();
	void OnRep_PetPawn();
	void OnRep_PetOwnerPlayerPawn();
	void OnRep_PetInfo();
	void DoChangePetWithInfo(struct FGameModePlayerPetInfo* InPetInfo);
	void OnPlayerStateEnterEvent(EPawnState State);
	void OnPlayerStateLeaveEvent(EPawnState State);
	void ExecuteUbergraph_PetComponent_BP(int EntryPoint);
	void OnRepPetInfo__DelegateSignature();
	void OnRepPetPawnCalled__DelegateSignature();
};


}

