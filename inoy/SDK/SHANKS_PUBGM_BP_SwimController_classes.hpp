#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:36:02 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SwimController.BP_SwimController_C
// 0x0008 (0x03D0 - 0x03C8)
class UBP_SwimController_C : public UPlayerSwimComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_SwimController.BP_SwimController_C");
		return pStaticClass;
	}


	void EnterWater_BluePrint();
	void BP_UnderWaterStateChanged(bool* bEnterWater);
	void ExecuteUbergraph_BP_SwimController(int EntryPoint);
};


}

