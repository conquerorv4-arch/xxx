#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:36:06 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GameMode_MainCity.BP_GameMode_MainCity_C
// 0x0008 (0x2338 - 0x2330)
class ABP_GameMode_MainCity_C : public AMainCityGameMode
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x2330(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_GameMode_MainCity.BP_GameMode_MainCity_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}

