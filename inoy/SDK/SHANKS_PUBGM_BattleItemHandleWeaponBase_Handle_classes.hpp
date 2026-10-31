#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:31 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C
// 0x0092 (0x08F2 - 0x0860)
class UBattleItemHandleWeaponBase_Handle_C : public UBackpackWeaponHandle
{
public:
	class ASTExtraPlayerController*                    OwningPlayerController;                                   // 0x0860(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ASTExtraBaseCharacter*                       OwningCharacter;                                          // 0x0868(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UBackpackComponent*                          OwningBackpackComponent;                                  // 0x0870(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0878(0x0008) MISSED OFFSET
	struct FTransform                                  WrapperPutdownTrans;                                      // 0x0880(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  SourceWrapperTrans;                                       // 0x08B0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class ABaseAIController*                           OwningAIController;                                       // 0x08E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       TargetLogicSocket;                                        // 0x08E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TargetAutoUse;                                            // 0x08F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHidePendantOnScope;                                      // 0x08F1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C");
		return pStaticClass;
	}


	bool CanDisuseOldWeapon(bool* bDisuseResult, EBattleItemUseReason* InReason);
	void GetBulletNumSaveToWrapper(int* Num);
	void ConditionalAddAdditionalData(TArray<struct FBattleItemAdditionalData>* InAdditionalData);
	void ConditionalAddAdditionalDataToWrapper(class APickUpWrapperActor* PickUpWrapper);
	void GetWeaponClassFromTable(bool* found, class UClass** WeaponClass);
	void EnableWeaponAttachmentBindDropToWeaponWrapper(bool* Out);
	void ParseAdditionalData(const struct FBattleItemPickupInfo& PickupInfo);
	void GetOwingtWeapon(class ASTExtraWeapon** NewParam);
	void SpawnWrapperOnGround(class UClass* WrapperClass, bool bUseRandomLoc, const struct FItemDefineID& InDefineID, class APickUpWrapperActor** TargetWrapper);
	class UWorld* GetWorldInternal();
	bool HandleDisuse(EBattleItemDisuseReason* Reason);
	bool HandleUse(struct FBattleItemUseTarget* Target, EBattleItemUseReason* Reason);
	bool HandleDrop(int* InCount, EBattleItemDropReason* Reason);
	bool HandlePickup(struct FBattleItemPickupInfo* PickupInfo, EBattleItemPickupReason* Reason, TScriptInterface<class UItemContainerInterface>* ItemContainer);
	struct FBattleItemData ExtractItemData();
};


}

