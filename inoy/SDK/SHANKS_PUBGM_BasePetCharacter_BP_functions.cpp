// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:59 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BasePetCharacter_BP.BasePetCharacter_BP_C.NeedUpdateTranslationInParachuteState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::NeedUpdateTranslationInParachuteState(bool* Ret)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.NeedUpdateTranslationInParachuteState");

	ABasePetCharacter_BP_C_NeedUpdateTranslationInParachuteState_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.LoadAvatarLater
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABasePetCharacter_BP_C::LoadAvatarLater(TArray<int>* NewParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.LoadAvatarLater");

	ABasePetCharacter_BP_C_LoadAvatarLater_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.LoadBehaviorTree
// (Public, BlueprintCallable, BlueprintEvent)

void ABasePetCharacter_BP_C::LoadBehaviorTree()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.LoadBehaviorTree");

	ABasePetCharacter_BP_C_LoadBehaviorTree_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.ResetPetVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void ABasePetCharacter_BP_C::ResetPetVisibility()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.ResetPetVisibility");

	ABasePetCharacter_BP_C_ResetPetVisibility_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.IsTeammateWithPetOwner
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraPlayerCharacter* OtherPlayer                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::IsTeammateWithPetOwner(class ASTExtraPlayerCharacter* OtherPlayer, bool* NewParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.IsTeammateWithPetOwner");

	ABasePetCharacter_BP_C_IsTeammateWithPetOwner_Params params;
	params.OtherPlayer = OtherPlayer;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.HandleAirAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Area                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           IsAirAttacking                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::HandleAirAttack(const struct FVector& Area, bool IsAirAttacking)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.HandleAirAttack");

	ABasePetCharacter_BP_C_HandleAirAttack_Params params;
	params.Area = Area;
	params.IsAirAttacking = IsAirAttacking;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.SetPetHidden
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bHidden                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::SetPetHidden(bool bHidden)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.SetPetHidden");

	ABasePetCharacter_BP_C_SetPetHidden_Params params;
	params.bHidden = bHidden;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetSwimmingStateChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnter                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::OnPetSwimmingStateChange(bool bEnter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetSwimmingStateChange");

	ABasePetCharacter_BP_C_OnPetSwimmingStateChange_Params params;
	params.bEnter = bEnter;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetGameModeType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EGameModeType                  GameModeType                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::GetGameModeType(EGameModeType* GameModeType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetGameModeType");

	ABasePetCharacter_BP_C_GetGameModeType_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (GameModeType != nullptr)
		*GameModeType = params.GameModeType;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.HandleOnOwnerWin
// (Public, BlueprintCallable, BlueprintEvent)

void ABasePetCharacter_BP_C::HandleOnOwnerWin()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.HandleOnOwnerWin");

	ABasePetCharacter_BP_C_HandleOnOwnerWin_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetOwnerFallingModeChange
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsFalling                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::OnPetOwnerFallingModeChange(bool IsFalling)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetOwnerFallingModeChange");

	ABasePetCharacter_BP_C_OnPetOwnerFallingModeChange_Params params;
	params.IsFalling = IsFalling;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.StopCurMontage
// (Public, BlueprintCallable, BlueprintEvent)

void ABasePetCharacter_BP_C::StopCurMontage()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.StopCurMontage");

	ABasePetCharacter_BP_C_StopCurMontage_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.ChangeToDefaultAttachInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABasePetCharacter_BP_C::ChangeToDefaultAttachInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.ChangeToDefaultAttachInfo");

	ABasePetCharacter_BP_C_ChangeToDefaultAttachInfo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnDelayLeaveDisappear
// (Public, BlueprintCallable, BlueprintEvent)

void ABasePetCharacter_BP_C::OnDelayLeaveDisappear()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnDelayLeaveDisappear");

	ABasePetCharacter_BP_C_OnDelayLeaveDisappear_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetLeaveState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPetState>         LeaveState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::OnPetLeaveState(TEnumAsByte<EPetState> LeaveState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetLeaveState");

	ABasePetCharacter_BP_C_OnPetLeaveState_Params params;
	params.LeaveState = LeaveState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetEnterState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPetState>         EnterState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::OnPetEnterState(TEnumAsByte<EPetState> EnterState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetEnterState");

	ABasePetCharacter_BP_C_OnPetEnterState_Params params;
	params.EnterState = EnterState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetAppearAnimEnd
// (Public, BlueprintCallable, BlueprintEvent)

void ABasePetCharacter_BP_C::OnPetAppearAnimEnd()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetAppearAnimEnd");

	ABasePetCharacter_BP_C_OnPetAppearAnimEnd_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetDisappearStateChange
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnter                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::OnPetDisappearStateChange(bool IsEnter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetDisappearStateChange");

	ABasePetCharacter_BP_C_OnPetDisappearStateChange_Params params;
	params.IsEnter = IsEnter;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetPetParachuteEquipments
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<int>                    Out                            (Parm, OutParm, ZeroConstructor)

void ABasePetCharacter_BP_C::GetPetParachuteEquipments(TArray<int>* Out)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetPetParachuteEquipments");

	ABasePetCharacter_BP_C_GetPetParachuteEquipments_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.HandlePetStopParachute
// (Public, BlueprintCallable, BlueprintEvent)

void ABasePetCharacter_BP_C::HandlePetStopParachute()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.HandlePetStopParachute");

	ABasePetCharacter_BP_C_HandlePetStopParachute_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.HandlePetStartParachute
// (Public, BlueprintCallable, BlueprintEvent)

void ABasePetCharacter_BP_C::HandlePetStartParachute()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.HandlePetStartParachute");

	ABasePetCharacter_BP_C_HandlePetStartParachute_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.DetachFromOwnerPlayer
// (Public, BlueprintCallable, BlueprintEvent)

void ABasePetCharacter_BP_C::DetachFromOwnerPlayer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.DetachFromOwnerPlayer");

	ABasePetCharacter_BP_C_DetachFromOwnerPlayer_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.InitPetAvatar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABasePetCharacter_BP_C::InitPetAvatar()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.InitPetAvatar");

	ABasePetCharacter_BP_C_InitPetAvatar_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.SetPetFollowType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPetFollowOwnerType> Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::SetPetFollowType(TEnumAsByte<EPetFollowOwnerType> Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.SetPetFollowType");

	ABasePetCharacter_BP_C_SetPetFollowType_Params params;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.PetHasDisappearState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::PetHasDisappearState(bool* Out)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.PetHasDisappearState");

	ABasePetCharacter_BP_C_PetHasDisappearState_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetFlyAroundStateChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnter                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::OnPetFlyAroundStateChange(bool IsEnter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetFlyAroundStateChange");

	ABasePetCharacter_BP_C_OnPetFlyAroundStateChange_Params params;
	params.IsEnter = IsEnter;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetFollowStateChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnter                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::OnPetFollowStateChange(bool IsEnter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetFollowStateChange");

	ABasePetCharacter_BP_C_OnPetFollowStateChange_Params params;
	params.IsEnter = IsEnter;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.UpdateAttachInfoByOwnerDefaultAvatar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABasePetCharacter_BP_C::UpdateAttachInfoByOwnerDefaultAvatar()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.UpdateAttachInfoByOwnerDefaultAvatar");

	ABasePetCharacter_BP_C_UpdateAttachInfoByOwnerDefaultAvatar_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.ResetAttachInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABasePetCharacter_BP_C::ResetAttachInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.ResetAttachInfo");

	ABasePetCharacter_BP_C_ResetAttachInfo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetPetInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameModePlayerPetInfo  PetInfo                        (Parm, OutParm)

void ABasePetCharacter_BP_C::GetPetInfo(struct FGameModePlayerPetInfo* PetInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetPetInfo");

	ABasePetCharacter_BP_C_GetPetInfo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (PetInfo != nullptr)
		*PetInfo = params.PetInfo;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetPetEntity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPetEntityComponent_BP_C* PetEntity                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::GetPetEntity(class UPetEntityComponent_BP_C** PetEntity)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetPetEntity");

	ABasePetCharacter_BP_C_GetPetEntity_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (PetEntity != nullptr)
		*PetEntity = params.PetEntity;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.DisableUnuseComponent
// (Public, BlueprintCallable, BlueprintEvent)

void ABasePetCharacter_BP_C::DisableUnuseComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.DisableUnuseComponent");

	ABasePetCharacter_BP_C_DisableUnuseComponent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.CalcInAirAttackArea
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABasePetCharacter_BP_C::CalcInAirAttackArea()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.CalcInAirAttackArea");

	ABasePetCharacter_BP_C_CalcInAirAttackArea_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.SelfPetVisibleSettingChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           In                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::SelfPetVisibleSettingChanged(bool In)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.SelfPetVisibleSettingChanged");

	ABasePetCharacter_BP_C_SelfPetVisibleSettingChanged_Params params;
	params.In = In;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OtherPetVisibleSettingChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           In                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::OtherPetVisibleSettingChanged(bool In)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.OtherPetVisibleSettingChanged");

	ABasePetCharacter_BP_C_OtherPetVisibleSettingChanged_Params params;
	params.In = In;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.PetOtherVisibleSetting
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::PetOtherVisibleSetting(bool* Out)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.PetOtherVisibleSetting");

	ABasePetCharacter_BP_C_PetOtherVisibleSetting_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.PetSelfVisibleSetting
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::PetSelfVisibleSetting(bool* Out)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.PetSelfVisibleSetting");

	ABasePetCharacter_BP_C_PetSelfVisibleSetting_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetPetDefaultFollowType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EPetFollowOwnerType> FollowType                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::GetPetDefaultFollowType(TEnumAsByte<EPetFollowOwnerType>* FollowType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetPetDefaultFollowType");

	ABasePetCharacter_BP_C_GetPetDefaultFollowType_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (FollowType != nullptr)
		*FollowType = params.FollowType;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.DrawPetDebugInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABasePetCharacter_BP_C::DrawPetDebugInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.DrawPetDebugInfo");

	ABasePetCharacter_BP_C_DrawPetDebugInfo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.AttachToOwnerPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABasePetCharacter_BP_C::AttachToOwnerPlayer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.AttachToOwnerPlayer");

	ABasePetCharacter_BP_C_AttachToOwnerPlayer_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.PetOwnerStopEmote
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EmoteId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            StopReason                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::PetOwnerStopEmote(int EmoteId, int StopReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.PetOwnerStopEmote");

	ABasePetCharacter_BP_C_PetOwnerStopEmote_Params params;
	params.EmoteId = EmoteId;
	params.StopReason = StopReason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.PetOwnerPlayEmote
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EmoteId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::PetOwnerPlayEmote(int EmoteId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.PetOwnerPlayEmote");

	ABasePetCharacter_BP_C_PetOwnerPlayEmote_Params params;
	params.EmoteId = EmoteId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.AnimIdIsValid
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            AnimId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::AnimIdIsValid(int AnimId, bool* IsValid)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.AnimIdIsValid");

	ABasePetCharacter_BP_C_AnimIdIsValid_Params params;
	params.AnimId = AnimId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetPetRspInfoWithPlayerEmoteId
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerEmoteId                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBP_STRUCT_PetPlayerEmoteTable_type Out_Row                        (Parm, OutParm)
// bool                           found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::GetPetRspInfoWithPlayerEmoteId(int PlayerEmoteId, struct FBP_STRUCT_PetPlayerEmoteTable_type* Out_Row, bool* found)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetPetRspInfoWithPlayerEmoteId");

	ABasePetCharacter_BP_C_GetPetRspInfoWithPlayerEmoteId_Params params;
	params.PlayerEmoteId = PlayerEmoteId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Out_Row != nullptr)
		*Out_Row = params.Out_Row;
	if (found != nullptr)
		*found = params.found;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetPetAnimLimitePlayerState
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           AnimId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ABasePetCharacter_BP_C::GetPetAnimLimitePlayerState(int* AnimId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetPetAnimLimitePlayerState");

	ABasePetCharacter_BP_C_GetPetAnimLimitePlayerState_Params params;
	params.AnimId = AnimId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetPetUnlockAnimIds
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> ABasePetCharacter_BP_C::GetPetUnlockAnimIds()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetPetUnlockAnimIds");

	ABasePetCharacter_BP_C_GetPetUnlockAnimIds_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetPetOwnerCharacter
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraBaseCharacter*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASTExtraBaseCharacter* ABasePetCharacter_BP_C::GetPetOwnerCharacter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetPetOwnerCharacter");

	ABasePetCharacter_BP_C_GetPetOwnerCharacter_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetPetAttachInfo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPetAttachInfo          AttachInfo                     (Parm, OutParm)

void ABasePetCharacter_BP_C::GetPetAttachInfo(struct FPetAttachInfo* AttachInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetPetAttachInfo");

	ABasePetCharacter_BP_C_GetPetAttachInfo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AttachInfo != nullptr)
		*AttachInfo = params.AttachInfo;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetPetEventManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPetEventManagerComponent* PetEventManager                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::GetPetEventManager(class UPetEventManagerComponent** PetEventManager)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetPetEventManager");

	ABasePetCharacter_BP_C_GetPetEventManager_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (PetEventManager != nullptr)
		*PetEventManager = params.PetEventManager;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.SetOwnerCharacterPC
// (Public, BlueprintCallable, BlueprintEvent)

void ABasePetCharacter_BP_C::SetOwnerCharacterPC()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.SetOwnerCharacterPC");

	ABasePetCharacter_BP_C_SetOwnerCharacterPC_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetOwnerCharacter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_PlayerPawn_C*        OwnerCharacter                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::GetOwnerCharacter(class ABP_PlayerPawn_C** OwnerCharacter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetOwnerCharacter");

	ABasePetCharacter_BP_C_GetOwnerCharacter_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OwnerCharacter != nullptr)
		*OwnerCharacter = params.OwnerCharacter;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.SetOwnerCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerPawn_C*        Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::SetOwnerCharacter(class ABP_PlayerPawn_C* Owner)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.SetOwnerCharacter");

	ABasePetCharacter_BP_C_SetOwnerCharacter_Params params;
	params.Owner = Owner;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetFollowPos
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          MinRadius                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxRadius                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Out                            (Parm, OutParm, IsPlainOldData)

void ABasePetCharacter_BP_C::GetFollowPos(float MinRadius, float MaxRadius, struct FTransform* Out)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.GetFollowPos");

	ABasePetCharacter_BP_C_GetFollowPos_Params params;
	params.MinRadius = MinRadius;
	params.MaxRadius = MaxRadius;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABasePetCharacter_BP_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.UserConstructionScript");

	ABasePetCharacter_BP_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABasePetCharacter_BP_C::Timeline_0__FinishedFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.Timeline_0__FinishedFunc");

	ABasePetCharacter_BP_C_Timeline_0__FinishedFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABasePetCharacter_BP_C::Timeline_0__UpdateFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.Timeline_0__UpdateFunc");

	ABasePetCharacter_BP_C_Timeline_0__UpdateFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.BindEvent
// (BlueprintCallable, BlueprintEvent)

void ABasePetCharacter_BP_C::BindEvent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.BindEvent");

	ABasePetCharacter_BP_C_BindEvent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.BndEvt__PetEventManager_K2Node_ComponentBoundEvent_0_PetEventDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPetWaitEventInfo*       EventInfo                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::BndEvt__PetEventManager_K2Node_ComponentBoundEvent_0_PetEventDelegate__DelegateSignature(class UPetWaitEventInfo* EventInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.BndEvt__PetEventManager_K2Node_ComponentBoundEvent_0_PetEventDelegate__DelegateSignature");

	ABasePetCharacter_BP_C_BndEvt__PetEventManager_K2Node_ComponentBoundEvent_0_PetEventDelegate__DelegateSignature_Params params;
	params.EventInfo = EventInfo;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.PlayerStateChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPawnState                     State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPawnStateChangeType> ChangeType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::PlayerStateChange(EPawnState State, TEnumAsByte<EPawnStateChangeType> ChangeType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.PlayerStateChange");

	ABasePetCharacter_BP_C_PlayerStateChange_Params params;
	params.State = State;
	params.ChangeType = ChangeType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABasePetCharacter_BP_C::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.ReceiveBeginPlay");

	ABasePetCharacter_BP_C_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.PetOwnerCharacterBecomeValid
// (Event, Public, BlueprintEvent)

void ABasePetCharacter_BP_C::PetOwnerCharacterBecomeValid()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.PetOwnerCharacterBecomeValid");

	ABasePetCharacter_BP_C_PetOwnerCharacterBecomeValid_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.UpdateSplineInfo
// (BlueprintCallable, BlueprintEvent)

void ABasePetCharacter_BP_C::UpdateSplineInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.UpdateSplineInfo");

	ABasePetCharacter_BP_C_UpdateSplineInfo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.PetStopParchute
// (BlueprintCallable, BlueprintEvent)

void ABasePetCharacter_BP_C::PetStopParchute()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.PetStopParchute");

	ABasePetCharacter_BP_C_PetStopParchute_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.PetStartParachute
// (BlueprintCallable, BlueprintEvent)

void ABasePetCharacter_BP_C::PetStartParachute()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.PetStartParachute");

	ABasePetCharacter_BP_C_PetStartParachute_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetStateChangeEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPetState>         State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnter                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::OnPetStateChangeEvent(TEnumAsByte<EPetState> State, bool IsEnter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetStateChangeEvent");

	ABasePetCharacter_BP_C_OnPetStateChangeEvent_Params params;
	params.State = State;
	params.IsEnter = IsEnter;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetMontageEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPetMontageData         MontageData                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABasePetCharacter_BP_C::OnPetMontageEvent(const struct FPetMontageData& MontageData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetMontageEvent");

	ABasePetCharacter_BP_C_OnPetMontageEvent_Params params;
	params.MontageData = MontageData;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnAsyncLoadPetAnimRes
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 LoadObject                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::OnAsyncLoadPetAnimRes(class UObject* LoadObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnAsyncLoadPetAnimRes");

	ABasePetCharacter_BP_C_OnAsyncLoadPetAnimRes_Params params;
	params.LoadObject = LoadObject;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.SetPetVisibility
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::SetPetVisibility(bool* Visible)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.SetPetVisibility");

	ABasePetCharacter_BP_C_SetPetVisibility_Params params;
	params.Visible = Visible;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnOwnerWinEvent
// (BlueprintCallable, BlueprintEvent)

void ABasePetCharacter_BP_C::OnOwnerWinEvent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnOwnerWinEvent");

	ABasePetCharacter_BP_C_OnOwnerWinEvent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnOwnerKillSomeone
// (BlueprintCallable, BlueprintEvent)

void ABasePetCharacter_BP_C::OnOwnerKillSomeone()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnOwnerKillSomeone");

	ABasePetCharacter_BP_C_OnOwnerKillSomeone_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnOwnerAssistKill
// (BlueprintCallable, BlueprintEvent)

void ABasePetCharacter_BP_C::OnOwnerAssistKill()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnOwnerAssistKill");

	ABasePetCharacter_BP_C_OnOwnerAssistKill_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnMoveVoiceAround
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraBaseCharacter*   nowCharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 posVector                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          showTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::OnMoveVoiceAround(class ASTExtraBaseCharacter* nowCharacter, const struct FVector& posVector, float showTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnMoveVoiceAround");

	ABasePetCharacter_BP_C_OnMoveVoiceAround_Params params;
	params.nowCharacter = nowCharacter;
	params.posVector = posVector;
	params.showTime = showTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnShotVoiceAround
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraBaseCharacter*   OwnerPawn                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ASTExtraShootWeapon*     nowWeapon                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 posVector                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          showTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isslience                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isExplosion                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::OnShotVoiceAround(class ASTExtraBaseCharacter* OwnerPawn, class ASTExtraShootWeapon* nowWeapon, const struct FVector& posVector, float showTime, bool isslience, bool isExplosion)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnShotVoiceAround");

	ABasePetCharacter_BP_C_OnShotVoiceAround_Params params;
	params.OwnerPawn = OwnerPawn;
	params.nowWeapon = nowWeapon;
	params.posVector = posVector;
	params.showTime = showTime;
	params.isslience = isslience;
	params.isExplosion = isExplosion;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.TriggerPetEvent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPetWaitEventInfo**      Event                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::TriggerPetEvent(class UPetWaitEventInfo** Event)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.TriggerPetEvent");

	ABasePetCharacter_BP_C_TriggerPetEvent_Params params;
	params.Event = Event;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.NotifyBpDrawDebugLineChange
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          Draw                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::NotifyBpDrawDebugLineChange(bool* Draw)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.NotifyBpDrawDebugLineChange");

	ABasePetCharacter_BP_C_NotifyBpDrawDebugLineChange_Params params;
	params.Draw = Draw;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.DebugLineTimerEvent
// (BlueprintCallable, BlueprintEvent)

void ABasePetCharacter_BP_C::DebugLineTimerEvent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.DebugLineTimerEvent");

	ABasePetCharacter_BP_C_DebugLineTimerEvent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetOwnerStateInterruptEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPawnState                     State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EPawnState                     InterruptedBy                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::OnPetOwnerStateInterruptEvent(EPawnState State, EPawnState InterruptedBy)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetOwnerStateInterruptEvent");

	ABasePetCharacter_BP_C_OnPetOwnerStateInterruptEvent_Params params;
	params.State = State;
	params.InterruptedBy = InterruptedBy;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnOwnerAvatarEquipped
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAvatarSlotType*               SlotType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsEquipped                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           InItemID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::OnOwnerAvatarEquipped(EAvatarSlotType* SlotType, bool* IsEquipped, int* InItemID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnOwnerAvatarEquipped");

	ABasePetCharacter_BP_C_OnOwnerAvatarEquipped_Params params;
	params.SlotType = SlotType;
	params.IsEquipped = IsEquipped;
	params.InItemID = InItemID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.PetEnterPlane
// (BlueprintCallable, BlueprintEvent)

void ABasePetCharacter_BP_C::PetEnterPlane()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.PetEnterPlane");

	ABasePetCharacter_BP_C_PetEnterPlane_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetOwnerFallingModeChangeEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsFalling                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::OnPetOwnerFallingModeChangeEvent(bool IsFalling)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetOwnerFallingModeChangeEvent");

	ABasePetCharacter_BP_C_OnPetOwnerFallingModeChangeEvent_Params params;
	params.IsFalling = IsFalling;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnOwnerPerspectiveChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsFPP                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::OnOwnerPerspectiveChanged(bool IsFPP)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnOwnerPerspectiveChanged");

	ABasePetCharacter_BP_C_OnOwnerPerspectiveChanged_Params params;
	params.IsFPP = IsFPP;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnOwnerHoldGrenadeStateChange
// (BlueprintCallable, BlueprintEvent)

void ABasePetCharacter_BP_C::OnOwnerHoldGrenadeStateChange()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnOwnerHoldGrenadeStateChange");

	ABasePetCharacter_BP_C_OnOwnerHoldGrenadeStateChange_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetOwnerShoot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPawnState                     State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::OnPetOwnerShoot(EPawnState State)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetOwnerShoot");

	ABasePetCharacter_BP_C_OnPetOwnerShoot_Params params;
	params.State = State;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetVisibility_EnterHide
// (BlueprintCallable, BlueprintEvent)

void ABasePetCharacter_BP_C::OnPetVisibility_EnterHide()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetVisibility_EnterHide");

	ABasePetCharacter_BP_C_OnPetVisibility_EnterHide_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetVisibility_EnterVisible
// (BlueprintCallable, BlueprintEvent)

void ABasePetCharacter_BP_C::OnPetVisibility_EnterVisible()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPetVisibility_EnterVisible");

	ABasePetCharacter_BP_C_OnPetVisibility_EnterVisible_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPlayerEnterParachute
// (BlueprintCallable, BlueprintEvent)

void ABasePetCharacter_BP_C::OnPlayerEnterParachute()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPlayerEnterParachute");

	ABasePetCharacter_BP_C_OnPlayerEnterParachute_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPlayerExitParachute
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EExitParachuteType             exitType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::OnPlayerExitParachute(EExitParachuteType exitType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPlayerExitParachute");

	ABasePetCharacter_BP_C_OnPlayerExitParachute_Params params;
	params.exitType = exitType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.MyPetVisibleSettingTPP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BoolValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::MyPetVisibleSettingTPP(bool BoolValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.MyPetVisibleSettingTPP");

	ABasePetCharacter_BP_C_MyPetVisibleSettingTPP_Params params;
	params.BoolValue = BoolValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.MyPetVisibleSettingFPP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BoolValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::MyPetVisibleSettingFPP(bool BoolValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.MyPetVisibleSettingFPP");

	ABasePetCharacter_BP_C_MyPetVisibleSettingFPP_Params params;
	params.BoolValue = BoolValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.On
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraBaseCharacter*   DeadCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             Killer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              KillingHitInfo                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 KillingHitImpulseDir           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UClass*                  KillingHitDamageType           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::On(class ASTExtraBaseCharacter* DeadCharacter, class AController* Killer, class AActor* DamageCauser, const struct FHitResult& KillingHitInfo, const struct FVector& KillingHitImpulseDir, class UClass* KillingHitDamageType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.On");

	ABasePetCharacter_BP_C_On_Params params;
	params.DeadCharacter = DeadCharacter;
	params.Killer = Killer;
	params.DamageCauser = DamageCauser;
	params.KillingHitInfo = KillingHitInfo;
	params.KillingHitImpulseDir = KillingHitImpulseDir;
	params.KillingHitDamageType = KillingHitDamageType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPlayerScopIN
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsBegin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::OnPlayerScopIN(bool bIsBegin)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPlayerScopIN");

	ABasePetCharacter_BP_C_OnPlayerScopIN_Params params;
	params.bIsBegin = bIsBegin;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsBegin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::CustomEvent(bool bIsBegin)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.CustomEvent");

	ABasePetCharacter_BP_C_CustomEvent_Params params;
	params.bIsBegin = bIsBegin;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnAvatarAllMeshLoaded_Event_1
// (BlueprintCallable, BlueprintEvent)

void ABasePetCharacter_BP_C::OnAvatarAllMeshLoaded_Event_1()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnAvatarAllMeshLoaded_Event_1");

	ABasePetCharacter_BP_C_OnAvatarAllMeshLoaded_Event_1_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsBegin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::CustomEvent_2(bool bIsBegin)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.CustomEvent_2");

	ABasePetCharacter_BP_C_CustomEvent_2_Params params;
	params.bIsBegin = bIsBegin;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsBegin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::CustomEvent_3(bool bIsBegin)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.CustomEvent_3");

	ABasePetCharacter_BP_C_CustomEvent_3_Params params;
	params.bIsBegin = bIsBegin;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPlayerRespawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AUAEPlayerController*    PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::OnPlayerRespawned(class AUAEPlayerController* PlayerController)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnPlayerRespawned");

	ABasePetCharacter_BP_C_OnPlayerRespawned_Params params;
	params.PlayerController = PlayerController;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnRep_AttachToPetOwner
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABasePetCharacter_BP_C::OnRep_AttachToPetOwner()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.OnRep_AttachToPetOwner");

	ABasePetCharacter_BP_C_OnRep_AttachToPetOwner_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.ResetMaterialIfNeed
// (BlueprintCallable, BlueprintEvent)

void ABasePetCharacter_BP_C::ResetMaterialIfNeed()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.ResetMaterialIfNeed");

	ABasePetCharacter_BP_C_ResetMaterialIfNeed_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.ExecuteUbergraph_BasePetCharacter_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::ExecuteUbergraph_BasePetCharacter_BP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.ExecuteUbergraph_BasePetCharacter_BP");

	ABasePetCharacter_BP_C_ExecuteUbergraph_BasePetCharacter_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BasePetCharacter_BP.BasePetCharacter_BP_C.PetOwnerStateChangeDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPawnState                     State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPawnStateChangeType> ChangeType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABasePetCharacter_BP_C::PetOwnerStateChangeDispatcher__DelegateSignature(EPawnState State, TEnumAsByte<EPawnStateChangeType> ChangeType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BasePetCharacter_BP.BasePetCharacter_BP_C.PetOwnerStateChangeDispatcher__DelegateSignature");

	ABasePetCharacter_BP_C_PetOwnerStateChangeDispatcher__DelegateSignature_Params params;
	params.State = State;
	params.ChangeType = ChangeType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

