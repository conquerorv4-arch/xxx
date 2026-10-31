#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:34:49 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Creative.CameraDeviceSpringArmComponent
// 0x0020 (0x0E90 - 0x0E70)
class UCameraDeviceSpringArmComponent : public UCustomSpringArmComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0E70(0x0010) MISSED OFFSET
	float                                              DebugAngle;                                               // 0x0E80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0E84(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CameraDeviceSpringArmComponent");
		return pStaticClass;
	}

};


// Class Creative.CreateBackpackRepActor
// 0x0010 (0x04F8 - 0x04E8)
class ACreateBackpackRepActor : public ABackpackRepActor
{
public:
	int                                                CustomItemDataInitFlag;                                   // 0x04E8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CustomItemIDMin;                                          // 0x04EC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CustomItemIDMax;                                          // 0x04F0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NeedUpdateCustomItemList;                                 // 0x04F4(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04F5(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreateBackpackRepActor");
		return pStaticClass;
	}


	void InitCustomItemDataInfo();
	void CustomItemDataInitComplete();
};


// Class Creative.CreativeAbilitySystemComponent
// 0x0158 (0x1370 - 0x1218)
class UCreativeAbilitySystemComponent : public USAbilitySystemComponent
{
public:
	class ASTExtraPlayerController*                    PlayerController;                                         // 0x1218(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASTExtraPlayerCharacter*                     PlayerCharacter;                                          // 0x1220(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x1228(0x0008) MISSED OFFSET
	struct FTransform                                  GhostBuildingTransform;                                   // 0x1230(0x0030) (IsPlainOldData)
	TArray<class AActor*>                              GetLocationActorsToIgnore;                                // 0x1260(0x0010) (ZeroConstructor)
	float                                              LandOnOffsetZ;                                            // 0x1270(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LandHitPointZ;                                            // 0x1274(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LandHitDeltaZ;                                            // 0x1278(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WaterHeight;                                              // 0x127C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bForceLandOnGround;                                       // 0x1280(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1281(0x0003) MISSED OFFSET
	int                                                LandGroundType;                                           // 0x1284(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseLandOnOffsetZ;                                        // 0x1288(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bSnapTransValid;                                          // 0x1289(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bSnapGridEnable;                                          // 0x128A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x128B(0x0005) MISSED OFFSET
	class AActor*                                      SnapGrid;                                                 // 0x1290(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreLandOn;                                            // 0x1298(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreWaterHeightCheck;                                  // 0x1299(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreCameraRotate;                                      // 0x129A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x129B(0x0001) MISSED OFFSET
	struct FRotator                                    ModifiedRotation;                                         // 0x129C(0x000C) (IsPlainOldData)
	struct FVector                                     ModifiedScale;                                            // 0x12A8(0x000C) (IsPlainOldData)
	struct FRotator                                    RelativeRotation;                                         // 0x12B4(0x000C) (IsPlainOldData)
	struct FVector                                     RelativeLocation;                                         // 0x12C0(0x000C) (IsPlainOldData)
	struct FVector                                     RelativeScale;                                            // 0x12CC(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x12D8(0x0008) MISSED OFFSET
	struct FTransform                                  SnapBaseTransform;                                        // 0x12E0(0x0030) (IsPlainOldData)
	struct FVector                                     DeviceLocationOffset;                                     // 0x1310(0x000C) (IsPlainOldData)
	struct FVector                                     InstanceBoxCenter;                                        // 0x131C(0x000C) (IsPlainOldData)
	struct FVector                                     InstanceBoxExtent;                                        // 0x1328(0x000C) (IsPlainOldData)
	bool                                               bSpecificPlaceStartEnd;                                   // 0x1334(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x1335(0x0003) MISSED OFFSET
	struct FVector                                     PlaceRayStart;                                            // 0x1338(0x000C) (IsPlainOldData)
	struct FVector                                     PlaceRayEnd;                                              // 0x1344(0x000C) (IsPlainOldData)
	bool                                               bNeedGetBuildDistance;                                    // 0x1350(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bOpenLandPosCheckDebug;                                   // 0x1351(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x1352(0x0002) MISSED OFFSET
	struct FVector                                     OverridePos;                                              // 0x1354(0x000C) (IsPlainOldData)
	struct FRotator                                    OverrideRot;                                              // 0x1360(0x000C) (IsPlainOldData)
	bool                                               bOverrideBuild;                                           // 0x136C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x136D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeAbilitySystemComponent");
		return pStaticClass;
	}


	void UpdateGridGhostBuildingLocation(float X, float Y, float Z);
	void UpdateGhostBuildingTransform();
	void SetSnapTargetTransform(const struct FTransform& SnapTargetTransform);
	void SetOverrideBuild(const struct FVector& Position, const struct FRotator& Rotation);
	void SetLuaGhostBuildingTransformScale(float X, float Y, float Z);
	void SetLuaGhostBuildingTransformRotation(float Roll, float Yaw, float Pitch);
	void SetLuaGhostBuildingTransformLocation(float X, float Y, float Z);
	void LuaGhostBuildingInstaUpdate();
	float GetSnappedLocAxisZ(float Loc, float Base);
	float GetSnappedLocAxis(float Value, int AxisType);
	int GetSetupBuildingID();
	class ASTExtraPlayerController* GetPlayerController();
	bool GetLuaSnapTargetTransform();
	float GetLuaInstanceBoundingBox();
	struct FTransform GetGhostBuildingTransform();
	struct FString GetBuildingInstanceID();
	float GetBuildDistance();
	void ClearOverrideBuild();
};


// Class Creative.CreativeActorDataManager
// 0x0148 (0x02B0 - 0x0168)
class UCreativeActorDataManager : public USTExtraManagerBase
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0168(0x0004) MISSED OFFSET
	int                                                SingleSerializeNum;                                       // 0x016C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FCreativeActorNodeContainer                 ActorDataContainer;                                       // 0x0170(0x00C8) (Net, Transient)
	unsigned char                                      UnknownData01[0x64];                                      // 0x0238(0x0064) MISSED OFFSET
	float                                              DataNodePullInterval;                                     // 0x029C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SinglePullDataNodeNum;                                    // 0x02A0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalPullDataNodeNum;                                     // 0x02A4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DataNodePullTimeroutInterval;                             // 0x02A8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02AC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeActorDataManager");
		return pStaticClass;
	}


	void SetActorDataNodes(TArray<struct FCreativeActorDataNode> ActorDataNodes);
	void RemoveActorData(uint32_t ID, unsigned char Type);
	void ReceiveOnPostSetLuaEventBridgeInstance();
	void ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState);
	void OnPostSetLuaEventBridgeInstance();
	void OnGameStateBeginPlay(class AGameStateBase* GameState);
	TArray<struct FCreativeActorDataNode> GetActorDataNodes(TArray<uint32_t> DataHashKeys);
	bool GetActorDataContent(uint32_t ID, unsigned char Type, TArray<unsigned char>* OutContent);
	static class UCreativeActorDataManager* Get(class UObject* WorldContext);
	void ChangeActorData(uint32_t ID, unsigned char Type, TArray<unsigned char> Content);
	void CallOnReceivePreActorDataRemove(uint32_t ID, unsigned char Type);
	void CallOnReceivePostActorDataChange(uint32_t ID, unsigned char Type, TArray<unsigned char> Content);
	void CallOnReceivePostActorDataAdd(uint32_t ID, unsigned char Type, TArray<unsigned char> Content);
	void AddActorData(uint32_t ID, unsigned char Type, TArray<unsigned char> Content);
};


// Class Creative.CreativeModeActorInteractionComponent
// 0x0088 (0x02C0 - 0x0238)
class UCreativeModeActorInteractionComponent : public ULuaActorComponent
{
public:
	struct FString                                     HitComponentName;                                         // 0x0238(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bSectorCheckEnabled;                                      // 0x0248(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0249(0x0003) MISSED OFFSET
	float                                              SectorCheckCD;                                            // 0x024C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bTransformCrossHairCheckEnabled;                          // 0x0250(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0251(0x0003) MISSED OFFSET
	float                                              TransformCrossHairCheckCD;                                // 0x0254(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bPickCrossHairCheckEnabled;                               // 0x0258(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0259(0x0003) MISSED OFFSET
	float                                              PickCrossHairCheckCD;                                     // 0x025C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0260(0x0010) MISSED OFFSET
	class APawn*                                       PlayerCharacter;                                          // 0x0270(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASTExtraPlayerController*                    PlayerController;                                         // 0x0278(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              CrossHairCheckIgnoreActorArray;                           // 0x0280(0x0010) (ZeroConstructor)
	TArray<class AActor*>                              uTransformCrossHairCheckIgnoreActorArray;                 // 0x0290(0x0010) (ZeroConstructor)
	TArray<class AActor*>                              PickCrossHairCheckIgnoreActorArray;                       // 0x02A0(0x0010) (ZeroConstructor)
	TArray<class UClass*>                              PickActorClassArray;                                      // 0x02B0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeActorInteractionComponent");
		return pStaticClass;
	}


	void SortCanEditParamsObjs();
	void SetCrossHairTransformObjInstanceID(const struct FString& InstanceID);
	void SetCrossHairSelectedObjInstanceID(const struct FString& InstanceID);
	void SetCrossHairPickActor(class AActor* PickActor);
	void SectorCheckImplement(float CheckDistance, float CheckAngle);
	float GetSectorCheckIntervalCfg();
	float GetSectorCheckDistance();
	float GetSectorCheckAngle();
	float GetPlayerHalfHeight();
	class ASTExtraPlayerController* GetPlayerController();
	float GetCrossHairTransformDistanceCfg();
	float GetCrossHairPickDistanceCfg();
	float GetCrossHairCheckIntervalCfg();
	float GetCrossHairCheckDistanceCfg();
	void CrossHairCheckImplement(float Distance);
	void ClearCanEditParamsObjs();
	void AddCanEditObject(class UObject* uCanEditObject, float Angle, float Distance);
};


// Class Creative.CreativeModeManagerBase
// 0x0000 (0x0168 - 0x0168)
class UCreativeModeManagerBase : public USTExtraManagerBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeManagerBase");
		return pStaticClass;
	}

};


// Class Creative.CreativeAdaptiveSchedulManager
// 0x0108 (0x0270 - 0x0168)
class UCreativeAdaptiveSchedulManager : public UCreativeModeManagerBase
{
public:
	bool                                               bOpenLuaProfile;                                          // 0x0168(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOpenProfile;                                             // 0x0169(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOpenFuncCPUProfile;                                      // 0x016A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5D];                                      // 0x016B(0x005D) MISSED OFFSET
	TMap<struct FString, int>                          ProjectTagMap;                                            // 0x01C8(0x0050) (BlueprintVisible, ZeroConstructor)
	TMap<struct FString, int>                          LuaPathTagMap;                                            // 0x0218(0x0050) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0268(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeAdaptiveSchedulManager");
		return pStaticClass;
	}


	void SetObjectProfile(bool bOpen);
	void SetLuaProfile(bool bOpen);
	int RecordFunctionStart(const struct FString& ClassName, const struct FString& FunctionName);
	void RecordFunctionEnd(const struct FString& ClassName, const struct FString& FunctionName, int Cycles);
	int LuaPath2Tag(const struct FString& luaPath, const struct FString& FunctionName);
	void LogOutputObjectMemoryInfo(bool bClear);
	void LogOutputLuaFunctionCallInfo(bool bClear);
	TMap<int, int64_t> LogoutLuaRecord();
	static bool LLMEnabled();
	int InitTagIfNotExist(const struct FString& TagName);
	int InitNewLuaPath2Tag(const struct FString& luaPath, const struct FString& FunctionName);
	static uint64_t GetPureLuaUsedBytes();
	static uint64_t GetLuaUsedBytes();
	static class UCreativeAdaptiveSchedulManager* Get(class UObject* WorldContext);
	void AfterDead(int SpecType);
};


// Class Creative.CreativeAnimInstance
// 0x0030 (0x0CB0 - 0x0C80)
class UCreativeAnimInstance : public USTExtraAnimInstanceBase
{
public:
	float                                              MoveVelocityInterpSpeed;                                  // 0x0C80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFlyBuilding;                                             // 0x0C84(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0C85(0x0003) MISSED OFFSET
	struct FVector                                     C_ActualMoveVelocity;                                     // 0x0C88(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              C_FlyMaxSpeed;                                            // 0x0C94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_SkillFlying;                                            // 0x0C98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0C99(0x0003) MISSED OFFSET
	float                                              RootAimYaw;                                               // 0x0C9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              C_AimOffsetAdditiveAlpha;                                 // 0x0CA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsProne;                                                 // 0x0CA4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xB];                                       // 0x0CA5(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeAnimInstance");
		return pStaticClass;
	}

};


// Class Creative.CreativeLuaSignalObjectBase
// 0x00C8 (0x00F0 - 0x0028)
class UCreativeLuaSignalObjectBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0090(0x0008) MISSED OFFSET
	class UGameLuaAPI*                                 GameLuaAPI;                                               // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<int, struct FCreativeSignalEventInfo>         SignalEventInfoMap;                                       // 0x00A0(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeLuaSignalObjectBase");
		return pStaticClass;
	}


	void TryBeginPlay();
	void SetLuaFilePath(const struct FString& FilePath);
	void RemoveCommonEvent(int EventHandle);
	void ReceivePostBeginPlay();
	void ReceiveBeginPlay();
	void HookObject();
	void ClearAllCommonEvent();
	void AddCommonEvent(const struct FString& EventType, const struct FString& EventID, const struct FString& FunctionName);
};


// Class Creative.CreativeApiObject
// 0x0098 (0x0188 - 0x00F0)
class UCreativeApiObject : public UCreativeLuaSignalObjectBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x00F0(0x0050) MISSED OFFSET
	struct FString                                     ModuleName;                                               // 0x0140(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             CrossVMAPIs;                                              // 0x0150(0x0010) (ZeroConstructor)
	TArray<struct FString>                             UGCVMAPIs;                                                // 0x0160(0x0010) (ZeroConstructor)
	struct FString                                     UGCVMAPILuaFilePath;                                      // 0x0170(0x0010) (ZeroConstructor)
	bool                                               bEnableRegisterCClosureApi;                               // 0x0180(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0181(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeApiObject");
		return pStaticClass;
	}


	void SetModuleName(const struct FString& NewName);
	struct FString GetModuleName();
};


// Class Creative.CreativeAssetManager
// 0x0118 (0x0280 - 0x0168)
class UCreativeAssetManager : public UCreativeModeManagerBase
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x0168(0x0001) MISSED OFFSET
	bool                                               bColorISMEnable;                                          // 0x0169(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x016A(0x0002) MISSED OFFSET
	int                                                CustomEditMaterialId;                                     // 0x016C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x110];                                     // 0x0170(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeAssetManager");
		return pStaticClass;
	}


	bool RemoveAssetInfo(int AssetId);
	void ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState);
	void ReceiveInitAssetInfo(int AssetId);
	void ReceiveGetCustomAssetAsyncWithStringForManage(const struct FString& CustomAssetKey);
	void OnGameStateBeginPlay(class AGameStateBase* GameState);
	void OnCustomAssetLoadComplete(const struct FString& CustomAssetKey, class UObject* LoadObject);
	struct FString GetObbyMeshPath(int AssetId);
	struct FString GetMaterialPath(int MaterialID);
	void GetCustomAssetAsyncWithStringForManage(const struct FString& CustomAssetKey, const struct FString& InputString, const struct FScriptDelegate& AssetLoadSuccessDelegate);
	static class UCreativeAssetManager* Get(class UObject* WorldContext);
	void AddAssetInfo(int AssetId, const struct FCreativeAssetInfo& AssetInfo);
};


// Class Creative.CreativeAudioApiObject
// 0x0000 (0x0188 - 0x0188)
class UCreativeAudioApiObject : public UCreativeApiObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeAudioApiObject");
		return pStaticClass;
	}

};


// Class Creative.CreativeAudioBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UCreativeAudioBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeAudioBlueprintFunctionLibrary");
		return pStaticClass;
	}


	static bool SaveWemToConvert(TArray<unsigned char> WemData, const struct FString& SavePath);
	static void RegisterWwiseBaseDir(const struct FString& BaseDir);
	static float GetWavLength(TArray<unsigned char> WavData);
	static float GetMp3Length(TArray<unsigned char> Mp3Data);
	static void GetAudioWaveform(uint32_t WemMediaID, float SampleInterval, const struct FScriptDelegate& Callback);
};


// Class Creative.CreativeAutoGenComponent
// 0x0000 (0x0238 - 0x0238)
class UCreativeAutoGenComponent : public ULuaActorComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeAutoGenComponent");
		return pStaticClass;
	}


	TArray<unsigned char> GetNodeSegmentContent(struct FCreativeAutoGenItemDataSegment* Segment);
	bool AddInstanceDataContent(TArray<unsigned char> Content, struct FCreativeAutoGenDataSegment* Segment);
};


// Class Creative.CreativeModeBackpackUtils
// 0x0000 (0x0028 - 0x0028)
class UCreativeModeBackpackUtils : public UBackpackUtilsClassical
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeBackpackUtils");
		return pStaticClass;
	}


	static int ResCanAddToBackpackNum(class UBackpackComponent* BackpackComponent, int resID, int AddNum);
	static int GetItemMaxCount(class UBackpackComponent* BackpackComponent, int resID);
	static void AddAIAvatarItem(class UBackpackComponent* BackpackComponent, int ID, int Color, int Pattern, int Num);
};


// Class Creative.CreativeBaseWidget
// 0x00F8 (0x03C0 - 0x02C8)
class UCreativeBaseWidget : public ULuaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02C8(0x0008) MISSED OFFSET
	bool                                               bOpenZOrderBatch;                                         // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02D1(0x0007) MISSED OFFSET
	struct FString                                     ZOrderInstanceID;                                         // 0x02D8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                ZOrderOriginalLayer;                                      // 0x02E8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAnimationIsPlaying;                                      // 0x02EC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xAB];                                      // 0x02ED(0x00AB) MISSED OFFSET
	TArray<class UCreativeBaseWidget*>                 FollowerWidgets;                                          // 0x0398(0x0010) (ExportObject, ZeroConstructor)
	float                                              TickLimit;                                                // 0x03A8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03AC(0x0004) MISSED OFFSET
	bool                                               bAnimationForceVolatileEnable;                            // 0x03B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x03B1(0x0003) MISSED OFFSET
	float                                              EndForceVolatileDelayTime;                                // 0x03B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x03B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeBaseWidget");
		return pStaticClass;
	}


	void StopCustomAnimation(bool bReset);
	void SetZOrderBatchData(const struct FString& InInstanceID, int InOriginalLayer);
	void SetEndForceVolatileDelayTime(float InDelayTime);
	void SetAnimationForceVolatileEnable(bool bEnable);
	void ResumeCustomAnimation();
	void PlayCustomAnimation(const struct FCreativeUITweenInfo& InTweenInfo, const struct FCreativeUIAnimationGoal& InGoal);
	void PauseCustomAnimation();
	bool IsCustomAnimationPlaying();
	bool IsCustomAnimationPaused();
	struct FVector2D GetZOrderBatchSize();
};


// Class Creative.CreativeBinaryDataManager
// 0x0020 (0x0188 - 0x0168)
class UCreativeBinaryDataManager : public USTExtraManagerBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0168(0x0018) MISSED OFFSET
	uint32_t                                           InitBinaryDataSize;                                       // 0x0180(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0184(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeBinaryDataManager");
		return pStaticClass;
	}


	void SetInitBinaryDataSize(uint32_t DataSize);
	void ReceiveOnPreLoadMap(const struct FString& MapName);
	void ReceiveOnPostSetLuaEventBridgeInstance();
	void ReceiveOnPostLoadMapWithWorld(class UWorld* World);
	void OnRep_InitBinaryDataSize();
	void OnPreLoadMap(const struct FString& MapName);
	void OnPostSetLuaEventBridgeInstance();
	void OnPostLoadMapWithWorld(class UWorld* World);
	uint32_t GetInitBinaryDataSize();
	static class UCreativeBinaryDataManager* Get(class UObject* WorldContext);
};


// Class Creative.CreativeBlockyLuaManager
// 0x0288 (0x03F0 - 0x0168)
class UCreativeBlockyLuaManager : public UCreativeModeManagerBase
{
public:
	TMap<struct FString, struct FString>               BindStubFuncMap;                                          // 0x0168(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x1];                                       // 0x01B8(0x0001) MISSED OFFSET
	bool                                               bConfigInited;                                            // 0x01B9(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bDynamicConfigInited;                                     // 0x01BA(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x01BB(0x0005) MISSED OFFSET
	TArray<class UPresetDesc*>                         DynamicAddPresetDescList;                                 // 0x01C0(0x0010) (ZeroConstructor)
	TArray<class UPresetDesc*>                         CachePresetDescList;                                      // 0x01D0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x50];                                      // 0x01E0(0x0050) MISSED OFFSET
	TArray<class UPresetDesc*>                         BatchRemovePresetDescList;                                // 0x0230(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x50];                                      // 0x0240(0x0050) MISSED OFFSET
	TMap<struct FString, int>                          NoneStrToLocalTextWithIDMap;                              // 0x0290(0x0050) (ZeroConstructor)
	struct FString                                     AllTypesJsonPath;                                         // 0x02E0(0x0010) (ZeroConstructor)
	struct FString                                     FunctionJsonPath;                                         // 0x02F0(0x0010) (ZeroConstructor)
	struct FString                                     FunctionFolderPath;                                       // 0x0300(0x0010) (ZeroConstructor)
	struct FString                                     VariableJsonPath;                                         // 0x0310(0x0010) (ZeroConstructor)
	struct FString                                     PresetsJsonPath;                                          // 0x0320(0x0010) (ZeroConstructor)
	struct FString                                     PresetsFolderPath;                                        // 0x0330(0x0010) (ZeroConstructor)
	struct FString                                     TextrueRectParamJsonPath;                                 // 0x0340(0x0010) (ZeroConstructor)
	struct FString                                     ProjectTextrueRectParamJsonPath;                          // 0x0350(0x0010) (ZeroConstructor)
	struct FString                                     ProjectAtlasRectParamJsonPath;                            // 0x0360(0x0010) (ZeroConstructor)
	struct FString                                     ProjectSyncAtlasRectParamJsonPath;                        // 0x0370(0x0010) (ZeroConstructor)
	struct FString                                     ProjectBlockyNewJsonPath;                                 // 0x0380(0x0010) (ZeroConstructor)
	struct FString                                     TipsJsonPath;                                             // 0x0390(0x0010) (ZeroConstructor)
	struct FString                                     SequenceJsonPath;                                         // 0x03A0(0x0010) (ZeroConstructor)
	struct FString                                     UAssetConfigDataPath;                                     // 0x03B0(0x0010) (ZeroConstructor)
	struct FString                                     BlockyLuaTLogJsonPath;                                    // 0x03C0(0x0010) (ZeroConstructor)
	bool                                               ClearCacheCallBeginDestroy;                               // 0x03D0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x03D1(0x0007) MISSED OFFSET
	class UBlockyGraphData*                            GraphDataObject;                                          // 0x03D8(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UBlockyGraphData*>                    GraphDataObjectList;                                      // 0x03E0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeBlockyLuaManager");
		return pStaticClass;
	}


	void SetRTLOffsetY(float Offset);
	void SetLTROffsetY(float Offset);
	void SetFontSize(int FontSize);
	void SetBlockIdFromSlotString(const struct FString& blockId, struct FBlockySlotString* SlotString);
	void ReturnPresetDescsToCache(TArray<class UPresetDesc*> ReturnDescs);
	bool ReturnGraphDataObject(class UBlockyGraphData* GraphDataObj);
	void RemoveDynamicPresetDescs(TArray<class UPresetDesc*> PresetDescs);
	void RegisterNameCache(class UBlockyGraphData* GraphData);
	void RefreshBlockyFont(struct FSlateFontInfo* DefaultFont);
	void ReceivePresetFromCustomSelection(class UObjectDesc* Desc);
	void ReceiveOutBlockyluaDownloadImage(class UTexture2D* Texture, const struct FString& IconPath);
	void ReceiveOpenGuide();
	void ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState);
	struct FString ReceivedGetLocalizeResStrHandleFailed(const struct FString& IdOrStr);
	void ReceiveCheckStringValidFunction(const struct FString& CheckString, const struct FCheckStringHandleData& Data);
	void ReceiveCheckStringResult(bool Result, const struct FString& ValidString, const struct FCheckStringHandleData& Data);
	void OnReceiveMessageData(TArray<struct FMessageDataWrapper> MessageDatas);
	void OnReceiveInitDisableFunc();
	void OnInitBlockyLuaConfig();
	void OnGameTypePreChanged(unsigned char LastGameType, unsigned char CurrentGameType);
	void OnGameStateBeginPlay(class AGameStateBase* GameState);
	bool IsLTRLanguage();
	bool IsLTR();
	void InitDisableFunction(TArray<struct FString> funcs);
	TArray<class UPresetDesc*> GetPresetDescs(int GetCount, struct FString* TypeName);
	class UPresetDesc* GetPresetDesc(struct FString* TypeName);
	class UBlockyGraphData* GetGraphDataObjectFormTemplateContent(TArray<unsigned char> GrapbAstContent, bool CallLoadFinish, bool IsLoadPresetsInGraph);
	class UBlockyGraphData* GetGraphDataObjectFormContent(TArray<unsigned char> GrapbAstContent, TArray<unsigned char> GlobalVarAstContent, bool CallLoadFinish, bool IsSingleton);
	class UPresetDesc* GetDynamicPresetDescsByKey(const struct FString& KeyName);
	class UBlockyLuaConfig* GetBlockyLuaConfig();
	struct FString GetBlockNameByStr(const struct FString& BlockyId);
	struct FString GetBlockIdFromSlotString(struct FBlockySlotString* SlotString);
	struct FString GetAllDynamicPresetJson();
	static class UCreativeBlockyLuaManager* Get(class UObject* WorldContext);
	TArray<struct FString> GenerateLuaCodeFormJson(const struct FString& JsonText, const struct FString& GlobalVarJsonText, bool GenGlobalVarLua);
	TArray<struct FString> GenerateLuaCodeFormGraphDataObject(class UBlockyGraphData* GraphDataObj, bool GenGlobalVarLua);
	TArray<struct FString> GenerateLuaCodeFormContent(TArray<unsigned char> GrapbAstContent, TArray<unsigned char> GlobalVarAstContent, bool GenGlobalVarLua, bool CallLoadFinish);
	void ClearNameIndexCache();
	TArray<class UPresetDesc*> ClearDynamicPresetDescs();
	void ClearCacheObjects(bool CallBeginDestroy);
	void ClearBlockyLuaHotfixUtility();
	void BlockyluaShowPresetPanelHandle(bool IsShow);
	void BlockyluaPresetSoundFunctionHandle(const struct FString& SoundPath);
	struct FString BlockyluaPresetSelectCheckHandle(class UObjectDesc* Desc);
	struct FText BlockyluaModifyTipHandle(const struct FText& OriginalTip);
	void BlockyluaMessageDataHandle(TArray<struct FMessageDataStruct> MessageDatas);
	struct FString BlockyluaGetLocalizeResStrHandle(const struct FString& IdOrStr);
	void BlockyluaDownloadImage(const struct FString& IconPath);
	void BlockyluaCustomInputHandle(const struct FString& CustomClickType, class UObjectDesc* Desc, TArray<class UObjectDesc*> followers);
	bool BlockyluaCheckShowPresetFitlerBtnHandle(const struct FString& TypeName);
	bool BlockyluaCheckShowCustomInputHandle(const struct FString& CustomClickType, class UObjectDesc* Desc, TArray<class UObjectDesc*> followers);
	void BindUndoCustomCommandHandle(bool IsUndo);
	void BindSetBlockNewStatusHandle(const struct FString& blockId, bool showstate);
	int BindGetPresetValidityDurationHandle(class UPresetDesc* PresetDesc);
	bool BindGetBlockNewStatusHandle(const struct FString& blockId);
	void BindCallShortCutKeyHandleHandle(int ShortcutKey);
	void BindBlockyLuaStubFunc(const struct FString& BindFuncName, const struct FString& OverrdeFuncName);
	void AddEmptyCustomCommand(class UBlockyGraphData* GraphData);
	void AddDynamicPresetDescs(TArray<class UPresetDesc*> PresetDescs);
	void AddCustomCommand(class UBlockyCustomCommand* Command, class UBlockyGraphData* GraphData);
};


