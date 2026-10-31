#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:23 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlayerTransformComponent.BP_PlayerTransformComponent_C
// 0x0011 (0x0249 - 0x0238)
class UBP_PlayerTransformComponent_C : public ULuaActorComponent
{
public:
	struct FString                                     TransformDataComponentPath;                               // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bLocalBindCameraSwitch;                                   // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_PlayerTransformComponent.BP_PlayerTransformComponent_C");
		return pStaticClass;
	}

};


}

