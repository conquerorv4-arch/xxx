#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:36:21 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Phone_Anim.BP_Phone_Anim_C
// 0x00C8 (0x04B8 - 0x03F0)
class UBP_Phone_Anim_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_F915205347D80689471DF88D9872E184;      // 0x03F8(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_806200C547ABA7C6C9334E8EAD357C8B;      // 0x0448(0x0070)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("AnimBlueprintGeneratedClass BP_Phone_Anim.BP_Phone_Anim_C");
		return pStaticClass;
	}


	void AnimNotify_ShowPhone();
	void ExecuteUbergraph_BP_Phone_Anim(int EntryPoint);
};


}

