#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:36:21 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_MiniTvV2.ABP_MiniTvV2_C
// 0x0BB9 (0x0FA9 - 0x03F0)
class UABP_MiniTvV2_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_3CA492C64B817B9B336F31B48DA44582;      // 0x03F8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9452BEDA44C9873D1F58EFB6EE16DCB6;// 0x0448(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_21378E764DBB7DD292494BAB7888D1F1;// 0x0490(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0B3B17044090A86B8CBBF79C02843677;// 0x04D8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B0F82852421A66DECFE9EFB6EF4F6C75;// 0x0520(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_19841E7D4C46CCAFB40201BDF9E5D873;// 0x0568(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3C3955134122D53E221155BEDB025AB1;// 0x05B0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CC54C0DE4BA6E9A5DF3DA1879D014F03;// 0x05F8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F58490434CB11F9A31650F99F1D1DF1F;// 0x0640(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A32C1EA14E2AE46E7347A7B7DA822E7A;// 0x0688(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FE231A5B49B93C4E070460B45A9BDBC7;// 0x06F8(0x0050)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_0EF67A5049A5CD62888251AFDE418FDA;// 0x0748(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_80C0E2204BF35923595780B59814FEAB;// 0x0870(0x0050)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_8A9E8E3A46E8EA408644E3A04A6F8F0B;// 0x08C0(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3E29B9C24F91A50DE19CFF8F39F14473;// 0x0990(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AD1541C84EC0DCF9144CB7AAC9C9C34E;// 0x0A00(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_84B851554992EDC4728DBD94F8E4DE8D;// 0x0A70(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7B2D365E43AE89A2851F938D79E9D9AE;// 0x0AC0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_75B5136D4567EDDF4BE8E19085C147FE;// 0x0B30(0x0050)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_90B7F6A24016EED663E049A0B83BE627;// 0x0B80(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_630884284C9CB49FEDBE8B96AD28E6B6;// 0x0C50(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4603C6CA4DE3334948CA81912973F84B;// 0x0CC0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_81BC5AD448D55A82DC87BD874BCC98B9;// 0x0D30(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_359A9A494A59A90A62AA87943538C56D;// 0x0D80(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_359F14E841315272ED46A1A9D25C2536;// 0x0DF0(0x0050)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_565079614924516F42E80EAECD60539D;// 0x0E40(0x00D8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_9BC88A3842C7E1E1F2E94D8641B68764;      // 0x0F18(0x0070)
	bool                                               bDrag;                                                    // 0x0F88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BWalk;                                                    // 0x0F89(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0F8A(0x0002) MISSED OFFSET
	int                                                DoubleState;                                              // 0x0F8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnWalkEnd;                                                // 0x0F90(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              Speed;                                                    // 0x0FA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                dragtype;                                                 // 0x0FA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BFloat;                                                   // 0x0FA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("AnimBlueprintGeneratedClass ABP_MiniTvV2.ABP_MiniTvV2_C");
		return pStaticClass;
	}


	void SetFloat(bool NewParam);
	void SetDragType(int dragtype);
	void SetSpeed(float Speed);
	void SetWalk(bool Walk);
	void SetDrag(bool Drag);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniTvV2_AnimGraphNode_TransitionResult_19841E7D4C46CCAFB40201BDF9E5D873();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniTvV2_AnimGraphNode_TransitionResult_CC54C0DE4BA6E9A5DF3DA1879D014F03();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniTvV2_AnimGraphNode_TransitionResult_F58490434CB11F9A31650F99F1D1DF1F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniTvV2_AnimGraphNode_TransitionResult_B0F82852421A66DECFE9EFB6EF4F6C75();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniTvV2_AnimGraphNode_BlendSpacePlayer_0EF67A5049A5CD62888251AFDE418FDA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniTvV2_AnimGraphNode_BlendListByInt_8A9E8E3A46E8EA408644E3A04A6F8F0B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniTvV2_AnimGraphNode_TransitionResult_21378E764DBB7DD292494BAB7888D1F1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniTvV2_AnimGraphNode_BlendListByInt_90B7F6A24016EED663E049A0B83BE627();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniTvV2_AnimGraphNode_TransitionResult_9452BEDA44C9873D1F58EFB6EE16DCB6();
	void ExecuteUbergraph_ABP_MiniTvV2(int EntryPoint);
	void OnWalkEnd__DelegateSignature();
};


}

