#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:13 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_KillerTracker.BP_KillerTracker_C
// 0x0018 (0x0568 - 0x0550)
class ABP_KillerTracker_C : public AKillerTracker
{
public:
	class UCameraComponent*                            Camera;                                                   // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpringArmComponent*                         SpringArm;                                                // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_KillerTracker.BP_KillerTracker_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}

