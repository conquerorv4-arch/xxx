#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:44 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MiniTVSpline.BP_MiniTVSpline_C
// 0x0009 (0x04B9 - 0x04B0)
class ABP_MiniTVSpline_C : public AActor
{
public:
	class USplineComponent*                            Spline;                                                   // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               MoveActor;                                                // 0x04B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_MiniTVSpline.BP_MiniTVSpline_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}

