#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:55 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AnimNotify_AkEvent.AnimNotify_AkEvent_C.TryGetOwnerPawn
struct UAnimNotify_AkEvent_C_TryGetOwnerPawn_Params
{
	class AActor*                                      Owner;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       Pawn;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotify_AkEvent.AnimNotify_AkEvent_C.GetEvent
struct UAnimNotify_AkEvent_C_GetEvent_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               OutEvent;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotify_AkEvent.AnimNotify_AkEvent_C.Received_Notify
struct UAnimNotify_AkEvent_C_Received_Notify_Params
{
	class USkeletalMeshComponent**                     MeshComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

