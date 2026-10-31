#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:34:51 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MainCity.CarryBackMCAnimInstance
// 0x0050 (0x1830 - 0x17E0)
class UCarryBackMCAnimInstance : public UCharacterAnimStateBase
{
public:
	class UBlendSpace*                                 BS_CarryBackMove;                                         // 0x17E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 BS_beCarryBackMove;                                       // 0x17E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ECarryBackAnimState                                CurrentCarryBackState;                                    // 0x17F0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x17F1(0x0007) MISSED OFFSET
	float                                              CarryBackTimeAccumulator;                                 // 0x17F8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCarryBackState;                                          // 0x17FC(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBeCarryBackState;                                        // 0x17FD(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x17FE(0x0002) MISSED OFFSET
	int                                                SubStateID;                                               // 0x1800(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x1804(0x0004) MISSED OFFSET
	class ASTExtraBaseCharacter*                       AttachParentCharacter;                                    // 0x1808(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AttachParentPawnMoveVelocity;                             // 0x1810(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     PreAnimVelocity;                                          // 0x181C(0x000C) (BlueprintVisible, IsPlainOldData)
	class USTExtraAnimInstanceBase*                    MainInstance;                                             // 0x1828(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MainCity.CarryBackMCAnimInstance");
		return pStaticClass;
	}


	void HandlePlayerPoseChange(TEnumAsByte<ESTEPoseState> LastPose, TEnumAsByte<ESTEPoseState> NewPose);
};


