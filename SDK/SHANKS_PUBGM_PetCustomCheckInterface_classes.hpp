#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:53 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PetCustomCheckInterface.PetCustomCheckInterface_C
// 0x0000 (0x0028 - 0x0028)
class UPetCustomCheckInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass PetCustomCheckInterface.PetCustomCheckInterface_C");
		return pStaticClass;
	}


	void NotAllowAppear(bool* Out);
};


}

