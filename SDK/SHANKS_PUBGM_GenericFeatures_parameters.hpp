#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:34:48 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GenericFeatures.BehaviorControlComponent.UnPossessed
struct UBehaviorControlComponent_UnPossessed_Params
{
};

// Function GenericFeatures.BehaviorControlComponent.StopBehaviorTree
struct UBehaviorControlComponent_StopBehaviorTree_Params
{
};

// Function GenericFeatures.BehaviorControlComponent.StopBehavior
struct UBehaviorControlComponent_StopBehavior_Params
{
	struct FString                                     Reason;                                                   // (Parm, ZeroConstructor)
};

// Function GenericFeatures.BehaviorControlComponent.RunBehaviorTreeByIndex
struct UBehaviorControlComponent_RunBehaviorTreeByIndex_Params
{
	int                                                PathIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericFeatures.BehaviorControlComponent.ResumeBehavior
struct UBehaviorControlComponent_ResumeBehavior_Params
{
	struct FString                                     Reason;                                                   // (Parm, ZeroConstructor)
};

// Function GenericFeatures.BehaviorControlComponent.RestartBehavior
struct UBehaviorControlComponent_RestartBehavior_Params
{
};

// Function GenericFeatures.BehaviorControlComponent.PossessedBy
struct UBehaviorControlComponent_PossessedBy_Params
{
	class AController*                                 NewController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericFeatures.BehaviorControlComponent.PauseBehavior
struct UBehaviorControlComponent_PauseBehavior_Params
{
	struct FString                                     Reason;                                                   // (Parm, ZeroConstructor)
};

// Function GenericFeatures.BehaviorControlComponent.OnPlayerActiveRegionsChanged
struct UBehaviorControlComponent_OnPlayerActiveRegionsChanged_Params
{
	bool                                               bEnter;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericFeatures.GenericCharacter.OnStateLeft
struct AGenericCharacter_OnStateLeft_Params
{
	struct FGameplayTag                                State;                                                    // (Parm)
};

// Function GenericFeatures.GenericCharacter.OnStateEntered
struct AGenericCharacter_OnStateEntered_Params
{
	struct FGameplayTag                                State;                                                    // (Parm)
};

// Function GenericFeatures.GenericCharacter.OnRep_PlayerKey
struct AGenericCharacter_OnRep_PlayerKey_Params
{
};

// Function GenericFeatures.GenericCharacter.IsInObjectPool
struct AGenericCharacter_IsInObjectPool_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericFeatures.GenericCharacter.IsAlive
struct AGenericCharacter_IsAlive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericFeatures.GenericCharacter.HandleStateLeft
struct AGenericCharacter_HandleStateLeft_Params
{
	struct FGameplayTag                                State;                                                    // (Parm)
};

// Function GenericFeatures.GenericCharacter.HandleStateEntered
struct AGenericCharacter_HandleStateEntered_Params
{
	struct FGameplayTag                                State;                                                    // (Parm)
};

// Function GenericFeatures.GenericCharacter.GetStateReflectComp
struct AGenericCharacter_GetStateReflectComp_Params
{
	class UStateReflectComp*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GenericFeatures.GenericChooseEnemyComponent.SelectFromCandidates
struct UGenericChooseEnemyComponent_SelectFromCandidates_Params
{
	TArray<class ACharacter*>                          Filtered;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	EGenericSearchEnemyRule                            Rule;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class ACharacter*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericFeatures.GenericChooseEnemyComponent.IsValidEnemy
struct UGenericChooseEnemyComponent_IsValidEnemy_Params
{
	class ACharacter*                                  Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOutIsNearDeath;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseMonsterFilter;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericFeatures.GenericChooseEnemyComponent.IsTargetAlive
struct UGenericChooseEnemyComponent_IsTargetAlive_Params
{
	class ACharacter*                                  Target;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericFeatures.GenericChooseEnemyComponent.IsEnemyByActor
struct UGenericChooseEnemyComponent_IsEnemyByActor_Params
{
	class ACharacter*                                  InTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericFeatures.GenericChooseEnemyComponent.GetTargetHealth
struct UGenericChooseEnemyComponent_GetTargetHealth_Params
{
	class ACharacter*                                  Target;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericFeatures.GenericChooseEnemyComponent.GetSensingConfig
struct UGenericChooseEnemyComponent_GetSensingConfig_Params
{
	struct FGenericMonsterSensingConfig                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function GenericFeatures.GenericChooseEnemyComponent.GetOwnerMonster
struct UGenericChooseEnemyComponent_GetOwnerMonster_Params
{
	class AGenericMonsterBase*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericFeatures.GenericChooseEnemyComponent.CollectPlayerCandidates
struct UGenericChooseEnemyComponent_CollectPlayerCandidates_Params
{
	TArray<class ACharacter*>                          OutPlayers;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function GenericFeatures.GenericChooseEnemyComponent.CollectMonsterCandidates
struct UGenericChooseEnemyComponent_CollectMonsterCandidates_Params
{
	TArray<class ACharacter*>                          OutMonsters;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function GenericFeatures.GenericMonsterBase.SetTeamID
struct AGenericMonsterBase_SetTeamID_Params
{
	int                                                NewTeamId;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericFeatures.GenericMonsterBase.SetSpeedScale
struct AGenericMonsterBase_SetSpeedScale_Params
{
	float                                              NewSpeedScale;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericFeatures.GenericMonsterBase.SetMonsterIdleIndex
struct AGenericMonsterBase_SetMonsterIdleIndex_Params
{
	int                                                NewIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericFeatures.GenericMonsterBase.SetCharacterName
struct AGenericMonsterBase_SetCharacterName_Params
{
	struct FString                                     NewCharacterName;                                         // (Parm, ZeroConstructor)
};

// Function GenericFeatures.GenericMonsterBase.SetCampID
struct AGenericMonsterBase_SetCampID_Params
{
	int                                                NewCampID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericFeatures.GenericMonsterBase.SelectEnemyByLua
struct AGenericMonsterBase_SelectEnemyByLua_Params
{
	TArray<class ACharacter*>                          Candidates;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ACharacter*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericFeatures.GenericMonsterBase.ReviseSenseDistanceByActor
struct AGenericMonsterBase_ReviseSenseDistanceByActor_Params
{
	float                                              InDistance;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InTarget;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericFeatures.GenericMonsterBase.ReceivedPlayerActiveRegionsChanged
struct AGenericMonsterBase_ReceivedPlayerActiveRegionsChanged_Params
{
	bool                                               bEnter;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericFeatures.GenericMonsterBase.OnSmoothComponentSnapshotPreReplicate
struct AGenericMonsterBase_OnSmoothComponentSnapshotPreReplicate_Params
{
};

// Function GenericFeatures.GenericMonsterBase.OnRep_MonsterIdleIndex
struct AGenericMonsterBase_OnRep_MonsterIdleIndex_Params
{
};

// Function GenericFeatures.GenericMonsterBase.OnRep_CampID
struct AGenericMonsterBase_OnRep_CampID_Params
{
};

// Function GenericFeatures.GenericMonsterBase.LeaveLaunchAirRiseUp
struct AGenericMonsterBase_LeaveLaunchAirRiseUp_Params
{
};

// Function GenericFeatures.GenericMonsterBase.LeaveLaunchAirGround
struct AGenericMonsterBase_LeaveLaunchAirGround_Params
{
};

// Function GenericFeatures.GenericMonsterBase.LaunchCharacterWithParam
struct AGenericMonsterBase_LaunchCharacterWithParam_Params
{
	struct FVector                                     LaunchVelocity;                                           // (Parm, IsPlainOldData)
	bool                                               bChangeState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericFeatures.GenericMonsterBase.IsValidEnemyTarget
struct AGenericMonsterBase_IsValidEnemyTarget_Params
{
	class AActor*                                      InTarget;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericFeatures.GenericMonsterBase.IsEnemyByActor
struct AGenericMonsterBase_IsEnemyByActor_Params
{
	class ACharacter*                                  InTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericFeatures.GenericMonsterBase.GetTeamId
struct AGenericMonsterBase_GetTeamId_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericFeatures.GenericMonsterBase.GetSpeedScale
struct AGenericMonsterBase_GetSpeedScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericFeatures.GenericMonsterBase.GetSensingConfig
struct AGenericMonsterBase_GetSensingConfig_Params
{
	struct FGenericMonsterSensingConfig                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function GenericFeatures.GenericMonsterBase.GetMonsterIdleIndex
struct AGenericMonsterBase_GetMonsterIdleIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericFeatures.GenericMonsterBase.GetCurrentSpeed
struct AGenericMonsterBase_GetCurrentSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericFeatures.GenericMonsterBase.GetChooseEnemyComponent
struct AGenericMonsterBase_GetChooseEnemyComponent_Params
{
	class UGenericChooseEnemyComponent*                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GenericFeatures.GenericMonsterBase.GetCharacterName
struct AGenericMonsterBase_GetCharacterName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GenericFeatures.GenericMonsterBase.GetCampId
struct AGenericMonsterBase_GetCampId_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericFeatures.GenericMonsterBase.GetBuffComponent
struct AGenericMonsterBase_GetBuffComponent_Params
{
	class USTBuffSystemComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GenericFeatures.GenericMonsterBase.FinishStunRecovery
struct AGenericMonsterBase_FinishStunRecovery_Params
{
};

// Function GenericFeatures.GenericMonsterBase.ExitSpawnState
struct AGenericMonsterBase_ExitSpawnState_Params
{
};

// Function GenericFeatures.GenericMonsterBase.EnterStunRecovery
struct AGenericMonsterBase_EnterStunRecovery_Params
{
};

// Function GenericFeatures.GenericMonsterBase.EnterStun
struct AGenericMonsterBase_EnterStun_Params
{
};

// Function GenericFeatures.GenericMonsterBase.DoHurting
struct AGenericMonsterBase_DoHurting_Params
{
	struct FVector                                     HurtDir;                                                  // (Parm, IsPlainOldData)
};

// Function GenericFeatures.GenericMonsterBase.ClearStunState
struct AGenericMonsterBase_ClearStunState_Params
{
};

// Function GenericFeatures.GenericMonsterBase.ClearLaunchAirState
struct AGenericMonsterBase_ClearLaunchAirState_Params
{
};

// Function GenericFeatures.GenericMonsterBase.CheckLaunchAirState
struct AGenericMonsterBase_CheckLaunchAirState_Params
{
};

// Function GenericFeatures.GenericMonsterBase.ChangeWalkSpeed
struct AGenericMonsterBase_ChangeWalkSpeed_Params
{
	EMobWalkType                                       InWalkType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericFeatures.GenericMonster.SetTakeDamageScale
struct AGenericMonster_SetTakeDamageScale_Params
{
	float                                              NewTakeDamageScale;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericFeatures.GenericMonster.SetIsInvincible
struct AGenericMonster_SetIsInvincible_Params
{
	bool                                               bInvincible;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      InMaskBit;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericFeatures.GenericMonster.SetHealthMax
struct AGenericMonster_SetHealthMax_Params
{
	float                                              NewHealthMax;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericFeatures.GenericMonster.SetHealth
struct AGenericMonster_SetHealth_Params
{
	float                                              NewHealth;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericFeatures.GenericMonster.SetDamageScale
struct AGenericMonster_SetDamageScale_Params
{
	float                                              NewDamageScale;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericFeatures.GenericMonster.OnTargetTakeDamage
struct AGenericMonster_OnTargetTakeDamage_Params
{
	class AActor*                                      DamageTarget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericFeatures.GenericMonster.OnDie
struct AGenericMonster_OnDie_Params
{
	class APawn*                                       Causer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericFeatures.GenericMonster.HandleTargetTakeDamage
struct AGenericMonster_HandleTargetTakeDamage_Params
{
	class AActor*                                      DamageTarget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericFeatures.GenericMonster.GetTakeDamageScale
struct AGenericMonster_GetTakeDamageScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericFeatures.GenericMonster.GetPartHitComponentBase
struct AGenericMonster_GetPartHitComponentBase_Params
{
	class UPartHitComponentBase*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GenericFeatures.GenericMonster.GetIsInvincible
struct AGenericMonster_GetIsInvincible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericFeatures.GenericMonster.GetHealthMax
struct AGenericMonster_GetHealthMax_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericFeatures.GenericMonster.GetHealth
struct AGenericMonster_GetHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericFeatures.GenericMonster.GetDamageScale
struct AGenericMonster_GetDamageScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericFeatures.GenericMonster.CalcVehicleHitDamage
struct AGenericMonster_CalcVehicleHitDamage_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitImpulseDirection;                                      // (Parm, IsPlainOldData)
	float                                              HitSpeed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericFeatures.GenericMonster.BPReceiveDamage
struct AGenericMonster_BPReceiveDamage_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDamageType>                           DamageEventType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericFeatures.GenericMonster.BPPreTakeDamage
struct AGenericMonster_BPPreTakeDamage_Params
{
	float                                              DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericFeatures.GenericMonsterAnimInstance.PlayMontageWithAnimEventByName
struct UGenericMonsterAnimInstance_PlayMontageWithAnimEventByName_Params
{
	struct FName                                       InTag;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericFeatures.GenericMonsterAnimInstance.PlayMontageWithAnimEvent
struct UGenericMonsterAnimInstance_PlayMontageWithAnimEvent_Params
{
	struct FGameplayTag                                EventTag;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericFeatures.GenericMonsterAnimInstance.OnMonsterRandomIdleIndexSet
struct UGenericMonsterAnimInstance_OnMonsterRandomIdleIndexSet_Params
{
	int                                                NewIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericFeatures.GenericMonsterAnimInstance.OnMonsterHurting
struct UGenericMonsterAnimInstance_OnMonsterHurting_Params
{
	class AGenericMonsterBase*                         Monster;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HurtDir;                                                  // (Parm, IsPlainOldData)
};

// Function GenericFeatures.GenericMonsterAnimInstance.HandleStateEntered
struct UGenericMonsterAnimInstance_HandleStateEntered_Params
{
	struct FGameplayTag                                State;                                                    // (Parm)
};

// Function GenericFeatures.GenericMonsterAnimInstance.GetMonsterShareParams
struct UGenericMonsterAnimInstance_GetMonsterShareParams_Params
{
	class UGenericMonsterAnimShareParamsComp*          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GenericFeatures.GenericMonsterAnimShareParamsComp.IsAnimAssetsLoaded
struct UGenericMonsterAnimShareParamsComp_IsAnimAssetsLoaded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericFeatures.GenericMonsterAnimShareParamsComp.HandleStateLeft
struct UGenericMonsterAnimShareParamsComp_HandleStateLeft_Params
{
	struct FGameplayTag                                State;                                                    // (Parm)
};

// Function GenericFeatures.GenericMonsterAnimShareParamsComp.HandleStateEntered
struct UGenericMonsterAnimShareParamsComp_HandleStateEntered_Params
{
	struct FGameplayTag                                State;                                                    // (Parm)
};

// Function GenericFeatures.GenericMonsterAnimShareParamsComp.GetLoadedAnimAsset
struct UGenericMonsterAnimShareParamsComp_GetLoadedAnimAsset_Params
{
	struct FGameplayTag                                Tag;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UAnimationAsset*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericFeatures.GenericPartHitComponent.UpdatePoseCollisionShapes
struct UGenericPartHitComponent_UpdatePoseCollisionShapes_Params
{
	TEnumAsByte<ESTEPoseState>                         PoseState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericFeatures.GenericPartHitComponent.UpdateAllInstanceBodyTransform
struct UGenericPartHitComponent_UpdateAllInstanceBodyTransform_Params
{
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericFeatures.GenericPartHitComponent.RefreshWorldBoxCollision
struct UGenericPartHitComponent_RefreshWorldBoxCollision_Params
{
	float                                              countdown;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericFeatures.GenericPartHitComponent.RefreshByStateChange
struct UGenericPartHitComponent_RefreshByStateChange_Params
{
	struct FGameplayTag                                State;                                                    // (Parm)
};

// Function GenericFeatures.GenericPartHitComponent.InitBodyHitBox
struct UGenericPartHitComponent_InitBodyHitBox_Params
{
};

// Function GenericFeatures.GenericPartHitComponent.GetHitBoxByState
struct UGenericPartHitComponent_GetHitBoxByState_Params
{
	TEnumAsByte<ESTEPoseState>                         InPoseState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GenericFeatures.GenericPartHitComponent.GetHitBodyTypeByHitPos
struct UGenericPartHitComponent_GetHitBodyTypeByHitPos_Params
{
	struct FVector                                     InHitPos;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	EAvatarDamagePosition                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericFeatures.GenericPartHitComponent.GetHitBodyTypeByBoneName
struct UGenericPartHitComponent_GetHitBodyTypeByBoneName_Params
{
	struct FString                                     InBoneName;                                               // (Parm, ZeroConstructor)
	EAvatarDamagePosition                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericFeatures.GenericPartHitComponent.GetHitBodyType
struct UGenericPartHitComponent_GetHitBodyType_Params
{
	struct FVector                                     InHitPos;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     InImpactVec;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FString                                     InBoneName;                                               // (Parm, ZeroConstructor)
	EAvatarDamagePosition                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericFeatures.GenericPartHitComponent.GetCurHitPartJudgementType
struct UGenericPartHitComponent_GetCurHitPartJudgementType_Params
{
	TEnumAsByte<EHitPartJugementType>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericFeatures.GenericPartHitComponent.CloseBodyBulletCollision
struct UGenericPartHitComponent_CloseBodyBulletCollision_Params
{
};

// Function GenericFeatures.GenericPartHitComponent.CalcHitBodyType
struct UGenericPartHitComponent_CalcHitBodyType_Params
{
	struct FVector                                     InHitPos;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     InProjvec;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     InCenterPos;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FBodyTypeDef                                InBodyDef;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	EAvatarDamagePosition                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericFeatures.StateReflectComp.OnRep_CurrentStates
struct UStateReflectComp_OnRep_CurrentStates_Params
{
	struct FGameplayTagContainer                       OldStates;                                                // (Parm)
};

// Function GenericFeatures.StateReflectComp.LeaveState
struct UStateReflectComp_LeaveState_Params
{
	struct FGameplayTag                                State;                                                    // (Parm)
};

// Function GenericFeatures.StateReflectComp.HasState
struct UStateReflectComp_HasState_Params
{
	struct FGameplayTag                                State;                                                    // (Parm)
	bool                                               bExact;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericFeatures.StateReflectComp.GetCurrentStates
struct UStateReflectComp_GetCurrentStates_Params
{
	struct FGameplayTagContainer                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GenericFeatures.StateReflectComp.EnterState
struct UStateReflectComp_EnterState_Params
{
	struct FGameplayTag                                State;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericFeatures.StateReflectComp.CanEnterState
struct UStateReflectComp_CanEnterState_Params
{
	struct FGameplayTag                                State;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

