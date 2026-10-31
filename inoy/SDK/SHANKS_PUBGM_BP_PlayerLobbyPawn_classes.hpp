#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:36:29 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C
// 0x0218 (0x0EB8 - 0x0CA0)
class ABP_PlayerLobbyPawn_C : public ASTExtraLobbyCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0CA0(0x0008) (Transient, DuplicateTransient)
	class UCameraComponent*                            Camera;                                                   // 0x0CA8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_LobbyWeaponManager_C*                    BP_LobbyWeaponManager;                                    // 0x0CB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ULobbyPlayEmoteComponent_BP_C*               LobbyPlayEmoteComponent_BP;                               // 0x0CB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ULobbyWeaponAnimationComponent_C*            LobbyWeaponAnimationComponent;                            // 0x0CC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      WeaponSkeletalMesh;                                       // 0x0CC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCharacterAvatarComp2_BP_C*                  CharacterAvatarComp2_BP;                                  // 0x0CD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAELobbyCharAnimListComp*                    AELobbyCharAnimListComp;                                  // 0x0CD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_Time_DFD4E0A94A64AF2CC7AD9DB7F31CA12E;         // 0x0CE0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_DFD4E0A94A64AF2CC7AD9DB7F31CA12E;   // 0x0CE4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0CE5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0CE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                headid;                                                   // 0x0CF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                resID;                                                    // 0x0CF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               press;                                                    // 0x0CF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0CF9(0x0003) MISSED OFFSET
	float                                              LocationX;                                                // 0x0CFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // 0x0D00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0D01(0x0003) MISSED OFFSET
	int                                                LobbyPosition;                                            // 0x0D04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ASTExtraWeapon*                              curEquipingWeapon;                                        // 0x0D08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TMap<int, class UBackpackEmoteHandle*>             EmoteItemIDToHandleMap;                                   // 0x0D10(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     PlayerKey;                                                // 0x0D60(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               HeadIsVisible;                                            // 0x0D70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               canRotate;                                                // 0x0D71(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0D72(0x0002) MISSED OFFSET
	int                                                LuaID;                                                    // 0x0D74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnPlayAction;                                             // 0x0D78(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStopAction;                                             // 0x0D88(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnChangeEquipment;                                        // 0x0D98(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UBackpackEmoteHandle*                        CurEmoteHandle;                                           // 0x0DA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsEmoteLooping;                                          // 0x0DB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0DB1(0x0003) MISSED OFFSET
	int                                                CurrentActionID;                                          // 0x0DB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsChangingHead;                                           // 0x0DB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0DB9(0x0003) MISSED OFFSET
	int                                                PlayOnChangingHeadAcionID;                                // 0x0DBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurPlayEmoteId;                                           // 0x0DC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPlayingAction;                                          // 0x0DC4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0DC5(0x0003) MISSED OFFSET
	float                                              RotateTime;                                               // 0x0DC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TargetRotation;                                           // 0x0DCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               StartRotateFlag;                                          // 0x0DD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0DD1(0x0003) MISSED OFFSET
	float                                              ClothAnimDyAlpha;                                         // 0x0DD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurClothAnimDyAlpha;                                      // 0x0DD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClothAnimDyAlphaDiff;                                     // 0x0DDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isMVPMotion;                                              // 0x0DE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0DE1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnchangeGender;                                           // 0x0DE8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bEquipingSkateAircraft;                                   // 0x0DF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isAutoTest;                                               // 0x0DF9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x0DFA(0x0002) MISSED OFFSET
	struct FVector                                     LocationBeforeEmote;                                      // 0x0DFC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Inten;                                                    // 0x0E08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0E0C(0x0004) MISSED OFFSET
	TMap<int, int>                                     DynamicMatClothMap;                                       // 0x0E10(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              WindSpeed_Editor;                                         // 0x0E60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WindStrength_Editor;                                      // 0x0E64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WindRadius_Editor;                                        // 0x0E68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x0E6C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 WindSpeed;                                                // 0x0E70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AccumelateWindTime;                                       // 0x0E78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x0E7C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSceneType2Change;                                       // 0x0E80(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                SceneType2;                                               // 0x0E90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NeedLookAtCam;                                            // 0x0E94(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x0E95(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPreChangeEquip;                                         // 0x0E98(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bIgnoreDragRotation;                                      // 0x0EA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x0EA9(0x0007) MISSED OFFSET
	class UClass*                                      LobbyFootLockABP;                                         // 0x0EB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C");
		return pStaticClass;
	}


	void UpdateCameraLocation();
	void SetCompRotate(class USceneComponent* RotateComp, float Rotate);
	void SetAddCharacterWeaponAnimListHandle(TArray<struct FLobbyCharacterWeaponAnimData>* addAnimData);
	void CharEquipWeaponPendant(int WeaponId, EWeaponPendantSocketType PendantSocketType);
	void WeaponAllAssetLoadFinish();
	void CharUnEquipWeaponByResId(int resID, const struct FName& SocketName);
	void CharUnEquipExtraWeapon();
	void SetForceUseDefaultIdle(bool Force);
	void UpdateClothInten(float leten);
	void UpdateClothMatParam(float RotateSpeed);
	void StopActionCamera();
	void RotateOnTickInternal();
	void GetCurrentActionID(int* ActionID);
	void OnAvatarAllMeshLoaded();
	void TryRotateAvatar();
	void SetAvatarVisibleForEmote(bool Visible);
	void RequestWeaponDIYData(const struct FString& InPlayerUID, int WeaponAvatarID, int InDIYPlanID);
	void SetIsMVPMotion(bool isMVPMotion);
	void InitDefaultAvatarByResID(int AGender, int Head, int hair);
	void SetClothAnimDyAlphaInst(float Alpha);
	void SetClothAnimDyAlphaGrad(float Alpha);
	void SetClothAnimDyAlpha(float Alpha);
	void RotateOnTick(float RotateTime, float TargetRotation);
	void OnEndActionHandle(int ActionID);
	void OnPlayActionHandle(int ActionID);
	void SetConflictRuleEnable(bool bEnableConflictRule);
	void PutOffEquipmentBySlot(EAvatarSlotType SlotType, bool* Result);
	void PlayEmoteLoop();
	void ShouldCurEmoteShowWeapon(bool* Result);
	void HandleWeaponDisplayWhenPlayEmote();
	void GetAllEquipmentList(TArray<int>* Result);
	void SetCanRotate(bool canRotate);
	void PutOffEquipmentByResID(int resID, bool* Result);
	void HideWeapon(bool isHide);
	void CharPlayEmoteByResId(int EmoteId, const struct FString& ExtraInfo);
	void CharUnEquipWeapon();
	void CharEquipWeaponByResId(int resID, bool bUse, bool bAsync, const struct FName& SocketName, class ASTExtraWeapon** Weapon);
	class UBackpackEmoteHandle* GetEmoteHandle(int* ItemId);
	void GetBPID(int RowName, int* BPID);
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveTick(float* DeltaSeconds);
	void TickClothLeten(float From);
	void ExecuteUbergraph_BP_PlayerLobbyPawn(int EntryPoint);
	void OnPreChangeEquip__DelegateSignature();
	void OnSceneType2Change__DelegateSignature(int sceneType);
	void OnchangeGender__DelegateSignature();
	void OnChangeEquipment__DelegateSignature();
	void OnStopAction__DelegateSignature(int ActionID);
	void OnPlayAction__DelegateSignature(int ActionID);
};


}