// Class Creative.CreativeModeBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UCreativeModeBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeBlueprintLibrary");
		return pStaticClass;
	}


	static bool ZSTDDecompressData(TArray<unsigned char> CompressedData, TArray<unsigned char>* DecompressedData);
	static bool ZSTDCompressData(TArray<unsigned char> UncompressedData, int CompressionLevel, TArray<unsigned char>* CompressedData);
	static struct FString WindowsReadFileSummary(const struct FString& FilePath, TArray<struct FString> Properties);
	static struct FString WindowsPickFile(const struct FString& filter);
	static struct FVector2D WidgetAbsoluteSizeToLocalSize(class UWidget* Widget, const struct FVector2D& AbsoluteSize);
	static void UObjSnapshot(class UWorld* MyWorld);
	static struct FTransform TransformRevert(const struct FTransform& TransformB, struct FTransform* TransformRelative);
	static void TransformMultiplyBy(const struct FTransform& M, struct FTransform* Source);
	static void TransformBounds(const struct FTransform& M, struct FBoxSphereBounds* Bounds);
	static double ToMilliseconds64(uint64_t Cycles);
	static TArray<unsigned char> TextureToPNG(class UTexture2D* Texture);
	static TArray<unsigned char> TextureToJPEG(class UTexture2D* Texture);
	struct FString TakeSnapshot(class UWidget* WindowWidget, int X1, int Y1, int x2, int y2, const struct FString& Filename, bool bUseCrop, bool bFillRect);
	static bool SynchronizePropertiesWidget(class UWidget* TargetWidget);
	static bool SphereOverlapComponentsByChannel(class UObject* WorldContextObject, const struct FVector& SpherePos, float SphereRadius, TArray<TEnumAsByte<ECollisionChannel>> Channels, class UClass* ComponentClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents);
	static bool SphereOverlapActorsByChannel(class UObject* WorldContextObject, const struct FVector& SpherePos, float SphereRadius, TArray<TEnumAsByte<ECollisionChannel>> Channels, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors);
	static bool ShouldCreatePhysicsState(class UPrimitiveComponent* Component);
	static float SetWorldGravityZ(float GravityZ, class UObject* WorldContext);
	static void SetWidgetVisiblePass(class UWidget* Widget, bool bVisiblePass);
	static void SetStaticMeshMobility(class UStaticMeshComponent* StaticMeshComponent, TEnumAsByte<EComponentMobility> NewMobility);
	static void SetSpeedOverLimit(class AActor* Actor);
	static void SetRelativeCamRotation(class APlayerController* PlayerController, class USceneComponent* Component);
	static void SetParticleCullingDistance(class UParticleSystemComponent* ParticleSystemComponent, float Distance);
	static void SetInstanceValue(class UObject* WorldContextObject, const struct FString& InstanceID, const struct FString& Key, const struct FString& Value);
	static void SetCreativeInstanceDataContent(TArray<unsigned char> DataContent, struct FCreativeInstanceDataContent* InstanceDataContent);
	static void SetCommandLineValue(const struct FString& Key, const struct FString& NewValue);
	static void SetCollisionMobility(class UShapeComponent* Component, TEnumAsByte<EComponentMobility> NewMobility);
	static void SetAICrowdSimulationState(class AAIController* AICtrl, unsigned char NewState);
	static void SetAICrowdObstacleAvoidance(class AAIController* AICtrl, bool bEnable, bool bUpdateAgent);
	static void SetActorRegionBasedNetConsideration(class AActor* Actor, bool bNewValue);
	static bool SaveStringToFileByFullPath(const struct FString& String, const struct FString& Filename);
	static void SaveStringToFile(const struct FString& String, const struct FString& Filename);
	static void SaveRawStringToFile(TArray<unsigned char> Content, const struct FString& FilePath);
	static void SaveAssetStringToFile(const struct FString& String, const struct FString& Filename);
	struct FRotator RotatorCrossInverse(const struct FRotator& Rot1, const struct FRotator& Rot2);
	struct FRotator RotatorCross(const struct FRotator& Rot1, const struct FRotator& Rot2);
	static struct FVector Rotation2Vector(const struct FRotator& Rotator, int Axis);
	static TArray<unsigned char> RenderTargetToRGB(class UTextureRenderTarget2D* RenderTarget);
	static TArray<unsigned char> RenderTargetToPNG(class UTextureRenderTarget2D* RenderTarget, bool bLinearToGamma);
	void RenameObject(class UObject* Object, const struct FString& NewName);
	static void RecreatePhysicsState(class UPrimitiveComponent* Component);
	struct FQuat QuatCrossInverse(const struct FQuat& Quat1, const struct FQuat& Quat2);
	static struct FQuat QuatCross(const struct FQuat& Quat1, const struct FQuat& Quat2);
	static struct FString ProjectSavedDir();
	static struct FString ProjectContentDir();
	static void PopulateParticleProperties(class UParticleSystemComponent* ParticleSystemComponent);
	static void MoveComponentToNoLatent(class USceneComponent* Component, const struct FVector& TargetRelativeLocation, const struct FRotator& TargetRelativeRotation, bool bEaseOut, bool bEaseIn, float OverTime, bool bForceShortestRotationPath, TEnumAsByte<EMoveComponentAction> MoveAction);
	static void MoveComponentTo(class USceneComponent* Component, const struct FVector& WorldLocation, const struct FRotator& WorldRotation, bool bEaseOut, bool bEaseIn, float OverTime, bool bForceShortestRotationPath, TEnumAsByte<EMoveComponentAction> MoveAction);
	static void MinAreaRectangle(class UObject* WorldContextObject, TArray<struct FVector> InPoints, const struct FVector& SampleSurfaceNormal, bool bDebugDraw, struct FRotator* OutRectRotation, float* OutRectLengthX, float* OutRectLengthY, struct FVector* OutRectCenter, TArray<int>* PolyVertIndices);
	static struct FString MD5HashByteArray(TArray<unsigned char> inArray);
	static struct FString MD5HashAnsiString(const struct FString& str);
	static bool Lz4DecompressData(TArray<unsigned char> CompressedData, TArray<unsigned char>* DecompressedData);
	static bool Lz4CompressData(TArray<unsigned char> UncompressedData, TArray<unsigned char>* CompressedData);
	static TArray<unsigned char> LoadRawFileToString(const struct FString& FilePath);
	static struct FString LoadFileToStringByFullPath(const struct FString& FullPathName);
	static TArray<unsigned char> LoadFileToArrayByFullPath(const struct FString& FullPathName);
	static struct FString LoadAssetFileToString(const struct FString& Filename);
	static class USceneComponent* LineTraceTouchComponent(const struct FVector2D& TouchPos, class APlayerController* PlayerController, TArray<class AActor*> IgnoreActors, struct FVector* TouchHitLoc);
	static int LineTraceTouchAxis(const struct FVector2D& TouchPos, class APlayerController* PlayerController, TArray<class AActor*> IgnoreActors, struct FVector* TouchHitLoc);
	static struct FString LineTraceInstance(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TArray<class AActor*> IgnoreActors);
	static bool IsWindows();
	static bool IsPointWithinRotatedBounds(const struct FVector& BoxCenter, const struct FVector& BoxExtent, float YawDegrees, const struct FVector& Point);
	static bool IsPointInVolume(class AVolume* Volume, const struct FVector& Position);
	static bool IsPhysicsStateCreated(class UPrimitiveComponent* Component);
	static bool IsPersistentModeEnabled();
	static bool IsPerformanceSensitive();
	static bool IsOfflineBuild();
	static bool IsMCPModeEnabled();
	static bool IsLLMEnabled();
	static bool IsCreativeMode(class UWorld* World);
	static bool IsBoxOverlapWithRotatedBox(const struct FVector& StaticBoxCenter, const struct FVector& StaticBoxExtent, const struct FVector& RotatedBoxCenter, const struct FVector& RotatedBoxExtent, float RotatedBoxYaw);
	static TArray<struct FString> IsAABBVisible(TArray<struct FBox> TargetBoxs, TArray<struct FString> InstanceIDs, const struct FVector& FarPlanePoint, const struct FVector& CameraForward, TArray<float>* PlanesParams);
	static void IgnoreClientMovementErrorChecksAndCorrection(class ACharacter* Charcter, bool bIsIgnore);
	static int HideEnvironmentalActorsInSceneCapture(class USceneCaptureComponent2D* SceneCapture, class ADirectionalLight* LightToKeep, bool bHideSkyBox, bool bHideEnvironmentLights, bool bHideAtmosphere);
	void GetWidgetRect(class UWidget* Widget, int* X1, int* Y1, int* x2, int* y2);
	static struct FString GetUrlValue(class UObject* WorldContext, const struct FString& Key);
	static struct FString GetUObjAssetPath(class UObject* Level);
	static struct FString GetUClassName(class UClass* UClass);
	static class UTexture2D* GetTexture2DFromDiskFile(const struct FString& FilePath);
	static bool GetSyncDataIsEqual(struct FNetAvatarSyncData* SyncDataFirst, struct FNetAvatarSyncData* SyncDataSecond);
	static void GetStaticMeshTriangleAndDrawCallCount(class UStaticMesh* StaticMesh, int* TriangleCount, int* DrawCallCount);
	int GetRTValidMaxArea(class UTextureRenderTarget2D* TextureTarget);
	static int GetReplicateAddDataArrayVaildNum(class UObject* WorldContextObject, const struct FReplicateAddDataArray& ReplicateAddDataArray, int StartIndex);
	static struct FTransform GetRelativeTransform(const struct FTransform& Base, const struct FTransform& Other);
	static float GetPlatformSeconds();
	static bool GetObjectScreenPos(class UObject* WorldContextObject, const struct FString& InstanceID, struct FVector2D* Pos);
	static TMap<struct FString, class UObject*> GetObjectMap(class UObject* WorldContextObject);
	static TArray<class UClass*> GetObjectInheritanceChain(class UObject* Object);
	static float GetMinFovForAABB(const struct FVector& CameraLocation, const struct FRotator& CameraRotation, TArray<struct FVector> AABBVertices, float AspectRatio);
	static float GetLastInteractionElapsedTime();
	static void GetInstanceSpaceBoundingBox(const struct FString& InstanceID, float Yaw, class UCreativeAbilitySystemComponent* Component);
	static struct FVector2D GetImageSize(TArray<unsigned char> ImageBuffer, int Format);
	static uint32_t GetHashByString(const struct FString& str);
	static void GetGroupInstanceSpaceBoundingBox(const struct FString& GroupID, TArray<struct FString> ChildrenIds, TMap<struct FString, struct FTransform> ChildrenTransforms, float Yaw, class UCreativeAbilitySystemComponent* Component);
	static class UWorld* GetGameWorld(class UObject* WorldContextObject);
	static struct FString GetGameTypeAsString(ECreativeModeGameType GameType);
	static TArray<unsigned char> GetDataConttentByInstanceDataContent(struct FCreativeInstanceDataContent* InstanceDataContent);
	static struct FString GetCustomEventHashString(const struct FString& CustomEventName, bool isSampleHash);
	static uint32_t GetCurFrameNumber();
	static uint32_t GetCurFrameCounter();
	static int GetCubeTouchAxisFace(class UWidget* Widget, float Width, float Distance, struct FVector2D* ScreenPosition, struct FVector* OffsetLocation);
	static struct FNetAvatarSyncData GetCopiedAvatarSyncData(const struct FNetAvatarSyncData& SyncData);
	static bool GetContentPatchData(TArray<unsigned char> OldData, TArray<unsigned char> DiffData, TArray<unsigned char>* outNewData);
	static bool GetContentDiffData(TArray<unsigned char> OldData, TArray<unsigned char> NewData, TArray<unsigned char>* outDiffData);
	static struct FString GetCommandLineValue(const struct FString& Key);
	static TArray<class UClass*> GetClassInheritanceChain(class UClass* UClass);
	static struct FVector GetCharacterSocketPos(class ACharacter* Character, const struct FName& SocketName);
	static TArray<struct FVector4> GetCameraFrustumPlane(class UObject* WorldContext);
	static void GetBoundingBoxOfInstances(class UObject* WorldContext, TArray<struct FString> Ids, float Yaw, struct FVector* Center, struct FVector* BoxExtent);
	static void GetBoundingBoxOfActors(TArray<class AActor*> Actors, float Yaw, struct FVector* Center, struct FVector* BoxExtent);
	static struct FString GetBlockyListInDisplayName(class UBlockBase* BlockBase);
	static struct FString GetBigUObject(int MaxN);
	struct FString GetBigLuaValue(class UObject* WorldContext);
	static TArray<struct FString> GetAllInstanceInScreenBox(class UObject* WorldContext, const struct FVector2D& Start, const struct FVector2D& End, int CheckDistance, int CountLimit);
	static TArray<struct FString> GetAllInstanceInBox(class UObject* WorldContext, const struct FVector& Center, const struct FVector& Extent, const struct FRotator& Rotator);
	static TArray<struct FString> GetAllFilesInDir(const struct FString& Dir, const struct FString& Pattern, bool bRelative);
	static TArray<struct FOverlapResult> GetActorsInCameraFrustumByLayer(class UWorld* World, const struct FVector& Origin, const struct FRotator& CameraRot, float MaxDistance, float AngleWidth, float AngleHeight, int NumLayers, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bDrawDebug, const struct FColor& DebugColor, float DebugLifeTime);
	static void GetActorMeshBoundsByTag(class AActor* Actor, const struct FString& IgnoreTag, const struct FString& IncludeTag, struct FVector* Origin, struct FVector* BoxExtent);
	static uint32_t GenerateUIntGuid();
	static TArray<int> GenerateMemoryArray(int SizeInMB);
	static struct FString GenerateGuid();
	static class AActor* FindAttachedActorByName(class AActor* ParentActor, const struct FString& PartialName);
	static class AActor* FindActorByName(class UWorld* World, const struct FString& PartialName);
	struct FString EncryptToBase64(TArray<unsigned char> inArray);
	void EditorMessage(const struct FString& Message, float Time);
	static void DumpCurrentWorldObjects(class UObject* WorldContextObject, const struct FString& Suffix);
	static void DumpActorNetReplicate(class UObject* WorldContext, const struct FString& Name);
	static void DrawLine(const struct FPaintContext& InContext, const struct FVector2D& Start, const struct FVector2D& End, const struct FLinearColor& LineColor, int LayerOffset, float LineThickness, bool bAntiAlias);
	static void DrawGrids(const struct FPaintContext& InContext, float CellSize, int CellCountX, int CellCountY, float PosOffsetX, float PosOffsetY, const struct FLinearColor& LineColor, float LineThickness, bool bAntiAlias, int LayerOffset);
	static void DrawGridCell(const struct FPaintContext& InContext, float CellSize, int CellIndexX, int CellIndexY, float PosOffsetX, float PosOffsetY, const struct FLinearColor& LineColor, int LayerOffset);
	static void DestroyUObject(class UObject* Object);
	static struct FString DestroyInstance(class UObject* WorldContextObject, const struct FString& InstanceID);
	TArray<unsigned char> DecryptFromBase64(const struct FString& inString);
	static void DarwCameraFrustumDebugLine(class UObject* WorldContext, const struct FVector& FarPlanePoint, const struct FVector& CameraForward, float Duration, TArray<float>* PlanesParams);
	static struct FCreativeInstanceDataContent CreativeInstanceDataContent(TArray<unsigned char> DataContent);
	static class UTexture2D* CreateRGBATexture(int Width, int Height, bool bSRGB);
	static struct FCreativeMovingAudio CreateCreativeMovingAudio(class AActor* Actor, int Sequence, uint64_t ConfigId, bool bShowMark, int Duration, float Volume);
	static struct FRotator ConvertForwardToRotator(const struct FVector& Forward);
	static void CombineRGBATexture(class UTexture2D* DstTexture, class UTexture2D* RGSourceTexture, class UTexture2D* BSourceTexture, class UTexture2D* ASourceTexture, bool bRGSrgb, bool bBSrgb, bool bASrgb, unsigned char DefaultR, unsigned char DefaultG, unsigned char DefaultB, unsigned char DefaultA);
	static void CombineChannelsToRGBATexture(class UTexture2D* DstTexture, class UTexture2D* RGSourceTexture, class UTexture2D* BSourceTexture, class UTexture2D* ASourceTexture, bool bRGSrgb, bool bBSrgb, bool bASrgb);
	void ClearGrassByMaskTexture(class UObject* WorldContextObject, class UTexture2D* MaskTexture, const struct FVector2D& WorldStart, const struct FVector2D& WorldEnd);
	static bool CheckWidgetsOverlap(class UWidget* Widget1, class UWidget* Widget2);
	static void CharacterPlayCreativeDynamicMontage(class ACharacter* CharacterOwner, class UAnimSequenceBase* Asset, float BlendInTime, float BlendOutTime, float InPlayRate, int LoopCount, bool bIsLoop, float InTimeToStartMontageAt, const struct FName& SlotNodeName);
	static bool CaptureWidget(class UObject* WorldContext, class UClass* WidgetClass, struct FString* Path, int* X, int* Y, bool* FlipY);
	static bool BoxOverlapComponentsByChannel(class UObject* WorldContextObject, const struct FVector& BoxPos, const struct FVector& BoxExtent, TArray<TEnumAsByte<ECollisionChannel>> Channels, class UClass* ComponentClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents);
	static bool BoxOverlapComponents(class UObject* WorldContextObject, const struct FVector& BoxPos, const struct FVector& BoxExtent, TArray<int> ObjectTypes, class UClass* CompClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComps);
	static bool BoxOverlapActorsByChannel(class UObject* WorldContextObject, const struct FVector& BoxPos, const struct FVector& BoxExtent, TArray<TEnumAsByte<ECollisionChannel>> Channels, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors);
	static bool BoxOverlapActors(class UObject* WorldContextObject, const struct FVector& BoxPos, const struct FVector& BoxExtent, TArray<int> ObjectTypes, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors);
	static bool BlueprintSuggestProjectileVelocity(class UObject* WorldContextObject, TArray<class AActor*> ActorsToIgnore, const struct FVector& StartLocation, const struct FVector& EndLocation, float LaunchSpeed, float OverrideGravityZ, TEnumAsByte<ESuggestProjVelocityTraceOption> TraceOption, float CollisionRadius, bool bFavorHighArc, bool bDrawDebug, float Tolerance, struct FVector* TossVelocity);
	static class AActor* BeginDeferredActorSpawnWithName(class UObject* WorldContextObject, class UClass* ActorClass, const struct FTransform& SpawnTransform, const struct FName& Name, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner);
	static void AttachOutlineBox(class AActor* AttachedActor, float Yaw, class AActor* OutlineBox);
	static void AttachInstanceOutlineBox(const struct FString& AttachedId, bool bGridEnable, float Yaw, class AActor* OutlineBox);
	static void AttachGroupOutlineBox(class AActor* GroupObject, TArray<class AActor*> AttachedActors, float Yaw, class AActor* OutlineBox);
	static void AttachGroupInstanceOutlineBox(const struct FString& GroupID, TArray<struct FString> ChildrenIds, TMap<struct FString, struct FTransform> ChildrenTransforms, bool bGridEnable, float Yaw, class AActor* OutlineBox);
	static bool AimSceneCaptureAtPawnSocket(class USceneComponent* SceneCapture, class APawn* TargetPawn, const struct FName& SocketName, float Distance, float FOV, const struct FVector& Offset, float PawnHeight);
	static void AddVectorCurvePoint(float InVal, const struct FVector& OutVal, const struct FVector& ArriveTangent, const struct FVector& LeaveTangent, int InterpCurveMode, struct FInterpCurveVector* Curve);
	static void AddOnScreenDebugMessage(const struct FString& Msg);
	static void AddLinearColorCurvePoint(float InVal, const struct FLinearColor& OutVal, const struct FLinearColor& ArriveTangent, const struct FLinearColor& LeaveTangent, int InterpCurveMode, struct FInterpCurveLinearColor* Curve);
	static void AddFloatCurvePoint(float InVal, float OutVal, float ArriveTangent, float LeaveTangent, int InterpCurveMode, struct FInterpCurveFloat* Curve);
};


// Class Creative.CreativeBounceMovementComponent
// 0x0198 (0x03B8 - 0x0220)
class UCreativeBounceMovementComponent : public UProjectileMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0220(0x0058) MISSED OFFSET
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x0278(0x0050) (Net)
	struct FString                                     LuaFilePath;                                              // 0x02C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              Mass;                                                     // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinSpeedThreshold;                                        // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SlideableFloorAngle;                                      // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02E4(0x0004) MISSED OFFSET
	class UPrimitiveComponent*                         BaseFloor;                                                // 0x02E8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x02F0(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBaseFloorChanged;                                       // 0x02F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              NetSyncInterval;                                          // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HardSnapThreshold;                                        // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HardSnapVelocityThreshold;                                // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SmoothCorrectionHalfLife;                                 // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableLatencyExtrapolation;                              // 0x0318(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0319(0x0003) MISSED OFFSET
	float                                              MaxExtrapolationTime;                                     // 0x031C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxPacketAge;                                             // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseHardCorrectionOnStop;                                 // 0x0324(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0325(0x0003) MISSED OFFSET
	class USceneComponent*                             UpdatedComponentDS;                                       // 0x0328(0x0008) (Edit, ExportObject, Net, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              SlideableFloorAngleDS;                                    // 0x0330(0x0004) (Edit, Net, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              MassDS;                                                   // 0x0334(0x0004) (Edit, Net, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              ProjectileGravityScaleDS;                                 // 0x0338(0x0004) (Edit, Net, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              FrictionDS;                                               // 0x033C(0x0004) (Edit, Net, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              BouncinessDS;                                             // 0x0340(0x0004) (Edit, Net, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData05[0x74];                                      // 0x0344(0x0074) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeBounceMovementComponent");
		return pStaticClass;
	}


	void SyncUpdatedComponentDS();
	void SetVelocityInLocalSpaceDS(const struct FVector& InVelocity);
	void SetUpdatedComponentDSCPP(class USceneComponent* NewUpdatedComponent);
	void SetSlideableFloorAngleDS(float InSlideableFloorAngle);
	void SetSlideableFloorAngle(float InSlideableFloorAngle);
	void SetProjectileGravityScaleDS(float InGravityScale);
	void SetMassDS(float InMass);
	void SetFrictionDS(float InFriction);
	void SetBouncinessDS(float InBounciness);
	void OnRep_UpdatedComponentDS(class USceneComponent* OldUpdatedComponent);
	void OnRep_SlideableFloorAngleDS(float OldValue);
	void OnRep_ProjectileGravityScaleDS(float OldValue);
	void OnRep_MassDS(float OldValue);
	void OnRep_FrictionDS(float OldValue);
	void OnRep_BouncinessDS(float OldValue);
	void MulticastSyncVelocity(const struct FBounceMovementSnapshot& Snapshot);
	void MulticastSyncStop(const struct FBounceMovementSnapshot& Snapshot);
	void MulticastSyncMove(const struct FBounceMovementSnapshot& Snapshot);
	void MulticastSyncLocation(const struct FBounceMovementSnapshot& Snapshot);
	void MulticastSyncBounce(const struct FBounceMovementSnapshot& Snapshot);
	bool IsInAir();
	class AActor* GetBaseFloorActor();
	class UPrimitiveComponent* GetBaseFloor();
};