// Class MainCity.CharLocomotionMCAnimInstance
// 0x0260 (0x1A40 - 0x17E0)
class UCharLocomotionMCAnimInstance : public UCharacterAnimStateBase
{
public:
	class UBlendSpace*                                 BS_MovementStand;                                         // 0x17E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 BS_MovementCrouch;                                        // 0x17E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 BS_MovementProne;                                         // 0x17F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 BS_MovementStandDest;                                     // 0x17F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 BS_MovementCrouchDest;                                    // 0x1800(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 BS_MovementProneDest;                                     // 0x1808(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               AS_StandScopeBlend;                                       // 0x1810(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               AS_CrouchScopeBlend;                                      // 0x1818(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, float>                          MovementStand_SourceTransTime;                            // 0x1820(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FName, float>                          MovementStand_DestTransTime;                              // 0x1870(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TMap<TEnumAsByte<ECustomMovmentMode>, float>       CustomMovement_BlendTime;                                 // 0x18C0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UAnimSequence*                               AS_SwitchPose_StandToCrouch;                              // 0x1910(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               AS_SwitchPose_StandToProne;                               // 0x1918(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               AS_SwitchPose_CrouchToStand;                              // 0x1920(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               AS_SwitchPose_CrouchToProne;                              // 0x1928(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               AS_SwitchPose_ProneToStand;                               // 0x1930(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               AS_SwitchPose_ProneToCrouch;                              // 0x1938(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               AS_SwitchPose_StandToCrouchDest;                          // 0x1940(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               AS_SwitchPose_StandToProneDest;                           // 0x1948(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               AS_SwitchPose_CrouchToStandDest;                          // 0x1950(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               AS_SwitchPose_CrouchToProneDest;                          // 0x1958(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               AS_SwitchPose_ProneToStandDest;                           // 0x1960(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               AS_SwitchPose_ProneToCrouchDest;                          // 0x1968(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     moveVelocity;                                             // 0x1970(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TEnumAsByte<ECharacterPoseType>                    PoseType;                                                 // 0x197C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWeaponType>                           WeaponType;                                               // 0x197D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECharacterPoseType>                    InterruptCachePose;                                       // 0x197E(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECharacterPoseType>                    RecoverCharPose;                                          // 0x197F(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x1980(0x0008) MISSED OFFSET
	bool                                               bIsOnVehicle;                                             // 0x1988(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bScoping;                                                 // 0x1989(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsMoving;                                                // 0x198A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bMovementChanged;                                         // 0x198B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x198C(0x0001) MISSED OFFSET
	bool                                               bMovementChangedAndNotSwitchingPose;                      // 0x198D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x198E(0x0001) MISSED OFFSET
	bool                                               bWithoutWeapon;                                           // 0x198F(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSwitchingPose;                                         // 0x1990(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseInterruptPose;                                        // 0x1991(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEmptyToCrouch;                                           // 0x1992(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEmptyToProne;                                            // 0x1993(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEmptyToStand;                                            // 0x1994(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bStandToProne;                                            // 0x1995(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bStandToCrouchNotMove;                                    // 0x1996(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bStandToCrouchMove;                                       // 0x1997(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bStandTo_StandToProne;                                    // 0x1998(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bStandTo_StandToCrouch;                                   // 0x1999(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCrouchToProne;                                           // 0x199A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCrouchToStandNotMove;                                    // 0x199B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCrouchToStandMove;                                       // 0x199C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCrouchTo_CrouchToProne;                                  // 0x199D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCrouchTo_CrouchToStand;                                  // 0x199E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bProneToStand;                                            // 0x199F(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bProneToCrouch;                                           // 0x19A0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bProneTo_ProneToCrouch;                                   // 0x19A1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bProneTo_ProneToStand;                                    // 0x19A2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bProneToStand_ToStand;                                    // 0x19A3(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bStandToProne_ToProne;                                    // 0x19A4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCrouchToProne_ToProne;                                   // 0x19A5(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bProneToCrouch_ToCrouch;                                  // 0x19A6(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x19A7(0x0001) MISSED OFFSET
	float                                              StandSwitchToPronePoseAnimDuration;                       // 0x19A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StandSwitchFromPronePoseAnimDuration;                     // 0x19AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrouchSwitchToPronePoseAnimDuration;                      // 0x19B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrouchSwitchFromPronePoseAnimDuration;                    // 0x19B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StandSwitchToPronePoseAnimDelay;                          // 0x19B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StandSwitchFromPronePoseAnimDelay;                        // 0x19BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrouchSwitchToPronePoseAnimDelay;                         // 0x19C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrouchSwitchFromPronePoseAnimDelay;                       // 0x19C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovementBlendTime;                                        // 0x19C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwitchPoseTransTime;                                      // 0x19CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwitchingPoseTimer;                                       // 0x19D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SwitchingPoseTimerInternal;                               // 0x19D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InterruptPoseInternal;                                    // 0x19D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwitchPoseAnimStartPosition;                              // 0x19DC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CustomMovementBlendTime;                                  // 0x19E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScopeVelocityInterpSpeed;                                 // 0x19E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintToPronePlayRate;                                    // 0x19E8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCarryBackState;                                          // 0x19EC(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x19ED(0x0007) MISSED OFFSET
	float                                              CarryBackTimeAccumulator;                                 // 0x19F4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FCharacterViewPointConfig>           PoseStatusViewPointConfig;                                // 0x19F8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData05[0x10];                                      // 0x1A08(0x0010) MISSED OFFSET
	float                                              LeaveStateTimerInternal;                                  // 0x1A18(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GunSprintToProneDefaultPlayRate;                          // 0x1A1C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CommonSprintToProneDefaultPlayRate;                       // 0x1A20(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x1A24(0x0004) MISSED OFFSET
	struct FName                                       JumpProneBlendCurveName;                                  // 0x1A28(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USTExtraAnimInstanceBase*                    MainInstance;                                             // 0x1A30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x8];                                       // 0x1A38(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MainCity.CharLocomotionMCAnimInstance");
		return pStaticClass;
	}


	void SwitchingPoseFinishCallback();
	void SetViewPointLimitByPoseStatus(ECharacterAnimBlendPoseType InPoseType, bool bEnter);
	void SetInterruptPose(bool bUseInterruptPose, TEnumAsByte<ECharacterPoseType> InterruptPose);
	void LeaveStateCallback();
	void HandleStateLeave(EPawnState LeaveState);
	void HandlePlayerPoseChange(TEnumAsByte<ESTEPoseState> LastPose, TEnumAsByte<ESTEPoseState> NewPose);
};


