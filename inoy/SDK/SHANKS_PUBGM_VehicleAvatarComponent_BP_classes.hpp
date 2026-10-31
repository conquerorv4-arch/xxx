#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:38 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VehicleAvatarComponent_BP.VehicleAvatarComponent_BP_C
// 0x0039 (0x0AA9 - 0x0A70)
class UVehicleAvatarComponent_BP_C : public UVehicleAvatarComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A70(0x0008) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0A78(0x0028) UNKNOWN PROPERTY: SoftObjectProperty VehicleAvatarComponent_BP.VehicleAvatarComponent_BP_C.CurLightEffect
	class UParticleSystemComponent*                    LightEffect;                                              // 0x0AA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               VehicleBroken;                                            // 0x0AA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass VehicleAvatarComponent_BP.VehicleAvatarComponent_BP_C");
		return pStaticClass;
	}


	struct FName GetReflectionCubeName_Lobby();
	void TryAddLightEffect();
	struct FString GetItemAvatarHandlePath(int* ItemId);
	class UBackpackCommonAvatarHandle* GetItemAvatarHandle(int* ItemId);
	void OnLoaded_F4972C3D46F3CFC0E0742D8E88D4527B(class UObject* Loaded);
	void ReceiveBeginPlay();
	void OnAddLightEffect();
	void LoadedBrokenMat();
	void ClearVehicleLightEffect();
	void ExecuteUbergraph_VehicleAvatarComponent_BP(int EntryPoint);
};


}