// Class Creative.CreativeModeLuaSpectatorPawn
// 0x00C8 (0x0600 - 0x0538)
class ACreativeModeLuaSpectatorPawn : public ASpectatorPawn
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0538(0x0058) MISSED OFFSET
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x0590(0x0050) (Net)
	bool                                               IsTopView;                                                // 0x05E0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x05E1(0x0003) MISSED OFFSET
	int                                                TopViewRotateAngle;                                       // 0x05E4(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	struct FString                                     LuaFilePath;                                              // 0x05E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x05F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeLuaSpectatorPawn");
		return pStaticClass;
	}


	void UnRegistLuaTick();
	void SetController(class APlayerController* InController);
	void SetAbilitySystemComponentAvatar();
	void RegistLuaTick(float TickInterval);
	void MoveRight(float Val);
	void MoveForward(float Val);
	class USpringArmComponent* GetActiveSpringArm();
};


// Class Creative.CreativeCameraDeviceActor
// 0x00C0 (0x06C0 - 0x0600)
class ACreativeCameraDeviceActor : public ACreativeModeLuaSpectatorPawn
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0600(0x0008) MISSED OFFSET
	bool                                               bIsFollowing;                                             // 0x0608(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0609(0x0003) MISSED OFFSET
	int                                                FollowType;                                               // 0x060C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLerping;                                               // 0x0610(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0611(0x0003) MISSED OFFSET
	float                                              LerpTime;                                                 // 0x0614(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendExp;                                                 // 0x0618(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendTimeToGo;                                            // 0x061C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // 0x0620(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SocketOffset;                                             // 0x0624(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    RotatorOffset;                                            // 0x0630(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       FollowTarget;                                             // 0x063C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EViewTargetBlendFunction>              BlendFunction;                                            // 0x0644(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0645(0x0003) MISSED OFFSET
	struct FRotator                                    ActorStartRot;                                            // 0x0648(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    ActorTargetRot;                                           // 0x0654(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     targetPos;                                                // 0x0660(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    TargetRot;                                                // 0x066C(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     StartPos;                                                 // 0x0678(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    StartRot;                                                 // 0x0684(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              StartFOV;                                                 // 0x0690(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartArmLength;                                           // 0x0694(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    EndRot;                                                   // 0x0698(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              EndFOV;                                                   // 0x06A4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EndArmLength;                                             // 0x06A8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x06AC(0x0004) MISSED OFFSET
	struct FName                                       SocketName;                                               // 0x06B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxPilotDist;                                             // 0x06B8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPilotPosition;                                           // 0x06BC(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x06BD(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeCameraDeviceActor");
		return pStaticClass;
	}


	void UpdateFollowStatus();
	void UpdateFollowPos();
	void RotCamera(float Yaw, float Pitch);
	void OnEndViewTarget(class APlayerController* PC);
	void OnBecomeViewTarget(class APlayerController* PC);
	void MoveUp(float Val);
	void MoveRight(float Val);
	void MoveForward(float Val);
	void LerpToTarget(float DeltaSeconds);
	void LerpActor(float BlendPct);
	bool IsVecInvalid(const struct FVector& Vect);
	bool IsRotInvalid(const struct FRotator& Rot);
	void InterpolateToSpringRotation(float LerpValue);
	bool InitStartPoint();
	class USpringArmComponent* GetSpringArmForCamera(class UCameraComponent* Camera);
	float GetLerpTime(float BlendTimeToGo);
	struct FVector GetCameraPointPosition();
	class UCameraComponent* GetActiveCamera();
};


// Class Creative.CreativeCameraGetter
// 0x0000 (0x0028 - 0x0028)
class UCreativeCameraGetter : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeCameraGetter");
		return pStaticClass;
	}


	struct FVector GetCameraLocation();
};


// Class Creative.CreativeCustomActorManager
// 0x00A8 (0x0210 - 0x0168)
class UCreativeCustomActorManager : public UCreativeModeManagerBase
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0168(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeCustomActorManager");
		return pStaticClass;
	}


	bool UnhookUserConstructionScript(class AActor* Actor);
	class AActor* SpawnCustomActor(class UClass* ActorClass, const struct FTransform& Transform);
	void ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState);
	void ReceiveClearAllCustomActor();
	void OnGameStateBeginPlay(class AGameStateBase* GameState);
	bool IsUserConstructionScriptHooked(class AActor* Actor);
	bool HookUserConstructionScript(class AActor* Actor);
	static class UCreativeCustomActorManager* Get(class UObject* WorldContext);
	void ClearAllCustomActor();
};


// Class Creative.CreativeCustomCameraComponent
// 0x0020 (0x09C0 - 0x09A0)
class UCreativeCustomCameraComponent : public UCameraComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x09A0(0x0004) MISSED OFFSET
	float                                              ConfigFOV;                                                // 0x09A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ConfigRotation;                                           // 0x09A8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x09B4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeCustomCameraComponent");
		return pStaticClass;
	}


	void InterpolateToTargetRotation(float LerpValue);
	void InterpolateToTargetFOV(float LerpValue);
};


// Class Creative.CreativeCustomParameterManager
// 0x00E0 (0x0248 - 0x0168)
class UCreativeCustomParameterManager : public UCreativeModeManagerBase
{
public:
	struct FCreativeCustomParameterDataContainer       ReplicatedCustomParameterDataContainer;                   // 0x0168(0x00C8) (Net, Transient)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0230(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeCustomParameterManager");
		return pStaticClass;
	}


	void RemoveCustomParameter(uint32_t ParameterID, uint32_t PlayerKey);
	void ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState);
	void OnGameStateBeginPlay(class AGameStateBase* GameState);
	void GetCustomParameterDataNodes(uint32_t ParameterID, TArray<struct FCreativeCustomParameterDataNode>* OutCustomParameterDataNodes);
	static class UCreativeCustomParameterManager* Get(class UObject* WorldContext);
	void ChangeCustomParameter(uint32_t ParameterID, uint32_t PlayerKey, int8_t TeamID, TArray<unsigned char> DataContent);
	void AddCustomParameter(uint32_t ParameterID, uint32_t PlayerKey, int8_t TeamID, TArray<unsigned char> DataContent, bool bPropagateToChildren);
};


// Class Creative.CreativeCustomPrefabComponent
// 0x0000 (0x0238 - 0x0238)
class UCreativeCustomPrefabComponent : public ULuaActorComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeCustomPrefabComponent");
		return pStaticClass;
	}


	TArray<unsigned char> GetNodeSegmentContent(struct FCreativePrefabDataSegment* Segment);
	bool AddInstanceDataContent(TArray<unsigned char> Content, struct FCreativeCustomPrefabDataSegment* Segment);
};


// Class Creative.CreativeCustomUIDataComponent
// 0x0198 (0x03D0 - 0x0238)
class UCreativeCustomUIDataComponent : public ULuaActorComponent
{
public:
	struct FCreativeCustomUIContainer                  CustomUIContainer;                                        // 0x0238(0x00C8) (Net, Transient)
	int                                                SingleSerializeNum;                                       // 0x0300(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0304(0x00B8) MISSED OFFSET
	float                                              DataNodePullInterval;                                     // 0x03BC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SinglePullDataNodeNum;                                    // 0x03C0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalPullDataNodeNum;                                     // 0x03C4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DataNodePullTimeroutInterval;                             // 0x03C8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeCustomUIDataComponent");
		return pStaticClass;
	}


	void SetCustomUIDataFromTransferNodes(TArray<struct FCreativeCustomUIDataTransferNode>* TransferNodes);
	void SetCustomUIDataById(uint32_t ID, TArray<unsigned char> Content);
	void RemoveCustomUI(const struct FString& ID);
	TArray<struct FCreativeCustomUIDataTransferNode> GetCustomUIDataTransferNodes(TArray<uint32_t>* IDList);
	bool GetCustomUIContent(const struct FString& ID, TArray<unsigned char>* OutContent);
	void ChangeCustomUI(const struct FString& ID, TArray<unsigned char> Content);
	void CallOnReceivePreCustomUIDataRemove(uint32_t ID);
	void CallOnReceivePostCustomUIDataChange(uint32_t ID, TArray<unsigned char> Content);
	void CallOnReceivePostCustomUIDataAdd(uint32_t ID, TArray<unsigned char> Content);
	void AddCustomUI(const struct FString& ID, TArray<unsigned char> Content);
};


// Class Creative.CreativeCustomUIVFXWidget
// 0x0030 (0x03F0 - 0x03C0)
class UCreativeCustomUIVFXWidget : public UCreativeBaseWidget
{
public:
	TArray<struct FCreativeVFXImageBlendConfig>        BlendConfigs;                                             // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x03D0(0x0010) MISSED OFFSET
	struct FLinearColor                                PreviewColor;                                             // 0x03E0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeCustomUIVFXWidget");
		return pStaticClass;
	}


	void SetImageBrushMaterialBlend(float V);
};


// Class Creative.CreativeDestructibleMeshActor
// 0x0010 (0x04D0 - 0x04C0)
class ACreativeDestructibleMeshActor : public APhotonDestructibleMeshActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeDestructibleMeshActor");
		return pStaticClass;
	}


	void SetDamageEnable(bool bEnable);
	void OnHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void InitHP(float fHP);
	class UPhotonDestructibleMeshComponent* GetFracturedComponent();
	void AddCanDamageWeapon(const struct FString& Weapon);
};


// Class Creative.CreativeDestructibleMeshBatchActor
// 0x00F0 (0x0660 - 0x0570)
class ACreativeDestructibleMeshBatchActor : public ALuaActor
{
public:
	int                                                AtLeastLengthHISMRequired;                                // 0x0570(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TickUpdateBatchInterval;                                  // 0x0574(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CellWidth;                                                // 0x0578(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE4];                                      // 0x057C(0x00E4) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeDestructibleMeshBatchActor");
		return pStaticClass;
	}


	void RemoveAllCacheReplicationData();
};


// Class Creative.CreativeDropItemCurveAnimComponent
// 0x0170 (0x0420 - 0x02B0)
class UCreativeDropItemCurveAnimComponent : public UDropItemCurveAnimComponent
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x02B0(0x0058) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0308(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<int, struct FCreativeDropAnimConfig>          DropAnimConfigs;                                          // 0x0318(0x0050) (ZeroConstructor)
	TMap<int, struct FCreativeDropAnimConfig>          OverrideConfigs;                                          // 0x0368(0x0050) (ZeroConstructor)
	TMap<int, struct FCreativeDropGroupContainer>      CreativeItemGroupList;                                    // 0x03B8(0x0050) (ZeroConstructor)
	int                                                MaxCurveAnimItemNum;                                      // 0x0408(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ContainerRemoveTime;                                      // 0x040C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PSCPoolLimit;                                             // 0x0410(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxDropAnimConfigCount;                                   // 0x0414(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0418(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeDropItemCurveAnimComponent");
		return pStaticClass;
	}


	void StopItemClient(int Group, class AActor* Target);
	void OnParticleSystemComponentFinished(class UParticleSystemComponent* PSC);
	bool IsInViewport(class APlayerController* PC, int ViewportX, int ViewportY, const struct FVector& CenterPos);
	void InitConfig(int BaseConfigID, struct FCreativeDropAnimConfig* Config);
	void DynamicReduceItemGroup(int CurrentGroup, int Num);
	void DecodeDropItemGroupID(int GroupID, int* ConfigId, int* Num);
	void AddItemClient(int Group, const struct FVector& InStartPos, const struct FVector& InEndPos, class AActor* Target);
};


// Class Creative.CreativeDSLParserLibrary
// 0x0000 (0x0028 - 0x0028)
class UCreativeDSLParserLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeDSLParserLibrary");
		return pStaticClass;
	}


	static class UDSLParserASTTree* ParseDSLText(class UDSLParser* Parser, const struct FString& Source);
	static class UDSLParserASTTree* ParseDSLFile(class UDSLParser* Parser, const struct FString& FilePath);
	static bool LoadDSLGrammarFromString(class UDSLParser* Parser, const struct FString& GrammarText);
	static bool LoadDSLGrammarFromFile(class UDSLParser* Parser, const struct FString& FilePath);
	static class UDSLParser* CreateDSLParser(class UObject* WorldContextObject);
	static void AddDSLGrammarRule(class UDSLParser* Parser, const struct FString& RuleName, const struct FString& RuleBody);
};


// Class Creative.CreativeModeLiteComponent
// 0x0118 (0x0158 - 0x0040)
class UCreativeModeLiteComponent : public ULiteComponent
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0040(0x0068) MISSED OFFSET
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x00A8(0x0050) (Net)
	struct FString                                     LuaFilePath;                                              // 0x00F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<class UObject*, struct FCreativePoolObjectRecordInfo> PoolObjectRecordMap;                                      // 0x0108(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeLiteComponent");
		return pStaticClass;
	}


	bool OnReturnToPool(class UObject* NewOuter, uint32_t RecycledSeq);
	class UObject* GetObjectFromPool(int PoolId, class UObject* NewOuter, struct FString* InName);
};


// Class Creative.CreativeModeGameModeBaseComponent
// 0x0010 (0x0168 - 0x0158)
class UCreativeModeGameModeBaseComponent : public UCreativeModeLiteComponent
{
public:
	ECreativeModeGameType                              GameType;                                                 // 0x0158(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0159(0x0007) MISSED OFFSET
	class UCreativeModeGameStateBaseComponent*         GameStateComponent;                                       // 0x0160(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeGameModeBaseComponent");
		return pStaticClass;
	}


	void SetGameStateComponent(class UCreativeModeGameStateBaseComponent* NewGameStateComponent);
	void ReceivePostInitializeComponents();
	ECreativeModeGameType GetGameType();
	class ACreativeModeGameMode* GetGameMode();
	class AActor* FindPlayerStartOverride(class AController* Player, const struct FString& IncomingName, bool bIsRevive);
};


// Class Creative.CreativeModeEditorModeComponent
// 0x0000 (0x0168 - 0x0168)
class UCreativeModeEditorModeComponent : public UCreativeModeGameModeBaseComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeEditorModeComponent");
		return pStaticClass;
	}

};


// Class Creative.CreativeModeEditorObject
// 0x01F0 (0x0760 - 0x0570)
class ACreativeModeEditorObject : public ALuaActor
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0570(0x00A0) MISSED OFFSET
	TArray<class AActor*>                              ToIgnoreActors;                                           // 0x0610(0x0010) (ZeroConstructor)
	ECreativeModeActorState                            ActorState;                                               // 0x0620(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0621(0x0007) MISSED OFFSET
	TMap<class UObject*, struct FCreativePoolObjectRecordInfo> PoolObjectRecordMap;                                      // 0x0628(0x0050) (ZeroConstructor)
	int8_t                                             CanEditFlag;                                              // 0x0678(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreCollisionCheck;                                    // 0x0679(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x067A(0x0006) MISSED OFFSET
	TArray<class AActor*>                              IgnoreActors;                                             // 0x0680(0x0010) (ZeroConstructor)
	struct FEditorObjectLiteComponentTickFunction      LiteComponentActorTick;                                   // 0x0690(0x00B8) (Edit, DisableEditOnInstance)
	TArray<class ULiteComponent*>                      LiteComponents;                                           // 0x0748(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0758(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeEditorObject");
		return pStaticClass;
	}


	void UnregisterLiteComponent(class ULiteComponent* Component, bool Destroy);
	void ShowSelectedEffect(bool ShowEff, const struct FLinearColor& OutlineColor, float OutlineThickness);
	void ShowOutlineEffect(bool ShowEff, class UMaterialInstance* Material, const struct FString& IgnoreTag);
	void SetPhotographyMode(bool bIsCapturing);
	void SetLiteComponentTickEnable(bool bEnabled);
	void SetActorState(ECreativeModeActorState NewState);
	void ReturnObjectToPool(class UObject* Obj);
	void ReturnObjectsToPool(TArray<class UObject*> Objs);
	void RegisterLiteComponent(class ULiteComponent* Component);
	void ReceivePostBeginPlay();
	bool ReceiveIsDedicatedServer();
	void ReceiveInitializeLiteComponent();
	void ReceiveInitCanEditFlag();
	bool ReceiveHasAuthority();
	void OnRepActorStateOverride(ECreativeModeActorState NewState);
	void OnRep_ActorState(ECreativeModeActorState LastState);
	bool InCollisionState();
	TArray<class UObject*> GetObjectsFromPool(TArray<struct FCreativePoolGetObjectParamInfo>* ObjectParams);
	class UObject* GetObjectFromPool(int PoolId, class UObject* NewOuter, struct FString* InName);
	TArray<class AActor*> GetLocationToIgnoreActors();
	ECreativeModeActorState GetActorState();
	class ULiteComponent* FindLiteComponentByClass(class UClass* ComponentClass);
};


// Class Creative.CreativeModeGameStateBaseComponent
// 0x0008 (0x0160 - 0x0158)
class UCreativeModeGameStateBaseComponent : public UCreativeModeLiteComponent
{
public:
	ECreativeModeGameType                              GameType;                                                 // 0x0158(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0159(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeGameStateBaseComponent");
		return pStaticClass;
	}


	void ReceivePostInitializeComponents();
	ECreativeModePlayState GetPlayState();
	ECreativeModeGameType GetGameType();
	class ACreativeModeGameState* GetGameState();
};


// Class Creative.CreativeModeEditorStateComponent
// 0x0000 (0x0160 - 0x0160)
class UCreativeModeEditorStateComponent : public UCreativeModeGameStateBaseComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeEditorStateComponent");
		return pStaticClass;
	}

};


// Class Creative.CreativeEventObject
// 0x0000 (0x00F0 - 0x00F0)
class UCreativeEventObject : public UCreativeLuaSignalObjectBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeEventObject");
		return pStaticClass;
	}


	void ReHookObject();
	void EventObjectConditionalBeginDestroy();
};


// Class Creative.CreativeExportSandboxApiLibrary
// 0x0000 (0x0028 - 0x0028)
class UCreativeExportSandboxApiLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeExportSandboxApiLibrary");
		return pStaticClass;
	}


	static bool IsObjectValid(class UObject* Object);
	static bool IsObjectA(class UObject* Object, const struct FString& ClassName);
	static class UWorld* GetObjectWorld(class UObject* Object);
	static struct FString GetObjectPathName(class UObject* Object);
	static class UObject* GetObjectOuter(class UObject* Object);
	static struct FString GetObjectName(class UObject* Object);
	static struct FString GetObjectFullName(class UObject* Object);
	static class UClass* GetObjectClass(class UObject* Object);
	static class UFunction* FindObjectFunction(class UObject* Object, const struct FString& FunctionName);
};


// Class Creative.CreativeGameAPIObject
// 0x0000 (0x0188 - 0x0188)
class UCreativeGameAPIObject : public UCreativeApiObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeGameAPIObject");
		return pStaticClass;
	}


	TArray<int64_t> GetPlayersInSphere(const struct FVector& SphereCenter, float SphereRadius, int TeamID, bool FilterNonPlayable);
	TArray<int64_t> GetPlayersInRectangle(const struct FVector& RectangleCenter, float RectangleX, float RectangleY, float RectangleZ, int TeamID, bool FilterNonPlayable);
};


// Class Creative.CreativeModeGameMode
// 0x0190 (0x2578 - 0x23E8)
class ACreativeModeGameMode : public ABattleRoyaleGameModeTeam
{
public:
	class UCreativeModeGameModeBaseComponent*          CurrentModeComponent;                                     // 0x23E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UClass*>                              GameModeComponentClassArray;                              // 0x23F0(0x0010) (ZeroConstructor, Transient)
	class UClass*                                      GameModeComponentClass;                                   // 0x2400(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FString, struct FGameModeParam>        MapPlaneRouteConfigs;                                     // 0x2408(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, struct FString>               MapVehicleClassPathConfigs;                               // 0x2458(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	ECreativeModeGameType                              EditorStartupGameType;                                    // 0x24A8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x24A9(0x0001) MISSED OFFSET
	bool                                               bIsCreativeWoW;                                           // 0x24AA(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int8_t                                             FindPlayerStartOverrideFlag;                              // 0x24AB(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x24AC(0x0004) MISSED OFFSET
	struct FGameModeLiteComponentTickFunction          LiteComponentActorTick;                                   // 0x24B0(0x00B8) (Edit, DisableEditOnInstance)
	TArray<class ULiteComponent*>                      LiteComponents;                                           // 0x2568(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeGameMode");
		return pStaticClass;
	}


	void UnregisterLiteComponent(class ULiteComponent* Component);
	void SetShowDropEffectEnable(bool Enable);
	void SetLiteComponentTickEnable(bool bEnabled);
	void SetItemGenerate(bool bIsOpen);
	void SetCurrentGameType(ECreativeModeGameType NewGameType);
	void ReInitItemGenerate(struct FString* NewItemClassPath);
	void RegisterLiteComponent(class ULiteComponent* Component);
	void ReceiveInitializeLiteComponent();
	bool IsStandAloneGameMode();
	bool IsRestartPlayerUsePawnRotation();
	class UCreativeModeGameModeBaseComponent* GetCurrentModeComponent();
	int GetCreativeModeRealTeamNum();
	TArray<int> GetCreativeModeRealTeamIDs();
	class ULiteComponent* FindLiteComponentByClass(class UClass* ComponentClass);
	void DSPlayerKickOut(uint64_t UID, const struct FName& PlayerType, const struct FString& ExitReason);
	class AActor* CreativeModeFindPlayerStart(class AController* Player, const struct FString& IncomingName, bool bIsRevive);
};


// Class Creative.CreativeModeGameModeComponent
// 0x0030 (0x0198 - 0x0168)
class UCreativeModeGameModeComponent : public UCreativeModeGameModeBaseComponent
{
public:
	class UClass*                                      RaceCheckPointComponentClass;                             // 0x0168(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCreativeModeRaceCheckPointLiteComponent*    RaceCheckPointComponent;                                  // 0x0170(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      OccupationAreaComponentClass;                             // 0x0178(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCreativeOccupationAreaLiteComponent*        OccupationAreaComponent;                                  // 0x0180(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      TeleporterComponentClass;                                 // 0x0188(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCreativeModeLiteComponent*                  TeleporterComponent;                                      // 0x0190(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeGameModeComponent");
		return pStaticClass;
	}


	void ReceiveCallPlayStateFunction();
};


// Class Creative.CreativeModeGameObject
// 0x0178 (0x01A0 - 0x0028)
class UCreativeModeGameObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x0028(0x0100) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0128(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0138(0x0008) MISSED OFFSET
	TMap<class UObject*, struct FCreativePoolObjectRecordInfo> PoolObjectRecordMap;                                      // 0x0140(0x0050) (ZeroConstructor)
	TArray<class ULiteComponent*>                      LiteComponents;                                           // 0x0190(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeGameObject");
		return pStaticClass;
	}


	void UnregisterLiteComponent(class ULiteComponent* Component, bool Destroy);
	void ReturnObjectToPool(class UObject* Obj);
	void ReturnObjectsToPool(TArray<class UObject*> Objs);
	void RegisterLiteComponent(class ULiteComponent* Component);
	void ReceivePostBeginPlay();
	bool ReceiveIsDedicatedServer();
	bool ReceiveHasAuthority();
	void ReceiveEndPlay();
	void ReceiveBeginPlay();
	TArray<class UObject*> GetObjectsFromPool(TArray<struct FCreativePoolGetObjectParamInfo>* ObjectParams);
	class UObject* GetObjectFromPool(int PoolId, class UObject* NewOuter, struct FString* InName);
	TArray<struct FString> GetDynamicSpawnObjUUIDs();
};


// Class Creative.CreativeGameParameterManager
// 0x02B8 (0x0420 - 0x0168)
class UCreativeGameParameterManager : public UCreativeModeManagerBase
{
public:
	struct FCreativeGameParameterContainer             GameParameterContainer;                                   // 0x0168(0x00C8) (Net, Transient)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0230(0x0004) MISSED OFFSET
	int                                                SingleSerializeNum;                                       // 0x0234(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SingleSerializeBytes;                                     // 0x0238(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bGameParameterResumeEnable;                               // 0x023C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x023D(0x0003) MISSED OFFSET
	struct FCreativeGameParameterResumeContainer       GameParameterResumeContainer;                             // 0x0240(0x0118) (Net, Transient)
	unsigned char                                      UnknownData02[0xB4];                                      // 0x0358(0x00B4) MISSED OFFSET
	float                                              ResumeNodePullInterval;                                   // 0x040C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SinglePullResumeNodeNum;                                  // 0x0410(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalPullResumeNodeNum;                                   // 0x0414(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ResumeNodePullTimeroutInterval;                           // 0x0418(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HistoryDataMaxCount;                                      // 0x041C(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeGameParameterManager");
		return pStaticClass;
	}


	void SetGameParameterResumeNodes(TArray<struct FCreativeGameParameter> GameParameterNodes);
	void RemoveGameParameter(const struct FString& ParameterKey, const struct FString& TemplateID);
	void ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState);
	void OnReceivePreGameParameterRemove(const struct FString& ParameterKey, const struct FString& TemplateID);
	void OnReceivePostGameParameterChange(const struct FString& ParameterKey, const struct FString& TemplateID, TArray<unsigned char> Content);
	void OnReceivePostGameParameterAdd(const struct FString& ParameterKey, const struct FString& TemplateID, TArray<unsigned char> Content);
	void OnGameStateBeginPlay(class AGameStateBase* GameState);
	bool GetHistoryData(uint32_t HeadHash, unsigned char Seq, TArray<unsigned char>* OutContent);
	TArray<struct FCreativeGameParameter> GetGameParameterResumeNodes(TArray<uint32_t> ParameterHeadHashs);
	bool GetGameParameterContent(const struct FString& ParameterKey, const struct FString& TemplateID, TArray<unsigned char>* OutContent);
	static class UCreativeGameParameterManager* Get(class UObject* WorldContext);
	void ChangeGameParameter(const struct FString& ParameterKey, const struct FString& TemplateID, TArray<unsigned char> Content);
	void AddGameParameter(const struct FString& ParameterKey, const struct FString& TemplateID, TArray<unsigned char> Content);
};