// Class MainCity.CharMainMCAnimInstance
// 0x00F0 (0x18D0 - 0x17E0)
class UCharMainMCAnimInstance : public UCharacterAnimStateBase
{
public:
	class UAnimSequence*                               C_IdleAddtive;                                            // 0x17E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               C_JumpStart;                                              // 0x17E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_LandLight;                                              // 0x17F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_LandHeavy;                                              // 0x17F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               C_FallingBS;                                              // 0x1800(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCustomBS;                                             // 0x1808(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x1809(0x0007) MISSED OFFSET
	class UAnimSequence*                               C_JumpCustom;                                             // 0x1810(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               C_FallingCustom;                                          // 0x1818(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_Scoping;                                                // 0x1820(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1821(0x0003) MISSED OFFSET
	float                                              C_CharacterYawRotateRate;                                 // 0x1824(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              C_CharacterYawRotateRate_Reverse;                         // 0x1828(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScopeVelocityInterpSpeed;                                 // 0x182C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              b_WalkAdditiveAlpha;                                      // 0x1830(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               b_UnarmedFallingToRifleFallLandingHard;                   // 0x1834(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               b_WalkToRifleJumpStationStart;                            // 0x1835(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               C_IdleAddtiveValid;                                       // 0x1836(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               C_ShouldPauseAnim;                                        // 0x1837(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWalkToJumpStart;                                         // 0x1838(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               C_Move;                                                   // 0x1839(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x183A(0x0002) MISSED OFFSET
	struct FVector                                     C_MoveVelocity;                                           // 0x183C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              f_C_MoveVelocityLengthSquard;                             // 0x1848(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EWeaponType>                           C_WeaponType;                                             // 0x184C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               b_C_LastMovementMode_NEQ_Falling_OR_HoldGrenade;          // 0x184D(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               b_WalkToUnarmedFalling;                                   // 0x184E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               b_UnarmedFallingToRifleCombatFallLanding;                 // 0x184F(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              f_FallingVelocityZFactor;                                 // 0x1850(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxFallingVelocityThreshold;                              // 0x1854(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              f_C_MoveVelocity_X_FallingZFactor;                        // 0x1858(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              C_MaxFallingSpeed;                                        // 0x185C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MovingOnGround;                                           // 0x1860(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_MovingOnGroundAndMovbale;                               // 0x1861(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECharacterPoseType>                    C_PoseType;                                               // 0x1862(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         C_LastMovementMode;                                       // 0x1863(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               C_IsJumping;                                              // 0x1864(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsLandingHard;                                           // 0x1865(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAlwaysLandLight;                                         // 0x1866(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x1867(0x0001) MISSED OFFSET
	struct FVector                                     moveVelocity;                                             // 0x1868(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               C_ClimbAnimSwitch;                                        // 0x1874(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x1875(0x0003) MISSED OFFSET
	float                                              C_ClimbAnimTransTime;                                     // 0x1878(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              C_ClimbAnimTime_A;                                        // 0x187C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              C_ClimbAnimTime_B;                                        // 0x1880(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x1884(0x0004) MISSED OFFSET
	class UAnimSequence*                               C_Climb_FrameAnim_A;                                      // 0x1888(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               C_Climb_FrameAnim_B;                                      // 0x1890(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               C_PlayerUseSeesaw;                                        // 0x1898(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLinkMotionLayer;                                       // 0x1899(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x6];                                       // 0x189A(0x0006) MISSED OFFSET
	struct FName                                       LinkMotionLayerTagName;                                   // 0x18A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasCarryBacK;                                            // 0x18A8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECustomMovmentMode>                    C_CustomMovementMode;                                     // 0x18A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x6];                                       // 0x18AA(0x0006) MISSED OFFSET
	class USTExtraAnimInstanceBase*                    MainInstance;                                             // 0x18B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimInstanceContainer*                      LocomotionAnimContainer;                                  // 0x18B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      TargetLocomotionBP;                                       // 0x18C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x8];                                       // 0x18C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MainCity.CharMainMCAnimInstance");
		return pStaticClass;
	}


	void SetClimbAnimation(class UAnimSequence* AnimSequence, bool bFlag);
	void HandlePlayerAnimMontagePlayExtraDelegate(class UAnimMontage* MontageToPlay, bool bWantsPlay, float PlayRate, const struct FName& StartSection, float StartPos, bool bOnlyJumpToSectionWhilePlaying, const struct FName& IgnoreStopSection);
	void HandlePlayerAnimMontagePlayDelegate(class UAnimMontage* MontageToPlay, bool bWantsPlay, float PlayRate, const struct FName& StartSection, float StartPos);
	void HandleAnimPlaySlotAnimDelegate(class UAnimSequenceBase* AnimSequence, bool bWantsPlay, const struct FName& SlotName, float PlayRate, float BlendTime, unsigned char InLoopCount, float InStartPos, float LoopStartPos);
};


