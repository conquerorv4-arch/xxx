#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:32 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BattleItemHandle_Pistol.BattleItemHandle_Pistol_C
// 0x004F (0x0941 - 0x08F2)
class UBattleItemHandle_Pistol_C : public UBattleItemHandleWeaponBase_Handle_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x08F2(0x0006) MISSED OFFSET
	struct FName                                       Socket;                                                   // 0x08F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBattleItemHandleBase*                       CharacterItemHandle;                                      // 0x0900(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ASTExtraWeapon*                              TargetWeaponActor;                                        // 0x0908(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LogicSlotName;                                            // 0x0910(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWeaponManagerComponent*                     WeaponManager;                                            // 0x0918(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FWeaponAttachmentSlot>               AvailableWeaponAttachment;                                // 0x0920(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<EWeaponAttachmentSocketType>                WeaponAttachmentSockTypeList;                             // 0x0930(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bCheckUseState;                                           // 0x0940(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BattleItemHandle_Pistol.BattleItemHandle_Pistol_C");
		return pStaticClass;
	}


	void GetWrapperClass(bool* found, class UClass** WrapperClass);
	void HandleWeaponDestroy(EBattleItemDisuseReason Reason);
	void IsMainSlotsHaveWeapon(bool* HasWeapon);
	void GetOwingtWeapon(class ASTExtraWeapon** NewParam);
	void LocalHandleDisuse(EBattleItemDisuseReason Reason);
	void GetAvailableTargetLogicSocketName(const struct FName& TargetSocket, struct FName* Ret, bool* bNeedPutDownOldWeapon, bool* bAutoUse);
	void GetAvailableInstantLogicSocketName(struct FName* Ret, bool* bNeedPutDownOldWeapon, bool* bAutoUse);
	void CreateWrapperOnGround();
	bool HandlePickup(struct FBattleItemPickupInfo* PickupInfo, EBattleItemPickupReason* Reason, TScriptInterface<class UItemContainerInterface>* ItemContainer);
	bool HandleUse(struct FBattleItemUseTarget* Target, EBattleItemUseReason* Reason);
	bool HandleDrop(int* InCount, EBattleItemDropReason* Reason);
	bool HandleDisuse(EBattleItemDisuseReason* Reason);
};


}

