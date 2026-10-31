#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:22 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TouchSelectComponent.BP_TouchSelectComponent_C
// 0x0010 (0x0210 - 0x0200)
class UBP_TouchSelectComponent_C : public USTTouchSelectComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0200(0x0008) (Transient, DuplicateTransient)
	struct FVector2D                                   ViewportLocalSize;                                        // 0x0208(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_TouchSelectComponent.BP_TouchSelectComponent_C");
		return pStaticClass;
	}


	void RefreshViewportSize(const struct FVector2D& OldSize, const struct FVector2D& NewSize);
	struct FVector2D ModifyTouchLoc(struct FGeometry* MyGeometry, struct FVector2D* TouchLoc);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_TouchSelectComponent(int EntryPoint);
};


}