// Class MainCity.CharSeesawMCAnimInstance
// 0x0030 (0x0CB0 - 0x0C80)
class UCharSeesawMCAnimInstance : public USTExtraAnimInstanceBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0C80(0x0008) MISSED OFFSET
	class UAssetPlayerSyncNode*                        AssetPlayerSyncNode;                                      // 0x0C88(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               C_IsActivate;                                             // 0x0C90(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_IsLooping;                                              // 0x0C91(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0C92(0x0002) MISSED OFFSET
	int                                                C_CurSeatState;                                           // 0x0C94(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                C_OtherSeatState;                                         // 0x0C98(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                C_SeesawState;                                            // 0x0C9C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_SitAtA;                                                 // 0x0CA0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_SelfKnockUp;                                            // 0x0CA1(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_OtherKnockUp;                                           // 0x0CA2(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_SelfIdle;                                               // 0x0CA3(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_SelfWaiting;                                            // 0x0CA4(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_SelfEntering;                                           // 0x0CA5(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_SelfEntered;                                            // 0x0CA6(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_SelfExiting;                                            // 0x0CA7(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_OtherIdle;                                              // 0x0CA8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_OtherWaiting;                                           // 0x0CA9(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_OtherEntering;                                          // 0x0CAA(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_OtherEntered;                                           // 0x0CAB(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_OtherExiting;                                           // 0x0CAC(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_IsEnterField;                                           // 0x0CAD(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_IsInGame;                                               // 0x0CAE(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_IsSpeedUp;                                              // 0x0CAF(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MainCity.CharSeesawMCAnimInstance");
		return pStaticClass;
	}

};


// Class MainCity.FollowerSysDataAsset
// 0x0070 (0x00A0 - 0x0030)
class UFollowerSysDataAsset : public UDataAsset
{
public:
	struct FName                                       HandHoldingSocket;                                        // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HandHoldingSocketLocOffset;                               // 0x0038(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    HandHoldingSocketRotOffset;                               // 0x0044(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              PullW;                                                    // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NormalizePull;                                            // 0x0054(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	struct FVector                                     PositivePullFactor;                                       // 0x0058(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     NegativePullFactor;                                       // 0x0064(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               RotateBone;                                               // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RotateLimb;                                               // 0x0071(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0072(0x0002) MISSED OFFSET
	float                                              DeltaSmoothSpeed;                                         // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngularDeltaSmoothSpeed;                                  // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OffsetSoverParms1;                                        // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TargetLocLerpSpeed;                                       // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SmoothPositionOverTime;                                   // 0x0084(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0085(0x0003) MISSED OFFSET
	float                                              MaxPositionSpeed;                                         // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxPositionDistance;                                      // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SmoothRotationOverTime;                                   // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	float                                              MaxDegreesSpeed;                                          // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDegreesDistance;                                       // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x009C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MainCity.FollowerSysDataAsset");
		return pStaticClass;
	}

};


