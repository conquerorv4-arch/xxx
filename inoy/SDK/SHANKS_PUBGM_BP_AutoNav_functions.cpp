// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:22 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AutoNav.BP_AutoNav_C.CheckObstacle
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 StartLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 EndLoc                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           bRet                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_AutoNav_C::CheckObstacle(const struct FVector& StartLocation, const struct FVector& EndLoc, bool* bRet)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_AutoNav.BP_AutoNav_C.CheckObstacle");

	UBP_AutoNav_C_CheckObstacle_Params params;
	params.StartLocation = StartLocation;
	params.EndLoc = EndLoc;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bRet != nullptr)
		*bRet = params.bRet;
}


// Function BP_AutoNav.BP_AutoNav_C.IsArrivalDesc_Ex
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ActorLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_AutoNav_C::IsArrivalDesc_Ex(const struct FVector& ActorLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_AutoNav.BP_AutoNav_C.IsArrivalDesc_Ex");

	UBP_AutoNav_C_IsArrivalDesc_Ex_Params params;
	params.ActorLocation = ActorLocation;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AutoNav.BP_AutoNav_C.IsPartialPathFinding
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bRet                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_AutoNav_C::IsPartialPathFinding(bool* bRet)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_AutoNav.BP_AutoNav_C.IsPartialPathFinding");

	UBP_AutoNav_C_IsPartialPathFinding_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bRet != nullptr)
		*bRet = params.bRet;
}


