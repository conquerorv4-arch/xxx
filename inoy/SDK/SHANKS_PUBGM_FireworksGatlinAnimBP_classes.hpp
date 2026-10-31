#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:51 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass FireworksGatlinAnimBP.FireworksGatlinAnimBP_C
// 0x03B8 (0x1B98 - 0x17E0)
class UFireworksGatlinAnimBP_C : public UCharacterAnimStateBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x17E0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_65E678C64A034D6318676AA398B0DD4A;      // 0x17E8(0x0050)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_7492ED3944407B5FBEB9DEAD56C5A059;  // 0x1838(0x0070)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_76F3E93741D1EE0080E835BF9141B6D5;// 0x18A8(0x00C0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_74F7DBDF4979F7AEE0F89C8E92AC80C7;// 0x1968(0x0050)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_E12EACC24A3741CEEB07219D045C2145;// 0x19B8(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7594665B453619945A04B9A45B53D8E5;// 0x1A08(0x00C0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_103CE9D54941589FEC28F8A82AC2C65D;// 0x1AC8(0x00C0)
	struct FAnimParamFloat                             AimOffsetPitch;                                           // 0x1B88(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("AnimBlueprintGeneratedClass FireworksGatlinAnimBP.FireworksGatlinAnimBP_C");
		return pStaticClass;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_FireworksGatlinAnimBP_AnimGraphNode_ModifyBone_103CE9D54941589FEC28F8A82AC2C65D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FireworksGatlinAnimBP_AnimGraphNode_ModifyBone_7594665B453619945A04B9A45B53D8E5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FireworksGatlinAnimBP_AnimGraphNode_ModifyBone_76F3E93741D1EE0080E835BF9141B6D5();
	void ExecuteUbergraph_FireworksGatlinAnimBP(int EntryPoint);
};


}

