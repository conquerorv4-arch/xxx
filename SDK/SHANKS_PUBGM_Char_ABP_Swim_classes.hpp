#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:03 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Char_ABP_Swim.Char_ABP_Swim_C
// 0x0BE0 (0x2420 - 0x1840)
class UChar_ABP_Swim_C : public UAnimInstanceSwim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1840(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_4C5B230947458755BE8C7EB5F89B25CB;      // 0x1848(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_02E73ED04484B15AD4DC8785E2D2E636;// 0x1898(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_87E514FC49E9F8BE9BCC6F98990E736E;// 0x18E0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_ACDC5F01413E6CDDD5E26290FB0D2A28;// 0x1928(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0E98FE4C435282DE73B2E586B233CE35;// 0x1970(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EA8583CF48558D8742D60989B755AECF;// 0x19B8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8AF44C294FA078458E53B5A93C1EFD04;// 0x1A00(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_065611EC4369C4C152403189D2A39387;// 0x1A48(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F8D1C74142C09152B77723B0B5E8A5C1;// 0x1AB8(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A8F2C54D4B38AF5749C3BBAEB4CCD442;// 0x1B08(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_CC8B1E084EF50E58E7E92B881995E35D;// 0x1BD8(0x0128)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_923ECC9946F87BD9304658A4C6C371E1;// 0x1D00(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7D4B6F6A41970A5756B8039B8D969461;// 0x1E28(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4F338550438AA787A37AC7A5B47A57D6;// 0x1E78(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_5322D9594A3FF835BE1EF8BD9B874442;// 0x1F48(0x0128)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_8CCABF8A4335407291BE5F82A4F2DF4C;// 0x2070(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E36EB3AF45864D643ACA079211777C8E;// 0x2198(0x0050)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4D70FA834FB5A21BA01386AC7EFD6A49;// 0x21E8(0x00D8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9329604E408B6CE5ED05CB9A881E12D7;// 0x22C0(0x00C0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4B630AA04D3EBA008A83B0ADD0167EF7;// 0x2380(0x0050)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4692176D47233CA6816B909997DD2222;// 0x23D0(0x0050)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("AnimBlueprintGeneratedClass Char_ABP_Swim.Char_ABP_Swim_C");
		return pStaticClass;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_ABP_Swim_AnimGraphNode_TransitionResult_0E98FE4C435282DE73B2E586B233CE35();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_ABP_Swim_AnimGraphNode_TransitionResult_ACDC5F01413E6CDDD5E26290FB0D2A28();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_ABP_Swim_AnimGraphNode_TransitionResult_EA8583CF48558D8742D60989B755AECF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_ABP_Swim_AnimGraphNode_TransitionResult_8AF44C294FA078458E53B5A93C1EFD04();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_ABP_Swim_AnimGraphNode_BlendListByBool_A8F2C54D4B38AF5749C3BBAEB4CCD442();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_ABP_Swim_AnimGraphNode_BlendSpacePlayer_CC8B1E084EF50E58E7E92B881995E35D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_ABP_Swim_AnimGraphNode_BlendSpacePlayer_923ECC9946F87BD9304658A4C6C371E1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_ABP_Swim_AnimGraphNode_TransitionResult_87E514FC49E9F8BE9BCC6F98990E736E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_ABP_Swim_AnimGraphNode_BlendListByBool_4F338550438AA787A37AC7A5B47A57D6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_ABP_Swim_AnimGraphNode_BlendSpacePlayer_5322D9594A3FF835BE1EF8BD9B874442();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_ABP_Swim_AnimGraphNode_BlendSpacePlayer_8CCABF8A4335407291BE5F82A4F2DF4C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_ABP_Swim_AnimGraphNode_ModifyBone_9329604E408B6CE5ED05CB9A881E12D7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_ABP_Swim_AnimGraphNode_TransitionResult_02E73ED04484B15AD4DC8785E2D2E636();
	void ExecuteUbergraph_Char_ABP_Swim(int EntryPoint);
};


}

