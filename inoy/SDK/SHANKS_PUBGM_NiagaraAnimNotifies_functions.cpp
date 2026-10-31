// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:34:50 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect.GetParentCharacter
// (Final, Native, Private, Const)
// Parameters:
// class USkeletalMeshComponent*  MeshComp                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ACharacter*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ACharacter* UAnimNotifyState_TimedNiagaraEffect::GetParentCharacter(class USkeletalMeshComponent* MeshComp)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect.GetParentCharacter");

	UAnimNotifyState_TimedNiagaraEffect_GetParentCharacter_Params params;
	params.MeshComp = MeshComp;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

