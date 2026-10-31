#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:36:05 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_NewFakePlayerAIC.BP_NewFakePlayerAIC_C
// 0x0010 (0x1648 - 0x1638)
class ABP_NewFakePlayerAIC_C : public ANewFakePlayerAIController
{
public:
	class UBP_VehicleAIUserComp_C*                     BP_VehicleAIUserComp;                                     // 0x1638(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAIOrderComponent*                           AIOrder;                                                  // 0x1640(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_NewFakePlayerAIC.BP_NewFakePlayerAIC_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}

