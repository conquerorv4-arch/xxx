#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:36:28 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_LobbyFootLock.ABP_LobbyFootLock_C
// 0x0910 (0x22F0 - 0x19E0)
class UABP_LobbyFootLock_C : public ULobbyFootLockAnimState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x19E0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_MakeDynamicAdditive               AnimGraphNode_MakeDynamicAdditive_943D7C964D81FA3030066D9BA18D69ED;// 0x19E8(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_FBF0ECC24BA365D3E301D1B196C6E2CA;// 0x1A58(0x0080)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3C8C9EB7454DF2DE06790BA3DBE3A6F1;// 0x1AD8(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_12E19BD14CC22A8D75E5DB9495986D16;// 0x1B98(0x0058)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_B51141A64C31044538489D857EE50F7B;// 0x1BF0(0x0050)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_83B366F247150B2E08BAC8852ADD2310; // 0x1C40(0x01C0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_BDA234194CFED3542F2C92B2407309D5; // 0x1E00(0x01C0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_FA6301214BA6CF4073B0CABEDB794C9A;// 0x1FC0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_DF6D1D3E4E50C94FD47E35A392506C78;// 0x2010(0x0058)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_602184DF436C308B4E157AA0F3D09B83;// 0x2068(0x00E8)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_DE4D65F34C1A683F3B8C5C8DA9A900EB;  // 0x2150(0x0070)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_05C0A1B441F4ABB9F509689FFE2ABC8F;// 0x21C0(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_762C64BD4449FDAF80A3F29DA857385B;      // 0x2230(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_Root_288FCB394EF42302FFA3B1AAA8CF38C4;      // 0x22A0(0x0050)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("AnimBlueprintGeneratedClass ABP_LobbyFootLock.ABP_LobbyFootLock_C");
		return pStaticClass;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LobbyFootLock_AnimGraphNode_SequenceEvaluator_05C0A1B441F4ABB9F509689FFE2ABC8F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LobbyFootLock_AnimGraphNode_TwoBoneIK_BDA234194CFED3542F2C92B2407309D5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LobbyFootLock_AnimGraphNode_TwoBoneIK_83B366F247150B2E08BAC8852ADD2310();
	void ExecuteUbergraph_ABP_LobbyFootLock(int EntryPoint);
};


}

