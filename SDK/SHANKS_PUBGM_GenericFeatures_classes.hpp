#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:34:48 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GenericFeatures.BehaviorControlComponent
// 0x0030 (0x01A8 - 0x0178)
class UBehaviorControlComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0178(0x0010) UNKNOWN PROPERTY: ArrayProperty GenericFeatures.BehaviorControlComponent.BehaviorTreePath
	class APawn*                                       OwnerPawn;                                                // 0x0188(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AAIController*                               AIController;                                             // 0x0190(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UBehaviorTreeComponent*                      BehaviorTreeComp;                                         // 0x0198(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UBlackboardComponent*                        BlackboardComp;                                           // 0x01A0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.BehaviorControlComponent");
		return pStaticClass;
	}


	void UnPossessed();
	void StopBehaviorTree();
	void StopBehavior(const struct FString& Reason);
	bool RunBehaviorTreeByIndex(int PathIndex);
	void ResumeBehavior(const struct FString& Reason);
	void RestartBehavior();
	void PossessedBy(class AController* NewController);
	void PauseBehavior(const struct FString& Reason);
	void OnPlayerActiveRegionsChanged(bool bEnter);
};


// Class GenericFeatures.BTDecorator_Generic_HasAIState
// 0x0040 (0x00A0 - 0x0060)
class UBTDecorator_Generic_HasAIState : public UBTDecorator
{
public:
	TArray<struct FGameplayTag>                        States;                                                   // 0x0060(0x0010) (Edit, ZeroConstructor)
	EHasAITagStateLogic                                LogicOp;                                                  // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bExact;                                                   // 0x0071(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0072(0x0006) MISSED OFFSET
	struct FBlackboardKeySelector                      BBKeyTarget;                                              // 0x0078(0x0028) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.BTDecorator_Generic_HasAIState");
		return pStaticClass;
	}

};


// Class GenericFeatures.BTService_Generic_ChooseEnemy
// 0x0080 (0x00E8 - 0x0068)
class UBTService_Generic_ChooseEnemy : public UBTService
{
public:
	struct FBlackboardKeySelector                      BBKeyEnemy;                                               // 0x0068(0x0028) (Edit)
	struct FBlackboardKeySelector                      BBKeyCanNotSeeTarget;                                     // 0x0090(0x0028) (Edit)
	struct FBlackboardKeySelector                      BBKeyDynamicSearchRuleIndex;                              // 0x00B8(0x0028) (Edit)
	bool                                               bShowDebugInfo;                                           // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00E1(0x0003) MISSED OFFSET
	float                                              DebugInfoLife;                                            // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.BTService_Generic_ChooseEnemy");
		return pStaticClass;
	}

};


// Class GenericFeatures.BTTask_Generic_ClearEnemy
// 0x0028 (0x0098 - 0x0070)
class UBTTask_Generic_ClearEnemy : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      BBKeyEnemy;                                               // 0x0070(0x0028) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.BTTask_Generic_ClearEnemy");
		return pStaticClass;
	}

};


// Class GenericFeatures.GenericAIController
// 0x0068 (0x0620 - 0x05B8)
class AGenericAIController : public AAIController
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x05B8(0x0058) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0610(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericAIController");
		return pStaticClass;
	}

};


// Class GenericFeatures.GenericCharacter
// 0x00B0 (0x09A0 - 0x08F0)
class AGenericCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x08F0(0x0080) MISSED OFFSET
	uint32_t                                           PlayerKey;                                                // 0x0970(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0974(0x0004) MISSED OFFSET
	class UStateReflectComp*                           StateReflectComp;                                         // 0x0978(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAttrModifyComponent*                        AttrModifyComp;                                           // 0x0980(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     LuaFilePath;                                              // 0x0988(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0998(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericCharacter");
		return pStaticClass;
	}


	void OnStateLeft(const struct FGameplayTag& State);
	void OnStateEntered(const struct FGameplayTag& State);
	void OnRep_PlayerKey();
	bool IsInObjectPool();
	bool IsAlive();
	void HandleStateLeft(const struct FGameplayTag& State);
	void HandleStateEntered(const struct FGameplayTag& State);
	class UStateReflectComp* GetStateReflectComp();
};


