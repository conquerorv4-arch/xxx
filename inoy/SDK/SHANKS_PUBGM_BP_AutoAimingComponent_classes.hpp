#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:36:03 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AutoAimingComponent.BP_AutoAimingComponent_C
// 0x0018 (0x0668 - 0x0650)
class UBP_AutoAimingComponent_C : public UWeaponAutoAimingComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0650(0x0008) (Transient, DuplicateTransient)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // 0x0658(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0659(0x0007) MISSED OFFSET
	class UUserWidget*                                 DebugUI;                                                  // 0x0660(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_AutoAimingComponent.BP_AutoAimingComponent_C");
		return pStaticClass;
	}


	bool CheckInAngle(class AActor** EnemeyActor, float* MaxAngle);
	bool CheckSmoke(class AActor** EnemeyActor, struct FVector* StartPoint, struct FVector* EndPoint);
	bool CanEnemeyRaycastReach(class AActor** EnemeyActor, struct FVector* StartPoint, struct FVector* EndPoint, struct FName* OutHitBoneName);
	void BPDrawDebugInfo(TArray<float>* AutoAimParams);
	void ExecuteUbergraph_BP_AutoAimingComponent(int EntryPoint);
};


}

