#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:54 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BT_BoolValueCheck.BT_BoolValueCheck_C
// 0x0031 (0x00C9 - 0x0098)
class UBT_BoolValueCheck_C : public UBTDecorator_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      BoolKey;                                                  // 0x00A0(0x0028) (Edit, BlueprintVisible)
	bool                                               TargetValue;                                              // 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BT_BoolValueCheck.BT_BoolValueCheck_C");
		return pStaticClass;
	}


	bool PerformConditionCheck(class AActor** OwnerActor);
	void ExecuteUbergraph_BT_BoolValueCheck(int EntryPoint);
};


}

