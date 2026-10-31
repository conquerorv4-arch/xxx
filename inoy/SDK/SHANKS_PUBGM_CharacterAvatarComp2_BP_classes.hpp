#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:36:03 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C
// 0x0128 (0x17A8 - 0x1680)
class UCharacterAvatarComp2_BP_C : public UCharacterAvatarComponent2
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1680(0x0008) (Transient, DuplicateTransient)
	class UBackpackAvatarItemColor*                    BasedAvatarColorHandle;                                   // 0x1688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBackpackAvatarItemPattern*                  BasedAvatarPatternHandle;                                 // 0x1690(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EBattleItemUseReason                               PreEquipClothReason;                                      // 0x1698(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x1699(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x1699(0x0028) UNKNOWN PROPERTY: SoftObjectProperty CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.MaleBatchBodySoftPath
	unsigned char                                      UnknownData02[0x28];                                      // 0x16C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.FemaleBatchBodySoftPath
	bool                                               bForbidBindAvatarEquippedEvent;                           // 0x16F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x16F1(0x0007) MISSED OFFSET
	TArray<int>                                        NeedModifyVehicleID;                                      // 0x16F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<EAvatarSlotType, int>                         SlotToFakeHandleMap;                                      // 0x1708(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, class UObject*>                          CurHandhleMap;                                            // 0x1758(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C");
		return pStaticClass;
	}


	TArray<int> GetHeadIgnoreSlots(int* InItemHeadID);
	bool CanUseDefaultAvatarHandleItem(int* InSlotID, int* InItemID);
	int GetDefaultAvatarHandleItem(int* InSlotID, int* InItemID, int* AdditionalItemID);
	void PrintDefaultConfig();
	void HandleCharacterHiddenChange(bool bHidden);
	void HandlePlayerScopeInOrOut(bool bScopeIn);
	void EnableAvatarAnimation(bool IsEnable);
	int GetRepalceIDOnVehicle(int* OriginID);
	EAvatarSlotNameConfig GetBPSlotNameConfigType(class UBackpackAvatarHandle** InAvatarHandle);
	bool IsEnableItemDownload(int* ItemId);
	struct FSoftObjectPath GetBatchDefaultBodyPath();
	bool HideHeadMesh(class UMeshComponent** MasterBoneComp, class USkeletalMesh** SkeletalMesh);
	bool PutOffEquimentByResID(int* resID);
	bool PutOnEquipmentByResID(int* resID);
	int GetFakeAvatarHandleItem_InDev(int* InSlotID, int* InItemID, int* AdditionalItemID);
	bool GenerateClientDefaultAvatar(class UBattleItemHandleBase** InAvatarHandle);
	bool BPClientPostProcessViewDataMiddle();
	void ProcessGodzillaSuit();
	int GetFakeAvatarHandleItem(int* InSlotID, int* InItemID, int* AdditionalItemID);
	void CheckAvatarWhoHideWho(EAvatarSlotType SlotType, const struct FItemDefineID& resID, TArray<int>* HideSomeAvatar, TArray<int>* HideBySomeAvatar);
	void SetEquipmentPattern(EAvatarSlotType SlotType);
	void SetEquipmentColor(EAvatarSlotType SlotType, const struct FLinearColor& MaskColor1, const struct FLinearColor& MaskColor2, const struct FLinearColor& MaskColor3);
	class UBackpackAvatarItemPattern* CreateAvatarItemPattern(EAvatarSlotType* InSlotType, int* InPatternID);
	class UBackpackAvatarItemColor* CreateAvatarItemColor(EAvatarSlotType* InSlotType, int* InColorID);
	int GetEquipmentSkinItemID(int* InItemID);
	void Bp_ProcessAvatarLogicUnequipped(int SlotID, const struct FItemDefineID& OldItemID);
	void Bp_ProcessAvatarLogicEquipped(int SlotID, const struct FItemDefineID& NewItemID, const struct FItemDefineID& OldItemID);
	bool PutOnDefaultEquipment(class UBackpackAvatarHandle* ItemHandle);
	bool InitBodyMeshByHead(struct FItemDefineID* InItemID);
	void ReceiveBeginPlay();
	void Bp_EventAvatarLogicEquipped(int SlotID, const struct FItemDefineID& NewItemID, const struct FItemDefineID& OldItemID);
	void Bp_EventAvatarLogicUnequipped(int SlotID, const struct FItemDefineID& OldItemID);
	void PreHanleEquipCloth(struct FBattleItemUseTarget* Target, class UBackpackAvatarHandle** InAvatarHandle, EBattleItemUseReason* Reason);
	void ClearEventFromOnAvatarEquippedEvent();
	void OnPlayerScopeIn(bool bIsBegin);
	void OnPlayerScopeOut(bool bIsBegin);
	void OnCharacterHiddenStateChange(bool bIsHidden);
	void ExecuteUbergraph_CharacterAvatarComp2_BP(int EntryPoint);
};


}

