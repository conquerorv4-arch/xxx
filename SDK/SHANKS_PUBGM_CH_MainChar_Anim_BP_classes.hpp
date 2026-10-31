#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:51 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass CH_MainChar_Anim_BP.CH_MainChar_Anim_BP_C
// 0x0398 (0x0798 - 0x0400)
class UCH_MainChar_Anim_BP_C : public UMainCharAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_29FBB5C84AA95043DE3725AA9FAB5D9B;      // 0x0408(0x0050)
	bool                                               __SUBINSTANCE_bIsFPPAnimInstace_1E6668964E4BAA438CD5A3958631C7E0;// 0x0458(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0459(0x0007) MISSED OFFSET
	struct FAnimNode_SubInstance                       AnimGraphNode_SubInstance_1E6668964E4BAA438CD5A3958631C7E0;// 0x0460(0x00F8)
	bool                                               __SUBINSTANCE_bIsFPPAnimInstace_C9C6D110426F05EEF79F0EA47F0A00F3;// 0x0558(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0559(0x0007) MISSED OFFSET
	struct FAnimNode_SubInstance                       AnimGraphNode_SubInstance_C9C6D110426F05EEF79F0EA47F0A00F3;// 0x0560(0x00F8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2E47FBFF49F72ABC9D5C60B35FCBF042;// 0x0658(0x00D0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_BB6C36284ACBE90B274152B2D2F8DBA6;      // 0x0728(0x0070)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("AnimBlueprintGeneratedClass CH_MainChar_Anim_BP.CH_MainChar_Anim_BP_C");
		return pStaticClass;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_MainChar_Anim_BP_AnimGraphNode_BlendListByBool_2E47FBFF49F72ABC9D5C60B35FCBF042();
	void ExecuteUbergraph_CH_MainChar_Anim_BP(int EntryPoint);
};


}