// Class Creative.CreativeModeGameState
// 0x0140 (0x1760 - 0x1620)
class ACreativeModeGameState : public ASTExtraGameStateBase
{
public:
	int                                                EditorBindTemplateID;                                     // 0x1620(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x1624(0x0002) MISSED OFFSET
	unsigned char                                      bIsCreativeMode : 1;                                      // 0x1626(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	ECreativeModeGameType                              CurrentGameType;                                          // 0x1627(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ECreativeModeGameType                              CurrentGameTypeReplicated;                                // 0x1628(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	ECreativeModeGameType                              InitializeGameType;                                       // 0x1629(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x162A(0x0002) MISSED OFFSET
	int                                                CreativeModID;                                            // 0x162C(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	int                                                CreativeModTemplateId;                                    // 0x1630(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bEnvLuaRunning;                                           // 0x1634(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x1635(0x0003) MISSED OFFSET
	class UCreativeModeGameStateBaseComponent*         CurrentStateComponent;                                    // 0x1638(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	class UCreativeModeGameStateBaseComponent*         WaitCurrentStateComponent;                                // 0x1640(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               CurrentStateComponentTest;                                // 0x1648(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x1649(0x0007) MISSED OFFSET
	class UCreativeModeGameStateBaseComponent*         LastStateComponent;                                       // 0x1650(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UClass*>                              GameStateComponentClassArray;                             // 0x1658(0x0010) (ZeroConstructor, Transient)
	class UClass*                                      GameStateComponentClass;                                  // 0x1668(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsCreativeWoW;                                           // 0x1670(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsAIUseDynamicBehaviorTaskNode;                          // 0x1671(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x16];                                      // 0x1672(0x0016) MISSED OFFSET
	TArray<struct FExtendedBlockySlotString>           BlockySlotStrings;                                        // 0x1688(0x0010) (Net, ZeroConstructor, Transient)
	struct FGameStateLiteComponentTickFunction         LiteComponentActorTick;                                   // 0x1698(0x00B8) (Edit, DisableEditOnInstance)
	TArray<class ULiteComponent*>                      LiteComponents;                                           // 0x1750(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeGameState");
		return pStaticClass;
	}


	void UnregisterLiteComponent(class ULiteComponent* Component);
	void SetLiteComponentTickEnable(bool bEnabled);
	void SetEnvLuaRunning(bool bRunning);
	void SetCurrentGameType(ECreativeModeGameType NewGameType);
	void RPC_Replay_SetInstanceDataContent(uint32_t InstanceID, const struct FCreativeInstanceDataContent& InstanceDataContent);
	void RPC_Replay_GeneraicUGC_LuaImpl(TArray<unsigned char> Content);
	void RPC_Replay_GeneraicUGC(TArray<unsigned char> Content);
	void RegisterLiteComponent(class ULiteComponent* Component);
	void ReceiveInitializeLiteComponent();
	void ReceiveCreativeCollectGarbage();
	void ReceiveAddEnvLuaRunningToCrashKit();
	void ReceiveAddContextDataToCrashKit();
	void OnViewportSizeChanged(const struct FVector2D& OldViewportSize, const struct FVector2D& NewViewportSize);
	void OnRep_InitializeGameType(ECreativeModeGameType LastInitializeGameType);
	void OnRep_EnvLuaRunning(bool OldLuaRunning);
	void OnRep_CurrentStateComponent(class UCreativeModeGameStateBaseComponent* LastComponent);
	void OnRep_CurrentGameTypeReplicated(ECreativeModeGameType LastCurrentGameTypeReplicated);
	void OnRep_CreativeModTemplateId(int LastCreativeModTemplateId);
	void OnRep_CreativeModID(int LastCreativeModID);
	void OnRep_BlockySlotStrings(TArray<struct FExtendedBlockySlotString>* BlockySlotStrings);
	void OnCurrentStateComponentChanged(class UCreativeModeGameStateBaseComponent* LastComponent);
	void OnClientRecordingStateChange(EClientRecordingType Type);
	bool IsOfficialGame();
	bool IsEditorMode();
	bool IsDemoGame();
	bool IsCreativeMode();
	bool IsCreativeEditor();
	bool IsAIUseDynamicBehaviorTaskNode();
	void InitCreativeModID(int ModID, int TemplateID);
	ECreativeModePlayState GetPlayState();
	ECreativeModeGameType GetInitializeGameType();
	bool GetEnvLuaRunning();
	TArray<struct FString> GetDisableDistanceLevelsOutsideBox(float X, float Y, int W, int L, float RotationAngle, bool bUseFilter);
	class UCreativeModeGameStateBaseComponent* GetCurrentStateComponent();
	ECreativeModeGameType GetCurrentGameTypeReplicated();
	ECreativeModeGameType GetCurrentGameType();
	int GetCurCreativeType();
	struct FString GetCurCreativeModResList();
	struct FString GetCurCreativeModMapID();
	int GetCurCreativeModID();
	int GetCreativeModTemplateId();
	int GetCreativeModID();
	class ULiteComponent* FindLiteComponentByClass(class UClass* ComponentClass);
	bool FilterLevelByName(const struct FName& LevelName);
	void ClientSetCurrentStateComponent(class UCreativeModeGameStateBaseComponent* CurStateComponent);
	void ClearInstance();
	void ClearAndReImportInstance();
	bool CanShowDropEffectByItemID(int ItemId);
};


// Class Creative.CreativeModeGameStateComponent
// 0x0028 (0x0188 - 0x0160)
class UCreativeModeGameStateComponent : public UCreativeModeGameStateBaseComponent
{
public:
	class UClass*                                      IntegralMechanismComponentClass;                          // 0x0160(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCreativeModeIntegralMechanismLiteComponent* IntegralMechanismComponent;                               // 0x0168(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class UClass*                                      RuntimePlayerBattleDataObjectClass;                       // 0x0170(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ACreativeRuntimePlayerBattleDataObject*      RuntimePlayerBattleDataObject;                            // 0x0178(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	ECreativeModePlayState                             CurPlayState;                                             // 0x0180(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0181(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeGameStateComponent");
		return pStaticClass;
	}


	void SetPlayState(ECreativeModePlayState newPlayState);
	void OnRep_RuntimePlayerBattleDataObject();
	void OnRep_IntegralMechanismComponent();
	void OnRep_CurPlayState();
	ECreativeModePlayState GetPlayState();
};


// Class Creative.CreativeGlobalApiObject
// 0x0000 (0x0188 - 0x0188)
class UCreativeGlobalApiObject : public UCreativeApiObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeGlobalApiObject");
		return pStaticClass;
	}


	void Print(const struct FString& LogText);
	float CPPExecutionConsumptionTest(int A, float B, double C);
};


// Class Creative.CreativeGridLevelsManager
// 0x0478 (0x05E0 - 0x0168)
class UCreativeGridLevelsManager : public UCreativeModeManagerBase
{
public:
	bool                                               bDestructibleMeshForceHISM;                               // 0x0168(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bDestructibleMeshEnableBrokenEffect;                      // 0x0169(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2E];                                      // 0x016A(0x002E) MISSED OFFSET
	TArray<struct FString>                             GridLevelList;                                            // 0x0198(0x0010) (ZeroConstructor)
	TMap<struct FString, struct FCreativeModeGridLevelConfig> GridLevelConfigs;                                         // 0x01A8(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FCreativeModeGridLevelInfo> GridLevelsMap;                                            // 0x01F8(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FIntVector>            ObjectCellIndexMap;                                       // 0x0248(0x0050) (ZeroConstructor)
	TArray<struct FString>                             AlwaysLoadLevel;                                          // 0x0298(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x02A8(0x0010) MISSED OFFSET
	TArray<struct FString>                             RefreshBatchDataInstances;                                // 0x02B8(0x0010) (ZeroConstructor)
	bool                                               bStaticMeshObjectBatchSwitch;                             // 0x02C8(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bAroundRelieveBatchSwitch;                                // 0x02C9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x02CA(0x0002) MISSED OFFSET
	float                                              EditorModeUpdateTime;                                     // 0x02CC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DelayUpdateBatchTime;                                     // 0x02D0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TickUpdateBatchInterval;                                  // 0x02D4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ReBatchDistance;                                          // 0x02D8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RelieveBatchDistance;                                     // 0x02DC(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bRelieveBatchDelayUpdateSwitch;                           // 0x02E0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x02E1(0x0003) MISSED OFFSET
	float                                              RelieveBatchDelayTime;                                    // 0x02E4(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIncrementalRefreshEnable;                                // 0x02E8(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHISMBatchForceSwitch;                                    // 0x02E9(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bFineBatchSwitch;                                         // 0x02EA(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bDynamicChangeHISMSwitch;                                 // 0x02EB(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bPostUpdateISMBufferCompleteEventFlag;                    // 0x02EC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x02ED(0x0003) MISSED OFFSET
	int                                                UpdateIsmNumPerFrame;                                     // 0x02F0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x18C];                                     // 0x02F4(0x018C) MISSED OFFSET
	TMap<struct FString, class ACreativeModeStaticMeshBatchActor*> SingleBatchActorMap;                                      // 0x0480(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData06[0xF0];                                      // 0x04D0(0x00F0) MISSED OFFSET
	TArray<struct FString>                             ChangeMaterialIdInstanceIDs;                              // 0x05C0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData07[0x10];                                      // 0x05D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeGridLevelsManager");
		return pStaticClass;
	}


	void UpdateBatchActorInstances(const struct FString& GridName, int AssetId, int MaterialID, bool ReplaceAll);
	void UnLoadGridLevelsBatchActor(const struct FString& GridName, const struct FIntVector& CellIndex);
	void StaticMeshObjectRelieveBatch(struct FString* InstanceID);
	void StaticMeshObjectReBatch(struct FString* InstanceID);
	bool RemoveObject(const struct FString& InstanceID);
	void ReceiveRegistInstanceValueListener();
	void ReceiveDelayUpdateBatchActorInstances(const struct FString& GridName, int AssetId, int MaterialID, bool ReplaceAll, float MoveForwardTimeStamp);
	void ReceiveClearAllData();
	bool ReceiveCheckObjectCanBatch(const struct FString& InstanceID);
	void ObjectAddToGridCellMap(const struct FString& GridName, const struct FIntVector& Index, const struct FString& InstanceID);
	void LoadGridLevelsBatchActor(const struct FString& GridName, const struct FIntVector& CellIndex);
	bool IsCreativeEidtMode();
	void GridCellMapRemoveObject(const struct FString& GridName, const struct FIntVector& Index, const struct FString& InstanceID);
	struct FString GetStaticMeshBatchActorPath();
	class ACreativeDestructibleMeshBatchActor* GetSingleDestructibleMeshBatchActor();
	class ACreativeModeStaticMeshBatchActor* GetSingleBatchActor(const struct FString& GridName);
	float GetRelieveBatchDistance();
	float GetReBatchDistance();
	struct FIntVector GetOnCellIndex(const struct FString& GridName, const struct FVector& Location);
	struct FTransform GetObjectTransform(const struct FString& ID);
	ECreativeModeActorStreamingType GetObjectStreamingType(const struct FString& ID);
	struct FString GetObjectRuntimeGrid(const struct FString& ID);
	struct FIntVector GetObjectOnCellIndexByLocation(const struct FString& InstanceID, const struct FString& GridName, const struct FVector& Location);
	struct FIntVector GetObjectOnCellIndex(const struct FString& InstanceID);
	bool GetObjectIsPrefab(const struct FString& ID);
	int GetObjectAssetID(const struct FString& ID);
	float GetGridLoadingRange(const struct FString& GridName);
	TArray<struct FString> GetGridList();
	struct FString GetDestructibleMeshBatchActorPath();
	struct FString GetDefaultGridName();
	struct FVector2D GetCellWidthHeight(const struct FString& GridName);
	struct FVector GetCellCenterLocation(const struct FString& GridName, const struct FIntVector& CellIndex);
	int GetAxisIndex(float Pos, float BlockLenght);
	static class UCreativeGridLevelsManager* Get(class UObject* WorldContext);
	bool CheckObjectBeRelieveBatch(const struct FString& ID);
	bool CheckObjectBeBatch(const struct FString& ID);
	bool CheckAndRemoveObjectForBatchData(const struct FString& ID);
	bool CheckAndAddObjectToBatchData(const struct FString& ID);
	bool ChangeObjectTransform(const struct FString& InstanceID);
	bool ChangeObjectStreamingType(const struct FString& InstanceID, ECreativeModeActorStreamingType NewStremaingType);
	bool ChangeObjectMaterialIds();
	bool ChangeObjectMaterialId(const struct FString& InstanceID);
	bool ChangeObjectIsPrefab(const struct FString& InstanceID, bool bIsPrefab);
	bool AddObjectToGridLevels(struct FString* InstanceID);
	void ActivateAllAlwaysLoadCellIndex();
};


// Class Creative.CreativeGroupManager
// 0x0000 (0x0168 - 0x0168)
class UCreativeGroupManager : public UCreativeModeManagerBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeGroupManager");
		return pStaticClass;
	}


	static class UCreativeGroupManager* Get(class UObject* WorldContext);
};


// Class Creative.CreativeGuideComponent
// 0x0080 (0x0B30 - 0x0AB0)
class UCreativeGuideComponent : public USplineComponent
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0AB0(0x0058) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0B08(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class USplineMeshComponent*>                SplineMeshes;                                             // 0x0B18(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0B28(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeGuideComponent");
		return pStaticClass;
	}


	bool SweepSingleByChannel(const struct FVector& Start, const struct FVector& End, TArray<class AActor*> IgnoreActors, struct FHitResult* OutHit);
	void GenereateSplineMeshes(TArray<struct FVector> Points);
};


// Class Creative.CreativeGuideMeshComponent
// 0x0010 (0x0C70 - 0x0C60)
class UCreativeGuideMeshComponent : public USplineMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0C60(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeGuideMeshComponent");
		return pStaticClass;
	}


	bool OnReturnToPool(class UObject* NewOuter, uint32_t RecycledSeq);
	void OnPickFromPool(class UObject* NewOuter, const struct FString& InName);
};


// Class Creative.CreativeModeInGameManagerCenter
// 0x0048 (0x04F8 - 0x04B0)
class ACreativeModeInGameManagerCenter : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04B0(0x0010) MISSED OFFSET
	TArray<class USTExtraManagerBase*>                 ManagerArray;                                             // 0x04C0(0x0010) (ZeroConstructor, Transient)
	TArray<class UClass*>                              ManagerClassArray;                                        // 0x04D0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x18];                                      // 0x04E0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeInGameManagerCenter");
		return pStaticClass;
	}


	bool GetIsBeginPlayEnded();
};


// Class Creative.CreativeInstanceManager
// 0x0578 (0x06E0 - 0x0168)
class UCreativeInstanceManager : public UCreativeModeManagerBase
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0168(0x0070) MISSED OFFSET
	TMap<struct FString, struct FCreativeInstanceDataNode> InstanceTreeData;                                         // 0x01D8(0x0050) (ZeroConstructor)
	TMap<uint16_t, struct FCreativeBatchPullDataNode>  DataRequestMap;                                           // 0x0228(0x0050) (ZeroConstructor)
	TArray<struct FCreativePullDataNode>               DataWaitingRquestQueue;                                   // 0x0278(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0288(0x0010) MISSED OFFSET
	struct FCreativeNodeContainer                      InstanceContainer;                                        // 0x0298(0x0120) (Net, Transient)
	struct FCreativeNodeContainer                      RPCReplicatedInstanceContainer;                           // 0x03B8(0x0120) (Transient)
	bool                                               bRPCReplicatInstanceContainerEnable;                      // 0x04D8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04D9(0x0003) MISSED OFFSET
	int                                                CacheCacheHistoryContainerMaxCount;                       // 0x04DC(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x50];                                      // 0x04E0(0x0050) MISSED OFFSET
	int                                                ModBinInstanceCount;                                      // 0x0530(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0534(0x0004) MISSED OFFSET
	int                                                SingleSerializeNum;                                       // 0x0538(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SinglePullDataNodeNum;                                    // 0x053C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalPullDataNodeNum;                                     // 0x0540(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DataNodePullInterval;                                     // 0x0544(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DataPullTimeroutInterval;                                 // 0x0548(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FetchesPerFrame;                                          // 0x054C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WaitInstanceReplicatTreeTimeout;                          // 0x0550(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BuildingResTime;                                          // 0x0554(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ClientPreAddBuildingResTime;                              // 0x0558(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BuildingTimeoutCheckInterval;                             // 0x055C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     DefaultDestructibleMeshObjectPath;                        // 0x0560(0x0010) (ZeroConstructor)
	struct FString                                     ExpiredAssetEditorPath;                                   // 0x0570(0x0010) (ZeroConstructor)
	struct FString                                     DebugObjectPath;                                          // 0x0580(0x0010) (ZeroConstructor)
	float                                              StartDownloadMapTimeStamp;                                // 0x0590(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CompleteDownloadReplicatTreeTimeStamp;                    // 0x0594(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CompleteDownloadDataNodeTreeTimeStamp;                    // 0x0598(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x059C(0x0004) MISSED OFFSET
	TMap<struct FString, struct FCreativeInstanceNode> CppInstanceTree;                                          // 0x05A0(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData06[0x38];                                      // 0x05F0(0x0038) MISSED OFFSET
	unsigned char                                      UnknownData07[0x50];                                      // 0x05F0(0x0050) UNKNOWN PROPERTY: SetProperty Creative.CreativeInstanceManager.ExpiredAssetID
	unsigned char                                      UnknownData08[0x50];                                      // 0x0678(0x0050) UNKNOWN PROPERTY: SetProperty Creative.CreativeInstanceManager.DebugAssetID
	uint32_t                                           RPCReplicatedInstanceContainerSeq;                        // 0x06C8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              ReqInstanceContainerContentTimeoutTimeStamp;              // 0x06CC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ReqInstanceContainerContentTimeroutInterval;              // 0x06D0(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bRPCReplicatInstanceContainerTickCheckEnable;             // 0x06D4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x06D5(0x0003) MISSED OFFSET
	float                                              RPCReplicatInstanceContainerTickCheckCD;                  // 0x06D8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRPCReplicatInstanceContainerReqing : 1;                  // 0x06DC(0x0001)
	unsigned char                                      UnknownData10[0x3];                                       // 0x06DD(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeInstanceManager");
		return pStaticClass;
	}


	void UpdateModBinInstanceCount();
	void SetModBinInstanceCount(int Count);
	bool SetInstanceValue(const struct FString& InstanceID, const struct FString& Key, const struct FString& Value);
	void SetInstanceDataContents(uint16_t Seq, TArray<struct FCreativeInstanceDataContent> InstanceDataContents);
	void SetInstanceContainerContent(TArray<unsigned char> ContainerContent, uint32_t NewSeq);
	void SendModBinaryDataToReplay(TArray<unsigned char>* InBinaryData);
	void ReqInstanceContainerContentTimeoutCheck();
	void ReqInstanceContainerContentEnd(bool IsTimeout);
	void RemoveInstance(const struct FString& ID, bool bSkipCheck);
	bool RemoveCppInstanceNode(const struct FString& ID);
	void RecordAllInstanceDataByRPC();
	void ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState);
	void OnRep_RPCReplicatedInstanceContainerSeq();
	void OnRep_ModBinInstanceCount();
	void OnReceivePreInstanceRemove(const struct FString& ID, bool IsRollback);
	void OnReceivePostInstanceChange(const struct FString& ID, TArray<unsigned char> Content, bool IsRollback);
	void OnReceivePostInstanceAdd(const struct FString& ID, TArray<unsigned char> Content, bool IsRollback);
	void OnReceiveClearNotReplicatedData();
	void OnReadyToAddInstance();
	void OnPlayerControllerBeginPlay(class APlayerController* PlayerController);
	void OnGameTypeChanged(unsigned char LastGameType, unsigned char CurrentGameType);
	void OnGameStateBeginPlay(class AGameStateBase* GameState);
	bool IsInstanceReplicatTreeReplicateComplete();
	bool IsInstanceDataTreeReplicateComplete();
	bool IsAssetRuntimeObjectBox(const struct FString& ID);
	void InitExpiredAndDebugAssetID(TArray<int>* ExpiredAssets, TArray<int>* DebugAssets);
	bool HasReadyToAddInstance();
	bool HasAuthorityOrReplay();
	struct FString GetObjectAssetPath(const struct FString& ID);
	int GetModBinInstanceCount();
	bool GetModBinaryDataFromReplay(TArray<unsigned char> InBinaryData);
	bool GetInstanceIsDestructible(const struct FString& ID);
	bool GetInstanceIsCustomUI(const struct FString& ID);
	int GetInstanceDataTreeCount();
	TArray<struct FCreativeInstanceRespondPullDataSegment> GetInstanceDataContents(TArray<uint32_t> InstanceIDs);
	TArray<unsigned char> GetInstanceDataContent(const struct FString& InstanceID);
	int GetInstanceContainerCount();
	TArray<unsigned char> GetInstanceContainerContent(uint32_t BaseSeq, uint32_t* OutSeq);
	TArray<struct FBoxSphereBounds> GetInstanceBoxSphereBoundsList(TArray<struct FString> InstanceIDs);
	struct FBox GetInstanceBox(const struct FString& ID);
	struct FCreativeInstanceNode GetCppInstanceNode(const struct FString& ID);
	struct FBox GetAssetBox(const struct FString& ID);
	static class UCreativeInstanceManager* Get(class UObject* WorldContext);
	uint32_t GenerateDestructionUniqueID(uint32_t ID);
	struct FString DestroyInstance(const struct FString& InstanceID);
	void ClientPreAddInstance(const struct FString& ID, TArray<unsigned char> Content);
	void ClearInstanceTree();
	void CheckAndReqRPCReplicatedInstanceContainerContent();
	void ChangeInstance(const struct FString& ID, TArray<unsigned char> Content, bool bCallReceiveChange);
	void ChangeCppInstanceNode(const struct FString& ID, const struct FString& Key, struct FCreativeInstanceNode* Node);
	void AddInstance(const struct FString& ID, TArray<unsigned char> Content);
	void AddCppInstanceNode(const struct FString& ID, struct FCreativeInstanceNode* Node);
	void AddBuildingFlag(const struct FString& ID);
};


// Class Creative.CreativeInstanceStaticMeshComponent
// 0x0050 (0x0D70 - 0x0D20)
class UCreativeInstanceStaticMeshComponent : public UInstancedStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0D20(0x0018) MISSED OFFSET
	struct FSoftObjectPath                             SoftStaticMeshPath;                                       // 0x0D38(0x0018)
	class UMaterialInterface*                          WaitSetMaterial;                                          // 0x0D50(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FTransform>                          WaitSetAddInstanceTransforms;                             // 0x0D58(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0D68(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeInstanceStaticMeshComponent");
		return pStaticClass;
	}


	void UpdateAllInstanceByRelativeLocation(TArray<struct FVector> RelativeLocations, const struct FVector& Scale);
	void UnInitInstancedStaticMeshComponntByGroupBuild();
	void SetISMMaterial(class UMaterialInterface* NewMaterial);
	void OnStaticMeshAsyncLoaded(const struct FSoftObjectPath& SoftObjectPath);
	bool OnReturnToPool(class UObject* NewOuter, uint32_t RecycledSeq);
	void OnPickFromPool(class UObject* NewOuter, const struct FString& InName);
	void InitInstancedStaticMeshComponntByGroupBuildStaticMesh(class USceneComponent* Parent, TArray<struct FTransform> InstanceTransforms, class UObject* StaticMeshObj, class UMaterialInterface* Material);
	void InitInstancedStaticMeshComponntByGroupBuild(class USceneComponent* Parent, TArray<struct FTransform> InstanceTransforms, const struct FString& MeshPath, class UMaterialInterface* Material);
};


// Class Creative.CreativeModeIntegralMechanismComponent
// 0x0010 (0x0248 - 0x0238)
class UCreativeModeIntegralMechanismComponent : public ULuaActorComponent
{
public:
	TArray<struct FPlayerIntegralInfo>                 PlayerIntegrals;                                          // 0x0238(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeIntegralMechanismComponent");
		return pStaticClass;
	}


	bool SetPlayerIntegral(const struct FString& UID, int TeamID, int curIntegral, int curStageIntegral, int integralAddSeq);
	void OnRepPlayerIntegralsOverride();
	void OnRep_PlayerIntegrals();
	void ClearPlayerIntegrals();
};


// Class Creative.CreativeModeIntegralMechanismLiteComponent
// 0x0018 (0x0170 - 0x0158)
class UCreativeModeIntegralMechanismLiteComponent : public UCreativeModeLiteComponent
{
public:
	TArray<struct FPlayerIntegralInfo>                 PlayerIntegrals;                                          // 0x0158(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	int                                                TestIndex;                                                // 0x0168(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x016C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeIntegralMechanismLiteComponent");
		return pStaticClass;
	}


	bool SetPlayerIntegral(const struct FString& UID, int TeamID, int curIntegral, int curStageIntegral, int integralAddSeq, int curFunctionalIntegral);
	bool PlayerIntegralContains(const struct FString& UID);
	void OnRepPlayerIntegralsOverride();
	void OnRep_TestIndex(int LastIndex);
	void OnRep_PlayerIntegrals();
	void ClearPlayerIntegrals();
};


