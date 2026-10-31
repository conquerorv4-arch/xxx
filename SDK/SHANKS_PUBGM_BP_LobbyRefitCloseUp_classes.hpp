#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:38 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LobbyRefitCloseUp.BP_LobbyRefitCloseUp_C
// 0x0038 (0x04E8 - 0x04B0)
class ABP_LobbyRefitCloseUp_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04B0(0x0008) (Transient, DuplicateTransient)
	class UCameraComponent*                            Camera;                                                   // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ____0_time_5C46C2804013FEE671133C8FDC77B8D4;              // 0x04C8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ____0__Direction_5C46C2804013FEE671133C8FDC77B8D4;        // 0x04CC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04CD(0x0003) MISSED OFFSET
	int                                                closeUpSlotId;                                            // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04DC(0x0004) MISSED OFFSET
	class ABP_LobbyRefitCloseUp_C*                     tempCameraCloseUp;                                        // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_LobbyRefitCloseUp.BP_LobbyRefitCloseUp_C");
		return pStaticClass;
	}


	void GetCameraWorldLocation(struct FVector* cameraWorldLocation);
	void UserConstructionScript();

	void ChanTransformWithBlend(const struct FTransform& B);
	void ExecuteUbergraph_BP_LobbyRefitCloseUp(int EntryPoint);
};


}

