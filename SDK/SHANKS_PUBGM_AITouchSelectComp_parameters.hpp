#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:45 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AITouchSelectComp.AITouchSelectComp_C.UpdateViewportLocalSize
struct UAITouchSelectComp_C_UpdateViewportLocalSize_Params
{
};

// Function AITouchSelectComp.AITouchSelectComp_C.ModifyTouchLoc
struct UAITouchSelectComp_C_ModifyTouchLoc_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   TouchLoc;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AITouchSelectComp.AITouchSelectComp_C.ReceiveBeginPlay
struct UAITouchSelectComp_C_ReceiveBeginPlay_Params
{
};

// Function AITouchSelectComp.AITouchSelectComp_C.OnTouchSelect
struct UAITouchSelectComp_C_OnTouchSelect_Params
{
	class AActor*                                      SelectActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   TouchLoc;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function AITouchSelectComp.AITouchSelectComp_C.OnViewPortChange
struct UAITouchSelectComp_C_OnViewPortChange_Params
{
	struct FVector2D                                   OldViewportSize;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   NewViewportSize;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function AITouchSelectComp.AITouchSelectComp_C.ExecuteUbergraph_AITouchSelectComp
struct UAITouchSelectComp_C_ExecuteUbergraph_AITouchSelectComp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

