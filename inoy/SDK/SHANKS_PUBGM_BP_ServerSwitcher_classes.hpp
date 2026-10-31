#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:13 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ServerSwitcher.BP_ServerSwitcher_C
// 0x0008 (0x01E8 - 0x01E0)
class UBP_ServerSwitcher_C : public UServerSwitchComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01E0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_ServerSwitcher.BP_ServerSwitcher_C");
		return pStaticClass;
	}


	void ReceiveBeginPlay();
	void CustomEvent_1(bool BoolValue);
	void ExecuteUbergraph_BP_ServerSwitcher(int EntryPoint);
};


}

