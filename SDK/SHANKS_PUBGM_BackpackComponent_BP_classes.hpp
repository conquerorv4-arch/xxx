#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:36:06 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BackpackComponent_BP.BackpackComponent_BP_C
// 0x0008 (0x05F8 - 0x05F0)
class UBackpackComponent_BP_C : public UBackpackComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05F0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BackpackComponent_BP.BackpackComponent_BP_C");
		return pStaticClass;
	}


	bool CheckItemAttrsFlag(int* ItemId, EItemAttrs* ItemAttrEnum);
	int GetItemAttrsFlag(int* ItemId);
	void ServerPlaySoundByItemOperation(const struct FItemDefineID& DefineID, EBattleItemOperationType OperationType, unsigned char Reason);
	void GetChipAssociationType(int Index, int* ChipAssociationType);
	float GetSafetyBoxCapacity();
	struct FItemDefineID NewItemDefineID(struct FItemDefineID* DefineID);
	int CheckLeftLimitCountForItem(int* InItemID, int* InCount);
	bool IsItemExist(struct FItemDefineID* DefineID);
	void GetEmptyChipSlotIdx(const struct FBattleItemData& ItemData, int SupportChipNum, int* Index);
	int GetItemSubType(int* ItemId);
	bool HasTagSub(int* ItemId, struct FName* TagName);
	void GetEquipChipNum(const struct FBattleItemData& ItemData, int* Num);
	void GetAvailableEquipChipSlot(int ChipResID, bool bFindEmptySlot, bool* IsFind, struct FBattleItemUseTarget* ItemUseTarget);
	bool IsAutoUse(int* ItemId);
	bool CheckSkillPropItemCanBePickup(class UBackpackComponent** BackpackComp, struct FItemDefineID* DefineID);
	float UpdateCapacity();
	struct FBattleItemFeatureData GetBattleItemFeatureDataByDefineID(struct FItemDefineID* DefineID);
	class UBattleItemHandleBase* NewItemHandle(struct FItemDefineID* DefineID);
	void ReceiveBeginPlay();
	void ServerPlaySound(const struct FItemDefineID& DefineID, EBattleItemOperationType OperationType, unsigned char Reason);
	void OperationFailed(const struct FItemDefineID& DefineID, EBattleItemOperationType OperationType, EBattleItemOperationFailedReason OperationFailedReason);
	void ClientPlayerSound(const struct FItemDefineID& DefineID, EBattleItemOperationType OperationType, unsigned char Reason);
	void EventAutoEquipAim(bool BoolValue);
	void EventPickClipType(int IntValue);
	void ExecuteUbergraph_BackpackComponent_BP(int EntryPoint);
};


}

