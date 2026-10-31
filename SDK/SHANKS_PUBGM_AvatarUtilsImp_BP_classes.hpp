#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:36:28 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AvatarUtilsImp_BP.AvatarUtilsImp_BP_C
// 0x0000 (0x06B8 - 0x06B8)
class UAvatarUtilsImp_BP_C : public UAvatarBPUtils
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass AvatarUtilsImp_BP.AvatarUtilsImp_BP_C");
		return pStaticClass;
	}


	int GetAdjustWeaponBPID_Lobby(int* WeaponId);
	bool GetVehicleDefaultStyleID(int* InVehicleSkinID, TArray<int>* OutStyleIDList);
	struct FString GetVehicleBPPathBySkinID(int* InVehicleSkinID);
	int GetVehicleShapeBySkinID(int* InVehicleSkinID);
	void GetBPTableName(int Type, int TypeSpecificID, struct FString* BPTableName, int* SpecificID);
	class UItemHandleBase* CreateAvatarHandle(struct FItemDefineID* DefineID, class UObject** Outer, bool* bLobby);
	struct FString GetAvatarHandlePath(struct FItemDefineID* DefineID, bool* bLobby);
};


}