// Class MainCity.HoldingHandsMCAnimInstance
// 0x00F0 (0x18D0 - 0x17E0)
class UHoldingHandsMCAnimInstance : public UCharacterAnimStateBase
{
public:
	class UBlendSpace*                                 BS_HoldingHoldsLeader;                                    // 0x17E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 BS_HoldingHoldsFollower;                                  // 0x17E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HoldingHandsTargetLoc;                                    // 0x17F0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    HoldingHandsTargetRot;                                    // 0x17FC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LeaderHoldingHandsTargetLoc;                              // 0x1808(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FollowerHoldingHandsTargetLoc;                            // 0x1814(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFollower;                                              // 0x1820(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1821(0x0003) MISSED OFFSET
	struct FVector                                     OffsetSover1;                                             // 0x1824(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              OffsetSoverParms1;                                        // 0x1830(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x1834(0x0004) MISSED OFFSET
	class UFollowerSysDataAsset*                       FollowerDA;                                               // 0x1838(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFollowerSysDataAsset*                       LeaderDA;                                                 // 0x1840(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PullW;                                                    // 0x1848(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NormalizePull;                                            // 0x184C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x184D(0x0003) MISSED OFFSET
	struct FVector                                     PositivePullFactor;                                       // 0x1850(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     NegativePullFactor;                                       // 0x185C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               RotateBone;                                               // 0x1868(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RotateLimb;                                               // 0x1869(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x186A(0x0002) MISSED OFFSET
	float                                              DeltaSmoothSpeed;                                         // 0x186C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngularDeltaSmoothSpeed;                                  // 0x1870(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              F_PullW;                                                  // 0x1874(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               F_NormalizePull;                                          // 0x1878(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x1879(0x0003) MISSED OFFSET
	struct FVector                                     F_PositivePullFactor;                                     // 0x187C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     F_NegativePullFactor;                                     // 0x1888(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               F_RotateBone;                                             // 0x1894(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               F_RotateLimb;                                             // 0x1895(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x1896(0x0002) MISSED OFFSET
	float                                              F_DeltaSmoothSpeed;                                       // 0x1898(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              F_AngularDeltaSmoothSpeed;                                // 0x189C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECharacterFollowType>                  FollowType;                                               // 0x18A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHoldingHandsIKMode>                   EHandIKMode;                                              // 0x18A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x18A2(0x0002) MISSED OFFSET
	struct FVector                                     followerVelocity;                                         // 0x18A4(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bUsePredictVelocity;                                      // 0x18B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x18B1(0x0003) MISSED OFFSET
	float                                              followerSpeed;                                            // 0x18B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x18];                                      // 0x18B8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MainCity.HoldingHandsMCAnimInstance");
		return pStaticClass;
	}

};


// Class MainCity.MainCityGameMode
// 0x0080 (0x2330 - 0x22B0)
class AMainCityGameMode : public ABattleRoyaleGameMode
{
public:
	unsigned char                                      UnknownData00[0x54];                                      // 0x22B0(0x0054) MISSED OFFSET
	uint32_t                                           MaxAcceptOneFrame;                                        // 0x2304(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              MinAcceptTimeDelta;                                       // 0x2308(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              UpdateDistTimeDelta;                                      // 0x230C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	TArray<float>                                      RelevantDistArray;                                        // 0x2310(0x0010) (ZeroConstructor, Config)
	float                                              TickTimeDelta;                                            // 0x2320(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              RelevantDataLifeTime;                                     // 0x2324(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              ForceRelevantTimeDelta;                                   // 0x2328(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x232C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MainCity.MainCityGameMode");
		return pStaticClass;
	}


	void ReplayRecoverGenerateDSCheckpoint(const struct FString& InReplayName);
	void PreInitGameState();
	void InternalNotifyPlayerExit(class ASTExtraPlayerController* PlayerController);
	void InitConsoleVar(const struct FString& Command);
	void GenReplayDone(const struct FString& ErrorMsg);
	void DSPlayerKickOut(uint64_t UID, const struct FName& PlayerType, const struct FString& ExitReason);
};