// Function BP_AutoNav.BP_AutoNav_C.IsSwim
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_AutoNav_C::IsSwim()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_AutoNav.BP_AutoNav_C.IsSwim");

	UBP_AutoNav_C_IsSwim_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AutoNav.BP_AutoNav_C.GetLastMinDistance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_AutoNav_C::GetLastMinDistance(float* Distance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_AutoNav.BP_AutoNav_C.GetLastMinDistance");

	UBP_AutoNav_C_GetLastMinDistance_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function BP_AutoNav.BP_AutoNav_C.CheckCharacterPoseState
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraPlayerController** PC                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_AutoNav_C::CheckCharacterPoseState(class ASTExtraPlayerController** PC)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_AutoNav.BP_AutoNav_C.CheckCharacterPoseState");

	UBP_AutoNav_C_CheckCharacterPoseState_Params params;
	params.PC = PC;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AutoNav.BP_AutoNav_C.StopPlayerAutoSprint
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AutoNav_C::StopPlayerAutoSprint()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_AutoNav.BP_AutoNav_C.StopPlayerAutoSprint");

	UBP_AutoNav_C_StopPlayerAutoSprint_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_AutoNav.BP_AutoNav_C.ShowStopMoveResult
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPlayerAutoNavResult           Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AutoNav_C::ShowStopMoveResult(EPlayerAutoNavResult Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_AutoNav.BP_AutoNav_C.ShowStopMoveResult");

	UBP_AutoNav_C_ShowStopMoveResult_Params params;
	params.Result = Result;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_AutoNav.BP_AutoNav_C.ShowTips
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AutoNav_C::ShowTips(int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_AutoNav.BP_AutoNav_C.ShowTips");

	UBP_AutoNav_C_ShowTips_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_AutoNav.BP_AutoNav_C.CallSetPlayerAutoSprint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraPlayerController* Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ASTExtraBaseCharacter*   Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AutoNav_C::CallSetPlayerAutoSprint(class ASTExtraPlayerController* Target, class ASTExtraBaseCharacter* Character)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_AutoNav.BP_AutoNav_C.CallSetPlayerAutoSprint");

	UBP_AutoNav_C_CallSetPlayerAutoSprint_Params params;
	params.Target = Target;
	params.Character = Character;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_AutoNav.BP_AutoNav_C.IsAutoSpint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bAutoSprint                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_AutoNav_C::IsAutoSpint(bool* bAutoSprint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_AutoNav.BP_AutoNav_C.IsAutoSpint");

	UBP_AutoNav_C_IsAutoSpint_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bAutoSprint != nullptr)
		*bAutoSprint = params.bAutoSprint;
}


// Function BP_AutoNav.BP_AutoNav_C.GetRotatorToDesc
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ActorLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator UBP_AutoNav_C::GetRotatorToDesc(const struct FVector& ActorLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_AutoNav.BP_AutoNav_C.GetRotatorToDesc");

	UBP_AutoNav_C_GetRotatorToDesc_Params params;
	params.ActorLocation = ActorLocation;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AutoNav.BP_AutoNav_C.ResetMinDistanceToDesc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ActorLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_AutoNav_C::ResetMinDistanceToDesc(const struct FVector& ActorLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_AutoNav.BP_AutoNav_C.ResetMinDistanceToDesc");

	UBP_AutoNav_C_ResetMinDistanceToDesc_Params params;
	params.ActorLocation = ActorLocation;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_AutoNav.BP_AutoNav_C.GetDescDistance
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ActorLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_AutoNav_C::GetDescDistance(const struct FVector& ActorLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_AutoNav.BP_AutoNav_C.GetDescDistance");

	UBP_AutoNav_C_GetDescDistance_Params params;
	params.ActorLocation = ActorLocation;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AutoNav.BP_AutoNav_C.IsLastPoint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_AutoNav_C::IsLastPoint()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_AutoNav.BP_AutoNav_C.IsLastPoint");

	UBP_AutoNav_C_IsLastPoint_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AutoNav.BP_AutoNav_C.GotoNextPoint
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AutoNav_C::GotoNextPoint()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_AutoNav.BP_AutoNav_C.GotoNextPoint");

	UBP_AutoNav_C_GotoNextPoint_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_AutoNav.BP_AutoNav_C.IsArrivalDesc
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ActorLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_AutoNav_C::IsArrivalDesc(const struct FVector& ActorLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_AutoNav.BP_AutoNav_C.IsArrivalDesc");

	UBP_AutoNav_C_IsArrivalDesc_Params params;
	params.ActorLocation = ActorLocation;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AutoNav.BP_AutoNav_C.GetDesc
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Desc                           (Parm, OutParm, IsPlainOldData)

void UBP_AutoNav_C::GetDesc(struct FVector* Desc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_AutoNav.BP_AutoNav_C.GetDesc");

	UBP_AutoNav_C_GetDesc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Desc != nullptr)
		*Desc = params.Desc;
}


// Function BP_AutoNav.BP_AutoNav_C.TickCloseToTarget
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASTExtraPlayerController** PC                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AutoNav_C::TickCloseToTarget(class ASTExtraPlayerController** PC, float* DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_AutoNav.BP_AutoNav_C.TickCloseToTarget");

	UBP_AutoNav_C_TickCloseToTarget_Params params;
	params.PC = PC;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_AutoNav.BP_AutoNav_C.OnStartAutoMove
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASTExtraPlayerController** PC                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AutoNav_C::OnStartAutoMove(class ASTExtraPlayerController** PC)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_AutoNav.BP_AutoNav_C.OnStartAutoMove");

	UBP_AutoNav_C_OnStartAutoMove_Params params;
	params.PC = PC;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_AutoNav.BP_AutoNav_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_AutoNav_C::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_AutoNav.BP_AutoNav_C.ReceiveBeginPlay");

	UBP_AutoNav_C_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_AutoNav.BP_AutoNav_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPlayerAutoNavFindResult       FindResult                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AutoNav_C::CustomEvent(EPlayerAutoNavFindResult FindResult)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_AutoNav.BP_AutoNav_C.CustomEvent");

	UBP_AutoNav_C_CustomEvent_Params params;
	params.FindResult = FindResult;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_AutoNav.BP_AutoNav_C.StopMove
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_AutoNav_C::StopMove()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_AutoNav.BP_AutoNav_C.StopMove");

	UBP_AutoNav_C_StopMove_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_AutoNav.BP_AutoNav_C.OnRepPlayerState
// (BlueprintCallable, BlueprintEvent)

void UBP_AutoNav_C::OnRepPlayerState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_AutoNav.BP_AutoNav_C.OnRepPlayerState");

	UBP_AutoNav_C_OnRepPlayerState_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_AutoNav.BP_AutoNav_C.BPOnRequestMove
// (Event, Public, BlueprintEvent)
// Parameters:
// EPlayerAutoNavMode*            CurMode                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                TargetParam                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FVector*                TargetLoc                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_AutoNav_C::BPOnRequestMove(EPlayerAutoNavMode* CurMode, struct FString* TargetParam, struct FVector* TargetLoc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_AutoNav.BP_AutoNav_C.BPOnRequestMove");

	UBP_AutoNav_C_BPOnRequestMove_Params params;
	params.CurMode = CurMode;
	params.TargetParam = TargetParam;
	params.TargetLoc = TargetLoc;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_AutoNav.BP_AutoNav_C.ExecuteUbergraph_BP_AutoNav
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AutoNav_C::ExecuteUbergraph_BP_AutoNav(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_AutoNav.BP_AutoNav_C.ExecuteUbergraph_BP_AutoNav");

	UBP_AutoNav_C_ExecuteUbergraph_BP_AutoNav_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

