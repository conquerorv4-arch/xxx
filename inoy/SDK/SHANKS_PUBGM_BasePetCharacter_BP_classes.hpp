#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:59 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BasePetCharacter_BP.BasePetCharacter_BP_C
// 0x00F1 (0x14F1 - 0x1400)
class ABasePetCharacter_BP_C : public ASTExtraFightPetCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1400(0x0008) (Transient, DuplicateTransient)
	class UPetBubbleComponent_BP_C*                    PetBubbleComponent_BP;                                    // 0x1408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPetAvatarComponent_BP_C*                    PetAvatarComponent_BP;                                    // 0x1410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USTBuffSystemComponent*                      STBuffSystem;                                             // 0x1418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPetEntityComponent_BP_C*                    PetEntity;                                                // 0x1420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPetEventManagerComponent*                   PetEventManager;                                          // 0x1428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_Track_CE2094E94B1D206C7858FC99724BAEFA;        // 0x1430(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_CE2094E94B1D206C7858FC99724BAEFA;   // 0x1434(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1435(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x1438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ASTExtraPlayerController*                    OwnerCharacterController;                                 // 0x1440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    PetOwnerStateChangeDispatcher;                            // 0x1448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<int>                                        UnlockAnimIds;                                            // 0x1458(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USplineComponent*                            PetParachuteSpline;                                       // 0x1468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USplineMeshComponent*                        ParachuteSpline;                                          // 0x1470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               VisibilityToSet;                                          // 0x1478(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x1479(0x0007) MISSED OFFSET
	struct FTimerHandle                                CheckAirAttackTimer;                                      // 0x1480(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     CurAttackArea;                                            // 0x1488(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInAttackArea;                                           // 0x1494(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x1495(0x0003) MISSED OFFSET
	struct FTimerHandle                                DebugLineTimer;                                           // 0x1498(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsPlayingAppearAnim;                                      // 0x14A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x14A1(0x0003) MISSED OFFSET
	float                                              PetAppearTime;                                            // 0x14A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PetDelayLeaveDisappearTime;                               // 0x14A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x14AC(0x0004) MISSED OFFSET
	struct FTimerHandle                                PetDelayLeaveDisappearTimer;                              // 0x14B0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               HasResetAttachByAnim;                                     // 0x14B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EPawnState                                         TPlayerState;                                             // 0x14B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EPawnStateChangeType>                  TChangeType;                                              // 0x14BA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x14BB(0x0001) MISSED OFFSET
	float                                              TeleportMinAngle;                                         // 0x14BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TeleportMaxAngle;                                         // 0x14C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldHideOnFirstPersonView;                              // 0x14C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x14C5(0x0003) MISSED OFFSET
	struct FVector                                     SwimOffset;                                               // 0x14C8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                CountToPlayWinAnim;                                       // 0x14D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxCountToPlayWinAnim;                                    // 0x14D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IntervalToPlayWinAnim;                                    // 0x14DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPetHidden;                                               // 0x14E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPetExitParachuteForPlayerState;                          // 0x14E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bScopeInState;                                            // 0x14E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x1];                                       // 0x14E3(0x0001) MISSED OFFSET
	struct FVector                                     OriginalMeshScale;                                        // 0x14E4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSkipResetVisibilityWhenStateChange;                      // 0x14F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BasePetCharacter_BP.BasePetCharacter_BP_C");
		return pStaticClass;
	}


	void NeedUpdateTranslationInParachuteState(bool* Ret);
	void LoadAvatarLater(TArray<int>* NewParam);
	void LoadBehaviorTree();
	void ResetPetVisibility();
	void IsTeammateWithPetOwner(class ASTExtraPlayerCharacter* OtherPlayer, bool* NewParam);
	void HandleAirAttack(const struct FVector& Area, bool IsAirAttacking);
	void SetPetHidden(bool bHidden);
	void OnPetSwimmingStateChange(bool bEnter);
	void GetGameModeType(EGameModeType* GameModeType);
	void HandleOnOwnerWin();
	void OnPetOwnerFallingModeChange(bool IsFalling);
	void StopCurMontage();
	void ChangeToDefaultAttachInfo();
	void OnDelayLeaveDisappear();
	void OnPetLeaveState(TEnumAsByte<EPetState> LeaveState);
	void OnPetEnterState(TEnumAsByte<EPetState> EnterState);
	void OnPetAppearAnimEnd();
	void OnPetDisappearStateChange(bool IsEnter);
	void GetPetParachuteEquipments(TArray<int>* Out);
	void HandlePetStopParachute();
	void HandlePetStartParachute();
	void DetachFromOwnerPlayer();
	void InitPetAvatar();
	void SetPetFollowType(TEnumAsByte<EPetFollowOwnerType> Type);
	void PetHasDisappearState(bool* Out);
	void OnPetFlyAroundStateChange(bool IsEnter);
	void OnPetFollowStateChange(bool IsEnter);
	void UpdateAttachInfoByOwnerDefaultAvatar();
	void ResetAttachInfo();
	void GetPetInfo(struct FGameModePlayerPetInfo* PetInfo);
	void GetPetEntity(class UPetEntityComponent_BP_C** PetEntity);
	void DisableUnuseComponent();
	void CalcInAirAttackArea();
	void SelfPetVisibleSettingChanged(bool In);
	void OtherPetVisibleSettingChanged(bool In);
	void PetOtherVisibleSetting(bool* Out);
	void PetSelfVisibleSetting(bool* Out);
	void GetPetDefaultFollowType(TEnumAsByte<EPetFollowOwnerType>* FollowType);
	void DrawPetDebugInfo();
	void AttachToOwnerPlayer();
	void PetOwnerStopEmote(int EmoteId, int StopReason);
	void PetOwnerPlayEmote(int EmoteId);
	void AnimIdIsValid(int AnimId, bool* IsValid);
	void GetPetRspInfoWithPlayerEmoteId(int PlayerEmoteId, struct FBP_STRUCT_PetPlayerEmoteTable_type* Out_Row, bool* found);
	struct FString GetPetAnimLimitePlayerState(int* AnimId);
	TArray<int> GetPetUnlockAnimIds();
	class ASTExtraBaseCharacter* GetPetOwnerCharacter();
	void GetPetAttachInfo(struct FPetAttachInfo* AttachInfo);
	void GetPetEventManager(class UPetEventManagerComponent** PetEventManager);
	void SetOwnerCharacterPC();
	void GetOwnerCharacter(class ABP_PlayerPawn_C** OwnerCharacter);
	void SetOwnerCharacter(class ABP_PlayerPawn_C* Owner);
	void GetFollowPos(float MinRadius, float MaxRadius, struct FTransform* Out);
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void BindEvent();
	void BndEvt__PetEventManager_K2Node_ComponentBoundEvent_0_PetEventDelegate__DelegateSignature(class UPetWaitEventInfo* EventInfo);
	void PlayerStateChange(EPawnState State, TEnumAsByte<EPawnStateChangeType> ChangeType);
	void ReceiveBeginPlay();
	void PetOwnerCharacterBecomeValid();
	void UpdateSplineInfo();
	void PetStopParchute();
	void PetStartParachute();
	void OnPetStateChangeEvent(TEnumAsByte<EPetState> State, bool IsEnter);
	void OnPetMontageEvent(const struct FPetMontageData& MontageData);
	void OnAsyncLoadPetAnimRes(class UObject* LoadObject);
	void SetPetVisibility(bool* Visible);
	void OnOwnerWinEvent();
	void OnOwnerKillSomeone();
	void OnOwnerAssistKill();
	void OnMoveVoiceAround(class ASTExtraBaseCharacter* nowCharacter, const struct FVector& posVector, float showTime);
	void OnShotVoiceAround(class ASTExtraBaseCharacter* OwnerPawn, class ASTExtraShootWeapon* nowWeapon, const struct FVector& posVector, float showTime, bool isslience, bool isExplosion);
	void TriggerPetEvent(class UPetWaitEventInfo** Event);
	void NotifyBpDrawDebugLineChange(bool* Draw);
	void DebugLineTimerEvent();
	void OnPetOwnerStateInterruptEvent(EPawnState State, EPawnState InterruptedBy);
	void OnOwnerAvatarEquipped(EAvatarSlotType* SlotType, bool* IsEquipped, int* InItemID);
	void PetEnterPlane();
	void OnPetOwnerFallingModeChangeEvent(bool IsFalling);
	void OnOwnerPerspectiveChanged(bool IsFPP);
	void OnOwnerHoldGrenadeStateChange();
	void OnPetOwnerShoot(EPawnState State);
	void OnPetVisibility_EnterHide();
	void OnPetVisibility_EnterVisible();
	void OnPlayerEnterParachute();
	void OnPlayerExitParachute(EExitParachuteType exitType);
	void MyPetVisibleSettingTPP(bool BoolValue);
	void MyPetVisibleSettingFPP(bool BoolValue);
	void On(class ASTExtraBaseCharacter* DeadCharacter, class AController* Killer, class AActor* DamageCauser, const struct FHitResult& KillingHitInfo, const struct FVector& KillingHitImpulseDir, class UClass* KillingHitDamageType);
	void OnPlayerScopIN(bool bIsBegin);
	void CustomEvent(bool bIsBegin);
	void OnAvatarAllMeshLoaded_Event_1();
	void CustomEvent_2(bool bIsBegin);
	void CustomEvent_3(bool bIsBegin);
	void OnPlayerRespawned(class AUAEPlayerController* PlayerController);
	void OnRep_AttachToPetOwner();
	void ResetMaterialIfNeed();
	void ExecuteUbergraph_BasePetCharacter_BP(int EntryPoint);
	void PetOwnerStateChangeDispatcher__DelegateSignature(EPawnState State, TEnumAsByte<EPawnStateChangeType> ChangeType);
};


}