// Class GenericFeatures.GenericChooseEnemyComponent
// 0x0058 (0x01D0 - 0x0178)
class UGenericChooseEnemyComponent : public UActorComponent
{
public:
	struct FGenericMonsterSensingConfig                SensingConfig;                                            // 0x0178(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGenericSensingRuntimeState                 RuntimeState;                                             // 0x01C0(0x000C) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericChooseEnemyComponent");
		return pStaticClass;
	}


	class ACharacter* SelectFromCandidates(TArray<class ACharacter*> Filtered, EGenericSearchEnemyRule Rule);
	bool IsValidEnemy(class ACharacter* Target, bool bUseMonsterFilter, bool* bOutIsNearDeath);
	static bool IsTargetAlive(class ACharacter* Target);
	bool IsEnemyByActor(class ACharacter* InTarget);
	static float GetTargetHealth(class ACharacter* Target);
	struct FGenericMonsterSensingConfig GetSensingConfig();
	class AGenericMonsterBase* GetOwnerMonster();
	void CollectPlayerCandidates(TArray<class ACharacter*>* OutPlayers);
	void CollectMonsterCandidates(TArray<class ACharacter*>* OutMonsters);
};


// Class GenericFeatures.GenericMonsterBase
// 0x01B0 (0x0B50 - 0x09A0)
class AGenericMonsterBase : public AGenericCharacter
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x09A0(0x0068) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMonsterSetPlayedIdleIndex;                              // 0x0A08(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FMonsterIdleIndex                           MonsterIdleIndex;                                         // 0x0A18(0x0008) (BlueprintVisible, Net)
	struct FScriptMulticastDelegate                    OnMonsterHurting;                                         // 0x0A20(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEnemyChanged;                                           // 0x0A30(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              WalkSpeed;                                                // 0x0A40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunSpeed;                                                 // 0x0A44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeedScale;                                               // 0x0A48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TeamID;                                                   // 0x0A4C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Campid;                                                   // 0x0A50(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MonsterLevel;                                             // 0x0A54(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     CharacterName;                                            // 0x0A58(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UUTSkillManagerComponent*                    SkillManager;                                             // 0x0A68(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USTBuffSystemComponent*                      BuffSystem;                                               // 0x0A70(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USimulateSyncSmoothComponent*                SimulateSyncSmooth;                                       // 0x0A78(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UGenericChooseEnemyComponent*                ChooseEnemyComponent;                                     // 0x0A80(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBehaviorControlComponent*                   BehaviorControlComp;                                      // 0x0A88(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               bEnableSimulateSyncSmooth;                                // 0x0A90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0A91(0x0003) MISSED OFFSET
	float                                              MovementTickInterval;                                     // 0x0A94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ERegionSizeIndex                                   RegionSize;                                               // 0x0A98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRegionStatic;                                            // 0x0A99(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      AutoDormancyType;                                         // 0x0A9A(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0A9B(0x0001) MISSED OFFSET
	float                                              SpawnAnimTime;                                            // 0x0A9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0AA0(0x0018) MISSED OFFSET
	float                                              LandDuration;                                             // 0x0AB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InAirVelocityThreshold;                                   // 0x0ABC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MoveSpeedTolerance;                                       // 0x0AC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0AC4(0x0004) MISSED OFFSET
	bool                                               bAllowVehicleKnockback;                                   // 0x0AC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0AC9(0x0003) MISSED OFFSET
	float                                              VehicleHitLaunchPitchDeg;                                 // 0x0ACC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VehicleHitRefMinImpulse;                                  // 0x0AD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VehicleHitRefMaxImpulse;                                  // 0x0AD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VehicleHitMinLaunchVelocity;                              // 0x0AD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VehicleHitMaxLaunchVelocity;                              // 0x0ADC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowLaunchAirState;                                     // 0x0AE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0AE1(0x0003) MISSED OFFSET
	float                                              DelayCheckLaunchAirState;                                 // 0x0AE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinLaunchAirGroundTime;                                   // 0x0AE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxLaunchAirGroundTime;                                   // 0x0AEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LaunchAirRiseUpDuration;                                  // 0x0AF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x1C];                                      // 0x0AF4(0x001C) MISSED OFFSET
	float                                              StunBeginAnimTime;                                        // 0x0B10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StunAnimTime;                                             // 0x0B14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StunRecoveryAnimTime;                                     // 0x0B18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x1C];                                      // 0x0B1C(0x001C) MISSED OFFSET
	bool                                               CloseCollisionForMeshOnDS;                                // 0x0B38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceAnimationUpdatedOnClient;                           // 0x0B39(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHideMeshUntilAnimAssetsLoaded;                           // 0x0B3A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x1];                                       // 0x0B3B(0x0001) MISSED OFFSET
	float                                              ShowMeshDelayAfterAnimAssetsLoaded;                       // 0x0B3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnEditorKeyPressedDelegate;                               // 0x0B40(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericMonsterBase");
		return pStaticClass;
	}


	void SetTeamID(int NewTeamId);
	void SetSpeedScale(float NewSpeedScale);
	void SetMonsterIdleIndex(int NewIndex);
	void SetCharacterName(const struct FString& NewCharacterName);
	void SetCampID(int NewCampID);
	class ACharacter* SelectEnemyByLua(TArray<class ACharacter*> Candidates);
	float ReviseSenseDistanceByActor(float InDistance, class AActor* InTarget);
	void ReceivedPlayerActiveRegionsChanged(bool bEnter);
	void OnSmoothComponentSnapshotPreReplicate();
	void OnRep_MonsterIdleIndex();
	void OnRep_CampID();
	void LeaveLaunchAirRiseUp();
	void LeaveLaunchAirGround();
	void LaunchCharacterWithParam(const struct FVector& LaunchVelocity, bool bChangeState);
	bool IsValidEnemyTarget(class AActor* InTarget);
	bool IsEnemyByActor(class ACharacter* InTarget);
	int GetTeamId();
	float GetSpeedScale();
	struct FGenericMonsterSensingConfig GetSensingConfig();
	int GetMonsterIdleIndex();
	float GetCurrentSpeed();
	class UGenericChooseEnemyComponent* GetChooseEnemyComponent();
	struct FString GetCharacterName();
	int GetCampId();
	class USTBuffSystemComponent* GetBuffComponent();
	void FinishStunRecovery();
	void ExitSpawnState();
	void EnterStunRecovery();
	void EnterStun();
	void DoHurting(const struct FVector& HurtDir);
	void ClearStunState();
	void ClearLaunchAirState();
	void CheckLaunchAirState();
	void ChangeWalkSpeed(EMobWalkType InWalkType);
};


