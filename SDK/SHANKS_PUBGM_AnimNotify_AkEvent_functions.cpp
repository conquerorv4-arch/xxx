// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:55 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AnimNotify_AkEvent.AnimNotify_AkEvent_C.TryGetOwnerPawn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   Pawn                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAnimNotify_AkEvent_C::TryGetOwnerPawn(class AActor* Owner, class APawn** Pawn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AnimNotify_AkEvent.AnimNotify_AkEvent_C.TryGetOwnerPawn");

	UAnimNotify_AkEvent_C_TryGetOwnerPawn_Params params;
	params.Owner = Owner;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Pawn != nullptr)
		*Pawn = params.Pawn;
}


// Function AnimNotify_AkEvent.AnimNotify_AkEvent_C.GetEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USkeletalMeshComponent*  MeshComp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAkAudioEvent*           OutEvent                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAnimNotify_AkEvent_C::GetEvent(class USkeletalMeshComponent* MeshComp, class UAkAudioEvent** OutEvent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AnimNotify_AkEvent.AnimNotify_AkEvent_C.GetEvent");

	UAnimNotify_AkEvent_C_GetEvent_Params params;
	params.MeshComp = MeshComp;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutEvent != nullptr)
		*OutEvent = params.OutEvent;
}


// Function AnimNotify_AkEvent.AnimNotify_AkEvent_C.Received_Notify
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent** MeshComp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnimNotify_AkEvent_C::Received_Notify(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AnimNotify_AkEvent.AnimNotify_AkEvent_C.Received_Notify");

	UAnimNotify_AkEvent_C_Received_Notify_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