// Class Creative.CreativeItemGeneratorComponent
// 0x0058 (0x0A60 - 0x0A08)
class UCreativeItemGeneratorComponent : public UItemGeneratorComponent
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0A08(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeItemGeneratorComponent");
		return pStaticClass;
	}


	void SetWeightMul(TMap<struct FString, int> Weight);
	void SetAddSpotPercentMul(float percent);
	void ClearWeightMul();
};


// Class Creative.CreativeLoadManager
// 0x0068 (0x01D0 - 0x0168)
class UCreativeLoadManager : public UCreativeModeManagerBase
{
public:
	uint32_t                                           MaxLoadCountPerFrame;                                     // 0x0168(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bNewCustomUI;                                             // 0x016C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x63];                                      // 0x016D(0x0063) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeLoadManager");
		return pStaticClass;
	}


	void UnloadSomeObjects(TArray<struct FString> InstanceIDs, bool bRemovePhysicsObject);
	void UnloadObject(const struct FString& InstanceID, bool bRemovePhysicsObject);
	void LoadSomeObjects(TArray<struct FString> InstanceIDs, bool bLoadImmediately);
	void LoadObject(const struct FString& InstanceID);
	class UObject* LoadCustomUIObject(const struct FString& InstanceID);
	static class UCreativeLoadManager* Get(class UObject* WorldContext);
	void AddObject(const struct FString& InstanceID, const struct FCreativeInstanceNode& InstanceNode);
};


// Class Creative.CreativeLuaAPIObjectManager
// 0x0000 (0x0168 - 0x0168)
class UCreativeLuaAPIObjectManager : public UCreativeModeManagerBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeLuaAPIObjectManager");
		return pStaticClass;
	}


	static class UCreativeLuaAPIObjectManager* Get(class UObject* WorldContext);
};


// Class Creative.CreativeTriggerCheckData
// 0x0070 (0x0098 - 0x0028)
class UCreativeTriggerCheckData : public UObject
{
public:
	class UPrimitiveComponent*                         OverlapComponent;                                         // 0x0028(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCreativeTriggerSource                      TriggerSource;                                            // 0x0030(0x0005) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	TArray<TWeakObjectPtr<class AActor>>               CacheInAreaActors;                                        // 0x0038(0x0010) (ZeroConstructor)
	TMap<TWeakObjectPtr<class AActor>, ECreativeTriggerSourceType> LastOverlapActorType;                                     // 0x0048(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeTriggerCheckData");
		return pStaticClass;
	}

};


// Class Creative.CreativeLuaBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UCreativeLuaBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeLuaBlueprintLibrary");
		return pStaticClass;
	}


	static void CheckTriggerAreaOverlaps(TArray<class UCreativeTriggerCheckData*>* TriggerDataList, TArray<struct FCreativeTriggerActorType>* OutTriggerEnter, TArray<struct FCreativeTriggerActorType>* OutTriggerLeave);
};


// Class Creative.CreativeLuaCodeManager
// 0x0058 (0x01C0 - 0x0168)
class UCreativeLuaCodeManager : public UCreativeModeManagerBase
{
public:
	TMap<unsigned char, struct FString>                CodeMap;                                                  // 0x0168(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01B8(0x0004) MISSED OFFSET
	uint32_t                                           ReplicatedLuaCodeInfoMapSeq;                              // 0x01BC(0x0004) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeLuaCodeManager");
		return pStaticClass;
	}


	void ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState);
	void OnRep_ReplicatedLuaCodeInfoMapSeq();
	void OnPreCreativeLuaVMUnLoad();
	void OnPlayerControllerBeginPlay(class APlayerController* PlayerController);
	void OnGameStateBeginPlay(class AGameStateBase* GameState);
	void OnCreativeLuaInitialized();
	void MarkReplicatedLuaCodeInfoMapDirty();
	static class UCreativeLuaCodeManager* Get(class UObject* WorldContext);
};


// Class Creative.CreativeLuaEntityManager
// 0x00F8 (0x0260 - 0x0168)
class UCreativeLuaEntityManager : public UCreativeModeManagerBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0168(0x0008) MISSED OFFSET
	TMap<int64_t, TWeakObjectPtr<class UObject>>       CacheMap;                                                 // 0x0170(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x50];                                      // 0x01C0(0x0050) MISSED OFFSET
	unsigned char                                      UnknownData02[0x50];                                      // 0x01C0(0x0050) UNKNOWN PROPERTY: SetProperty Creative.CreativeLuaEntityManager.UsedUUIDSet

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeLuaEntityManager");
		return pStaticClass;
	}


	class UObject* UUID2UObject(int64_t* UUID);
	bool UUID2Type(int64_t* UUID, EEntityType* Type, unsigned char* SubType);
	uint32_t UUID2Key(int64_t* UUID);
	int64_t ResolveUObjectUUID(class UObject* Object);
	void ResetAll();
	void RemoveUUID(int64_t* UUID);
	class UObject* LuaUUID2UObject(struct FString* UUID);
	bool LuaUUID2Type(struct FString* UUID, EEntityType* Type, unsigned char* SubType);
	struct FString LuaUUID2Key(struct FString* UUID, EEntityType* Type, unsigned char* SubType);
	void LuaRemoveUUID(struct FString* UUID);
	struct FString LuaCreateEntityIfNotExistsFromUObject(class UObject* Object, EEntityType* Type, unsigned char* SubType);
	int64_t GetInstanceObjectUUID(int64_t* UUID);
	static class UCreativeLuaEntityManager* Get(class UObject* WorldContext);
	int64_t GenUUID(struct FString* Key, EEntityType* Type, unsigned char* SubType);
	int64_t CreateEntityIfNotExistsFromUObject(class UObject* Object, EEntityType* Type, unsigned char* SubType);
	int64_t CreateEntityIfNotExistsFromKey(uint32_t* Key, EEntityType* Type, unsigned char* SubType);
	bool ContainsUUID(int64_t UUID);
};


// Class Creative.CreativeLuaSignalManager
// 0x0050 (0x01B8 - 0x0168)
class UCreativeLuaSignalManager : public UCreativeModeManagerBase
{
public:
	TMap<struct FString, class UCreativeApiObject*>    ObjectMap;                                                // 0x0168(0x0050) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeLuaSignalManager");
		return pStaticClass;
	}


	void SpawnApiObjectsByConfig();
	void RegisterObject(class UCreativeApiObject* NewObject);
	void OnPreCreativeLuaVMUnLoad();
	void OnCreativeLuaVMLoaded();
	class UCreativeApiObject* GetObject(const struct FString& ModuleName);
	class UCreativeBridgeLuaVM* GetCreativeLuaVM();
	static class UCreativeLuaSignalManager* Get(class UObject* WorldContext);
	int ExecuteAPI(class UCreativeBridgeLuaVM* VM, struct FString* ModuleName, struct FString* FuncName);
	class UCreativeApiObject* CGetAPIObject(const struct FString& ModuleName);
	void CClearAPIObject();
	void CAddAPIObject(const struct FString& ModuleName, class UCreativeApiObject* Object);
};


// Class Creative.CreativeLuaTraitManager
// 0x0000 (0x0168 - 0x0168)
class UCreativeLuaTraitManager : public UCreativeModeManagerBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeLuaTraitManager");
		return pStaticClass;
	}


	TArray<struct FString> GetSupportEntitiesByTraits(TArray<struct FString> TraitNames);
	TArray<struct FString> GetSupportEntitiesByTrait(const struct FString& TraitName);
	static class UCreativeLuaTraitManager* Get(class UObject* WorldContext);
};


// Class Creative.CreativeLuaVMManager
// 0x0020 (0x0188 - 0x0168)
class UCreativeLuaVMManager : public UCreativeModeManagerBase
{
public:
	class UCreativeBridgeLuaVM*                        LuaVM;                                                    // 0x0168(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0170(0x0008) MISSED OFFSET
	TArray<struct FString>                             EnvLuaCheckPaths;                                         // 0x0178(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeLuaVMManager");
		return pStaticClass;
	}


	void UnRegisterGameTypePreChangedDelegate();
	void RegisterGameTypePreChangedDelegate();
	void ReceiveSluaCustomMemoryOutCallback();
	void ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState);
	void ReceiveCheckAndLoadLuaVM();
	void OpenEnvLuaProfile();
	void OpenCustomMemoryLimit(int64_t memoryLimit);
	void OnLuaVMAtPanic(const struct FString& errMsg);
	void OnGameTypePreChanged(unsigned char LastGameType, unsigned char CurrentGameType);
	void OnGameStateBeginPlay(class AGameStateBase* GameState);
	void LoadLuaVM();
	class UCreativeBridgeLuaVM* GetCreativeLuaVM();
	static class UCreativeLuaVMManager* Get(class UObject* WorldContext);
	bool CreativeLuaVMLoaded();
	bool CreativeLuaInitialized();
	void ClosenEnvLuaProfile();
	void CloseCustomMemoryLimit();
};


// Class Creative.CreativeManagerCenterInterface
// 0x0000 (0x0028 - 0x0028)
class UCreativeManagerCenterInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeManagerCenterInterface");
		return pStaticClass;
	}

};


// Class Creative.CreativeModeModDataCheckManager
// 0x0000 (0x0168 - 0x0168)
class UCreativeModeModDataCheckManager : public UCreativeModeManagerBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeModDataCheckManager");
		return pStaticClass;
	}


	void ReceiveOnPreAddInstance();
	void ReceiveOnPostAddInstance();
	void OnPreAddInstance();
	void OnPostAddInstance();
	static class UCreativeModeModDataCheckManager* Get(class UObject* WorldContext);
};


// Class Creative.CreativeModeChatBubbleUI
// 0x0038 (0x0298 - 0x0260)
class UCreativeModeChatBubbleUI : public UUserWidget
{
public:
	struct FName                                       SocketName;                                               // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMoveWithPawn;                                            // 0x0268(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0269(0x0003) MISSED OFFSET
	struct FVector                                     TargetOffset;                                             // 0x026C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       CurTargetActor;                                           // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCanvasPanelSlot*                            ChildSlot;                                                // 0x0280(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0288(0x0004) MISSED OFFSET
	struct FVector                                     CurrentTargetPosition;                                    // 0x028C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeChatBubbleUI");
		return pStaticClass;
	}


	void TickLua();
	void ForceUpdatePosition();
};


// Class Creative.CreativeModeGlobalManagerCenter
// 0x0030 (0x0060 - 0x0030)
class UCreativeModeGlobalManagerCenter : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	TArray<class USTExtraManagerBase*>                 ManagerArray;                                             // 0x0040(0x0010) (ZeroConstructor, Transient)
	TArray<class UClass*>                              ManagerClassArray;                                        // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeGlobalManagerCenter");
		return pStaticClass;
	}


	void OnCreativeDelegateCreated();
};


// Class Creative.CreativeModeStaticMeshBatchActor
// 0x00F0 (0x0660 - 0x0570)
class ACreativeModeStaticMeshBatchActor : public ALuaActor
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0570(0x0048) MISSED OFFSET
	struct FCreativeBatchInstancedStaticMesh           InstancedStaticMeshInfo;                                  // 0x05B8(0x0058)
	struct FCreativeFineBatchInstancedStaticMesh       BatchInstancedStaticMeshInfo;                             // 0x0610(0x0050)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeStaticMeshBatchActor");
		return pStaticClass;
	}


	void SetISMStaticMeshAndMaterials(class UInstancedStaticMeshComponent* InstancedStaticMeshComponent, int AssetId, int StaticMeshIndex, int MaterialID);
};


// Class Creative.CreativeModeTouchWidget
// 0x0000 (0x02C8 - 0x02C8)
class UCreativeModeTouchWidget : public ULuaUserWidget
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeTouchWidget");
		return pStaticClass;
	}


	struct FEventReply OnHandleTouchStart(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnHandleTouchMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnHandleTouchEnd(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	bool OnHandleTouch(int Type, int FingerIndex, const struct FVector2D& Pos);
};


// Class Creative.TaskProgressItem
// 0x0068 (0x0090 - 0x0028)
class UTaskProgressItem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET
	int                                                ConfigIndex;                                              // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ProgressType;                                             // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CurrentProgress;                                          // 0x0088(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                MaxProgress;                                              // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.TaskProgressItem");
		return pStaticClass;
	}


	void Update(float DeltaTime);
	void SetCurrentProgress(int Value);
	class UTaskInstance* GetTaskInstance();
	class UStageRuntimeState* GetStageRuntimeState();
	int GetProgressType();
	int GetMaxProgress();
	int GetCurrentProgress();
	void Deactivate();
	void AddProgress(int Delta);
	void Activate();
};


// Class Creative.StageRuntimeState
// 0x0070 (0x0098 - 0x0028)
class UStageRuntimeState : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET
	int                                                StageIdx;                                                 // 0x0080(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	TArray<class UTaskProgressItem*>                   ProgressItems;                                            // 0x0088(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.StageRuntimeState");
		return pStaticClass;
	}


	bool Update(float DeltaTime);
	int GetStageIdx();
	TArray<class UTaskProgressItem*> GetProgressItems();
	class UTaskInstance* GetOwnTaskInstance();
	class UTaskProgressItem* FindProgressItemByConfigIndex(int Index);
	void Deactivate();
	class UTaskProgressItem* AddProgressItem(int ProgressType);
	void Activate();
};


// Class Creative.TaskInstance
// 0x00B0 (0x00D8 - 0x0028)
class UTaskInstance : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET
	struct FString                                     TaskTypeID;                                               // 0x0080(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<uint32_t>                                   PlayerKeys;                                               // 0x0090(0x0010) (ZeroConstructor)
	class UStageRuntimeState*                          CurrentStage;                                             // 0x00A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ETaskStatus                                        TaskStatus;                                               // 0x00A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
	TArray<class UStageRuntimeState*>                  StageStates;                                              // 0x00B0(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     ReservedStr;                                              // 0x00C0(0x0010) (BlueprintVisible, ZeroConstructor)
	bool                                               bShouldReplicated;                                        // 0x00D0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00D1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.TaskInstance");
		return pStaticClass;
	}


	bool Update(float DeltaTime);
	void SetTaskStatus(ETaskStatus StatusVal);
	void SetShouldReplicated(bool Val);
	void SetReservedString(const struct FString& Val);
	void RemovePlayer(uint32_t PlayerKey);
	void ReceiveSetTaskStatus(ETaskStatus PreviousStatusVal, ETaskStatus NextStatusVal);
	void ReceiveOnDeactivate();
	void MarkTaskDirty();
	bool IsRefbyPlayer(uint32_t PlayerKey);
	void InitializeStageInfo();
	struct FString GetTaskTypeID();
	TArray<uint32_t> GetPlayerKeys();
	class UStageRuntimeState* GetCurrentStage();
	void AdvanceToNextStage(class UStageRuntimeState* NewStageInfo);
	void AddPlayer(uint32_t PlayerKey);
	class UStageRuntimeState* AddNewStage();
};


// Class Creative.CreativeModeGameTaskManager
// 0x0018 (0x0180 - 0x0168)
class UCreativeModeGameTaskManager : public UCreativeModeManagerBase
{
public:
	TArray<class UTaskInstance*>                       TaskInstArray;                                            // 0x0168(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0178(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeGameTaskManager");
		return pStaticClass;
	}


	void Reset();
	void RemoveTaskInstance(class UTaskInstance* TaskInstance);
	struct FString ReceiveGetProgressItemLuaPathByType(int ProgressType);
	struct FString GetProgressItemLuaPathByType();
	TArray<class UTaskInstance*> GetAllTaskInstances();
	static class UCreativeModeGameTaskManager* Get(class UObject* WorldContext);
	class UTaskInstance* FindTaskInstanceByType(const struct FString& TaskTypeID);
	class UTaskInstance* CreateTaskInstance(const struct FString& TaskTypeID);
};


// Class Creative.CreativeMonsterAnimInstance
// 0x01E0 (0x05D0 - 0x03F0)
class UCreativeMonsterAnimInstance : public UActorEditorAnimInstanceBase
{
public:
	class UAnimSequence*                               C_Birth_02_CustomOverride;                                // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                C_Birth_01_Montage_CustomOverride;                        // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                C_Birth_02_Montage_CustomOverride;                        // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_Idle_CustomOverride;                                    // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               C_Random_Idle_CustomOverride;                             // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_Combat_Idle_CustomOverride;                             // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               C_Random_Combat_Idle_CustomOverride;                      // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               C_Run_CustomOverride;                                     // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_Run_Sequence_CustomOverride;                            // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 C_Around_Run_CustomOverride;                              // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               C_Combat_Run_CustomOverride;                              // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_Attack_01_CustomOverride;                               // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_Attack_02_CustomOverride;                               // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_Attack_03_CustomOverride;                               // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_Hit_Hard_CustomOverride;                                // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 C_Hit_BlendSpace_CustomOverride;                          // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_Jump_Start_CustomOverride;                              // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               C_Fall_CustomOverride;                                    // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_Fall_Stand_CustomOverride;                              // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               C_Fall_Stand_BS_CustomOverride;                           // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_Fall_Hard_Stand_CustomOverride;                         // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               C_Fall_Hard_Stand_BS_CustomOverride;                      // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                C_Death_Front_CustomOverride;                             // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                C_Death_HeadShot_CustomOverride;                          // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                C_Death_VehicleHit_CustomOverride;                        // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                C_Death_Explosion_CustomOverride;                         // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                C_Death_Stand_CustomOverride;                             // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_Climb_CustomOverride;                                   // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_Climb_Window_CustomOverride;                            // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_Climbing_CustomOverride;                                // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_Stun_CustomOverride;                                    // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_Striding_CustomOverride;                                // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                C_ActiveMontage_CustomOverride;                           // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                C_TurnMontage_CustomOverride;                             // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               C_Turn_BS_CustomOverride;                                 // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_StopLeftLeg_CustomOverride;                             // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_RunStopLeftLeg_CustomOverride;                          // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_StopRightLeg_CustomOverride;                            // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_RunStopRightLeg_CustomOverride;                         // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_StopLeftLeg_Front_CustomOverride;                       // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_RunStopLeftLeg_Front_CustomOverride;                    // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_StopRightLeg_Front_CustomOverride;                      // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_RunStopRightLeg_Front_CustomOverride;                   // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_Birth_01_IsValid_CustomOverride;                        // 0x0548(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_Birth_02_IsValid_CustomOverride;                        // 0x0549(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_Idle_IsValid_CustomOverride;                            // 0x054A(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_Combat_Idle_IsValid_CustomOverride;                     // 0x054B(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_Run_IsValid_CustomOverride;                             // 0x054C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_Combat_Run_IsValid_CustomOverride;                      // 0x054D(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_Attack_01_IsValid_CustomOverride;                       // 0x054E(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_Attack_02_IsValid_CustomOverride;                       // 0x054F(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_Stiff_IsValid_CustomOverride;                           // 0x0550(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_Fall_IsValid_CustomOverride;                            // 0x0551(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_Jump_IsValid_CustomOverride;                            // 0x0552(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_Light_Fall_Stand_IsValid_CustomOverride;                // 0x0553(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_Hard_Fall_Stand_IsValid_CustomOverride;                 // 0x0554(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_Death_Front_IsValid_CustomOverride;                     // 0x0555(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_Death_HeadShot_IsValid_CustomOverride;                  // 0x0556(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_Death_VehicleHit_IsValid_CustomOverride;                // 0x0557(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_Death_Explosion_IsValid_CustomOverride;                 // 0x0558(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_Death_Stand_IsValid_CustomOverride;                     // 0x0559(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_Hit_BlendSpace_IsValid_CustomOverride;                  // 0x055A(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_Climb_IsValid_CustomOverride;                           // 0x055B(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_Climb_Window_IsValid_CustomOverride;                    // 0x055C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_ClimbOnCeiling_IsValid_CustomOverride;                  // 0x055D(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_Stun_IsValid_CustomOverride;                            // 0x055E(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLaunchAirFly_CustomOverride;                           // 0x055F(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLaunchAirGround_CustomOverride;                        // 0x0560(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLaunchAirRiseUp_CustomOverride;                        // 0x0561(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_Hurting_CustomOverride;                                 // 0x0562(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0563(0x0001) MISSED OFFSET
	struct FVector                                     C_HurtDir_CustomOverride;                                 // 0x0564(0x000C) (BlueprintVisible, IsPlainOldData)
	int                                                C_RandomAnimID_CustomOverride;                            // 0x0570(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                C_IdleBlendSpaceValue_CustomOverride;                     // 0x0574(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_IsLeftRightMove_CustomOverride;                         // 0x0578(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_IsTurning_CustomOverride;                               // 0x0579(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_IsTurningLeft_CustomOverride;                           // 0x057A(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x057B(0x0001) MISSED OFFSET
	float                                              C_AdditiveYaw_CustomOverride;                             // 0x057C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_LeftLegDown_CustomOverride;                             // 0x0580(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_FirstStopDone_CustomOverride;                           // 0x0581(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_SecondStopDone_CustomOverride;                          // 0x0582(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0583(0x0001) MISSED OFFSET
	int                                                C_StopLegAnimType_CustomOverride;                         // 0x0584(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_LegStopping_CustomOverride;                             // 0x0588(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0589(0x0003) MISSED OFFSET
	float                                              C_StopCurveOutput_CustomOverride;                         // 0x058C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              C_RunStopCurveOutput_CustomOverride;                      // 0x0590(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_Born_State_CustomOverride;                              // 0x0594(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0595(0x0003) MISSED OFFSET
	int                                                C_ClimbState_CustomOverride;                              // 0x0598(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                C_StrideState_CustomOverride;                             // 0x059C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     C_Velocity_CustomOverride;                                // 0x05A0(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              C_MoveSpeed_CustomOverride;                               // 0x05AC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              C_MaxSpeed_CustomOverride;                                // 0x05B0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              C_StopSpeed_CustomOverride;                               // 0x05B4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              C_FallingSpeed_CustomOverride;                            // 0x05B8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              C_SpeedScale_CustomOverride;                              // 0x05BC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              C_RunStopSpeedScale_CustomOverride;                       // 0x05C0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               C_StopInRun_CustomOverride;                               // 0x05C4(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x05C5(0x0003) MISSED OFFSET
	float                                              C_LerpIdleBlendSpaceValue_CustomOverride;                 // 0x05C8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x05CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeMonsterAnimInstance");
		return pStaticClass;
	}


	void PlayCreativeDynamicMontage(class UAnimSequenceBase* Asset, float BlendInTime, float BlendOutTime, float InPlayRate, int LoopCount, bool bIsLoop, float InTimeToStartMontageAt, const struct FName& SlotNodeName);
	void ClearAnimReferences();
	void CacheAnimVarOverride();
	void BP_CacheAnimVarOverride();
};


// Class Creative.CreativeModeNavigationManager
// 0x0050 (0x01B8 - 0x0168)
class UCreativeModeNavigationManager : public UCreativeModeManagerBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0168(0x0050) UNKNOWN PROPERTY: SetProperty Creative.CreativeModeNavigationManager.CachedActors

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeNavigationManager");
		return pStaticClass;
	}


	void SetTimeSliceConfig(int MaxTaskPerSlice, int SliceTimeLen);
	void SetNavmeshBuildPolicy(int PolicyVal);
	void SetDynamicModeEnable(bool bEnable);
	void SetDebugOutputEnable(bool bEnable);
	void SetConcurrentTaskNum(int Num);
	TArray<unsigned char> SerializeDynamicTileToByteArr(int MaxFileSize, int MaxTileToAdd);
	void RevokePendingBuildingTasks();
	void ReceiveOnUnInit();
	void ReceiveOnInit();
	void RebuildDynamicTilesByCoord(TArray<struct FIntPoint>* DynamicTiles);
	void RebuildDynamicTiles(TArray<class AActor*>* Actors);
	bool IsBuildingInProgress();
	void ImportDynamicTile(struct FString* Path);
	void GetWalkableTrianglesInBox(const struct FBox& bBox, TArray<struct FVector>* OutVertices, TArray<int>* OutIndices);
	int GetDynamicTilesCount();
	bool GetDynamicTileMemCost(int* Total, int* OctTree, int* TileCache, int* DynamicTile, int* DynamicTileCount);
	struct FIntPoint GetDynamicTileCoordByPos(const struct FVector& Pos);
	TArray<class AActor*> GetAllAssociateActors();
	static class UCreativeModeNavigationManager* Get(class UObject* WorldContext);
	void ExportDynamicTileStandard(struct FString* Path);
	void ExportDynamicTile(struct FString* Path);
	void EnsureDynamicBuildCompletion();
	void DeserializeDynamicTileFromByteArr(TArray<unsigned char>* ByteArr);
	float ComputeTotalWalkableSurfaceAreaInBox(const struct FBox& bBox);
	void ClearNavCollision();
	void ClearDynamicOctreeData();
	void ClearDynamicNavMesh();
	void ClearAssociateActors();
	TArray<struct FVector> CalSamplePointsInBoxLegacy(const struct FVector& BoxMin, const struct FVector& BoxMax, float StepSize, int MaxPoints);
	TArray<struct FVector> CalSamplePointsInBox(const struct FVector& BoxMin, const struct FVector& BoxMax, float StepSize, int MaxPoints);
	TArray<struct FVector> CalSamplePoints(const struct FVector& StartPos, float StepSize, int MaxPoints);
	void AddNavAffectedObjects(TArray<class AActor*> Actors);
	void AddNavAffectedObject(class AActor* Actor);
};


// Class Creative.CreativeNetPacketInspectorBridge
// 0x0010 (0x0038 - 0x0028)
class UCreativeNetPacketInspectorBridge : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeNetPacketInspectorBridge");
		return pStaticClass;
	}


	void ToggleCapture();
	void SetFilter(const struct FString& filter);
	void SelectRecord(int RecordIndex);
	void CopyText(const struct FString& Text);
	void Copy(const struct FString& CopyTarget);
	void Clear();
};


