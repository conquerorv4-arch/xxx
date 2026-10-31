#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:36:20 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MinitvAvatarComponent_BP.MinitvAvatarComponent_BP_C
// 0x0000 (0x0C68 - 0x0C68)
class UMinitvAvatarComponent_BP_C : public UPetAvatarComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass MinitvAvatarComponent_BP.MinitvAvatarComponent_BP_C");
		return pStaticClass;
	}


	void RayEquipItemById(int ID);
};


}