// Class MainCity.MainCityGameModeStateActive
// 0x0000 (0x00C8 - 0x00C8)
class UMainCityGameModeStateActive : public UGameModeStateActive
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MainCity.MainCityGameModeStateActive");
		return pStaticClass;
	}

};


// Class MainCity.MainCityGameModeStateFighting
// 0x0000 (0x00D0 - 0x00D0)
class UMainCityGameModeStateFighting : public UGameModeStateFighting
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MainCity.MainCityGameModeStateFighting");
		return pStaticClass;
	}

};


// Class MainCity.MainCityGameModeStateFinished
// 0x0000 (0x00C0 - 0x00C0)
class UMainCityGameModeStateFinished : public UGameModeStateFinished
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MainCity.MainCityGameModeStateFinished");
		return pStaticClass;
	}

};


// Class MainCity.MainCityGameModeStateReady
// 0x0000 (0x0118 - 0x0118)
class UMainCityGameModeStateReady : public UGameModeStateReady
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MainCity.MainCityGameModeStateReady");
		return pStaticClass;
	}

};


// Class MainCity.MainCityGameplayStatics
// 0x0000 (0x0028 - 0x0028)
class UMainCityGameplayStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MainCity.MainCityGameplayStatics");
		return pStaticClass;
	}


	struct FString GetProjectSavedDir();
};


// Class MainCity.MainCityGameState
// 0x0018 (0x1638 - 0x1620)
class AMainCityGameState : public ASTExtraGameStateBase
{
public:
	struct FScriptMulticastDelegate                    OnMainCityPlayerStateChangedDelegate;                     // 0x1620(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bEnableTimeUpdate;                                        // 0x1630(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnableTimeOffset;                                        // 0x1631(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x1632(0x0002) MISSED OFFSET
	float                                              ReplicatedWorldTimeSecondsOffset;                         // 0x1634(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MainCity.MainCityGameState");
		return pStaticClass;
	}

};


// Class MainCity.MainCityHelper
// 0x0000 (0x0028 - 0x0028)
class UMainCityHelper : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MainCity.MainCityHelper");
		return pStaticClass;
	}


	int SetSwapRolesForReplay(class AActor* InActor);
};


// Class MainCity.MainCityPlayerState
// 0x0000 (0x1CD8 - 0x1CD8)
class AMainCityPlayerState : public ASTExtraPlayerState
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MainCity.MainCityPlayerState");
		return pStaticClass;
	}


	void RefreshAliasInfo(struct FGameModePlayerAliasInfo* PlayerAliasInfo);
};


// Class MainCity.MainCitySeesawAnimInstance
// 0x0030 (0x0420 - 0x03F0)
class UMainCitySeesawAnimInstance : public UAnimInstance
{
public:
	class UAssetPlayerSyncNode*                        AssetPlayerSyncNode;                                      // 0x03F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               C_IsActivate;                                             // 0x03F8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_IsLooping;                                              // 0x03F9(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x03FA(0x0002) MISSED OFFSET
	int                                                C_SeatAState;                                             // 0x03FC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                C_SeatBState;                                             // 0x0400(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                C_SeesawState;                                            // 0x0404(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_AKnockUp;                                               // 0x0408(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_BKnockUp;                                               // 0x0409(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_A_Idle;                                                 // 0x040A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               C_A_Waiting;                                              // 0x040B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               C_A_Entering;                                             // 0x040C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               C_A_Entered;                                              // 0x040D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               C_A_Exiting;                                              // 0x040E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               C_B_Idle;                                                 // 0x040F(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_B_Waiting;                                              // 0x0410(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               C_B_Entering;                                             // 0x0411(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               C_B_Entered;                                              // 0x0412(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               C_B_Exiting;                                              // 0x0413(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               C_IsEnterField;                                           // 0x0414(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_IsInGame;                                               // 0x0415(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_IsSpeedUp;                                              // 0x0416(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x9];                                       // 0x0417(0x0009) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MainCity.MainCitySeesawAnimInstance");
		return pStaticClass;
	}


	void SyncAttachedActorAnimation();
};


