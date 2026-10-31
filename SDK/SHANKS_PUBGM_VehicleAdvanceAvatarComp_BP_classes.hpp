#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:37 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C
// 0x0018 (0x0D40 - 0x0D28)
class UVehicleAdvanceAvatarComp_BP_C : public UVehicleAdvanceAvatarComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0D28(0x0008) (Transient, DuplicateTransient)
	TArray<int>                                        DefaultStyleIDList;                                       // 0x0D30(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C");
		return pStaticClass;
	}


	struct FName GetReflectionCubeName_Lobby();
	void PutOnItemIDInLobby(int InItemID, int ColorID, int PatternID, int Particle_ID, bool* Result);
	void PutOffSlotInLobby(unsigned char InSlotType, bool* Result);
	void BP_ProcessStyleUnequipped(int OldStyleID);
	void Bp_ProcessAvatarLogicUnequipped(int SlotID, const struct FItemDefineID& OldItemID);
	void BP_ProcessStyleEquipped(int NewStyleID, int OldStyleID);
	void Bp_ProcessAvatarLogicEquipped(int SlotID, const struct FItemDefineID& NewItemID, const struct FItemDefineID& OldItemID);
	void BPCreateAvatarCustomHandle(int* SlotID, int* ItemId, struct FAvatarCustom* InCostomInfo, TArray<class UAvatarCustomBase*>* OutCustomHandle);
	struct FVehicleStyleData MakeVehicleStyleData(int* InStyleID);
	bool GenerateDefaultAvatarConfig(int* InBaseSkinID);
	void ReceiveBeginPlay();
	void Bp_EventAvatarLogicEquipped(int SlotID, const struct FItemDefineID& NewItemID, const struct FItemDefineID& OldItemID);
	void Bp_EventAvatarLogicUnequipped(int SlotID, const struct FItemDefineID& OldItemID);
	void BP_EventStyleEquipped(int NewStyleID, int OldStyleID);
	void BP_EventStyleUnequipped(int OldStyleID);
	void ExecuteUbergraph_VehicleAdvanceAvatarComp_BP(int EntryPoint);
};


}

