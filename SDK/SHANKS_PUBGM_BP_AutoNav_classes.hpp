#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:22 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AutoNav.BP_AutoNav_C
// 0x0076 (0x02DE - 0x0268)
class UBP_AutoNav_C : public UPlayerAutoNavComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0268(0x0008) (Transient, DuplicateTransient)
	float                                              MinDistanceToDesc;                                        // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxFailMoveDescTime;                                      // 0x0274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurFailMoveDescTime;                                      // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotationSpeed;                                            // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<EPlayerAutoNavResult, int>                    ResultTipMap;                                             // 0x0280(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FRotator                                    NewVar_1;                                                 // 0x02D0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShowRequestTip;                                          // 0x02DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShowResultTip;                                           // 0x02DD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_AutoNav.BP_AutoNav_C");
		return pStaticClass;
	}


	void CheckObstacle(const struct FVector& StartLocation, const struct FVector& EndLoc, bool* bRet);
	bool IsArrivalDesc_Ex(const struct FVector& ActorLocation);
	void IsPartialPathFinding(bool* bRet);
	bool IsSwim();
	void GetLastMinDistance(float* Distance);
	bool CheckCharacterPoseState(class ASTExtraPlayerController** PC);
	void StopPlayerAutoSprint();
	void ShowStopMoveResult(EPlayerAutoNavResult Result);
	void ShowTips(int ID);
	void CallSetPlayerAutoSprint(class ASTExtraPlayerController* Target, class ASTExtraBaseCharacter* Character);
	void IsAutoSpint(bool* bAutoSprint);
	struct FRotator GetRotatorToDesc(const struct FVector& ActorLocation);
	void ResetMinDistanceToDesc(const struct FVector& ActorLocation);
	float GetDescDistance(const struct FVector& ActorLocation);
	bool IsLastPoint();
	void GotoNextPoint();
	bool IsArrivalDesc(const struct FVector& ActorLocation);
	void GetDesc(struct FVector* Desc);
	void TickCloseToTarget(class ASTExtraPlayerController** PC, float* DeltaTime);
	void OnStartAutoMove(class ASTExtraPlayerController** PC);
	void ReceiveBeginPlay();
	void CustomEvent(EPlayerAutoNavFindResult FindResult);
	void StopMove();
	void OnRepPlayerState();
	void BPOnRequestMove(EPlayerAutoNavMode* CurMode, struct FString* TargetParam, struct FVector* TargetLoc);
	void ExecuteUbergraph_BP_AutoNav(int EntryPoint);
};


}

