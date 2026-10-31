#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:36:05 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlayerController_MainCity.BP_PlayerController_MainCity_C
// 0x04F1 (0x49D1 - 0x44E0)
class ABP_PlayerController_MainCity_C : public ASTExtraPlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x44E0(0x0008) (Transient, DuplicateTransient)
	class UBP_PlayerTransformComponent_C*              BP_PlayerTransformComponent;                              // 0x44E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_TouchSelectComponent_C*                  BP_TouchSelectComponent;                                  // 0x44F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_AutoNav_C*                               BP_AutoNav;                                               // 0x44F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USecurityImprisonComp*                       SecurityImprisonComp;                                     // 0x4500(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStateMachineComponent*                      NewStateMachineCompent;                                   // 0x4508(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UHiggsBosonComponent*                        HiggsBoson;                                               // 0x4510(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_ChangeWearingComp_C*                     BP_ChangeWearingComp;                                     // 0x4518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_GameEventListener_C*                     BP_GameEventListener;                                     // 0x4520(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UGuideComponent_BP_C*                        GuideComponent_BP;                                        // 0x4528(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_ServerSwitcher_C*                        BP_ServerSwitcher;                                        // 0x4530(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USTExtraUnderWaterEffectComp*                STExtraUnderWaterEffectComp;                              // 0x4538(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChatComponent_BP_C*                         ChatComponent_BP;                                         // 0x4540(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GrayToOne_Alpha_4A2C64E7473A417F3253F7AC02706ABA;         // 0x4548(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    GrayToOne__Direction_4A2C64E7473A417F3253F7AC02706ABA;    // 0x454C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x454D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          GrayToOne;                                                // 0x4550(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GrayToZero_Alpha_BBCDB4984A46976D9A0AF087C219C062;        // 0x4558(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    GrayToZero__Direction_BBCDB4984A46976D9A0AF087C219C062;   // 0x455C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x455D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          GrayToZero;                                               // 0x4560(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class APostProcessVolume*                          MainPostProcessVolume;                                    // 0x4568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EPlayerCameraMode>                     LastCameraMode;                                           // 0x4570(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x4571(0x0007) MISSED OFFSET
	class APawn*                                       PrePlayerPawn;                                            // 0x4578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInItemGenerator;                                         // 0x4580(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x4581(0x0003) MISSED OFFSET
	float                                              InItemGeneratorUIRefreshTime;                             // 0x4584(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurInItemGeneratorUIRefreshTime;                          // 0x4588(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x458C(0x0004) MISSED OFFSET
	class UObject*                                     WaitingUI;                                                // 0x4590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     SimulatePlane;                                            // 0x4598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    ReloadingCDStart;                                         // 0x45A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ReloadingCDEnd;                                           // 0x45B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               AlreadyAimed;                                             // 0x45C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x45C1(0x0007) MISSED OFFSET
	class ASTExtraBaseCharacter*                       closedAimTarget_1;                                        // 0x45C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class ASTExtraBaseCharacter*>               CurAimTargets;                                            // 0x45D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              CloseDistance;                                            // 0x45E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDrawDebugTrace>                       AutoAimDrawType;                                          // 0x45E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x45E5(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    AirborneLanded;                                           // 0x45E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              MotionRate_Yaw;                                           // 0x45F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MotionRate_Pitch;                                         // 0x45FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MotionAimRate_Pitch;                                      // 0x4600(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MotionAimRate_Yaw;                                        // 0x4604(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MotionRate_Pitch_Threshold;                               // 0x4608(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MotionRate_Yaw_Threshold;                                 // 0x460C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MotionTouchAimRate_Pitch;                                 // 0x4610(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MotionTouchAimRate_Yaw;                                   // 0x4614(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MotionTouchRate_Yaw;                                      // 0x4618(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MotionTouchRate_Pitch;                                    // 0x461C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDefaultIsAutoAimEnabled;                                 // 0x4620(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DriveWithForwardAxis;                                     // 0x4621(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DriveWithRightAxis;                                       // 0x4622(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInTombBoxGenerator;                                      // 0x4623(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x4624(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    PlayerEnterWater;                                         // 0x4628(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerLeaveWater;                                         // 0x4638(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bindWeapon;                                               // 0x4648(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLandScapeOrientation;                                    // 0x4649(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x464A(0x0002) MISSED OFFSET
	float                                              PitchReverce;                                             // 0x464C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Left;                                                     // 0x4650(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Right;                                                    // 0x4654(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastTime;                                                 // 0x4658(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x465C(0x0004) MISSED OFFSET
	TArray<struct FVector>                             MotionDataStack;                                          // 0x4660(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     CurMotionData;                                            // 0x4670(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x467C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    BindEventToBackpackComponent;                             // 0x4680(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    VaultFailDS;                                              // 0x4690(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TMap<struct FString, struct FUIAdaptationStructure> AdaptationDict;                                           // 0x46A0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FUIAdaptationStructure                      CurDeviceAdaptationOffset;                                // 0x46F0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FUIAdaptationStructure                      CurDeviceAdaptationData;                                  // 0x4710(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bIsJoyStickShow;                                          // 0x4730(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsInitSensibility;                                       // 0x4731(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               _3DTouchSwitcher;                                         // 0x4732(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               adaption;                                                 // 0x4733(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               initAdaptation;                                           // 0x4734(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x4735(0x0003) MISSED OFFSET
	float                                              UITouchMoveX;                                             // 0x4738(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UITouchMoveY;                                             // 0x473C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PressFireFingerIndex;                                     // 0x4740(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsShowFireBtn;                                            // 0x4744(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsThrowGrenade;                                           // 0x4745(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x2];                                       // 0x4746(0x0002) MISSED OFFSET
	int                                                VoiceMemberID;                                            // 0x4748(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                VoiceMemberStatus;                                        // 0x474C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ESurviveWeaponPropSlot>                AttachmentAttachSlot;                                     // 0x4750(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x4751(0x0007) MISSED OFFSET
	struct FItemDefineID                               AttachmentDefineID;                                       // 0x4758(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector2D                                   AutoSprintBtnTouchPos;                                    // 0x4770(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAutoSprintBtnVisible;                                   // 0x4778(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFingerInsideAutoSprintBtn;                              // 0x4779(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsBindJoystickSprint;                                     // 0x477A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ESurviveWeaponPropSlot>                UnequipWeaponType;                                        // 0x477B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsShowInputControl;                                       // 0x477C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x477D(0x0003) MISSED OFFSET
	struct FVector2D                                   AutoNavigateTranslation;                                  // 0x4780(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                InputTeamID;                                              // 0x4788(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                EmoteItemType;                                            // 0x478C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLongPressSideSwitch;                                     // 0x4790(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLongPressSniperSwitch;                                   // 0x4791(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x2];                                       // 0x4792(0x0002) MISSED OFFSET
	struct FVector2D                                   AimBtnPos;                                                // 0x4794(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   AimBtnSize;                                               // 0x479C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                PeekMode;                                                 // 0x47A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AimMode;                                                  // 0x47A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x47AC(0x0004) MISSED OFFSET
	TMap<int, int>                                     EmoteItemIDToBPIDMap;                                     // 0x47B0(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int, struct FString>                          EmoteBPIDToHandlePath;                                    // 0x4800(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int, struct FString>                          EmoteItemIDToImagePathMap;                                // 0x4850(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int, struct FString>                          EmoteItemIDToImageBattlePathMap;                          // 0x48A0(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bAlwaysHideTouchInterface;                                // 0x48F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x48F1(0x0007) MISSED OFFSET
	TMap<int, class UAkAudioEvent*>                    BattleSoundMap;                                           // 0x48F8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, struct FString>                          BattleBankMap;                                            // 0x4948(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                GameMode;                                                 // 0x4998(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                currentColorBlindnessType;                                // 0x499C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CurrentHitEffectIndex;                                    // 0x49A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentHurtEffectIndex;                                   // 0x49A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    CurControllerRotation;                                    // 0x49A8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCurExitJump;                                            // 0x49B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStopDownloadAvatar;                                      // 0x49B5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x2];                                       // 0x49B6(0x0002) MISSED OFFSET
	int                                                ShoulderMode;                                             // 0x49B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x4];                                       // 0x49BC(0x0004) MISSED OFFSET
	TArray<int>                                        EmoteIDArray;                                             // 0x49C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bUseNewMotionInput;                                       // 0x49D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_PlayerController_MainCity.BP_PlayerController_MainCity_C");
		return pStaticClass;
	}


	void __FeatureRPC_InteractEmotePCFeature_ClientStopReqInteractEmote__(class UObject* __FeatureRPC_InteractEmotePCFeature_ClientStopReqInteractEmote___param1, int __FeatureRPC_InteractEmotePCFeature_ClientStopReqInteractEmote___param2);
	void __FeatureRPC_InteractEmotePCFeature_ClientRecResponseInteractEmoteResponse__(class UObject* __FeatureRPC_InteractEmotePCFeature_ClientRecResponseInteractEmoteResponse___param1, int __FeatureRPC_InteractEmotePCFeature_ClientRecResponseInteractEmoteResponse___param2, int __FeatureRPC_InteractEmotePCFeature_ClientRecResponseInteractEmoteResponse___param3);
	void __FeatureRPC_InteractEmotePCFeature_ClientRecInteractEmoteReq__(class UObject* __FeatureRPC_InteractEmotePCFeature_ClientRecInteractEmoteReq___param1, int __FeatureRPC_InteractEmotePCFeature_ClientRecInteractEmoteReq___param2);
	void __FeatureRPC_HeroPropFeature_RPC_Client_AutoSelectSkill__(int __FeatureRPC_HeroPropFeature_RPC_Client_AutoSelectSkill___param1);
	void __FeatureRPC_DebugFakePawnPCFeature_ClientRPC_SimPosRsp__(int64_t __FeatureRPC_DebugFakePawnPCFeature_ClientRPC_SimPosRsp___param1, float __FeatureRPC_DebugFakePawnPCFeature_ClientRPC_SimPosRsp___param2, float __FeatureRPC_DebugFakePawnPCFeature_ClientRPC_SimPosRsp___param3, float __FeatureRPC_DebugFakePawnPCFeature_ClientRPC_SimPosRsp___param4);
	void __FeatureRPC_DebugFakePawnPCFeature_ClientRPC_PosRsp__(float __FeatureRPC_DebugFakePawnPCFeature_ClientRPC_PosRsp___param1, float __FeatureRPC_DebugFakePawnPCFeature_ClientRPC_PosRsp___param2, float __FeatureRPC_DebugFakePawnPCFeature_ClientRPC_PosRsp___param3);
	void __FeatureRPC_InteractEmotePCFeature_ServerStopReqInteractEmote__(int __FeatureRPC_InteractEmotePCFeature_ServerStopReqInteractEmote___param1);
	void __FeatureRPC_InteractEmotePCFeature_ServerResponseInteractEmoteReq__(class UObject* __FeatureRPC_InteractEmotePCFeature_ServerResponseInteractEmoteReq___param1, int __FeatureRPC_InteractEmotePCFeature_ServerResponseInteractEmoteReq___param2, int __FeatureRPC_InteractEmotePCFeature_ServerResponseInteractEmoteReq___param3);
	void __FeatureRPC_InteractEmotePCFeature_ServerReqPlayInteractEmote__(class UObject* __FeatureRPC_InteractEmotePCFeature_ServerReqPlayInteractEmote___param1, int __FeatureRPC_InteractEmotePCFeature_ServerReqPlayInteractEmote___param2, int __FeatureRPC_InteractEmotePCFeature_ServerReqPlayInteractEmote___param3, int __FeatureRPC_InteractEmotePCFeature_ServerReqPlayInteractEmote___param4);
	void __FeatureRPC_InteractEmotePCFeature_ServerFinishEmote__(class UObject* __FeatureRPC_InteractEmotePCFeature_ServerFinishEmote___param1, int __FeatureRPC_InteractEmotePCFeature_ServerFinishEmote___param2);
	void __FeatureRPC_HeroPropFeature_RPC_Server_SetRollSkillInfo__(int __FeatureRPC_HeroPropFeature_RPC_Server_SetRollSkillInfo___param1);
	void __FeatureRPC_DebugFakePawnPCFeature_ServerRPC_PosReq__();
	void RPC_ClientHUDDisplayHitDamage(int RPC_ClientHUDDisplayHitDamage_param1, bool RPC_ClientHUDDisplayHitDamage_param2);
	void RPC_Client_WonderfulPeriod(int RPC_Client_WonderfulPeriod_param1, float RPC_Client_WonderfulPeriod_param2, float RPC_Client_WonderfulPeriod_param3, TArray<float> RPC_Client_WonderfulPeriod_param4, int RPC_Client_WonderfulPeriod_param5, float RPC_Client_WonderfulPeriod_param6, bool RPC_Client_WonderfulPeriod_param7, TArray<struct FWonderfulSubTypeInfo> RPC_Client_WonderfulPeriod_param8);
	void RPC_Client_ShowBattleGMOutputText(const struct FString& StrProperty_24);
	void RPC_Client_PostTGPAIS(int RPC_Client_PostTGPAIS_param1, const struct FString& StrProperty_23);
	void RPC_Client_PopupAFKWindow(bool RPC_Client_PopupAFKWindow_param1, bool RPC_Client_PopupAFKWindow_param2);
	void RPC_Client_NotifyUseShareSkin(int RPC_Client_NotifyUseShareSkin_param1);
	void RPC_Client_MarkShoot(class AActor* RPC_Client_MarkShoot_param1, class AActor* RPC_Client_MarkShoot_param2);
	void RPC_Client_MaliciousTeammateVictimReceiveTips(const struct FString& StrProperty_22, bool RPC_Client_MaliciousTeammateVictimReceiveTips_param2, int RPC_Client_MaliciousTeammateVictimReceiveTips_param3);
	void RPC_Client_MaliciousTeammateReceiveWarningTips();
	void Client_GenericRPC(int Client_GenericRPC_param1, TArray<unsigned char> Client_GenericRPC_param2);
	void __FeatureRPC_SecurityNotifyPCFeature_ClientRPC_WeakTips__(const struct FString& StrProperty_21);
	void __FeatureRPC_SecurityNotifyPCFeature_ClientRPC_SyncBanID__(int __FeatureRPC_SecurityNotifyPCFeature_ClientRPC_SyncBanID___param1, int __FeatureRPC_SecurityNotifyPCFeature_ClientRPC_SyncBanID___param2);
	void __FeatureRPC_SecurityNotifyPCFeature_ClientRPC_StrongTips__(const struct FString& StrProperty_20);
	void __FeatureRPC_SecurityNotifyPCFeature_ClientRPC_NormalTips__(const struct FString& StrProperty_19);
	void __FeatureRPC_PlayerControllerFatalDamageFeature_RPC_Client_BroadcastFatalDamageToClientForLua__(const struct FFatalDamageParameterCompress& __FeatureRPC_PlayerControllerFatalDamageFeature_RPC_Client_BroadcastFatalDamageToClientForLua___param1);
	void __FeatureRPC_OncePerGameAkEventFeature_RPC_Client_PlayAkEvent__(const struct FString& StrProperty_18);
	void __FeatureRPC_NewbieAssistFeature_RPC_Client_RescueOtherSuccessfully__(uint32_t __FeatureRPC_NewbieAssistFeature_RPC_Client_RescueOtherSuccessfully___param1);
	void __FeatureRPC_IngameLikeFeature_RPC_Client_TriggerWatchLike__(uint32_t __FeatureRPC_IngameLikeFeature_RPC_Client_TriggerWatchLike___param1, int __FeatureRPC_IngameLikeFeature_RPC_Client_TriggerWatchLike___param2, uint64_t __FeatureRPC_IngameLikeFeature_RPC_Client_TriggerWatchLike___param3, int __FeatureRPC_IngameLikeFeature_RPC_Client_TriggerWatchLike___param4, const struct FString& StrProperty_17);
	void __FeatureRPC_IngameLikeFeature_RPC_Client_TriggerLike__(uint32_t __FeatureRPC_IngameLikeFeature_RPC_Client_TriggerLike___param1, int __FeatureRPC_IngameLikeFeature_RPC_Client_TriggerLike___param2, uint64_t __FeatureRPC_IngameLikeFeature_RPC_Client_TriggerLike___param3, int __FeatureRPC_IngameLikeFeature_RPC_Client_TriggerLike___param4);
	void __FeatureRPC_IngameLikeFeature_RPC_Client_ShowOff__(int __FeatureRPC_IngameLikeFeature_RPC_Client_ShowOff___param1);
	void __FeatureRPC_IngameLikeFeature_RPC_Client_RPGiveNotify__(uint32_t __FeatureRPC_IngameLikeFeature_RPC_Client_RPGiveNotify___param1, int __FeatureRPC_IngameLikeFeature_RPC_Client_RPGiveNotify___param2, int __FeatureRPC_IngameLikeFeature_RPC_Client_RPGiveNotify___param3, const struct FString& StrProperty_15, const struct FString& StrProperty_16, bool __FeatureRPC_IngameLikeFeature_RPC_Client_RPGiveNotify___param6, bool __FeatureRPC_IngameLikeFeature_RPC_Client_RPGiveNotify___param7);
	void __FeatureRPC_IngameLikeFeature_RPC_Client_RecieveLike__(uint64_t __FeatureRPC_IngameLikeFeature_RPC_Client_RecieveLike___param1, int __FeatureRPC_IngameLikeFeature_RPC_Client_RecieveLike___param2);
	void __FeatureRPC_IngameLikeFeature_RPC_Client_LikeProgress__(int __FeatureRPC_IngameLikeFeature_RPC_Client_LikeProgress___param1);
	void __FeatureRPC_IngameLikeFeature_RPC_Client_KillNumChange__(const struct FString& StrProperty_14);
	void __FeatureRPC_IngameLikeFeature_RPC_Client_HideLike__(int __FeatureRPC_IngameLikeFeature_RPC_Client_HideLike___param1);
	void __FeatureRPC_CommerFeature_RPCClient_XSuitIconRsp__(bool __FeatureRPC_CommerFeature_RPCClient_XSuitIconRsp___param1, int __FeatureRPC_CommerFeature_RPCClient_XSuitIconRsp___param2);
	void __FeatureRPC_CommerFeature_RPCClient_TeamShowPetEnlargeDataRsp__(const struct FString& StrProperty_13);
	void __FeatureRPC_CommerFeature_RPCClient_TeamShowPetEffectRsp__(const struct FString& StrProperty_12);
	void __FeatureRPC_CommerFeature_RPCClient_TeamShowMiniTvDataRsp__(const struct FString& StrProperty_11);
	void __FeatureRPC_CommerFeature_RPCClient_CollectScoreRsp__(bool __FeatureRPC_CommerFeature_RPCClient_CollectScoreRsp___param1, const struct FString& StrProperty_10, int __FeatureRPC_CommerFeature_RPCClient_CollectScoreRsp___param3, int __FeatureRPC_CommerFeature_RPCClient_CollectScoreRsp___param4, bool __FeatureRPC_CommerFeature_RPCClient_CollectScoreRsp___param5);
	void __FeatureRPC_CommerFeature_RPCClient_AliasEnterBroadcastRsp__(int __FeatureRPC_CommerFeature_RPCClient_AliasEnterBroadcastRsp___param1, int __FeatureRPC_CommerFeature_RPCClient_AliasEnterBroadcastRsp___param2, const struct FString& StrProperty_9, int __FeatureRPC_CommerFeature_RPCClient_AliasEnterBroadcastRsp___param4);
	void Server_GenericRPC(int Server_GenericRPC_param1, TArray<unsigned char> Server_GenericRPC_param2);
	void RPC_Server_SetPetRandomAnimDisable(bool RPC_Server_SetPetRandomAnimDisable_param1);
	void RPC_Server_SetGameReadyCountDown(int RPC_Server_SetGameReadyCountDown_param1);
	void RPC_Server_SetAutoUseMelee(bool RPC_Server_SetAutoUseMelee_param1);
	void RPC_Server_ReqUseShareSkin();
	void RPC_Server_RealUseShareSkin();
	void RPC_Server_PlaySpecifiedPetAnimation(int RPC_Server_PlaySpecifiedPetAnimation_param1, float RPC_Server_PlaySpecifiedPetAnimation_param2, int RPC_Server_PlaySpecifiedPetAnimation_param3, bool RPC_Server_PlaySpecifiedPetAnimation_param4, bool RPC_Server_PlaySpecifiedPetAnimation_param5);
	void __FeatureRPC_NewbieAssistFeature_RPC_Server_StartNewbieAssistDSSubSystem__();
	void __FeatureRPC_MLAIVoiceFeature_RPC_Server_SendRSTSSubtitleText__(const struct FString& StrProperty_7, float __FeatureRPC_MLAIVoiceFeature_RPC_Server_SendRSTSSubtitleText___param2, float __FeatureRPC_MLAIVoiceFeature_RPC_Server_SendRSTSSubtitleText___param3, const struct FString& StrProperty_8);
	void __FeatureRPC_MLAIVoiceFeature_RPC_Server_SendAIVoiceTLog__(uint64_t __FeatureRPC_MLAIVoiceFeature_RPC_Server_SendAIVoiceTLog___param1, const struct FString& StrProperty_5, const struct FString& StrProperty_6);
	void __FeatureRPC_IngameLikeFeature_RPC_Server_ShowOff__(int __FeatureRPC_IngameLikeFeature_RPC_Server_ShowOff___param1);
	void __FeatureRPC_IngameLikeFeature_RPC_Server_RPGive__(uint32_t __FeatureRPC_IngameLikeFeature_RPC_Server_RPGive___param1, int __FeatureRPC_IngameLikeFeature_RPC_Server_RPGive___param2, int __FeatureRPC_IngameLikeFeature_RPC_Server_RPGive___param3, const struct FString& StrProperty_3, const struct FString& StrProperty_4, bool __FeatureRPC_IngameLikeFeature_RPC_Server_RPGive___param6, bool __FeatureRPC_IngameLikeFeature_RPC_Server_RPGive___param7);
	void __FeatureRPC_IngameLikeFeature_RPC_Server_RespondLike__(uint64_t __FeatureRPC_IngameLikeFeature_RPC_Server_RespondLike___param1, int __FeatureRPC_IngameLikeFeature_RPC_Server_RespondLike___param2);
	void __FeatureRPC_IngameLikeFeature_RPC_Server_LikeSwitch__(int __FeatureRPC_IngameLikeFeature_RPC_Server_LikeSwitch___param1);
	void __FeatureRPC_IngameLikeFeature_RPC_Server_Like__(uint32_t __FeatureRPC_IngameLikeFeature_RPC_Server_Like___param1, int __FeatureRPC_IngameLikeFeature_RPC_Server_Like___param2);
	void __FeatureRPC_IngameLikeFeature_RPC_Server_ClientReady__(uint32_t __FeatureRPC_IngameLikeFeature_RPC_Server_ClientReady___param1, int __FeatureRPC_IngameLikeFeature_RPC_Server_ClientReady___param2);
	void __FeatureRPC_IngameLikeFeature_RPC_Server_ClientEnterCircle__(uint32_t __FeatureRPC_IngameLikeFeature_RPC_Server_ClientEnterCircle___param1, int __FeatureRPC_IngameLikeFeature_RPC_Server_ClientEnterCircle___param2, int __FeatureRPC_IngameLikeFeature_RPC_Server_ClientEnterCircle___param3);
	void __FeatureRPC_CommerFeature_RPCServer_XSuitIconReq__(const struct FString& StrProperty_2);
	void __FeatureRPC_CommerFeature_RPCServer_CollectScoreReq__(const struct FString& StrProperty_1);
	void __FeatureRPC_CommerFeature_RPCServer_AliasEnterBroadcastReq__();
	void RPC_Multicast_OnCreateDecal(int RPC_Multicast_OnCreateDecal_param1);
	void PostOnShowTouchInterface(bool bShow);
	void NotCanShowTouchInterfaceHandle(bool* NotCanShow);
	void ReadAutoEquipMelleeConfig(bool NewParam);
	void TriggerInputAction(const struct FKey& Key);
	void SwitchFreeViewInOB();
	void SwitchToTeammate(int TeammateIdx);
	void LuaShouldShowTouchInterface(bool bShow, bool* ShouldShow);
	void CreateTouchComp();
	void ReadSceenMoveXAdd(bool SceenMoveXAdd);
	void ReadClientReplayConfig();
	void MapFromCBToESBH(class USettingConfig_C* SettingConfig);
	void ReceiveLuaTick();
	void ReceiveLuaBeginPlay();
	void StopAvatarDownload();
	void SetMultiVersionRedSwitchConfig();
	void MapFromCBToESGlobal(class USettingConfig_C* SettingConfig);
	void MapFromCBToESVN(class USettingConfig_C* SettingConfig);
	void MapFromCBToESJK(class USettingConfig_C* SettingConfig);
	void MapFromCBToES();
	void ReadConfigEffectSettingColorSingleLayer(int NewParam);
	void ReadConfigEffectSettingColorMultiLayer(int NewParam);
	void InitNewbieCounts();
	void AddIgnoreCameraMoveIndex(TEnumAsByte<ETouchIndex> _Index);
	void ReadConfigColorBlindnessTypeBoolDelegate(bool NewParam);
	void ReadConfigColorBlindnessTypeIntDelegate(int NewParam);
	void CheckGlobalReadRed(const struct FString& StrID, bool* bIsRed);
	void CheckIsBood(const struct FString& StrID, bool* bIsBlood);
	void CheckJapnReadRed(const struct FString& StrID, bool* bIsRed);
	void GetJKCBColor(const struct FString& ID, bool* bFind, struct FLinearColor* Color);
	void GetVNCBColor(const struct FString& ID, bool* bFind, struct FLinearColor* Color);
	void GetCBColor(const struct FBP_STRUCT_ColorBlindnessConfig_type& tempCBData, struct FLinearColor* Color);
	void ReadConfigColorBlindnessType();
	void CurGameMode(int* GameMode);
	void IsFPP(bool* IsFPP);
	void OnRep_InWateringRange();
	void LoadAllBattleSound();
	void AsyncLoadBattleSound(class UObject* Object, int SoundID);
	void LoadBattleSound(const struct FString& BankName, const struct FString& EventName, int SoundID);
	void SetAlwaysHideTouchInterface(bool Hide);
	void PlayBattleSoundInBP(int SoundID);
	bool IsReleasePosInAimBtnRange(struct FVector* Loc);
	void ReadEmoteDataRowPC();
	void IsAtaptation(bool* adaptation);
	void ReadAdaptationTable();
	void InitWeather();
	void SetMotionParam();
	void GetStickLeftSize(struct FVector2D* Size);
	void ShowFightingUI();
	void ShowAutoSprintBtn(bool Visible, const struct FVector2D& showPos_, bool inside);
	void ReadConfigCrossHairColor(int NewParam);
	void ReadConfigMotionControl(int NewParam);
	void ReadConfigAutoAim(bool NewParam);
	void ReadConfigFromHUD();
	void DebugNotDrawGuideLine();
	void BindOrUnBindJoyStickSprint(bool IsBind);
	void SwitchAimMode();
	void HandleJumpBtnPressEvent();
	void OnRep_bInCar();
	void RefreshUI(float DeltaTime);
	void UpdateInputPanel();
	void RefreshWeaponPanel();
	void SetTouchInputEnabled(bool bEnabled);
	void ShowMainInputControl(bool bShow);
	void ShowTouchInterface(bool bShow);
	void EnableDeathGray(float BlendWeight);
	void SetDeathGrayLerpValue(float Lerp);
	void SetPostProcessVolume();
	void UserConstructionScript();
	void GrayToOne__FinishedFunc();
	void GrayToOne__UpdateFunc();
	void GrayToZero__FinishedFunc();
	void GrayToZero__UpdateFunc();
	void InpActEvt_PCSetMouseCursor_K2Node_InputActionEvent_174(const struct FKey& Key);
	void InpActEvt_PCFire_K2Node_InputActionEvent_173(const struct FKey& Key);
	void InpActEvt_PCFire_K2Node_InputActionEvent_172(const struct FKey& Key);
	void InpActEvt_PCAim_K2Node_InputActionEvent_171(const struct FKey& Key);
	void InpActEvt_PCAim_K2Node_InputActionEvent_170(const struct FKey& Key);
	void InpActEvt_PCSwitchWeaponShootType_K2Node_InputActionEvent_169(const struct FKey& Key);
	void InpActEvt_PCChangeThrowMode_K2Node_InputActionEvent_168(const struct FKey& Key);
	void InpActEvt_PCFreeCamera_K2Node_InputActionEvent_167(const struct FKey& Key);
	void InpActEvt_PCFreeCamera_K2Node_InputActionEvent_166(const struct FKey& Key);
	void InpActEvt_PCEntireMapZoomIn_K2Node_InputActionEvent_165(const struct FKey& Key);
	void InpActEvt_PCEntireMapZoomOut_K2Node_InputActionEvent_164(const struct FKey& Key);
	void InpActEvt_PCReload_K2Node_InputActionEvent_163(const struct FKey& Key);
	void InpActEvt_PCProne_K2Node_InputActionEvent_162(const struct FKey& Key);
	void InpActEvt_PCSwitchPMode_K2Node_InputActionEvent_161(const struct FKey& Key);
	void InpActEvt_PCAutoSprint_K2Node_InputActionEvent_160(const struct FKey& Key);
	void InpActEvt_PCCrouch_K2Node_InputActionEvent_159(const struct FKey& Key);
	void InpActEvt_PCSelectNextWeapon_K2Node_InputActionEvent_158(const struct FKey& Key);
	void InpActEvt_PCSelectPreWeapon_K2Node_InputActionEvent_157(const struct FKey& Key);
	void InpActEvt_PCSetTeamSpeaker_K2Node_InputActionEvent_156(const struct FKey& Key);
	void InpActEvt_PCSetTeamMicphone_K2Node_InputActionEvent_155(const struct FKey& Key);
	void InpActEvt_PCSelectGrenade_K2Node_InputActionEvent_154(const struct FKey& Key);
	void InpActEvt_PCSelectSmokeGrenade_K2Node_InputActionEvent_153(const struct FKey& Key);
	void InpActEvt_PCSelectMedKit_K2Node_InputActionEvent_152(const struct FKey& Key);
	void InpActEvt_PCSelectMolotovCocktailOrStunGrenade_K2Node_InputActionEvent_151(const struct FKey& Key);
	void InpActEvt_PCSelectFirstAidKit_K2Node_InputActionEvent_150(const struct FKey& Key);
	void InpActEvt_PCSelectBandages_K2Node_InputActionEvent_149(const struct FKey& Key);
	void InpActEvt_PCSelectEnergyDrink_K2Node_InputActionEvent_148(const struct FKey& Key);
	void InpActEvt_PCSelectMelee_K2Node_InputActionEvent_147(const struct FKey& Key);
	void InpActEvt_PCCancelThrow_K2Node_InputActionEvent_146(const struct FKey& Key);
	void InpActEvt_PCVault_K2Node_InputActionEvent_145(const struct FKey& Key);
	void InpActEvt_PCVault_K2Node_InputActionEvent_144(const struct FKey& Key);
	void InpActEvt_PCSprint_K2Node_InputActionEvent_143(const struct FKey& Key);
	void InpActEvt_PCSprint_K2Node_InputActionEvent_142(const struct FKey& Key);
	void InpActEvt_PCCloseUI_K2Node_InputActionEvent_141(const struct FKey& Key);
	void InpActEvt_PCChangeSeat_K2Node_InputActionEvent_140(const struct FKey& Key);
	void InpActEvt_PCChangeSeat_K2Node_InputActionEvent_139(const struct FKey& Key);
	void InpActEvt_PCExitVehicle_K2Node_InputActionEvent_138(const struct FKey& Key);
	void InpActEvt_PCBasicSkill1_K2Node_InputActionEvent_137(const struct FKey& Key);
	void InpActEvt_PCBasicSkill1_K2Node_InputActionEvent_136(const struct FKey& Key);
	void InpActEvt_PCBasicSkill2_K2Node_InputActionEvent_135(const struct FKey& Key);
	void InpActEvt_PCBasicSkill2_K2Node_InputActionEvent_134(const struct FKey& Key);
	void InpActEvt_PCBasicSkill3_K2Node_InputActionEvent_133(const struct FKey& Key);
	void InpActEvt_PCBasicSkill3_K2Node_InputActionEvent_132(const struct FKey& Key);
	void InpActEvt_PCVehicleForward_K2Node_InputActionEvent_131(const struct FKey& Key);
	void InpActEvt_PCVehicleForward_K2Node_InputActionEvent_130(const struct FKey& Key);
	void InpActEvt_PCVehicleBackward_K2Node_InputActionEvent_129(const struct FKey& Key);
	void InpActEvt_PCVehicleBackward_K2Node_InputActionEvent_128(const struct FKey& Key);
	void InpActEvt_PCVehicleTurnLeft_K2Node_InputActionEvent_127(const struct FKey& Key);
	void InpActEvt_PCVehicleTurnLeft_K2Node_InputActionEvent_126(const struct FKey& Key);
	void InpActEvt_PCVehicleTurnRight_K2Node_InputActionEvent_125(const struct FKey& Key);
	void InpActEvt_PCVehicleTurnRight_K2Node_InputActionEvent_124(const struct FKey& Key);
	void InpActEvt_PCVehicleControl_K2Node_InputActionEvent_123(const struct FKey& Key);
	void InpActEvt_PCVehicleControl_K2Node_InputActionEvent_122(const struct FKey& Key);
	void InpActEvt_PCAircraftThrust_K2Node_InputActionEvent_121(const struct FKey& Key);
	void InpActEvt_PCAircraftThrust_K2Node_InputActionEvent_120(const struct FKey& Key);
	void InpActEvt_PCAircraftThrustBackward_K2Node_InputActionEvent_119(const struct FKey& Key);
	void InpActEvt_PCAircraftThrustBackward_K2Node_InputActionEvent_118(const struct FKey& Key);
	void InpActEvt_SwitchToTeam_PostTeamID_K2Node_InputActionEvent_117(const struct FKey& Key);
	void InpActEvt_SwitchToTeam_ClearTeamID_K2Node_InputActionEvent_116(const struct FKey& Key);
	void InpActEvt_SwitchToTeam_DelOneNum_K2Node_InputActionEvent_115(const struct FKey& Key);
	void InpActEvt_ToggleTeamListPanel_K2Node_InputActionEvent_114(const struct FKey& Key);
	void InpActEvt_ToggleTeamListPanel_K2Node_InputActionEvent_113(const struct FKey& Key);
	void InpActEvt_OBSkipOverPanel_K2Node_InputActionEvent_112(const struct FKey& Key);
	void InpActEvt_SwitchToTeammate1_K2Node_InputActionEvent_111(const struct FKey& Key);
	void InpActEvt_SwitchToTeammate2_K2Node_InputActionEvent_110(const struct FKey& Key);
	void InpActEvt_SwitchToTeammate3_K2Node_InputActionEvent_109(const struct FKey& Key);
	void InpActEvt_SwitchToTeammate4_K2Node_InputActionEvent_108(const struct FKey& Key);
	void InpActEvt_OBSwitchFreeView_K2Node_InputActionEvent_107(const struct FKey& Key);
	void InpActEvt_PCSwimup_K2Node_InputActionEvent_106(const struct FKey& Key);
	void InpActEvt_PCSwimup_K2Node_InputActionEvent_105(const struct FKey& Key);
	void InpActEvt_PCPeekRight_K2Node_InputActionEvent_104(const struct FKey& Key);
	void InpActEvt_PCPeekRight_K2Node_InputActionEvent_103(const struct FKey& Key);
	void InpActEvt_PCPeekLeft_K2Node_InputActionEvent_102(const struct FKey& Key);
	void InpActEvt_PCPeekLeft_K2Node_InputActionEvent_101(const struct FKey& Key);
	void InpActEvt_PCChangeSight_K2Node_InputActionEvent_100(const struct FKey& Key);
	void InpActEvt_PCChangeSight_K2Node_InputActionEvent_99(const struct FKey& Key);
	void InpActEvt_PCQuickSign_K2Node_InputActionEvent_98(const struct FKey& Key);
	void InpActEvt_PCSelectWeapon3_K2Node_InputActionEvent_97(const struct FKey& Key);
	void InpActEvt_PCSelectWeapon2_K2Node_InputActionEvent_96(const struct FKey& Key);
	void InpActEvt_PCSelectWeapon1_K2Node_InputActionEvent_95(const struct FKey& Key);
	void InpActEvt_PCQuickChatMenu_K2Node_InputActionEvent_94(const struct FKey& Key);
	void InpActEvt_PCBackPack_K2Node_InputActionEvent_93(const struct FKey& Key);
	void InpActEvt_PCEntireMap_K2Node_InputActionEvent_92(const struct FKey& Key);
	void InpActEvt_PCSwimDown_K2Node_InputActionEvent_91(const struct FKey& Key);
	void InpActEvt_PCSwimDown_K2Node_InputActionEvent_90(const struct FKey& Key);
	void InpActEvt_GoBack_K2Node_InputActionEvent_89(const struct FKey& Key);
	void InpActEvt_PCOBViewAttacker_K2Node_InputActionEvent_88(const struct FKey& Key);
	void OnShowAnimationButton(bool* IsShow, int* NewUIType);
	void OnCharacterCurrentActivityIDRep(int* CurrentActivityID);
	void ReceiveBeginPlay();
	void OnSpectatorCameraChange(bool* bDie);
	void OnStopFireEventHandle();
	void OnSwitchCameraSatrtHandle(TEnumAsByte<EPlayerCameraMode> CameraMode);
	void OnPlayerPutDownActorHandle(class ASTExtraBaseCharacter* TargetPlayer, class AActor* TargetActor);
	void OnSwitchWeaponHandle();
	void ReceiveTick(float* DeltaSeconds);
	void OnUseInventoryitemHandle();
	void RefreshTopMostUIPanel(TEnumAsByte<ETopMostUIPanelType>* Type);
	void GameStart();
	void SetMoveableAirborne(bool NewParam);
	void OnLandOnGroundAfterJumpPlaneEnd();
	void SetPanels(TArray<class UUAEUserWidget*>* panels);
	void DoUITouchMove(struct FVector* Loc);
	void PressFire(int* FingerIndex);
	void ShowFireBtn(bool* bShow);
	void PressGrenade(bool* isThrow);
	void MemberVoice(int* Member, int* status);
	void ReceiveClientRestart();
	void OnWeaponEquipAttachment(TEnumAsByte<ESurviveWeaponPropSlot>* WeaponPropSlot, struct FItemDefineID* DefineID, bool* bEquip);
	void MotionControliOS(const struct FVector& AxisValue);
	void InpAxisKeyEvt_RotationRate_K2Node_InputVectorAxisEvent_1(const struct FVector& AxisValue);
	void MotionControlAndroidTick();
	void MotionControlAndroid(const struct FVector& AxisValue);
	void ReceiveBackpackComponent();
	void InitNewbieComponent(TArray<int>* FinishedGuide, TArray<int>* FinishedCounts, int* PlayerLevel, int* PlayerExperienceType);
	void DebugOpenGuide();
	void BP_OceanSideDetected(struct FVector* OceansideLocation, bool* bDetectedRiver);
	void CallShowTouchInterface(bool* InShow);
	void OnGameModeStateChanged();
	void ReleaseFire();
	void OnRep_InWateringRangeBP();
	void PlayerExitJumpEvent();
	void EnterFightingStateDelegate();
	void GameStartCountDownDelegate(float CountDownTime);
	void LuaReceiveBeginPlay();
	void InpAxisKeyEvt_Acceleration_K2Node_InputVectorAxisEvent_4(const struct FVector& AxisValue);
	void DynamicHoldGun(bool BoolValue);
	void InitIngameUI();
	void ActivateDefaultTouchInterface();
	void ExecuteUbergraph_BP_PlayerController_MainCity(int EntryPoint);
	void VaultFailDS__DelegateSignature();
	void BindEventToBackpackComponent__DelegateSignature();
	void PlayerLeaveWater__DelegateSignature(bool HideLung);
	void PlayerEnterWater__DelegateSignature();
	void AirborneLanded__DelegateSignature();
	void ReloadingCDEnd__DelegateSignature();
	void ReloadingCDStart__DelegateSignature(float CD);
};


}