// Class Creative.CreativeObjectEditAxisActor
// 0x00B0 (0x0620 - 0x0570)
class ACreativeObjectEditAxisActor : public ALuaActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0570(0x0018) MISSED OFFSET
	struct FVector                                     AxisState;                                                // 0x0588(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     ForceHideAxis;                                            // 0x0594(0x000C) (Edit, IsPlainOldData)
	struct FTransform                                  WorldBaseTransform;                                       // 0x05A0(0x0030) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData01[0x48];                                      // 0x05D0(0x0048) MISSED OFFSET
	class APlayerCameraManager*                        PlayerCameraManager;                                      // 0x0618(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeObjectEditAxisActor");
		return pStaticClass;
	}


	void StartEdit(int Axis, const struct FVector2D& Pos, const struct FVector& HitPos);
	void SetForceHideAxis(const struct FVector& State);
	void SetFixedAxisSize(float FixedSize);
	void SetEditType(int InEditType, int InEditSubType);
	void SetComponentVisible(class USceneComponent* comp, bool bVisible);
	void SetAxisState(const struct FVector& State);
	void MarkEditing(bool bDoing);
	bool GetObjectScreenPos(struct FVector2D* OutPos);
	bool GetEditAxisWorldDir(struct FVector* OutDir);
	void CalScale(const struct FVector2D& Pos, struct FVector* OutScale);
	float CalRotation(const struct FVector2D& Pos, struct FRotator* OutRot);
	void CalLocation(const struct FVector2D& Pos, struct FVector* OutLoc);
};


// Class Creative.CreativeModeObjectFuncComponent
// 0x0000 (0x0158 - 0x0158)
class UCreativeModeObjectFuncComponent : public UCreativeModeLiteComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeObjectFuncComponent");
		return pStaticClass;
	}

};


// Class Creative.CreativeModeObjectInterface
// 0x0000 (0x0028 - 0x0028)
class UCreativeModeObjectInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeObjectInterface");
		return pStaticClass;
	}


	void ReceiveOnPostSetInstanceId(const struct FString& InstanceID);
};


// Class Creative.CreativeObjectLocalAxisActor
// 0x00B0 (0x0620 - 0x0570)
class ACreativeObjectLocalAxisActor : public ALuaActor
{
public:
	class AActor*                                      AttachActor;                                              // 0x0570(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              AttachOffsetZ;                                            // 0x0578(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x057C(0x0004) MISSED OFFSET
	class USceneComponent*                             AxisComponent;                                            // 0x0580(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             GridComponent;                                            // 0x0588(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTransform                                  BaseTransform;                                            // 0x0590(0x0030) (IsPlainOldData)
	struct FVector                                     Offset;                                                   // 0x05C0(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x05CC(0x0004) MISSED OFFSET
	struct FTransform                                  AttachTransform;                                          // 0x05D0(0x0030) (IsPlainOldData)
	bool                                               bAttach;                                                  // 0x0600(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bNoRotate;                                                // 0x0601(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bNoZClamp;                                                // 0x0602(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0603(0x0001) MISSED OFFSET
	float                                              SnapUnit;                                                 // 0x0604(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SnapAxisConfig;                                           // 0x0608(0x000C) (IsPlainOldData)
	float                                              HideDelayInterval;                                        // 0x0614(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0618(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeObjectLocalAxisActor");
		return pStaticClass;
	}


	void SetAxisComponents(class USceneComponent* Axis, class USceneComponent* Grid);
	void NeedUpdate();
};


// Class Creative.CreativeObjectManager
// 0x0128 (0x0290 - 0x0168)
class UCreativeObjectManager : public UCreativeModeManagerBase
{
public:
	TMap<struct FString, class UObject*>               ObjectMap;                                                // 0x0168(0x0050) (ZeroConstructor, Transient)
	TMap<struct FString, bool>                         ObjectActiveMap;                                          // 0x01B8(0x0050) (ZeroConstructor)
	bool                                               bContainsSpawnCompleteCallback;                           // 0x0208(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bReordering;                                              // 0x0209(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x020A(0x0002) MISSED OFFSET
	int                                                Client_FrameSpawnNum;                                     // 0x020C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Ds_FrameSpawnNum;                                         // 0x0210(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bFrameDestroyObjectEnable;                                // 0x0214(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0215(0x0003) MISSED OFFSET
	int                                                Client_FrameDestroyNum;                                   // 0x0218(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Ds_FrameDestroyNum;                                       // 0x021C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bPostSpawnCompleteEventFlag;                              // 0x0220(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6F];                                      // 0x0221(0x006F) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeObjectManager");
		return pStaticClass;
	}


	void SpawnObjectForStreaming(const struct FString& InstanceID);
	class UObject* SpawnObject(const struct FString& InstanceID, const struct FString& Path, const struct FTransform& SpawnTransform);
	bool SetObjectTempStreamingType(const struct FString& InstanceID, ECreativeModeActorStreamingType TempStreamingType);
	bool ResetObjectStreamingType(const struct FString& InstanceID);
	bool RemoveSpawnObjectInfoFormQueue(struct FString* InstanceID);
	void RemovePhysicsObject(const struct FString& InstanceID);
	bool RemoveObject(const struct FString& InstanceID, bool bRemovePhysicsObject);
	bool RemoveDestroyObjectInfoFormQueue(struct FString* InstanceID);
	void ReceiveUnregisterObject(const struct FString& InstanceID, class UObject* NewObject);
	void ReceiveRegisterObject(const struct FString& InstanceID, class UObject* NewObject);
	void ReceiveOnPostLoadMapWithWorld(class UWorld* World);
	void ReceiveClearAllObjects();
	void OnPostLoadMapWithWorld(class UWorld* World);
	void OnObjectSpawnComplete(const struct FString& ID);
	bool IsLogicObject(const struct FString& ID);
	bool IsGroupObject(const struct FString& ID);
	bool IsCanBatchObject(const struct FString& ID);
	struct FTransform GetObjectTransform(const struct FString& ID);
	uint32_t GetObjectNum();
	struct FString GetObjectAssetPath(const struct FString& ID);
	int GetObjectAssetID(const struct FString& ID);
	class UObject* GetObject(const struct FString& InstanceID);
	uint32_t GetActiveObjectNum();
	static class UCreativeObjectManager* Get(class UObject* WorldContext);
	void DestroyObjectForStreaming(const struct FString& InstanceID);
	bool DestroyObject(const struct FString& InstanceID);
	bool CheckObjectBeBatch(const struct FString& ID);
	bool ChangeObjectTransform(const struct FString& InstanceID, const struct FTransform& Transform);
	void AddSpawnObjectToQueue(const struct FString& InstanceID, const struct FString& Path, const struct FTransform& SpawnTransform);
	bool AddObject(const struct FString& InstanceID, const struct FCreativeModeStreamingParameters& StreamingParameters);
	void AddDestroyObjectToQueue(const struct FString& InstanceID);
};


// Class Creative.CreativeObjectStateManager
// 0x0008 (0x0170 - 0x0168)
class UCreativeObjectStateManager : public UCreativeModeManagerBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0168(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeObjectStateManager");
		return pStaticClass;
	}


	void ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState);
	void OnGameStateBeginPlay(class AGameStateBase* GameState);
	static class UCreativeObjectStateManager* Get(class UObject* WorldContext);
};


// Class Creative.CreativeOccupationAreaLiteComponent
// 0x0000 (0x0158 - 0x0158)
class UCreativeOccupationAreaLiteComponent : public UCreativeModeLiteComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeOccupationAreaLiteComponent");
		return pStaticClass;
	}

};


// Class Creative.CreativeOctreeSyncManager
// 0x0068 (0x01D0 - 0x0168)
class UCreativeOctreeSyncManager : public UCreativeModeManagerBase
{
public:
	TEnumAsByte<ECollisionChannel>                     CollisionChannel;                                         // 0x0168(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0169(0x0003) MISSED OFFSET
	float                                              BackwardOffset;                                           // 0x016C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRootPositionInitialized;                                 // 0x0170(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0171(0x0003) MISSED OFFSET
	float                                              MaxSearchRadius;                                          // 0x0174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExpandSearchRadius;                                       // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x017C(0x0004) MISSED OFFSET
	struct FOctreeNode                                 RootNode;                                                 // 0x0180(0x0030) (Edit, BlueprintVisible)
	float                                              CellSize;                                                 // 0x01B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MergeDistance;                                            // 0x01B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxDepth;                                                 // 0x01B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinCellSize;                                              // 0x01BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SplitThreshold;                                           // 0x01C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckObstacles;                                          // 0x01C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x01C5(0x0003) MISSED OFFSET
	int                                                DataCount;                                                // 0x01C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x01CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeOctreeSyncManager");
		return pStaticClass;
	}


	bool ShouldMergeData(const struct FOctreeData& ExistingData, const struct FOctreeData& NewData, float Distance);
	void ResetTree();
	int RemoveDataInBoundsByActorRecursive(const struct FBox& BoundingBox, class AActor* Actor, struct FOctreeNode* Node);
	void RemoveDataInBoundsByActor(class AActor* Actor, struct FBox* BoundingBox);
	void RemoveDataByUIDs();
	void RemoveDataByUID(int UID);
	void RemoveDataByPlayerKey(const struct FString& PlayerKey);
	void InsertData(const struct FOctreeData& InData);
	void Initialize(float InCellSize, float InMergeDistance, int InMaxDepth, float InMinCellSize);
	void HookDecalManager(class ACreativeDecalManager* DecalManager, bool bRegister);
	bool HasObstacleBetween(const struct FVector& Start, const struct FVector& End);
	struct FVector GetOffsetLocationForObstacleCheck(const struct FVector& Location, const struct FVector& Forward);
	static TArray<struct FOctreeData> GetNodeData(const struct FOctreeNode& Node);
	static TArray<struct FOctreeNode> GetNodeChildren(const struct FOctreeNode& Node);
	void GetNearbyDataRecursive(const struct FOctreeNode& Node, const struct FVector& Location, float SearchRadius, int MaxCount, bool bExpandSearch, TArray<struct FOctreeData>* OutData);
	TArray<struct FOctreeData> GetNearbyData(const struct FVector& Location, int MaxCount, bool bSortByDistance, bool bExpandSearch);
	TArray<struct FOctreeData> GetAllData();
	static class UCreativeOctreeSyncManager* Get(class UObject* WorldContext);
	void ExpandRootNode(const struct FVector& Point);
	void EnsureRootContainsPoint(const struct FVector& Point);
};


// Class Creative.CreativeOfflineBuildManager
// 0x0000 (0x0168 - 0x0168)
class UCreativeOfflineBuildManager : public USTExtraManagerBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeOfflineBuildManager");
		return pStaticClass;
	}


	void ReceiveOnPostSetLuaEventBridgeInstance();
	void OnPostSetLuaEventBridgeInstance();
	static class UCreativeOfflineBuildManager* Get(class UObject* WorldContext);
};


// Class Creative.CreativeOpenUIRoundTripToolBridge
// 0x0010 (0x0038 - 0x0028)
class UCreativeOpenUIRoundTripToolBridge : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeOpenUIRoundTripToolBridge");
		return pStaticClass;
	}


	void RunTest(const struct FString& SCOPE, int Iterations, float Tolerance, const struct FString& ExportFlavor);
	void OpenReportFolder();
	void CopyOutput();
};


// Class Creative.CreativeOverlapCheckComponent
// 0x0068 (0x02A0 - 0x0238)
class UCreativeOverlapCheckComponent : public ULuaActorComponent
{
public:
	struct FScriptDelegate                             OnBeginOverlapDelegate;                                   // 0x0238(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnEndOverlapDelegate;                                     // 0x0248(0x0010) (ZeroConstructor, InstancedReference)
	TArray<class UClass*>                              OverlapClassFilters;                                      // 0x0258(0x0010) (ZeroConstructor)
	class UPrimitiveComponent*                         OverlapCheckComponent;                                    // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class AActor*>                              InAreaActors;                                             // 0x0270(0x0010) (ZeroConstructor)
	int                                                OverlapCheckFrame;                                        // 0x0280(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                OverlapLowCheckFrame;                                     // 0x0284(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              OverlapCheckCD;                                           // 0x0288(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EmptyCheckNumber;                                         // 0x028C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               HighPrecisionCheck;                                       // 0x0290(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bFilterInVehicle;                                         // 0x0291(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0292(0x0002) MISSED OFFSET
	float                                              CheckTickFrame;                                           // 0x0294(0x0004) (ZeroConstructor, IsPlainOldData)
	class UGameLuaAPI*                                 GameLuaAPI;                                               // 0x0298(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeOverlapCheckComponent");
		return pStaticClass;
	}


	void StartOverlapCheck();
	bool IsOverlapClass(class AActor* OverlapActor);
	void InitOverlapComponent(class UPrimitiveComponent* Component);
	void EndOverlapCheck();
	void EnableFilterInVehicle(bool bEnable);
	void CheckOverlapActors();
	void AddOverlapClass(class UClass* OverlapClass);
};


// Class Creative.CreativeParentChildManager
// 0x0000 (0x0168 - 0x0168)
class UCreativeParentChildManager : public UCreativeModeManagerBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeParentChildManager");
		return pStaticClass;
	}


	static class UCreativeParentChildManager* Get(class UObject* WorldContext);
};


// Class Creative.CreativePerfManager
// 0x0078 (0x01E0 - 0x0168)
class UCreativePerfManager : public UCreativeModeManagerBase
{
public:
	TMap<class AActor*, struct FCreaitvePerfDataMap>   ActorPerfData;                                            // 0x0168(0x0050) (ZeroConstructor)
	struct FCreativeNetData                            BeginSampleNetData;                                       // 0x01B8(0x0008)
	float                                              FPSStatInterval;                                          // 0x01C0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x01C4(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativePerfManager");
		return pStaticClass;
	}


	void ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState);
	void OnGameStateBeginPlay(class AGameStateBase* GameState);
	TMap<struct FName, float> GetUObjectMemoryUsage();
	TArray<struct FCreaitvePerfDataMap> GetResult();
	struct FCreativeNetData GetNetData();
	struct FCreativeMemoryData GetMemoryData();
	void GetCPUUsage(int Type, float* OutCPUTimePct, float* OutCPUTimePctRelative);
	static class UCreativePerfManager* Get(class UObject* WorldContext);
	void EndSample();
	void BeginSample();
	void AddActorToRecord(class AActor* Actor, int AssetId, const struct FName& ScopeName);
};


// Class Creative.CreativePhotonDestructibleMeshComponent
// 0x0050 (0x0F90 - 0x0F40)
class UCreativePhotonDestructibleMeshComponent : public UPhotonDestructibleMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0F40(0x0020) MISSED OFFSET
	struct FPhotonDestructionParam                     DestructionParam;                                         // 0x0F60(0x0020)
	int                                                MaxFXFragmentNumber;                                      // 0x0F80(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0F84(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativePhotonDestructibleMeshComponent");
		return pStaticClass;
	}


	void SetInstanceActive(bool bActive);
	void SetDestructionParam(const struct FPhotonDestructionParam& Param);
	void SetCreativeServerDamagedDelegate(const struct FScriptDelegate& del);
	void SetCreativeClientFragmentStateChangedDelegate(const struct FScriptDelegate& del);
	bool RebornOneFragment(int FragmentIndex);
	bool RebornInstance();
	bool RandomRecoverOneFragment();
	void RandomDestroyOneFragment();
	void DestroyInstance();
	bool CheckFragmentOverlap(int FragmentIndex);
};


// Class Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent
// 0x00D0 (0x1180 - 0x10B0)
class UCreativePhotonHierarchicalInstancedDestructibleMeshComponent : public UPhotonHierarchicalInstancedDestructibleMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x10B0(0x0008) MISSED OFFSET
	struct FString                                     MinClusterInstanceID;                                     // 0x10B8(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   InstanceReplicationIndex;                                 // 0x10C8(0x0010) (ZeroConstructor)
	TMap<int, struct FPhotonDestructionParam>          InstanceToDestructionParams;                              // 0x10D8(0x0050) (ZeroConstructor)
	TMap<struct FString, int>                          UGCInstanceIDToInstanceIndex;                             // 0x1128(0x0050) (ZeroConstructor)
	int                                                MaxFXFragmentNumber;                                      // 0x1178(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x117C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent");
		return pStaticClass;
	}


	void SetServerDamagedInstancedDelegate(const struct FScriptDelegate& InDelegate);
	void SetInstanceMaxHp(int InstanceIndex, float MaxHP);
	void SetInstanceActive(const struct FString& InstanceID, bool bActive);
	void SetDestructionParam(TArray<int> InstanceIndex, TArray<struct FPhotonDestructionParam> DestructionParams);
	bool RebornOneFragment(const struct FString& InstanceID, int FragmentIndex);
	bool RebornInstance(const struct FString& InstanceID);
	bool RandomRecoverOneFragment(const struct FString& InstanceID);
	void RandomDestroyOneFragment(const struct FString& InstanceID);
	void OnClientInitial(int InstanceIndex, TArray<int> ImpactFragmentItemIndex);
	void OnClientDamaged(int InstanceIndex, TArray<int> ImpactFragmentItemIndex, const struct FVector& LocalImpactPoint, const struct FVector& LocalVelocity, int HitType);
	struct FString GetUGCInstanceID(int InstanceIndex);
	void DestroyInstance(const struct FString& InstanceID);
	bool CheckFragmentOverlap(int InstanceIndex, int FragmentIndex);
};


// Class Creative.CreativePhotonInstancedDestructibleMeshComponent
// 0x00E0 (0x10B0 - 0x0FD0)
class UCreativePhotonInstancedDestructibleMeshComponent : public UPhotonInstancedDestructibleMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0FD0(0x0010) MISSED OFFSET
	struct FString                                     MinClusterInstanceID;                                     // 0x0FE0(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   InstanceReplicationIndex;                                 // 0x0FF0(0x0010) (ZeroConstructor)
	TMap<int, struct FPhotonDestructionParam>          InstanceToDestructionParams;                              // 0x1000(0x0050) (ZeroConstructor)
	TMap<struct FString, int>                          UGCInstanceIDToInstanceIndex;                             // 0x1050(0x0050) (ZeroConstructor)
	int                                                MaxFXFragmentNumber;                                      // 0x10A0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x10A4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativePhotonInstancedDestructibleMeshComponent");
		return pStaticClass;
	}


	void SetServerDamagedInstancedDelegate(const struct FScriptDelegate& InDelegate);
	void SetInstanceMaxHp(int InstanceIndex, float MaxHP);
	void SetInstanceActive(const struct FString& InstanceID, bool bActive);
	void SetDestructionParam(TArray<int> InstanceIndex, TArray<struct FPhotonDestructionParam> DestructionParams);
	bool RebornOneFragment(const struct FString& InstanceID, int FragmentIndex);
	bool RebornInstance(const struct FString& InstanceID);
	bool RandomRecoverOneFragment(const struct FString& InstanceID);
	void RandomDestroyOneFragment(const struct FString& InstanceID);
	void OnClientInitial(int InstanceIndex, TArray<int> ImpactFragmentItemIndex);
	void OnClientDamaged(int InstanceIndex, TArray<int> ImpactFragmentItemIndex, const struct FVector& LocalImpactPoint, const struct FVector& LocalVelocity, int HitType);
	struct FString GetUGCInstanceID(int InstanceIndex);
	void DestroyInstance(const struct FString& InstanceID);
	bool CheckFragmentOverlap(int InstanceIndex, int FragmentIndex);
};


// Class Creative.CreativePhysicsBatchActor
// 0x0170 (0x06E0 - 0x0570)
class ACreativePhysicsBatchActor : public ALuaActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0570(0x0010) MISSED OFFSET
	TMap<struct FString, class UCreativePhysicsComponent*> InstancePhysicsComponentMap;                              // 0x0580(0x0050) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData01[0x6C];                                      // 0x05D0(0x006C) MISSED OFFSET
	int                                                TickRegisterMaxNum;                                       // 0x063C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             MeshLoadSuccessDelegate;                                  // 0x0640(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             MeshLoadSuccessByPathDelegate;                            // 0x0650(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             CustomMeshLoadSuccessDelegate;                            // 0x0660(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             CustomMeshLoadSuccessByPathDelegate;                      // 0x0670(0x0010) (ZeroConstructor, InstancedReference)
	TMap<struct FString, struct FPhysicsComponentData> ComponentTempData;                                        // 0x0680(0x0050) (ZeroConstructor)
	int                                                ReplicateLimit;                                           // 0x06D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x06D4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativePhysicsBatchActor");
		return pStaticClass;
	}


	void UpdatePhysicsComponentMaterial(struct FString* ComponentID, struct FString* MaterialPath);
	void UpdatePhysicsComponent(const struct FTransform& Transform, TEnumAsByte<ECollisionEnabled> CollisionEnabled, struct FString* ComponentID);
	bool UnRegisterPhysicsComponent(struct FString* ComponentID);
	void SetPhysicsComponentEnabled(TEnumAsByte<ECollisionEnabled> CollisionEnabled, struct FString* ComponentID);
	void RegisterPhysicsComponentByMesh(const struct FString& InstanceID, const struct FString& ComponentID, const struct FTransform& Transform, const struct FString& MeshPath, const struct FName& CollisionProfileName);
	void OnLoadMeshSuccessByPath(class UObject* Obj, const struct FString& ComponentID);
	void OnLoadMeshSuccess(class UObject* Obj, const struct FString& ComponentID);
	bool IsLoadFinish();
	int GetRegisterNum();
	class UCreativePhysicsComponent* GetPhysicsComponent(struct FString* ComponentID);
	void ClearAllPhysicsComponent();
};


// Class Creative.CreativePhysicsComponent
// 0x0070 (0x0A90 - 0x0A20)
class UCreativePhysicsComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0A20(0x0008) MISSED OFFSET
	class UBodySetup*                                  BodySetup;                                                // 0x0A28(0x0008) (ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 InStaticMesh;                                             // 0x0A30(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     InstanceID;                                               // 0x0A38(0x0010) (ZeroConstructor)
	struct FName                                       CollisionProfileName;                                     // 0x0A48(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0A50(0x0030) MISSED OFFSET
	struct FScriptDelegate                             MatLoadSuccessDelegate;                                   // 0x0A80(0x0010) (ZeroConstructor, InstancedReference)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativePhysicsComponent");
		return pStaticClass;
	}


	void SetIsReplicatedOnly(bool ShouldReplicate);
	void OnLoadMaterialSuccess(class UObject* Obj, const struct FString& Path);
};


// Class Creative.CreativePhysicsManager
// 0x01F8 (0x0360 - 0x0168)
class UCreativePhysicsManager : public UCreativeModeManagerBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0168(0x0018) MISSED OFFSET
	TMap<struct FString, class UBodySetup*>            BodySetupMap;                                             // 0x0180(0x0050) (ZeroConstructor, Transient)
	TMap<struct FString, class UMaterialInterface*>    MaterialInterfaceMap;                                     // 0x01D0(0x0050) (ZeroConstructor, Transient)
	TMap<struct FString, struct FCreativeInstanceGridCellInfo> InstanceCellMap;                                          // 0x0220(0x0050) (ZeroConstructor, Transient)
	TMap<int, class ACreativePhysicsBatchActor*>       PhysicsBatchActorMap;                                     // 0x0270(0x0050) (ZeroConstructor, Transient)
	bool                                               StreamingEnable;                                          // 0x02C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02C1(0x0007) MISSED OFFSET
	TMap<struct FIntVector, bool>                      VisiblePhysicsBatchActors;                                // 0x02C8(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x38];                                      // 0x0318(0x0038) MISSED OFFSET
	TArray<class ACreativePhysicsBatchActor*>          OutAllBatchActorArray;                                    // 0x0350(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativePhysicsManager");
		return pStaticClass;
	}


	void UpdatePhysicsObjectCellInfo(const struct FString& InstanceID, const struct FString& GridName, const struct FIntVector& CellIndex);
	void SetStreamingEnable(bool Enable);
	void SetPhysicsActorVisible(const struct FString& GridName, const struct FIntVector& CellIndex, bool Visible);
	void RemovePhysicsObject(const struct FString& InstanceID);
	bool PreAddPhysicsObjectCheck(const struct FString& InstanceID);
	void OnPhysicsBatchActorLoadFinish();
	bool IsPhysicsActorVisible(const struct FString& GridName, const struct FIntVector& CellIndex);
	class ACreativePhysicsBatchActor* GetPhysicsBatchActorByInstanceID(const struct FString& InstanceID);
	class ACreativePhysicsBatchActor* GetPhysicsBatchActor(const struct FString& GridName, const struct FIntVector& Index);
	class ACreativePhysicsBatchActor* GetGlobalPhysicsBatchActor();
	TArray<class ACreativePhysicsBatchActor*> GetAllPhysicsActor();
	static class UCreativePhysicsManager* Get(class UObject* WorldContext);
	void ClearAllPhysicsBatchActor();
	void ChangePhysicsObjectIsPrefab(const struct FString& InstanceID, bool bIsPrefab);
	void AddPhysicsObject(const struct FString& InstanceID, const struct FString& GridName, const struct FIntVector& CellIndex);
};


// Class Creative.CreativePlayerAPIObject
// 0x0000 (0x0188 - 0x0188)
class UCreativePlayerAPIObject : public UCreativeApiObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativePlayerAPIObject");
		return pStaticClass;
	}


	bool SetPlayerDirection(int64_t PlayerUUID, const struct FVector& Direction);
	int GetPlayerTeamIndex(int64_t PlayerUUID);
	void GetPlayerTeamIDAndTeamIndexFromCPP(int64_t PlayerUUID, int* OutTeamID, int* OutTeamIndex);
	int GetPlayerTeamID(int64_t PlayerUUID);
	float GetPlayerMaxHealth(int64_t PlayerUUID);
	struct FVector GetPlayerLocation(int64_t PlayerUUID);
	float GetPlayerHealth(int64_t PlayerUUID);
	struct FVector GetPlayerDirection(int64_t PlayerUUID);
	float AddPlayerHealth(int64_t PlayerUUID, float AddHealth);
};


