#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:36:02 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_VehicleParachuteComponent.BP_VehicleParachuteComponent_C
// 0x0010 (0x0268 - 0x0258)
class UBP_VehicleParachuteComponent_C : public UVehicleParachuteComponent
{
public:
	float                                              CameraTargetArmLength;                                    // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CameraRelativeLocation;                                   // 0x025C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_VehicleParachuteComponent.BP_VehicleParachuteComponent_C");
		return pStaticClass;
	}

};


}

