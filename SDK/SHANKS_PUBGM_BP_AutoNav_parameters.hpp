#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:22 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_AutoNav.BP_AutoNav_C.CheckObstacle
struct UBP_AutoNav_C_CheckObstacle_Params
{
	struct FVector                                     StartLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     EndLoc;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               bRet;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AutoNav.BP_AutoNav_C.IsArrivalDesc_Ex
struct UBP_AutoNav_C_IsArrivalDesc_Ex_Params
{
	struct FVector                                     ActorLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_AutoNav.BP_AutoNav_C.IsPartialPathFinding
struct UBP_AutoNav_C_IsPartialPathFinding_Params
{
	bool                                               bRet;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AutoNav.BP_AutoNav_C.IsSwim
struct UBP_AutoNav_C_IsSwim_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_AutoNav.BP_AutoNav_C.GetLastMinDistance
struct UBP_AutoNav_C_GetLastMinDistance_Params
{
	float                                              Distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AutoNav.BP_AutoNav_C.CheckCharacterPoseState
struct UBP_AutoNav_C_CheckCharacterPoseState_Params
{
	class ASTExtraPlayerController**                   PC;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_AutoNav.BP_AutoNav_C.StopPlayerAutoSprint
struct UBP_AutoNav_C_StopPlayerAutoSprint_Params
{
};

// Function BP_AutoNav.BP_AutoNav_C.ShowStopMoveResult
struct UBP_AutoNav_C_ShowStopMoveResult_Params
{
	EPlayerAutoNavResult                               Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AutoNav.BP_AutoNav_C.ShowTips
struct UBP_AutoNav_C_ShowTips_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AutoNav.BP_AutoNav_C.CallSetPlayerAutoSprint
struct UBP_AutoNav_C_CallSetPlayerAutoSprint_Params
{
	class ASTExtraPlayerController*                    Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ASTExtraBaseCharacter*                       Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AutoNav.BP_AutoNav_C.IsAutoSpint
struct UBP_AutoNav_C_IsAutoSpint_Params
{
	bool                                               bAutoSprint;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AutoNav.BP_AutoNav_C.GetRotatorToDesc
struct UBP_AutoNav_C_GetRotatorToDesc_Params
{
	struct FVector                                     ActorLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_AutoNav.BP_AutoNav_C.ResetMinDistanceToDesc
struct UBP_AutoNav_C_ResetMinDistanceToDesc_Params
{
	struct FVector                                     ActorLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_AutoNav.BP_AutoNav_C.GetDescDistance
struct UBP_AutoNav_C_GetDescDistance_Params
{
	struct FVector                                     ActorLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_AutoNav.BP_AutoNav_C.IsLastPoint
struct UBP_AutoNav_C_IsLastPoint_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_AutoNav.BP_AutoNav_C.GotoNextPoint
struct UBP_AutoNav_C_GotoNextPoint_Params
{
};

// Function BP_AutoNav.BP_AutoNav_C.IsArrivalDesc
struct UBP_AutoNav_C_IsArrivalDesc_Params
{
	struct FVector                                     ActorLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_AutoNav.BP_AutoNav_C.GetDesc
struct UBP_AutoNav_C_GetDesc_Params
{
	struct FVector                                     Desc;                                                     // (Parm, OutParm, IsPlainOldData)
};

// Function BP_AutoNav.BP_AutoNav_C.TickCloseToTarget
struct UBP_AutoNav_C_TickCloseToTarget_Params
{
	class ASTExtraPlayerController**                   PC;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AutoNav.BP_AutoNav_C.OnStartAutoMove
struct UBP_AutoNav_C_OnStartAutoMove_Params
{
	class ASTExtraPlayerController**                   PC;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AutoNav.BP_AutoNav_C.ReceiveBeginPlay
struct UBP_AutoNav_C_ReceiveBeginPlay_Params
{
};

// Function BP_AutoNav.BP_AutoNav_C.CustomEvent
struct UBP_AutoNav_C_CustomEvent_Params
{
	EPlayerAutoNavFindResult                           FindResult;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AutoNav.BP_AutoNav_C.StopMove
struct UBP_AutoNav_C_StopMove_Params
{
};

// Function BP_AutoNav.BP_AutoNav_C.OnRepPlayerState
struct UBP_AutoNav_C_OnRepPlayerState_Params
{
};

// Function BP_AutoNav.BP_AutoNav_C.BPOnRequestMove
struct UBP_AutoNav_C_BPOnRequestMove_Params
{
	EPlayerAutoNavMode*                                CurMode;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    TargetParam;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FVector*                                    TargetLoc;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_AutoNav.BP_AutoNav_C.ExecuteUbergraph_BP_AutoNav
struct UBP_AutoNav_C_ExecuteUbergraph_BP_AutoNav_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