// Class GenericFeatures.GenericMonster
// 0x0130 (0x0C80 - 0x0B50)
class AGenericMonster : public AGenericMonsterBase
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0B50(0x00A0) MISSED OFFSET
	float                                              HealthMax;                                                // 0x0BF0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Health;                                                   // 0x0BF4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<EDamageableGameObjectType>                  DamageableGameObjectTypes;                                // 0x0BF8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              TakeDamageScale;                                          // 0x0C08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageScale;                                              // 0x0C0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 VehicleSpeedDamageCurve;                                  // 0x0C10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VehicleHitDamageScale;                                    // 0x0C18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VehicleHitMinDamageSpeedKmh;                              // 0x0C1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VehicleHitRefDamageSpeedKmh;                              // 0x0C20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VehicleHitMinDamageImpulse;                               // 0x0C24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VehicleHitRefDamageImpulse;                               // 0x0C28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VehicleHitMinDamage;                                      // 0x0C2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VehicleHitMaxDamage;                                      // 0x0C30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeadAnimTime;                                             // 0x0C34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HurtAnimTime;                                             // 0x0C38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      IsInvincible : 1;                                         // 0x0C3C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0C3D(0x0001) MISSED OFFSET
	bool                                               bForceOpenPawnCollision;                                  // 0x0C3E(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShowGenericHPBar;                                        // 0x0C3F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                GenericHPBarPlanID;                                       // 0x0C40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CustomHPBarType;                                          // 0x0C44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CustomHPBarScreenMarkID;                                  // 0x0C48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0C4C(0x0004) MISSED OFFSET
	struct FString                                     CustomHPBarUIConfig;                                      // 0x0C50(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0C60(0x0010) MISSED OFFSET
	class UPartHitComponentBase*                       PartHitComp;                                              // 0x0C70(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0C78(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericMonster");
		return pStaticClass;
	}


	void SetTakeDamageScale(float NewTakeDamageScale);
	void SetIsInvincible(bool bInvincible, unsigned char InMaskBit);
	void SetHealthMax(float NewHealthMax);
	void SetHealth(float NewHealth);
	void SetDamageScale(float NewDamageScale);
	float OnTargetTakeDamage(class AActor* DamageTarget, float Damage, class AController* EventInstigator);
	void OnDie(class APawn* Causer);
	float HandleTargetTakeDamage(class AActor* DamageTarget, float Damage, class AController* EventInstigator);
	float GetTakeDamageScale();
	class UPartHitComponentBase* GetPartHitComponentBase();
	bool GetIsInvincible();
	float GetHealthMax();
	float GetHealth();
	float GetDamageScale();
	float CalcVehicleHitDamage(class ASTExtraVehicleBase* OtherVehicle, const struct FVector& HitImpulseDirection, float HitSpeed);
	void BPReceiveDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser, TEnumAsByte<EDamageType> DamageEventType);
	float BPPreTakeDamage(float DamageAmount, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser);
};


