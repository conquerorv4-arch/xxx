#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:10 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C
// 0x008A (0x0B92 - 0x0B08)
class UBattleItemHandle_AvatarBP_C : public UBackpackAvatarHandle
{
public:
	class ASTExtraPlayerController*                    OwningPlayerController;                                   // 0x0B08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ASTExtraBaseCharacter*                       OwningCharacter;                                          // 0x0B10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UBackpackComponent*                          OwningBackpackComponent;                                  // 0x0B18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  SourceWrapperTrans;                                       // 0x0B20(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  WrapperPutdownTrans;                                      // 0x0B50(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WrapperClass;                                             // 0x0B80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBattleItemHandleBase*                       CharacterItemHandle;                                      // 0x0B88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EnumAvatarSlotNameConfig>              SlotNameConfig;                                           // 0x0B90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EnumAvatarForceGender>                 ForceGender;                                              // 0x0B91(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C");
		return pStaticClass;
	}


	bool IsSwimConfig();
	bool BPNeedCheckCapacityInHandleDisuse(EBattleItemDisuseReason* Reason);
	void GetWrapperClass(class UClass** WrapperClass);
	struct FBattleItemData ExtractItemData();
	void LocalHandleDisuse();
	class UWorld* GetWorldInternal();
	void SpawnWrapperOnGround(class UClass* WrapperClass, bool bUseRandomLoc);
	bool HandleDisuse(EBattleItemDisuseReason* Reason);
	bool HandleDrop(int* InCount, EBattleItemDropReason* Reason);
	bool HandlePickup(struct FBattleItemPickupInfo* PickupInfo, EBattleItemPickupReason* Reason, TScriptInterface<class UItemContainerInterface>* ItemContainer);
	bool HandleUse(struct FBattleItemUseTarget* Target, EBattleItemUseReason* Reason);
};


}

