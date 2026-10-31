#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:36:03 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CharacterCarryBackComp.BP_CharacterCarryBackComp_C
// 0x0010 (0x0398 - 0x0388)
class UBP_CharacterCarryBackComp_C : public USTCharacterCarryBackComp
{
public:
	TArray<struct FVector>                             PutDownLocationOffset;                                    // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_CharacterCarryBackComp.BP_CharacterCarryBackComp_C");
		return pStaticClass;
	}


	void FindFreedomLocationAndRotation(class ACharacter* Character, bool* bValid, struct FVector* Location, struct FRotator* Rotation);
};


}

