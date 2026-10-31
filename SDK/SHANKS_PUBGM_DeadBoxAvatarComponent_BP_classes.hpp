#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:45 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DeadBoxAvatarComponent_BP.DeadBoxAvatarComponent_BP_C
// 0x0000 (0x0568 - 0x0568)
class UDeadBoxAvatarComponent_BP_C : public UDeadBoxAvatarComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass DeadBoxAvatarComponent_BP.DeadBoxAvatarComponent_BP_C");
		return pStaticClass;
	}


	void GetVehicleDiedPath(int ItemId, struct FString* Path);
	void IsVehicleAvatarID(int ItemId, bool* IsVehicleAvatarID);
	struct FString GetItemAvatarHandlePath(int* ItemId);
	class UBackpackCommonAvatarHandle* GetItemAvatarHandle(int* ItemId);
};


}