// Class Creative.CreativeModePlayerState
// 0x0010 (0x1CE8 - 0x1CD8)
class ACreativeModePlayerState : public ASTExtraPlayerState
{
public:
	bool                                               bEnableAutoPickUp;                                        // 0x1CD8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x1CD9(0x0007) MISSED OFFSET
	class UCreativeTaskComponent*                      CreativeTaskComponent;                                    // 0x1CE0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModePlayerState");
		return pStaticClass;
	}


	void ServerRemoveInstance(const struct FString& InstanceID);
	TArray<unsigned char> ServerReceiveModifyContent(TArray<unsigned char> Content, int idx);
	void ServerAddInstanceAdvance(const struct FString& InstanceID, TArray<unsigned char> Content, int idx);
	void ServerAddInstance(const struct FString& InstanceID, TArray<unsigned char> Content);
};


// Class Creative.CreativePoolInterface
// 0x0000 (0x0028 - 0x0028)
class UCreativePoolInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativePoolInterface");
		return pStaticClass;
	}


	void SetRecycleTime(float RecycleTime);
	void SetIsRecycled(bool IsRecycled);
	void ReceiveOnReturnToPool(class UObject* NewOuter, int RecycledSeq);
	void ReceiveOnPickFromPool(class UObject* NewOuter, const struct FString& InName);
	bool OnReturnToPool(class UObject* NewOuter, uint32_t RecycledSeq);
	void OnPickFromPool(class UObject* NewOuter, const struct FString& InName);
	struct FString GetUnusedComponentName(class UObject* InOuter, struct FString* NamePrefix);
	float GetRecycleTime();
	bool CheckIsRecycled();
};


// Class Creative.CreativePoolManager
// 0x0060 (0x01C8 - 0x0168)
class UCreativePoolManager : public UCreativeModeManagerBase
{
public:
	bool                                               bPoolManagerEnable;                                       // 0x0168(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0169(0x000F) MISSED OFFSET
	TMap<int, struct FCreativeObjectPool>              CreativePools;                                            // 0x0178(0x0050) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativePoolManager");
		return pStaticClass;
	}


	void SetPoolManagerEnable(bool bPoolManagerEnable);
	void ReturnObject(int PoolId, class UObject* Obj);
	void OnReceivePickObjectHandle(int ID, class UObject* InObj);
	void OnReceiveObjectReturnHandle(int ID, class UObject* InObj);
	bool OnReceiveDestroyHandle(int ID, class UObject* InObj);
	class UObject* OnReceiveCreateHandle(int ID);
	bool InitPool(int PoolId, bool bPoolEnable, struct FCreativeObjectPoolClassConfig* PoolConfig);
	struct FString GetUnusedComponentName(class UObject* InOuter, struct FString* NamePrefix);
	class UObject* GetObject(int PoolId, class UObject* NewOuter, const struct FString& InName);
	static class UCreativePoolManager* Get(class UObject* WorldContext);
	void ClearPoolObject();
};


// Class Creative.CreativeModeRaceCheckPointComponent
// 0x0000 (0x0238 - 0x0238)
class UCreativeModeRaceCheckPointComponent : public ULuaActorComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeRaceCheckPointComponent");
		return pStaticClass;
	}

};


// Class Creative.CreativeModeRaceCheckPointLiteComponent
// 0x0000 (0x0158 - 0x0158)
class UCreativeModeRaceCheckPointLiteComponent : public UCreativeModeLiteComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeRaceCheckPointLiteComponent");
		return pStaticClass;
	}

};


// Class Creative.CreativeRuntimePlayerBattleDataObject
// 0x0308 (0x0878 - 0x0570)
class ACreativeRuntimePlayerBattleDataObject : public ALuaActor
{
public:
	struct FRuntimePlayerBattleDataInfo                DefaultPlayerBattleDataInfo;                              // 0x0570(0x0070)
	struct FRuntimeTeamGameOutcomeConditionInfo        DefaultTeamGameOutcomeCondition;                          // 0x05E0(0x001C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x05FC(0x0004) MISSED OFFSET
	struct FRuntimeCacheRoundBattleDataInfoContainer   RuntimeOldCacheRoundBattleDataContainer;                  // 0x0600(0x00C8) (Net, Transient)
	struct FRuntimeBattleDataInfoContainer             RuntimeCurRoundBattleDataInfoContainer;                   // 0x06C8(0x00C8) (Net, Transient)
	struct FRuntimeTeamGameOutcomeConditionContainer   RuntimeTeamGameOutcomeConditionContainer;                 // 0x0790(0x00C8) (Net, Transient)
	struct FRuntimeCacheRoundBattleDataInfo            DefaultCacheRoundBattleDataInfo;                          // 0x0858(0x0020)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeRuntimePlayerBattleDataObject");
		return pStaticClass;
	}


	bool SetTeamGameOutcomeCondition(int TeamID, bool bPropagateToChildren, struct FRuntimeTeamGameOutcomeConditionInfo* TeamGameOutcomeCondition);
	bool SetPlayerBattleData(uint64_t UID, uint32_t PlayerKey, bool bPropagateToChildren, struct FRuntimePlayerBattleDataInfo* PlayerBattleData);
	bool ResetCurRoundPlayerBattleDataList();
	void OnRepTeamGameOutcomeConditionInfo(int TeamID);
	void OnRepCurRoundPlayerBattleDataInfo(uint64_t PlayerUID, uint64_t PlayerKey, int ChangeTeamID);
	struct FRuntimeTeamGameOutcomeConditionInfo GetTeamGameOutcomeCondition(int TeamID);
	struct FRuntimePlayerBattleDataInfo GetCurRoundPlayerBattleData(uint64_t PlayerUID, uint32_t PlayerKey);
	TArray<struct FRuntimePlayerBattleDataInfo> GetCurRoundAllPlayerBattleData();
	struct FRuntimePlayerBattleDataInfo GetCacheRoundPlayerBattleData(int RoundIndex, uint64_t PlayerUID, uint32_t PlayerKey);
	struct FRuntimeCacheRoundBattleDataInfo GetCacheRoundBattleData(int RoundIndex);
	struct FRuntimePlayerBattleDataInfo GetAllRoundPlayerBattleData(uint64_t PlayerUID, uint32_t PlayerKey);
	void CacheCurRoundBattleData(int RoundIndex);
};


// Class Creative.CreativeSceneDetectLib
// 0x0000 (0x0028 - 0x0028)
class UCreativeSceneDetectLib : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeSceneDetectLib");
		return pStaticClass;
	}


	static float CreativeGetStackDistanceFromMeshes(TArray<class UMeshComponent*> MeshComponents, const struct FVector& Direction);
	static float CreativeGetStackDistance(class UStaticMesh* Mesh, const struct FVector& Direction, const struct FVector& Scale);
	static struct FVector CreativeGetFurthestPointFromMeshes(TArray<class UMeshComponent*> MeshComponents, const struct FVector& Direction);
	static struct FVector CreativeGetFurthestPoint(class AActor* TargetActor, class USceneComponent* TargetComp, const struct FVector& Direction);
	static TArray<struct FVector> CreativeFindPlacementPoints(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& HalfExtent, const struct FVector& Direction, int Count, float MaxDistance);
	static struct FCreativeSpaceResult CreativeDetectSpaceAdvanced(class UObject* WorldContextObject, const struct FVector& Source, const struct FVector& Direction, float MaxDistance, float MaxBoxExtent, const struct FCreativeDetectSpaceOptions& Options);
	static struct FCreativeSpaceResult CreativeDetectSpace(class UObject* WorldContextObject, const struct FVector& Source, const struct FVector& Direction, float MaxDistance, float MaxBoxExtent);
	static struct FVector CreativeCalculateSnapLocationFromMeshes(const struct FVector& Curr, TArray<class UMeshComponent*> MeshComponents, const struct FVector& Direction, const struct FVector& HookPoint);
	static struct FVector CreativeCalculateSnapLocation(class AActor* TargetActor, class USceneComponent* TargetComp, const struct FVector& Direction, const struct FVector& HookPoint);
};


// Class Creative.CreativeSceneQueryManager
// 0x0118 (0x0280 - 0x0168)
class UCreativeSceneQueryManager : public UCreativeModeManagerBase
{
public:
	struct FCreativeReplicatedDataContainer            ReplicatedDataContainer;                                  // 0x0168(0x00C8) (Net, Transient)
	TMap<struct FString, struct FCreativeReplicatedObjectsInfo> MapReplicatedObjects;                                     // 0x0230(0x0050) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeSceneQueryManager");
		return pStaticClass;
	}


	void RemoveReplicateObject(const struct FString& InstanceID, class UObject* Object);
	void RemoveReplicateData(const struct FString& InstanceID);
	void OnReceivePreReplicateDataRemove(const struct FString& ID);
	void OnReceivePostReplicateDataChange(const struct FString& ID, TArray<class UObject*> Objects);
	void OnReceivePostReplicateDataAdd(const struct FString& ID, TArray<class UObject*> Objects);
	TArray<class UObject*> GetReplicatedObjects(const struct FString& InstanceID);
	static class UCreativeSceneQueryManager* Get(class UObject* WorldContext);
	void AddReplicateObjectPostDeferred(const struct FString& InstanceID, const struct FTransform& SpawnTransform, class UObject* ReplicatedObject);
	class UObject* AddReplicateObjectDeferred(const struct FString& InstanceID, class UClass* ObjectClass, const struct FString& Name, const struct FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride);
	class UObject* AddReplicateObject(const struct FString& InstanceID, class UClass* ObjectClass, const struct FString& Name, const struct FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride);
};


// Class Creative.CreativeScreenCaptureWidget
// 0x0010 (0x02D8 - 0x02C8)
class UCreativeScreenCaptureWidget : public ULuaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02C8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeScreenCaptureWidget");
		return pStaticClass;
	}


	void OnPanelInitialized();
};


// Class Creative.CreativeModeSoftComponentManager
// 0x0050 (0x01B8 - 0x0168)
class UCreativeModeSoftComponentManager : public UCreativeModeManagerBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0168(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeSoftComponentManager");
		return pStaticClass;
	}


	static class UCreativeModeSoftComponentManager* Get(class UObject* WorldContext);
	void ClearAllLoading();
};


// Class Creative.SoftStaticMeshComponent
// 0x0060 (0x0C30 - 0x0BD0)
class USoftStaticMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0BD0(0x0008) MISSED OFFSET
	unsigned char                                      bOnlyRender : 1;                                          // 0x0BD8(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0BD9(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData02[0x28];                                      // 0x0BD9(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Creative.SoftStaticMeshComponent.SoftStaticMesh
	struct FSoftObjectPath                             SoftStaticMeshPath;                                       // 0x0C08(0x0018)
	unsigned char                                      bAsyncLoad : 1;                                           // 0x0C20(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData03[0xF];                                       // 0x0C21(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.SoftStaticMeshComponent");
		return pStaticClass;
	}


	bool SetSoftStaticMeshAsync(struct FString* NewMeshPath);
	bool SetSoftStaticMesh(class UStaticMesh* NewMesh, bool bSetStaticMesh);
	void SetComponentOnlyRender(bool bOnlyRender);
	void OnClientAsyncLoaded(const struct FSoftObjectPath& SoftObjectPath);
	void LoadSoftStaticMeshImmediately();
	void ClearOverrideMaterials();
};


// Class Creative.CreativeSoftStaticMeshComponent
// 0x0010 (0x0C40 - 0x0C30)
class UCreativeSoftStaticMeshComponent : public USoftStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0C30(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeSoftStaticMeshComponent");
		return pStaticClass;
	}


	bool OnReturnToPool(class UObject* NewOuter, uint32_t RecycledSeq);
	void OnPickFromPool(class UObject* NewOuter, const struct FString& InName);
};


// Class Creative.CreativeSpawnManager
// 0x0000 (0x0168 - 0x0168)
class UCreativeSpawnManager : public UCreativeModeManagerBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeSpawnManager");
		return pStaticClass;
	}


	class AActor* SpawnTower(int ConfigId, const struct FTransform& Transform, int TeamID, int Campid, int ParamsID);
	class AActor* SpawnHumanBot(int ConfigId, const struct FTransform& Transform, int TeamID, int Campid, int ParamsID);
	class AActor* SpawnAIPlayer(int ConfigId, const struct FTransform& Transform, int TeamID, int Campid, int ParamsID);
	void OnUnitSpawned(class AActor* NewUnit, ESpecType SpecType);
	void OnDeadWithCategory(ESpecType Category, class AActor* DeadCharacter);
	void HandleTowerDestroyed(class AActor* DestroyedCharacter, TEnumAsByte<EEndPlayReason> EndPlayReason);
	void HandleMonsterDestroyed(class AActor* DestroyedCharacter, TEnumAsByte<EEndPlayReason> EndPlayReason);
	void HandleHumanBotDestroyed(class AActor* DestroyedCharacter, TEnumAsByte<EEndPlayReason> EndPlayReason);
	void HandleAIPlayerDestroyed(class AActor* DestroyedCharacter, TEnumAsByte<EEndPlayReason> EndPlayReason);
	static class UCreativeSpawnManager* Get(class UObject* WorldContext);
};


// Class Creative.CreativeStaticMeshComponent
// 0x0010 (0x0BE0 - 0x0BD0)
class UCreativeStaticMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0BD0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeStaticMeshComponent");
		return pStaticClass;
	}


	bool OnReturnToPool(class UObject* NewOuter, uint32_t RecycledSeq);
	void OnPickFromPool(class UObject* NewOuter, const struct FString& InName);
};


// Class Creative.CreativeStreamingManager
// 0x0218 (0x0380 - 0x0168)
class UCreativeStreamingManager : public UCreativeModeManagerBase
{
public:
	bool                                               bStreamingManagerEnable;                                  // 0x0168(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bStreamingStateCheckStartup;                              // 0x0169(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseChildThreads;                                         // 0x016A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x016B(0x0001) MISSED OFFSET
	float                                              StreamingTickFrequency;                                   // 0x016C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DestroyExtendDistance;                                    // 0x0170(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DelayDestroyTime;                                         // 0x0174(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              NeedTickStreamingDistanceScale;                           // 0x0178(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               ChildThreadsReduceTickFrequency;                          // 0x017C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2B];                                      // 0x017D(0x002B) MISSED OFFSET
	TMap<struct FString, struct FCreativeModeStreamingParameters> ObjectStreamingStateMap;                                  // 0x01A8(0x0050) (ZeroConstructor, Transient)
	TArray<struct FString>                             ObjectStreamingStateKeyList;                              // 0x01F8(0x0010) (ZeroConstructor, Transient)
	TMap<struct FString, bool>                         ObjectSpawnStateChangeMaps;                               // 0x0208(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0258(0x0050) MISSED OFFSET
	TArray<TWeakObjectPtr<class AActor>>               OuterStreamingSources;                                    // 0x02A8(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0xC8];                                      // 0x02B8(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeStreamingManager");
		return pStaticClass;
	}


	void UnregisterStreamingSource(class AActor* Source);
	bool StreamingManagerEnable();
	bool RemoveStreamingObject(const struct FString& InstanceID);
	void RegisterStreamingSource(class AActor* Source);
	struct FIntVector GetOnGridCellIndex(const struct FString& GridName, const struct FVector& Location);
	float GetGridLoadingRange(const struct FString& GridName);
	TArray<struct FString> GetGridList();
	struct FVector2D GetGridCellWidthHeight(const struct FString& GridName);
	TArray<struct FVector> GetCreativeModeStreamingSourceList();
	static class UCreativeStreamingManager* Get(class UObject* WorldContext);
	ECreativeModeActorStreamingType ChangeStreamingObjectStreamingType(const struct FString& InstanceID, ECreativeModeActorStreamingType NewStremaingType);
	bool AddStreamingObject(const struct FString& InstanceID, const struct FCreativeModeStreamingParameters& StreamingParameters);
};


// Class Creative.CreativeTaskComponent
// 0x00C8 (0x0300 - 0x0238)
class UCreativeTaskComponent : public ULuaActorComponent
{
public:
	struct FCreativeTaskArray                          TaskArray;                                                // 0x0238(0x00C8) (Net)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeTaskComponent");
		return pStaticClass;
	}


	bool UpdateTaskProgress(const struct FString& TaskId, int NewProgress, int idx);
	bool SetTaskVal(const struct FString& TaskId, struct FCreativeTaskViewItem* SetItemValue);
	bool SetTaskStatus(const struct FString& TaskId, ETaskStatus TaskStatusVal);
	bool SetTaskStageReservedField(const struct FString& TaskId, const struct FString& Val);
	bool SetTaskStageIdx(const struct FString& TaskId, int TaskStageIdx);
	bool SetTaskProgressStep(const struct FString& TaskId, const struct FCreativeTaskProgressItem& NewStep, int idx);
	bool SetTaskConditionMet(const struct FString& TaskId, bool bMet, int idx);
	bool SetMaxTaskProgressStep(const struct FString& TaskId, int MaxStep);
	bool RemoveTask(const struct FString& TaskId);
	void RemoveAllTask();
	void ReceiveOnTaskViewRemoved(const struct FCreativeTaskViewItem& TaskViewItem);
	void ReceiveOnTaskViewChanged(const struct FCreativeTaskViewItem& TaskViewItem);
	void ReceiveOnTaskViewAdded(const struct FCreativeTaskViewItem& TaskViewItem);
	void ReceiveAddTask(struct FCreativeTaskViewItem* NewTask);
	struct FCreativeTaskProgressItem MakeDummyProgressStep(const struct FCreativeTaskProgressParams& Params);
	bool IsTaskExists(const struct FString& TaskId);
	bool IsProgressConditionMet(const struct FString& TaskId, int idx);
	bool GetTaskProgress(const struct FString& TaskId, int idx, int* OutCurrent, int* OutMax);
	TArray<struct FCreativeTaskViewItem> GetAllTasks();
	struct FCreativeTaskViewItem FindTaskByID(const struct FString& TaskId);
	bool AddTask(const struct FString& TaskId);
};


// Class Creative.CreativeTimerApiObject
// 0x0058 (0x01E0 - 0x0188)
class UCreativeTimerApiObject : public UCreativeApiObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0188(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeTimerApiObject");
		return pStaticClass;
	}


	void SetMaxQueue(int Num);
	void NotifyTimerDropped(const struct FString& blockId);
	void Clear();
};


// Class Creative.CreativeTriggerAreaActor
// 0x0070 (0x05E0 - 0x0570)
class ACreativeTriggerAreaActor : public ALuaActor
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0570(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeTriggerAreaActor");
		return pStaticClass;
	}


	void OnTakeDamage(class AActor* DamageCauser);
};


// Class Creative.CreativeUMGCanvasPanel
// 0x0058 (0x0188 - 0x0130)
class UCreativeUMGCanvasPanel : public UCanvasPanel
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0130(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeUMGCanvasPanel");
		return pStaticClass;
	}


	bool SwapChildrenByInstanceID(const struct FString& InstanceIDA, const struct FString& InstanceIDB);
	void RequestRecalcZOrder();
	void OnNextFrameRecalcTick();
	void FlushRecalcZOrderNow();
};


// Class Creative.CreativeUMGCanvasWidget
// 0x0008 (0x02D0 - 0x02C8)
class UCreativeUMGCanvasWidget : public ULuaUserWidget
{
public:
	class UCreativeUMGCanvasPanel*                     CanvasPanel_Root;                                         // 0x02C8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeUMGCanvasWidget");
		return pStaticClass;
	}


	bool SwapChildrenByInstanceID(const struct FString& InstanceIDA, const struct FString& InstanceIDB);
	void RequestRecalcZOrder();
	void FlushRecalcZOrderNow();
};


// Class Creative.CreativeWebSocketManager
// 0x0030 (0x0198 - 0x0168)
class UCreativeWebSocketManager : public USTExtraManagerBase
{
public:
	TArray<struct FString>                             SendList;                                                 // 0x0168(0x0010) (ZeroConstructor)
	TArray<struct FString>                             ReceivedList;                                             // 0x0178(0x0010) (ZeroConstructor)
	float                                              LastTickSeconds;                                          // 0x0188(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MessageTickFrequency;                                     // 0x018C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTimerHandle                                TickTimerHandle;                                          // 0x0190(0x0008)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeWebSocketManager");
		return pStaticClass;
	}


	void SendMessage(const struct FString& Message);
	void ReceiveOnPostSetLuaEventBridgeInstance();
	void OnTickTimer();
	void OnReceiveConnected();
	void OnPostSetLuaEventBridgeInstance();
	bool OnMessageSent(const struct FString& Message);
	bool OnMessageReceived(const struct FString& Message);
	bool IsConnected();
	static class UCreativeWebSocketManager* Get(class UObject* WorldContext);
	void ConnectServer(const struct FString& ServerURL, const struct FString& ServerProtocol);
};


// Class Creative.CreativeWidgetComponent
// 0x0000 (0x0B90 - 0x0B90)
class UCreativeWidgetComponent : public UWidgetComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeWidgetComponent");
		return pStaticClass;
	}

};


// Class Creative.CreativeWidgetObject
// 0x0178 (0x01A0 - 0x0028)
class UCreativeWidgetObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x0028(0x0100) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0128(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0138(0x0008) MISSED OFFSET
	TMap<class UObject*, struct FCreativePoolObjectRecordInfo> PoolObjectRecordMap;                                      // 0x0140(0x0050) (ZeroConstructor)
	TArray<class ULiteComponent*>                      LiteComponents;                                           // 0x0190(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeWidgetObject");
		return pStaticClass;
	}


	void UnregisterLiteComponent(class ULiteComponent* Component, bool Destroy);
	void ReturnObjectToPool(class UObject* Obj);
	void ReturnObjectsToPool(TArray<class UObject*> Objs);
	void RegisterLiteComponent(class ULiteComponent* Component);
	void ReceivePostBeginPlay();
	bool ReceiveIsDedicatedServer();
	bool ReceiveHasAuthority();
	void ReceiveEndPlay();
	void ReceiveBeginPlay();
	TArray<class UObject*> GetObjectsFromPool(TArray<struct FCreativePoolGetObjectParamInfo>* ObjectParams);
	class UObject* GetObjectFromPool(int PoolId, class UObject* NewOuter, struct FString* InName);
};


// Class Creative.CreativeWorldSubSystem
// 0x0008 (0x0038 - 0x0030)
class UCreativeWorldSubSystem : public UWorldSubsystem
{
public:
	class AActor*                                      ManagerCenter;                                            // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeWorldSubSystem");
		return pStaticClass;
	}


	class AActor* GetManagerCenter();
};


// Class Creative.CreativeWoWInactiveCheckComponent
// 0x0038 (0x0270 - 0x0238)
class UCreativeWoWInactiveCheckComponent : public ULuaActorComponent
{
public:
	float                                              InactivePlayerKickoutTime;                                // 0x0238(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InactiveCheckGap;                                         // 0x023C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InactiveTimeForTipPreTime;                                // 0x0240(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PreActiveTime;                                            // 0x0244(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ClientSendActiveRPCGap;                                   // 0x0248(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsClientActive;                                          // 0x024C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ESCWOWActiveType                                   CWOWActiveType;                                           // 0x024D(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x024E(0x0002) MISSED OFFSET
	struct FVector                                     PrePawnLoc;                                               // 0x0250(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    PreControllerRotation;                                    // 0x025C(0x000C) (BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0268(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeWoWInactiveCheckComponent");
		return pStaticClass;
	}


	void ServerMarkPlayerActive();
	void MarkPlayerActive();
	void KickOutPlayer();
	void ClientShowKickOutTip(float RemainTime);
	void ClientCachedActiveState();
	bool CheckForMovement();
	void CheckForInactive();
};


// Class Creative.CreativeWoWManager
// 0x0008 (0x0170 - 0x0168)
class UCreativeWoWManager : public UCreativeModeManagerBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0168(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeWoWManager");
		return pStaticClass;
	}


	void ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState);
	void OnGameStateBeginPlay(class AGameStateBase* GameState);
	static class UCreativeWoWManager* Get(class UObject* WorldContext);
};


// Class Creative.CustomAssetUtilityObject
// 0x0088 (0x00B0 - 0x0028)
class UCustomAssetUtilityObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0088(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UCustomAssetManager*                         CustomAssetMgr;                                           // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     LastError;                                                // 0x00A0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CustomAssetUtilityObject");
		return pStaticClass;
	}


	bool SaveArrayToFile(TArray<unsigned char> Content, const struct FString& Filename);
	bool ReceiveIsDedicatedServer();
	class UCustomAssetManager* ReceiveGetCustomAssetMgr();
	void LuaConditionalBeginDestroy();
	TArray<unsigned char> LoadFileToArray(const struct FString& Filename);
	bool IsFileExistsInSaved(const struct FString& Filename);
	void InitUtilityObject(class UCustomAssetManager* CustomAssetManager);
	struct FString GetLastError();
	TArray<struct FString> GetAllFilesInDirectoryRelative(const struct FString& TargetDirectory);
	bool DeleteFileInSaved(const struct FString& Filename);
	TArray<bool> AreFilesExistInSaved(TArray<struct FString> FileNameList);
};


