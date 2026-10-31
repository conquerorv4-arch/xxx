#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:32 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C
// 0x016F (0x0A61 - 0x08F2)
class UBattleItemHandle_MainWeapon_C : public UBattleItemHandleWeaponBase_Handle_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x08F2(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08F8(0x0008) (Transient, DuplicateTransient)
	class UWeaponManagerComponent*                     WeaponManager;                                            // 0x0900(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Socket;                                                   // 0x0908(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBattleItemHandleBase*                       CharacterItemHandle;                                      // 0x0910(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WeaponClass;                                              // 0x0918(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FWeaponAttachmentSlot>               AvailableWeaponAttachment;                                // 0x0920(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class ASTExtraWeapon*                              TargetWeaponActor;                                        // 0x0930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MainLogicSlot1Name;                                       // 0x0938(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MainLogicSlot2Name;                                       // 0x0940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WrapperClass;                                             // 0x0948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<EWeaponAttachmentSocketType, bool>            WeaponAttachmentSockTypeList;                             // 0x0950(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	class UClass*                                      BulletWrapperClass;                                       // 0x09A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<EWeaponAttachmentSocketType, class UBattleItemHandle_WeapAttachment_C*> EquipedWeapAttachments;                                   // 0x09A8(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bResetInitBulletInBullet;                                 // 0x09F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsPistol;                                                // 0x09F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x09FA(0x0006) MISSED OFFSET
	struct FName                                       SubLogicSlotName;                                         // 0x0A00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FBattleItemPickupInfo                       BattleIItemHandlePickInfo;                                // 0x0A08(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsAttachPendant;                                          // 0x0A60(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C");
		return pStaticClass;
	}


	void MakeBulletInBagOrOnGround(const struct FItemDefineID& BulletDefine, int Count);
	void CanDropWeapon(EBattleItemDropReason DropReason, bool* bCanDrop);
	void HandleOnWeaponDestroy(EBattleItemDisuseReason Reason);
	void AutoEquipAttachmentsInArray(bool bReplaceUse, TArray<class UBattleItemHandleBase*>* Array);
	void ReturnMultiBullet(int WantReturnCount);
	void GetWrapperClass(bool* found, class UClass** WrapperClass);
	void GetBulletWrapperClass(int BulletID, bool* found, class UClass** WrapperClass);
	void GetWeaponClass(bool* found, class UClass** WeaponClass);
	void CreateVirtualPendantItemHandle(const struct FItemDefineID& ItemDefineID, class UBattleItemHandleBase** ItemHandle);
	void AutoEquipPendant();
	void EquipPendant(int pendantID);
	void CheckPendantCanAttach(bool* CanAttach);
	void GetOwingtWeapon(class ASTExtraWeapon** NewParam);
	void AutoEquipAttachments();
	void ReturnBullets(int Count);
	void UpdateEquipedAttach(EWeaponAttachmentSocketType WeapAttachSockType, class UBattleItemHandle_WeapAttachment_C* WeapAttachItemHandle, bool IsEquip);
	void LocalHandleDisuse(EBattleItemDisuseReason Reason);
	void CreateWrapperOnGround();
	void GetAvailableTargetLogicSocketName(const struct FName& TargetSocket, struct FName* Ret, bool* bNeedPutDownOldWeapon, bool* bAutoUse);
	void GetAvailableInstantLogicSocketName(struct FName* Ret, bool* bNeedPutDownOldWeapon, bool* bAutoUse);
	void JudgeHasTargetAttachmentSlot(int AttachBPID, EWeaponAttachmentSocketType AttachType, class UBackpackWeaponAttachHandle* AttachHandle, bool CanSwap, int AttachResID, bool* CanEquip, bool* HasOcupied, bool* CanReplace);
	bool HandleDisuse(EBattleItemDisuseReason* Reason);
	bool HandleUse(struct FBattleItemUseTarget* Target, EBattleItemUseReason* Reason);
	bool HandleDrop(int* InCount, EBattleItemDropReason* Reason);
	bool HandlePickup(struct FBattleItemPickupInfo* PickupInfo, EBattleItemPickupReason* Reason, TScriptInterface<class UItemContainerInterface>* ItemContainer);
	void ReturnAllBullets();
	void LocalAutoEquipAttachments();
	void ReturnBullet(int* BulletNum);
	void ExecuteUbergraph_BattleItemHandle_MainWeapon(int EntryPoint);
};


}