// Class GenericFeatures.GenericMonsterAnimInstance
// 0x00D0 (0x1850 - 0x1780)
class UGenericMonsterAnimInstance : public UDataDriverAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x1780(0x0008) MISSED OFFSET
	float                                              Speed;                                                    // 0x1788(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RandomIdleIndex;                                          // 0x178C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RandomIdleIndexInt;                                       // 0x1790(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x1794(0x0004) MISSED OFFSET
	struct FGameplayTag                                RandomIdleBS1DTag;                                        // 0x1798(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     HurtDirection;                                            // 0x17A0(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              HurtingAccumulate;                                        // 0x17AC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsHurting;                                               // 0x17B0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x17B1(0x0003) MISSED OFFSET
	float                                              HurtingAnimPlayRate;                                      // 0x17B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                HurtBSTag;                                                // 0x17B8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FGameplayTag, struct FGameplayTag>     StateToMontageParamMap;                                   // 0x17C0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bMonsterIdleIndexDelegateBound;                           // 0x1810(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x1811(0x0007) MISSED OFFSET
	class AGenericMonsterBase*                         CachedOwnerMonster;                                       // 0x1818(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bMonsterHurtingDelegateBound;                             // 0x1820(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x1821(0x0007) MISSED OFFSET
	class UStateReflectComp*                           CachedStateReflectComp;                                   // 0x1828(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<struct FGameplayTag>                        PendingMontageTags;                                       // 0x1830(0x0010) (ZeroConstructor, Transient)
	bool                                               bAnimAssetsLoadedDelegateBound;                           // 0x1840(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0xF];                                       // 0x1841(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericMonsterAnimInstance");
		return pStaticClass;
	}


	float PlayMontageWithAnimEventByName(const struct FName& InTag);
	float PlayMontageWithAnimEvent(const struct FGameplayTag& EventTag);
	void OnMonsterRandomIdleIndexSet(int NewIndex);
	void OnMonsterHurting(class AGenericMonsterBase* Monster, const struct FVector& HurtDir);
	void HandleStateEntered(const struct FGameplayTag& State);
	class UGenericMonsterAnimShareParamsComp* GetMonsterShareParams();
};


// Class GenericFeatures.GenericMonsterAnimShareParamsComp
// 0x00A0 (0x0550 - 0x04B0)
class UGenericMonsterAnimShareParamsComp : public UDataDriverAnimShareParamsComp
{
public:
	struct FSoftObjectPath                             AnimDataAsset;                                            // 0x04B0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	int64_t                                            AnimAssetContextKey;                                      // 0x04C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FGameplayTag, struct FGameplayTag>     StateToAnimParamMap;                                      // 0x04D0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0520(0x0018) MISSED OFFSET
	class UStateReflectComp*                           CachedStateRef;                                           // 0x0538(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FName                                       AnimSourceKey;                                            // 0x0540(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAnimAssetsLoaded;                                        // 0x0548(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0549(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericMonsterAnimShareParamsComp");
		return pStaticClass;
	}


	bool IsAnimAssetsLoaded();
	void HandleStateLeft(const struct FGameplayTag& State);
	void HandleStateEntered(const struct FGameplayTag& State);
	class UAnimationAsset* GetLoadedAnimAsset(const struct FGameplayTag& Tag);
};


// Class GenericFeatures.GenericMonsterEditor
// 0x0000 (0x0C80 - 0x0C80)
class AGenericMonsterEditor : public AGenericMonster
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericMonsterEditor");
		return pStaticClass;
	}

};


