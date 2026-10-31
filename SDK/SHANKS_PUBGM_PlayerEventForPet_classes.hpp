#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:58 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerEventForPet.PlayerEventForPet_C
// 0x0000 (0x0028 - 0x0028)
class UPlayerEventForPet_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass PlayerEventForPet.PlayerEventForPet_C");
		return pStaticClass;
	}


	void PlayerStateChange(EPawnState State, TEnumAsByte<EPawnStateChangeType> ChangeType);
};


}

