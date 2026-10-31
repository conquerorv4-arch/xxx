#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:58 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PetUtils.PetUtils_C
// 0x0000 (0x0028 - 0x0028)
class UPetUtils_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass PetUtils.PetUtils_C");
		return pStaticClass;
	}


	static void GetPetLevelCfg(const struct FGameModePlayerPetInfo& PetInfo, class UObject* __WorldContext, struct FBP_STRUCT_PetLevelTable_type* Out_Row);
};


}