// Class GenericFeatures.GenericNPC
// 0x0000 (0x0B50 - 0x0B50)
class AGenericNPC : public AGenericMonsterBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericNPC");
		return pStaticClass;
	}

};


// Class GenericFeatures.GenericPartHitComponent
// 0x0168 (0x02E0 - 0x0178)
class UGenericPartHitComponent : public UPartHitComponentBase
{
public:
	class ACharacter*                                  OwnerCharacter;                                           // 0x0178(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              UpdateHitBoxDeltaTime;                                    // 0x0180(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bActivePartHit;                                           // 0x0184(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0185(0x0003) MISSED OFFSET
	uint64_t                                           LastPartHitRefreshBoxCollisionFrameNum;                   // 0x0188(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<struct FGameplayTag, TEnumAsByte<ESTEPoseState>> TagToPoseMap;                                             // 0x0190(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	TMap<TEnumAsByte<ESTEPoseState>, struct FHitBoxTagInfo> HitBoxTagMapData;                                         // 0x01E0(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FHitBoxTagInfo                              UselessHitBoxData;                                        // 0x0230(0x0018) (BlueprintVisible, BlueprintReadOnly)
	TArray<class UPrimitiveComponent*>                 HitBoxList;                                               // 0x0248(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0258(0x0020) MISSED OFFSET
	TMap<struct FString, EAvatarDamagePosition>        NewHitBodyPosMap;                                         // 0x0278(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	float                                              PawnCollisionCountdown;                                   // 0x02C8(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsRefreshPawnCollision;                                  // 0x02CC(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02CD(0x0003) MISSED OFFSET
	float                                              BoxCollisionCountdown;                                    // 0x02D0(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsRefreshBoxCollision;                                   // 0x02D4(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	TEnumAsByte<EHitPartJugementType>                  ClientHitPartJudgment;                                    // 0x02D5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x02D6(0x0001) MISSED OFFSET
	bool                                               bDebugDrawHitPos;                                         // 0x02D7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCloseCharacterMeshCollision;                             // 0x02D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x02D9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericPartHitComponent");
		return pStaticClass;
	}


	void UpdatePoseCollisionShapes(TEnumAsByte<ESTEPoseState> PoseState);
	void UpdateAllInstanceBodyTransform(int Type);
	void RefreshWorldBoxCollision(float countdown);
	void RefreshByStateChange(const struct FGameplayTag& State);
	void InitBodyHitBox();
	class UPrimitiveComponent* GetHitBoxByState(TEnumAsByte<ESTEPoseState> InPoseState);
	EAvatarDamagePosition GetHitBodyTypeByHitPos(const struct FVector& InHitPos);
	EAvatarDamagePosition GetHitBodyTypeByBoneName(const struct FString& InBoneName);
	EAvatarDamagePosition GetHitBodyType(const struct FVector& InHitPos, const struct FVector& InImpactVec, const struct FString& InBoneName);
	TEnumAsByte<EHitPartJugementType> GetCurHitPartJudgementType();
	void CloseBodyBulletCollision();
	EAvatarDamagePosition CalcHitBodyType(const struct FVector& InHitPos, const struct FVector& InProjvec, const struct FVector& InCenterPos, const struct FBodyTypeDef& InBodyDef);
};


// Class GenericFeatures.StateReflectComp
// 0x0048 (0x01C0 - 0x0178)
class UStateReflectComp : public UActorComponent
{
public:
	class UStateRelationDataAsset*                     RelationData;                                             // 0x0178(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnStateEntered;                                           // 0x0180(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStateLeft;                                              // 0x0190(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FGameplayTagContainer                       CurrentStates;                                            // 0x01A0(0x0020) (Net)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.StateReflectComp");
		return pStaticClass;
	}


	void OnRep_CurrentStates(const struct FGameplayTagContainer& OldStates);
	void LeaveState(const struct FGameplayTag& State);
	bool HasState(const struct FGameplayTag& State, bool bExact);
	struct FGameplayTagContainer GetCurrentStates();
	bool EnterState(const struct FGameplayTag& State);
	bool CanEnterState(const struct FGameplayTag& State);
};


// Class GenericFeatures.StateRelationDataAsset
// 0x0060 (0x0090 - 0x0030)
class UStateRelationDataAsset : public UDataAsset
{
public:
	TArray<struct FStateRelationEntry>                 Entries;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0040(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.StateRelationDataAsset");
		return pStaticClass;
	}

};


}

