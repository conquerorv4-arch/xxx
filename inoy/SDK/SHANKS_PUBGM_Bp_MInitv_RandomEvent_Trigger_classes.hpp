#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:44 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Bp_MInitv_RandomEvent_Trigger.Bp_MInitv_RandomEvent_Trigger_C
// 0x0018 (0x04C8 - 0x04B0)
class ABp_MInitv_RandomEvent_Trigger_C : public AActor
{
public:
	class UBoxComponent*                               Box;                                                      // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventName;                                                // 0x04B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass Bp_MInitv_RandomEvent_Trigger.Bp_MInitv_RandomEvent_Trigger_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}

