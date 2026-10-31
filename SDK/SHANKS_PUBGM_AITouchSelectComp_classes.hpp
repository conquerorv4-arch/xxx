#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:45 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AITouchSelectComp.AITouchSelectComp_C
// 0x0010 (0x0210 - 0x0200)
class UAITouchSelectComp_C : public USTTouchSelectComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0200(0x0008) (Transient, DuplicateTransient)
	struct FVector2D                                   ViewportLocalSize;                                        // 0x0208(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass AITouchSelectComp.AITouchSelectComp_C");
		return pStaticClass;
	}


	void UpdateViewportLocalSize();
	struct FVector2D ModifyTouchLoc(struct FGeometry* MyGeometry, struct FVector2D* TouchLoc);
	void ReceiveBeginPlay();
	void OnTouchSelect(class AActor* SelectActor, const struct FVector2D& TouchLoc);
	void OnViewPortChange(const struct FVector2D& OldViewportSize, const struct FVector2D& NewViewportSize);
	void ExecuteUbergraph_AITouchSelectComp(int EntryPoint);
};


}