// Class Creative.CustomAssetDeserializer
// 0x0070 (0x0120 - 0x00B0)
class UCustomAssetDeserializer : public UCustomAssetUtilityObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    DeserializeCompletedDelegate;                             // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x50];                                      // 0x00C8(0x0050) MISSED OFFSET
	float                                              DeserializeTimeout;                                       // 0x0118(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x011C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CustomAssetDeserializer");
		return pStaticClass;
	}


	void DeserializeCompletedDelegate__DelegateSignature(class UCustomAssetDeserializer* uDeserializer, class UObject* OutAssetBytes, uint64_t DeserializeSeq);
	void DeserializeCompleted(uint64_t DeserializeSeq, class UObject* OutAsset);
	bool Deserialize(TArray<unsigned char> InBytes, const struct FString& SuffixType, uint64_t DeserializeSeq, class UObject* Outer);
};


// Class Creative.CustomAssetAnimDeserializer
// 0x0000 (0x0120 - 0x0120)
class UCustomAssetAnimDeserializer : public UCustomAssetDeserializer
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CustomAssetAnimDeserializer");
		return pStaticClass;
	}


	bool IsValidData(TArray<unsigned char> InBytes);
};


// Class Creative.CustomAssetRuntimeBodyAnimData
// 0x0100 (0x0128 - 0x0028)
class UCustomAssetRuntimeBodyAnimData : public UObject
{
public:
	class USkeleton*                                   OwnedSkeleton;                                            // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, int>                            BoneIndexMap;                                             // 0x0030(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<struct FName, struct FCustomAssetRuntimeAnimBoneTranslations> BoneTranslations;                                         // 0x0080(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<struct FName, struct FCustomAssetRuntimeAnimBoneRotations> BoneRotations;                                            // 0x00D0(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              AnimSequenceLength;                                       // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0124(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CustomAssetRuntimeBodyAnimData");
		return pStaticClass;
	}

};


// Class Creative.CustomAssetAnimManager
// 0x0000 (0x00B0 - 0x00B0)
class UCustomAssetAnimManager : public UCustomAssetUtilityObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CustomAssetAnimManager");
		return pStaticClass;
	}


	static class UCustomAssetRuntimeBodyAnimData* GetRuntimeBodyAnimData(class UAnimSequence* InAnim, class USkeleton* InSkeleton, class UObject* Outer);
	static TArray<struct FAIGCRuntimeBodyAnimFrameData> ConvertAnimSequenceToBodyAnimData(class UAnimSequence* AnimSequence, int* OutFrameRate);
};


// Class Creative.CustomAssetAudioManager
// 0x0000 (0x00B0 - 0x00B0)
class UCustomAssetAudioManager : public UCustomAssetUtilityObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CustomAssetAudioManager");
		return pStaticClass;
	}


	uint64_t WemCutByAssetKey(uint64_t AssetKey, int StartTime, int EndTime);
	uint32_t SeekOnEvent(class UAkAudioEvent* Event, class AActor* Actor, int in_iPosition, bool bStopWhenOwnerDestroyed, uint64_t AssetKey, uint32_t* PlayingID);
	int AllocateTempAssetKey();
};


// Class Creative.CustomAssetCacheManager
// 0x0000 (0x00B0 - 0x00B0)
class UCustomAssetCacheManager : public UCustomAssetUtilityObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CustomAssetCacheManager");
		return pStaticClass;
	}

};


// Class Creative.CustomAssetDownloader
// 0x0000 (0x00B0 - 0x00B0)
class UCustomAssetDownloader : public UCustomAssetUtilityObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CustomAssetDownloader");
		return pStaticClass;
	}

};


// Class Creative.CustomAssetImageDeserializer
// 0x0000 (0x0120 - 0x0120)
class UCustomAssetImageDeserializer : public UCustomAssetDeserializer
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CustomAssetImageDeserializer");
		return pStaticClass;
	}


	bool IsValidData(TArray<unsigned char> InBytes);
};


// Class Creative.CustomImageDataWrapper
// 0x0058 (0x0080 - 0x0028)
class UCustomImageDataWrapper : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CustomImageDataWrapper");
		return pStaticClass;
	}


	static struct FString MakeUniqueName(class UObject* WorldContextObject);
	static class UObject* GetImageWrapperOuter();
};


// Class Creative.CustomAssetImageManager
// 0x0050 (0x0100 - 0x00B0)
class UCustomAssetImageManager : public UCustomAssetUtilityObject
{
public:
	TMap<uint64_t, class UTexture2D*>                  TextureRef;                                               // 0x00B0(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CustomAssetImageManager");
		return pStaticClass;
	}


	void RemoveTextureRef(uint64_t HashID);
	static TEnumAsByte<EPixelFormat> ReadPixelFormat(class UTexture2D* Target);
	static struct FImageSummary ReadImageSummary(TArray<unsigned char> ImageData);
	static TArray<unsigned char> ReadImageRGBA(TArray<unsigned char> ImageData);
	static void LuaUpdateTextureResource2Png(class UTexture2D* Target, int TexGroup, int Width, int Height, int MipIndex, TArray<unsigned char> TexData);
	static void LuaUpdateTextureResource2(class UTexture2D* Target, int TexGroup, int Width, int Height, int MipIndex, int PixelFormat, TArray<unsigned char> TexData);
	static class UTexture2D* LuaReserveTexture2(int PixelFormat, int TexGroup, class UTexture2D* OtherTex);
	static class UTexture2D* LuaReserveTexture(int PixelFormat, int TexGroup, int Width, int Height);
	static bool IsValidImageSummary(const struct FImageSummary& Summary);
	static bool IsPngImageData(TArray<unsigned char> ImageData);
	static TEnumAsByte<EPixelFormat> GetPixelFormat(int PixelFormat);
	static void GetPixelBlockSize(int PixelFormat, int* SizeX, int* SizeY);
	static struct FString GetObjectPath(class UObject* Object);
	static int GetHeaderSize(TEnumAsByte<EPixelFormat> Format);
	void AddTextureRef(uint64_t HashID, class UTexture2D* Tex);
};


// Class Creative.CustomAssetManager
// 0x00C0 (0x00E8 - 0x0028)
class UCustomAssetManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET
	TMap<struct FString, struct FTrackedCustomAsset>   TrackedCustomAssetMap;                                    // 0x0080(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x00D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CustomAssetManager");
		return pStaticClass;
	}


	void TryBeginPlay();
	bool ReceiveIsDedicatedServer();
	void PrintAliveCustomAssets();
	bool ParseCustomAssetKeyHashID(uint64_t HashID, unsigned char ExpectedHashIDTag, unsigned char* OutCustomAssetType, uint32_t* OutUniqueId);
	uint32_t GetHashByString(const struct FString& CustomAssetKey);
	struct FString GetCustomAssetPathName(class UObject* CustomAsset);
	class UObject* GetCustomAssetOuter();
	class UObject* GetCustomAssetObjectFromTrackedMap(const struct FString& BytesMD5);
	struct FString GetCurPlatformSuffixType();
	uint64_t GenerateHashIDByCustomAssetKey(const struct FString& CustomAssetKey, unsigned char CustomAssetType, unsigned char HashIDTag);
	void CustomAssetMgrConditionalBeginDestroy();
	void CleanupStaleCustomAssets();
	void CleanupAliveCustomAssetObjects();
	void AddCustomAssetObjectToTrackedMap(const struct FString& BytesMD5, class UObject* AssetObject, const struct FString& LoadStack);
};


// Class Creative.CustomAssetMountStateComponent
// 0x0120 (0x0358 - 0x0238)
class UCustomAssetMountStateComponent : public ULuaActorComponent
{
public:
	struct FCustomAssetMountStatusInfoContainer        ReplicatedCustomAssetMountStatusInfoContainer;            // 0x0238(0x00C8) (Net, Transient)
	int                                                SingleSerializeNum;                                       // 0x0300(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0304(0x0004) MISSED OFFSET
	struct FCustomAssetMountStatusInfo                 EntryMountStatusInfo;                                     // 0x0308(0x0050)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CustomAssetMountStateComponent");
		return pStaticClass;
	}


	bool RemoveMountStatusInfo(struct FString* AssetKey);
	bool ReceiveIsDedicatedServer();
	bool ReceiveHasAuthority();
	bool ChangeMountStatusInfo(EMountStatus MountStatus, TArray<uint32_t> MountingPlayerKeys, struct FString* AssetKey);
	bool AddMountStatusInfo(EMountStatus MountStatus, TArray<uint32_t> MountingPlayerKeys, uint32_t MountedByPlayerKey, TArray<unsigned char> MappingInfoContent, struct FString* AssetKey);
};


// Class Creative.CustomAssetPlatformBuilder
// 0x0018 (0x00C8 - 0x00B0)
class UCustomAssetPlatformBuilder : public UCustomAssetUtilityObject
{
public:
	struct FScriptMulticastDelegate                    PlatformBuilderCompletedDelegate;                         // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CustomAssetPlatformBuilder");
		return pStaticClass;
	}


	bool StartBuild(TArray<unsigned char> SourceBytes, uint64_t CurBuildSeq, class UObject* SourceObject);
	void PlatformBuilderCompletedDelegate__DelegateSignature(class UCustomAssetPlatformBuilder* uPlatformBuilder, TArray<struct FPlatformCustomAssetInfo> PlatformCustomAssetInfoList, uint64_t BuilderSeq);
};


// Class Creative.CustomAssetStaticMeshDeserializer
// 0x0000 (0x0120 - 0x0120)
class UCustomAssetStaticMeshDeserializer : public UCustomAssetDeserializer
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CustomAssetStaticMeshDeserializer");
		return pStaticClass;
	}


	bool IsValidData(TArray<unsigned char> InBytes);
};


// Class Creative.CustomAssetUploader
// 0x0000 (0x00B0 - 0x00B0)
class UCustomAssetUploader : public UCustomAssetUtilityObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CustomAssetUploader");
		return pStaticClass;
	}

};


// Class Creative.DancerDeviceActor
// 0x0018 (0x0588 - 0x0570)
class ADancerDeviceActor : public ALuaActor
{
public:
	class APawn*                                       SyncPlayerCharacter;                                      // 0x0570(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        TempAvatarItemIDList;                                     // 0x0578(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.DancerDeviceActor");
		return pStaticClass;
	}


	void OnRep_SyncPlayerCharacter();
};


// Class Creative.DTPacketPool
// 0x0060 (0x0088 - 0x0028)
class UDTPacketPool : public UObject
{
public:
	int16_t                                            BlockSize;                                                // 0x0028(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5E];                                      // 0x002A(0x005E) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.DTPacketPool");
		return pStaticClass;
	}

};


// Class Creative.DataTransferComponent
// 0x0168 (0x03A0 - 0x0238)
class UDataTransferComponent : public ULuaActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnTransferCompleted;                                      // 0x0238(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTransferFailed;                                         // 0x0248(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTransferReceived;                                       // 0x0258(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bUsePacketPool;                                           // 0x0268(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0269(0x0001) MISSED OFFSET
	int16_t                                            PacketSize;                                               // 0x026A(0x0002) (ZeroConstructor, IsPlainOldData)
	int                                                SendBytesPerSecond;                                       // 0x026C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AverageSendBytesPerSecond;                                // 0x0270(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxBurstBytes;                                            // 0x0274(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                InitialSendBudgetBytes;                                   // 0x0278(0x0004) (ZeroConstructor, IsPlainOldData)
	int16_t                                            MaxPacketsPerRound;                                       // 0x027C(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x027E(0x0002) MISSED OFFSET
	float                                              RetransmitTimeout;                                        // 0x0280(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SendInterval;                                             // 0x0284(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CheckTaskInterval;                                        // 0x0288(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeout;                                                  // 0x028C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ReReceiveTimeOut;                                         // 0x0290(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ReuseInterval;                                            // 0x0294(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxPoolSize;                                              // 0x0298(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bAutoCleanupCompletedTasks;                               // 0x029C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6B];                                      // 0x029D(0x006B) MISSED OFFSET
	class UDTPacketPool*                               SendPacketPool;                                           // 0x0308(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x78];                                      // 0x0310(0x0078) MISSED OFFSET
	class UDTPacketPool*                               ReceivePacketPool;                                        // 0x0388(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0390(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.DataTransferComponent");
		return pStaticClass;
	}


	void StartTransfer(const struct FString& FilePath);
	void Server_RequestFile(const struct FString& FilePath);
	void Server_ReceivePacketAck(int16_t TaskId, int16_t Seq);
	void Server_ReceivePacket(const struct FDTPacket& Packet);
	int SendData(TArray<unsigned char> fileData);
	void ReceivePacketAck(int16_t TaskId, int16_t Seq);
	void ReceivePacket(const struct FDTPacket& Packet);
	bool Init();
	void Client_RequestFile(const struct FString& FilePath);
	void Client_ReceivePacketAck(int16_t TaskId, int16_t Seq);
	void Client_ReceivePacket(const struct FDTPacket& Packet);
};


// Class Creative.DSLParser
// 0x0070 (0x0098 - 0x0028)
class UDSLParser : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0028(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.DSLParser");
		return pStaticClass;
	}


	class UDSLParserASTTree* ParseText(const struct FString& Source);
	class UDSLParserASTTree* ParseFile(const struct FString& FilePath);
	bool LoadGrammarFromString(const struct FString& InGrammarText);
	bool LoadGrammarFromFile(const struct FString& FilePath);
	struct FString GetLastError();
	struct FString GetGrammarText();
	TArray<struct FString> GetGrammarRuleNames();
	void ClearGrammar();
	void AddGrammarRule(const struct FString& RuleName, const struct FString& RuleBody);
};


// Class Creative.DSLParserASTTree
// 0x0090 (0x00B8 - 0x0028)
class UDSLParserASTTree : public UObject
{
public:
	bool                                               bValid;                                                   // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FString                                     Error;                                                    // 0x0030(0x0010) (ZeroConstructor)
	struct FString                                     Json;                                                     // 0x0040(0x0010) (ZeroConstructor)
	int                                                RootNodeId;                                               // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	TArray<struct FDSLParserNode>                      Nodes;                                                    // 0x0058(0x0010) (ZeroConstructor)
	TMap<struct FString, int>                          Statements;                                               // 0x0068(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.DSLParserASTTree");
		return pStaticClass;
	}


	struct FString ToJson();
	bool IsValid();
	int GetRootNodeId();
	int GetPropertyNodeId(int NodeId, const struct FString& Key);
	TArray<struct FString> GetPropertyKeys(int NodeId);
	struct FString GetNodeValue(int NodeId);
	struct FString GetNodeName(int NodeId);
	struct FString GetNodeKind(int NodeId);
	int GetNodeCount();
	struct FString GetError();
	TArray<int> GetChildren(int NodeId);
};


// Class Creative.GameModeStateActive_CreativeMode
// 0x0000 (0x00C8 - 0x00C8)
class UGameModeStateActive_CreativeMode : public UGameModeStateActive
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.GameModeStateActive_CreativeMode");
		return pStaticClass;
	}

};


// Class Creative.GameModeStateFighting_CreativeMode
// 0x0000 (0x00D8 - 0x00D8)
class UGameModeStateFighting_CreativeMode : public UGameModeStateFightingTeam
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.GameModeStateFighting_CreativeMode");
		return pStaticClass;
	}


	void SetToInfinityTime();
	void PlayersInfoRecord();
};


// Class Creative.GameModeStateFinished_CreativeMode
// 0x0000 (0x00C0 - 0x00C0)
class UGameModeStateFinished_CreativeMode : public UGameModeStateFinishedTeam
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.GameModeStateFinished_CreativeMode");
		return pStaticClass;
	}

};


// Class Creative.GameModeStateReady_CreativeMode
// 0x0000 (0x0118 - 0x0118)
class UGameModeStateReady_CreativeMode : public UGameModeStateReady
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.GameModeStateReady_CreativeMode");
		return pStaticClass;
	}

};


// Class Creative.GameProcessEventObject
// 0x0000 (0x00F0 - 0x00F0)
class UGameProcessEventObject : public UCreativeEventObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.GameProcessEventObject");
		return pStaticClass;
	}


	void ReceivePostEvent(int ProcessType, int Round);
	void OnEnterPlayProcess();
};


// Class Creative.PaintScoreManager
// 0x0230 (0x07A0 - 0x0570)
class APaintScoreManager : public ALuaActor
{
public:
	float                                              VoxelSize;                                                // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AreaThreshold;                                            // 0x0574(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableDebugLogging;                                      // 0x0578(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0579(0x0003) MISSED OFFSET
	float                                              OwnershipCoverageThreshold;                               // 0x057C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnoccupiedOwnerID;                                        // 0x0580(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReservedOwnerIDStart;                                     // 0x0581(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReservedOwnerIDEnd;                                       // 0x0582(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MaxUserCount;                                             // 0x0583(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      StartingUserID;                                           // 0x0584(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0585(0x0003) MISSED OFFSET
	float                                              DebugColorScale;                                          // 0x0588(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DebugDrawDuration;                                        // 0x058C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DebugLineThickness;                                       // 0x0590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DebugVoxelBoxSize;                                        // 0x0594(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseOctreeForSmallTriangles;                              // 0x0598(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0599(0x0003) MISSED OFFSET
	int                                                OctreeMaxDepth;                                           // 0x059C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OctreeMaxTrianglesPerLeaf;                                // 0x05A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OctreeMinNodeSize;                                        // 0x05A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnablePartialSplit;                                      // 0x05A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x05A9(0x0003) MISSED OFFSET
	float                                              PartialSplitMinArea;                                      // 0x05AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PartialSplitMaxDepth;                                     // 0x05B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x05B4(0x0004) MISSED OFFSET
	TArray<struct FPaintTriangleInfo>                  SmallTriangles;                                           // 0x05B8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData05[0x40];                                      // 0x05C8(0x0040) MISSED OFFSET
	TMap<struct FPaintVoxelCoord, struct FPaintVoxelCell> SparseVoxelHash;                                          // 0x0608(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FPaintVoxelCoord>                    PrecomputedDiskOffsets;                                   // 0x0658(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<unsigned char, float>                         PerUserAreaCache;                                         // 0x0668(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FDeferredPaintOp>                    DeferredOps;                                              // 0x06B8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<struct FString, unsigned char>                UserNameToID;                                             // 0x06C8(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<unsigned char, struct FString>                IDToUserName;                                             // 0x0718(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      NextUserID;                                               // 0x0768(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0769(0x0003) MISSED OFFSET
	float                                              TotalScore;                                               // 0x076C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bInitialized;                                             // 0x0770(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2F];                                      // 0x0771(0x002F) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.PaintScoreManager");
		return pStaticClass;
	}


	struct FPaintVoxelCoord WorldToVoxelBP(const struct FVector& WorldPos);
	struct FVector VoxelToWorldBP(const struct FPaintVoxelCoord& VoxelCoord);
	void UpdateUserAreaCache(int UserId, float AreaDelta);
	bool TriangleIntersectsSphere(int TriangleIndex, const struct FVector& SphereCenter, float SphereRadius);
	void SubdivideOctreeNode(struct FPaintOctreeNode* Node);
	bool SetVoxelCellOwner(const struct FPaintVoxelCoord& VoxelCoord, int UserId);
	bool SetSmallTriangleOwner(int Index, int UserId);
	void SetOctreeRoot(const struct FPaintOctreeNode& NewRoot);
	void Reset();
	void RemoveUserPaint(const struct FString& UserName);
	void QueryOctree(const struct FPaintOctreeNode& Node, const struct FVector& SphereCenter, float SphereRadius, TArray<int>* OutTriangleIndices);
	bool ProjectTriangleTo2D(const struct FVector& A, const struct FVector& B, const struct FVector& C, const struct FVector& SphereCenter, float SphereRadius, struct FVector2D* OutA2D, struct FVector2D* OutB2D, struct FVector2D* OutC2D, struct FVector2D* OutCenter2D, float* OutRadius2D, struct FVector* OutE1, struct FVector* OutE2, struct FVector* OutPlaneOrigin);
	float ProcessVoxelOwnershipTransfer(const struct FPaintVoxelCoord& VoxelCoord, int UserId);
	float ProcessVoxelCellsForPaint(const struct FVector& Center, int UserId);
	void ProcessTriangleWithCoverageMethod(int TriangleIndex, const struct FVector& Center, unsigned char InternalUserID, class UWorld* DebugWorld);
	void ProcessTrianglesWithLinearSearch(const struct FVector& Center, float Radius, unsigned char InternalUserID, class UWorld* DebugWorld);
	float ProcessTriangleOwnershipTransfer(int TriangleIndex, int UserId, float ClippedArea);
	float ProcessSmallTrianglesForPaint(const struct FVector& Center, float Radius, int UserId);
	void ProcessSingleTriangleForPaint(int TriangleIndex, const struct FVector& Center, float Radius, unsigned char InternalUserID, class UWorld* DebugWorld);
	bool PerformTwoPointSplit(int TriangleIndex, const struct FVector& SphereCenter, float SphereRadius, unsigned char NewOwnerID, float* OutTransferredArea);
	bool IntersectSegmentCircle2D(const struct FVector2D& P0, const struct FVector2D& P1, const struct FVector2D& CircleCenter, float Radius, TArray<float>* OutT);
	void InsertTriangleIntoOctree(int TriangleIndex, struct FPaintOctreeNode* Node);
	void Initialize(TArray<struct FVector> Vertices, TArray<int> Indices);
	void InitByNavManager(const struct FBox& Area);
	bool GetVoxelCellInfo(const struct FPaintVoxelCoord& VoxelCoord, struct FPaintVoxelCell* OutCell);
	float GetUserScore(const struct FString& UserName);
	struct FVector GetTriangleCentroid(int TriangleIndex);
	int GetSmallTrianglesCount();
	bool GetSmallTriangleInfo(int Index, struct FPaintTriangleInfo* OutTriangle);
	int GetRegisteredUserCount();
	TArray<struct FPaintVoxelCoord> GetPrecomputedDiskOffsets();
	struct FPaintOctreeNode GetOctreeRoot();
	struct FString GetMemoryUsage();
	void GetAllUserScores(TArray<struct FString>* OutUsers, TArray<float>* OutScores);
	void DrawVoxelCells(unsigned char TargetUserID);
	void DrawSmallTriangles(unsigned char TargetUserID);
	void DebugDrawOccupiedAreasForUserID(unsigned char TargetUserID);
	void DebugDrawOccupiedAreas(const struct FString& UserName);
	float ClipTriangleWithSphere(int TriangleIndex, const struct FVector& SphereCenter);
	float CalculateTriangleVoxelIntersection(const struct FVector& V0, const struct FVector& v1, const struct FVector& v2, const struct FPaintVoxelCoord& VoxelCoord);
	void CalculateSmallTrianglesBounds(struct FVector* OutMin, struct FVector* OutMax);
	void BuildOctree();
	void AddTriangleToPipeline(const struct FVector& A, const struct FVector& B, const struct FVector& C);
	void AddPaint(const struct FVector& Center, const struct FString& UserName);
};


// Class Creative.PlayerListenerEventObject
// 0x0008 (0x00F8 - 0x00F0)
class UPlayerListenerEventObject : public UCreativeEventObject
{
public:
	bool                                               bCppListenerEnable;                                       // 0x00F0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.PlayerListenerEventObject");
		return pStaticClass;
	}


	void OnCppRemovePlayerListener(class UObject* Content, uint32_t PlayerKey);
	void OnCppAddPlayerListener(class UObject* Content, uint32_t PlayerKey);
};


// Class Creative.PlayerAttachedToVehicleEventObject
// 0x0050 (0x0148 - 0x00F8)
class UPlayerAttachedToVehicleEventObject : public UPlayerListenerEventObject
{
public:
	TMap<uint32_t, class UPlayerAttachedProxy*>        LambdaDelegateMap;                                        // 0x00F8(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.PlayerAttachedToVehicleEventObject");
		return pStaticClass;
	}


	void OnOwnerAttachedToVehicle(class ASTExtraVehicleBase* InVehicle, uint32_t PlayerKey);
	void OnCppRemovePlayerListener(class UObject* Content, uint32_t PlayerKey);
	void OnCppAddPlayerListener(class UObject* Content, uint32_t PlayerKey);
};


// Class Creative.PlayerAttachedProxy
// 0x0018 (0x0040 - 0x0028)
class UPlayerAttachedProxy : public UObject
{
public:
	uint32_t                                           PlayerKey;                                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class UPlayerAttachedToVehicleEventObject*         Owner;                                                    // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASTExtraBaseCharacter*                       PlayerCharacter;                                          // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.PlayerAttachedProxy");
		return pStaticClass;
	}


	void OnProxyAttachedToVehicle(class ASTExtraVehicleBase* InVehicle);
};


// Class Creative.ShowAllPlayerManagerActor
// 0x00B0 (0x0620 - 0x0570)
class AShowAllPlayerManagerActor : public ALuaActor
{
public:
	int                                                MapMarkID;                                                // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableRefresh;                                           // 0x0574(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0575(0x0003) MISSED OFFSET
	int                                                BatchNum;                                                 // 0x0578(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurBatchID;                                               // 0x057C(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	int                                                CurBatchNum;                                              // 0x0580(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x24];                                      // 0x0584(0x0024) MISSED OFFSET
	TArray<struct FVector_NetQuantize>                 TeamPosData;                                              // 0x05A8(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData02[0x50];                                      // 0x05B8(0x0050) UNKNOWN PROPERTY: SetProperty Creative.ShowAllPlayerManagerActor.TriggerPlayerKeySet
	TArray<int>                                        MapMarkInstanceIDList;                                    // 0x0608(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0618(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.ShowAllPlayerManagerActor");
		return pStaticClass;
	}


	void TriggerRefresh(class ASTExtraBaseCharacter* Character, bool bEnable);
	void RefreshTeamPoseData();
	void RefreshMapMarkData();
	void OnTeamPosDataChange();
	void OnRep_TeamPosData();
	bool IsCharacterValidForShow(class ASTExtraBaseCharacter* Character);
	void FlushBatchData(int BatchSize, int CurExtraSize);
	void EnableRefresh(bool bEnable);
	void ClearAllMark();
};


}