// Class MainCity.MainCitySubsystem
// 0x00A8 (0x00D8 - 0x0030)
class UMainCitySubsystem : public UWorldSubsystem
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET
	struct FName                                       FeatureDefaultPawnName;                                   // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     SkipLoadMapLevel;                                         // 0x0090(0x0010) (ZeroConstructor)
	bool                                               bShutdownUnrealNetwork;                                   // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2F];                                      // 0x00A1(0x002F) MISSED OFFSET
	class ASTExtraBaseCharacter*                       InitialCharacter;                                         // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MainCity.MainCitySubsystem");
		return pStaticClass;
	}


	void SetHasInitLobbyAvatar(class ASTExtraPlayerController* InController, bool bInValue);
	void ResetMainCityGameState(class ASTExtraGameStateBase* InGameState);
	void PreShutdownUnrealNetwork();
	void PreEnterMainCityBattle();
	void PreDestroyAutonomousChar(class ASTExtraBaseCharacter* Character);
	void PostShutdownUnrealNetwork();
	void PostPlayerActorChannelOpen();
	void PostInitialize();
	void PostEnterMainCityBattle();
	void PostDeinitialize();
	void PostClearActors();
	void KeepActor(class AActor* InActor);
	class ASTExtraBaseCharacter* InitStandalonePawn(class UClass* InClass, const struct FVector& InLocation, const struct FRotator& InRotation);
	void ClearActors();
};


// Class MainCity.MCAnimInstanceLocomotion
// 0x0010 (0x1A80 - 0x1A70)
class UMCAnimInstanceLocomotion : public UAnimInstanceLocomotion
{
public:
	class UBlendSpace*                                 BS_MovementCrouchCustom;                                  // 0x1A70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 BS_MovementProneCustom;                                   // 0x1A78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MainCity.MCAnimInstanceLocomotion");
		return pStaticClass;
	}

};


// Class MainCity.ReplayRecoverSubsystem
// 0x0148 (0x0178 - 0x0030)
class UReplayRecoverSubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0030(0x0060) MISSED OFFSET
	TArray<struct FString>                             IncludeWorldNames;                                        // 0x0090(0x0010) (ZeroConstructor, Config)
	int                                                MoveStaticBuffer;                                         // 0x00A0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	TArray<unsigned char>                              LuaInfo;                                                  // 0x00A8(0x0010) (ZeroConstructor)
	int64_t                                            MaxTimeDelta;                                             // 0x00B8(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	int                                                SkipRepNotifies;                                          // 0x00C0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0xB4];                                      // 0x00C4(0x00B4) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MainCity.ReplayRecoverSubsystem");
		return pStaticClass;
	}


	void WriteLuaInfo(TArray<unsigned char> InData);
	void SetReplayName(const struct FString& InReplayName);
	TArray<unsigned char> ReadLuaInfo();
	void PreInitializeWithParams(class UWorld* InWorld, class UNetDriver* InDriver);
	void PreInitializeForWorld(const struct FString& InURLStr, class UWorld* InWorld, class USTExtraGameInstance* InGameInstance);
	void PreInitializeForGameMode(const struct FString& InURLStr, class UWorld* InWorld, class AGameStateBase* InGameState);
	void PreDemoPlaybackEnded(class UWorld* InWorld);
	void PostInitializeWithParams(class UWorld* InWorld, class UNetDriver* InDriver);
	void PostInitializeForWorld(const struct FString& InURLStr, class UWorld* InWorld, class USTExtraGameInstance* InGameInstance);
	void PostInitializeForGameMode(const struct FString& InURLStr, class UWorld* InWorld, class AGameStateBase* InGameState);
	bool LuaSaveLuaInfo();
	void LoadReplayDone(const struct FString& ErrorMsg);
	bool IsVersionValid(const struct FString& RecordVersion, const struct FString& PlayerVersion);
	bool IsTimeValid(int64_t RecordTime, int64_t PlayTime);
	void GenReplayDone(const struct FString& ErrorMsg);
	void DeleteExpiredFiles(float MaxKeepHours);
	void ClearRecoverFile();
};


}

