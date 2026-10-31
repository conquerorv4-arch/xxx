// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:36:05 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.ShowScreenDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDamageType>       DamageEventType                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::ShowScreenDamage(float Damage, TEnumAsByte<EDamageType> DamageEventType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.ShowScreenDamage");

	ABP_PlayerCharacter_MainCity_C_ShowScreenDamage_Params params;
	params.Damage = Damage;
	params.DamageEventType = DamageEventType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.GetBattleItemHandlePath
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 EmotePath                      (Parm, OutParm, ZeroConstructor)

void ABP_PlayerCharacter_MainCity_C::GetBattleItemHandlePath(int ItemId, struct FString* EmotePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.GetBattleItemHandlePath");

	ABP_PlayerCharacter_MainCity_C_GetBattleItemHandlePath_Params params;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (EmotePath != nullptr)
		*EmotePath = params.EmotePath;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.RefreshWeaponSight
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_MainCity_C::RefreshWeaponSight()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.RefreshWeaponSight");

	ABP_PlayerCharacter_MainCity_C_RefreshWeaponSight_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.HandleOnLandedSetAutoSprint
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_MainCity_C::HandleOnLandedSetAutoSprint()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.HandleOnLandedSetAutoSprint");

	ABP_PlayerCharacter_MainCity_C_HandleOnLandedSetAutoSprint_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.ChangeParticleEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent* Particle                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 _3DScale                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::ChangeParticleEffect(class UParticleSystemComponent* Particle, const struct FVector& _3DScale)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.ChangeParticleEffect");

	ABP_PlayerCharacter_MainCity_C_ChangeParticleEffect_Params params;
	params.Particle = Particle;
	params._3DScale = _3DScale;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.SpawnEmitterEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 RelativeLocation               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UParticleSystem*         PSRef                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         AttachParent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 RelativeScale                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::SpawnEmitterEffect(const struct FVector& RelativeLocation, class UParticleSystem* PSRef, class USceneComponent* AttachParent, const struct FVector& RelativeScale)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.SpawnEmitterEffect");

	ABP_PlayerCharacter_MainCity_C_SpawnEmitterEffect_Params params;
	params.RelativeLocation = RelativeLocation;
	params.PSRef = PSRef;
	params.AttachParent = AttachParent;
	params.RelativeScale = RelativeScale;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.GetEmoteHandlePath
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ABP_PlayerCharacter_MainCity_C::GetEmoteHandlePath(int* ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.GetEmoteHandlePath");

	ABP_PlayerCharacter_MainCity_C_GetEmoteHandlePath_Params params;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.Replay_IsEnemyFrameUIExisted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsExisted                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::Replay_IsEnemyFrameUIExisted(bool* bIsExisted)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.Replay_IsEnemyFrameUIExisted");

	ABP_PlayerCharacter_MainCity_C_Replay_IsEnemyFrameUIExisted_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bIsExisted != nullptr)
		*bIsExisted = params.bIsExisted;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.HandleOnLanded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ForceLandTime                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::HandleOnLanded(float ForceLandTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.HandleOnLanded");

	ABP_PlayerCharacter_MainCity_C_HandleOnLanded_Params params;
	params.ForceLandTime = ForceLandTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.GetGameModeState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   CurModeState                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::GetGameModeState(struct FName* CurModeState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.GetGameModeState");

	ABP_PlayerCharacter_MainCity_C_GetGameModeState_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (CurModeState != nullptr)
		*CurModeState = params.CurModeState;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.SetTpCameraFov
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FOV                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::SetTpCameraFov(float FOV)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.SetTpCameraFov");

	ABP_PlayerCharacter_MainCity_C_SetTpCameraFov_Params params;
	params.FOV = FOV;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.SetCapsuleParentBounds
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UseParentBounds                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::SetCapsuleParentBounds(bool UseParentBounds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.SetCapsuleParentBounds");

	ABP_PlayerCharacter_MainCity_C_SetCapsuleParentBounds_Params params;
	params.UseParentBounds = UseParentBounds;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.ClearDecalBakingRTCache
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_MainCity_C::ClearDecalBakingRTCache()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.ClearDecalBakingRTCache");

	ABP_PlayerCharacter_MainCity_C_ClearDecalBakingRTCache_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.IsAngledSightAvailable
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_PlayerCharacter_MainCity_C::IsAngledSightAvailable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.IsAngledSightAvailable");

	ABP_PlayerCharacter_MainCity_C_IsAngledSightAvailable_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.RefreshAngledSightUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HaveAngledSight                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAngledSight                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::RefreshAngledSightUI(bool HaveAngledSight, bool IsAngledSight)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.RefreshAngledSightUI");

	ABP_PlayerCharacter_MainCity_C_RefreshAngledSightUI_Params params;
	params.HaveAngledSight = HaveAngledSight;
	params.IsAngledSight = IsAngledSight;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.ShowAngledSightState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsAngled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::ShowAngledSightState(bool IsAngled)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.ShowAngledSightState");

	ABP_PlayerCharacter_MainCity_C_ShowAngledSightState_Params params;
	params.IsAngled = IsAngled;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.GetAngledSightRotator
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASTExtraShootWeapon*     NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                NewParam1                      (Parm, OutParm, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::GetAngledSightRotator(class ASTExtraShootWeapon* NewParam, struct FRotator* NewParam1)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.GetAngledSightRotator");

	ABP_PlayerCharacter_MainCity_C_GetAngledSightRotator_Params params;
	params.NewParam = NewParam;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NewParam1 != nullptr)
		*NewParam1 = params.NewParam1;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.AngledSightAnimLogic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EAngledSightType>  Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::AngledSightAnimLogic(TEnumAsByte<EAngledSightType> Selection)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.AngledSightAnimLogic");

	ABP_PlayerCharacter_MainCity_C_AngledSightAnimLogic_Params params;
	params.Selection = Selection;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.AngledSightAnimUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsOnlyTurn                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::AngledSightAnimUpdate(float InputPin, bool bIsOnlyTurn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.AngledSightAnimUpdate");

	ABP_PlayerCharacter_MainCity_C_AngledSightAnimUpdate_Params params;
	params.InputPin = InputPin;
	params.bIsOnlyTurn = bIsOnlyTurn;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.Replay_CreateEnemyFrameUI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isPlayingCompletePlayback      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           is_enemy                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::Replay_CreateEnemyFrameUI(bool isPlayingCompletePlayback, bool is_enemy)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.Replay_CreateEnemyFrameUI");

	ABP_PlayerCharacter_MainCity_C_Replay_CreateEnemyFrameUI_Params params;
	params.isPlayingCompletePlayback = isPlayingCompletePlayback;
	params.is_enemy = is_enemy;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.Replay_SetVisiableOfFrameUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           is_Visiable                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::Replay_SetVisiableOfFrameUI(bool is_Visiable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.Replay_SetVisiableOfFrameUI");

	ABP_PlayerCharacter_MainCity_C_Replay_SetVisiableOfFrameUI_Params params;
	params.is_Visiable = is_Visiable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.UpdateEmoteWeaponIdInfo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::UpdateEmoteWeaponIdInfo(int ID, bool* Ret)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.UpdateEmoteWeaponIdInfo");

	ABP_PlayerCharacter_MainCity_C_UpdateEmoteWeaponIdInfo_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.AllowWater
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bCanEnter                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::AllowWater(bool* bCanEnter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.AllowWater");

	ABP_PlayerCharacter_MainCity_C_AllowWater_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bCanEnter != nullptr)
		*bCanEnter = params.bCanEnter;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.ShouldRedBlood
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_PlayerCharacter_MainCity_C::ShouldRedBlood()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.ShouldRedBlood");

	ABP_PlayerCharacter_MainCity_C_ShouldRedBlood_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.CheckHasVehicleAvatar
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraVehicleBase*     InVehicle                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ASTExtraBaseCharacter*   PlayerCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InItemID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::CheckHasVehicleAvatar(class ASTExtraVehicleBase* InVehicle, class ASTExtraBaseCharacter* PlayerCharacter, int* InItemID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.CheckHasVehicleAvatar");

	ABP_PlayerCharacter_MainCity_C_CheckHasVehicleAvatar_Params params;
	params.InVehicle = InVehicle;
	params.PlayerCharacter = PlayerCharacter;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InItemID != nullptr)
		*InItemID = params.InItemID;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.ChangeCurVehicleAvatar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraVehicleBase*     InVehicle                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::ChangeCurVehicleAvatar(class ASTExtraVehicleBase* InVehicle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.ChangeCurVehicleAvatar");

	ABP_PlayerCharacter_MainCity_C_ChangeCurVehicleAvatar_Params params;
	params.InVehicle = InVehicle;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.HandleOnChangedVehicleSeat
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_MainCity_C::HandleOnChangedVehicleSeat()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.HandleOnChangedVehicleSeat");

	ABP_PlayerCharacter_MainCity_C_HandleOnChangedVehicleSeat_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.GetMasterBoneComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          MasterBoneComponent            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::GetMasterBoneComponent(class UMeshComponent** MasterBoneComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.GetMasterBoneComponent");

	ABP_PlayerCharacter_MainCity_C_GetMasterBoneComponent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (MasterBoneComponent != nullptr)
		*MasterBoneComponent = params.MasterBoneComponent;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.InitDefaultAvatarByResID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AGender                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Head                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            hair                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::InitDefaultAvatarByResID(int AGender, int Head, int hair)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.InitDefaultAvatarByResID");

	ABP_PlayerCharacter_MainCity_C_InitDefaultAvatarByResID_Params params;
	params.AGender = AGender;
	params.Head = Head;
	params.hair = hair;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.GetGrenadeCameraShakeByDir
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ImpulseDir                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UClass*                  RetVar                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::GetGrenadeCameraShakeByDir(const struct FVector& ImpulseDir, class UClass** RetVar)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.GetGrenadeCameraShakeByDir");

	ABP_PlayerCharacter_MainCity_C_GetGrenadeCameraShakeByDir_Params params;
	params.ImpulseDir = ImpulseDir;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (RetVar != nullptr)
		*RetVar = params.RetVar;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.GetEmoteHandle
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBackpackEmoteHandle*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBackpackEmoteHandle* ABP_PlayerCharacter_MainCity_C::GetEmoteHandle(int* ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.GetEmoteHandle");

	ABP_PlayerCharacter_MainCity_C_GetEmoteHandle_Params params;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.GetShootWeaponNameByWeapon
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ItemDefineID                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ABP_PlayerCharacter_MainCity_C::GetShootWeaponNameByWeapon(int* ItemDefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.GetShootWeaponNameByWeapon");

	ABP_PlayerCharacter_MainCity_C_GetShootWeaponNameByWeapon_Params params;
	params.ItemDefineID = ItemDefineID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.GetThirdPersonCamera
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCameraComponent* ABP_PlayerCharacter_MainCity_C::GetThirdPersonCamera()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.GetThirdPersonCamera");

	ABP_PlayerCharacter_MainCity_C_GetThirdPersonCamera_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.GetThirdPersonSpringArm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpringArmComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USpringArmComponent* ABP_PlayerCharacter_MainCity_C::GetThirdPersonSpringArm()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.GetThirdPersonSpringArm");

	ABP_PlayerCharacter_MainCity_C_GetThirdPersonSpringArm_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.GetFPPCamera
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCameraComponent* ABP_PlayerCharacter_MainCity_C::GetFPPCamera()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.GetFPPCamera");

	ABP_PlayerCharacter_MainCity_C_GetFPPCamera_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.GetFPPSpringArm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpringArmComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USpringArmComponent* ABP_PlayerCharacter_MainCity_C::GetFPPSpringArm()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.GetFPPSpringArm");

	ABP_PlayerCharacter_MainCity_C_GetFPPSpringArm_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.GetFirstPersonCamera
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCameraComponent* ABP_PlayerCharacter_MainCity_C::GetFirstPersonCamera()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.GetFirstPersonCamera");

	ABP_PlayerCharacter_MainCity_C_GetFirstPersonCamera_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.GetFirstPersonSpringArm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpringArmComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USpringArmComponent* ABP_PlayerCharacter_MainCity_C::GetFirstPersonSpringArm()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.GetFirstPersonSpringArm");

	ABP_PlayerCharacter_MainCity_C_GetFirstPersonSpringArm_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.GetScopeCamera
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCameraComponent* ABP_PlayerCharacter_MainCity_C::GetScopeCamera()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.GetScopeCamera");

	ABP_PlayerCharacter_MainCity_C_GetScopeCamera_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.GetScopeSpringArm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpringArmComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USpringArmComponent* ABP_PlayerCharacter_MainCity_C::GetScopeSpringArm()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.GetScopeSpringArm");

	ABP_PlayerCharacter_MainCity_C_GetScopeSpringArm_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.ShouldAutoScopeWhenPeek
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_PlayerCharacter_MainCity_C::ShouldAutoScopeWhenPeek()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.ShouldAutoScopeWhenPeek");

	ABP_PlayerCharacter_MainCity_C_ShouldAutoScopeWhenPeek_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.GetControllerViewCamera
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*        Camera                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::GetControllerViewCamera(class UCameraComponent** Camera)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.GetControllerViewCamera");

	ABP_PlayerCharacter_MainCity_C_GetControllerViewCamera_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Camera != nullptr)
		*Camera = params.Camera;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.HandleOnDetachedVehicle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraVehicleBase*     NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::HandleOnDetachedVehicle(class ASTExtraVehicleBase* NewParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.HandleOnDetachedVehicle");

	ABP_PlayerCharacter_MainCity_C_HandleOnDetachedVehicle_Params params;
	params.NewParam = NewParam;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.HandleOnAttachedVehicle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraVehicleBase*     InVehicle                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::HandleOnAttachedVehicle(class ASTExtraVehicleBase* InVehicle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.HandleOnAttachedVehicle");

	ABP_PlayerCharacter_MainCity_C_HandleOnAttachedVehicle_Params params;
	params.InVehicle = InVehicle;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.GetActiveSpringArm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpringArmComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USpringArmComponent* ABP_PlayerCharacter_MainCity_C::GetActiveSpringArm()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.GetActiveSpringArm");

	ABP_PlayerCharacter_MainCity_C_GetActiveSpringArm_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.AimInterupted
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_MainCity_C::AimInterupted()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.AimInterupted");

	ABP_PlayerCharacter_MainCity_C_AimInterupted_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.GetWeapon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 NewParam                       (Parm, OutParm, IsPlainOldData)
// struct FRotator                NewParam1                      (Parm, OutParm, IsPlainOldData)
// bool                           bHaveWeapon                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::GetWeapon(struct FVector* NewParam, struct FRotator* NewParam1, bool* bHaveWeapon)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.GetWeapon");

	ABP_PlayerCharacter_MainCity_C_GetWeapon_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
	if (NewParam1 != nullptr)
		*NewParam1 = params.NewParam1;
	if (bHaveWeapon != nullptr)
		*bHaveWeapon = params.bHaveWeapon;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.ResetBPCameraSetting
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_MainCity_C::ResetBPCameraSetting()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.ResetBPCameraSetting");

	ABP_PlayerCharacter_MainCity_C_ResetBPCameraSetting_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.ShowDebugArrow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         self2                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                InRot                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::ShowDebugArrow(class USceneComponent* self2, const struct FRotator& InRot, const struct FLinearColor& Color)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.ShowDebugArrow");

	ABP_PlayerCharacter_MainCity_C_ShowDebugArrow_Params params;
	params.self2 = self2;
	params.InRot = InRot;
	params.Color = Color;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.IsAutonomous
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::IsAutonomous(bool* NewParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.IsAutonomous");

	ABP_PlayerCharacter_MainCity_C_IsAutonomous_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.PickUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APickUpWrapperActor*     NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::PickUp(class APickUpWrapperActor* NewParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.PickUp");

	ABP_PlayerCharacter_MainCity_C_PickUp_Params params;
	params.NewParam = NewParam;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.DoPickUpTarget
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_MainCity_C::DoPickUpTarget()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.DoPickUpTarget");

	ABP_PlayerCharacter_MainCity_C_DoPickUpTarget_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.RotateMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::RotateMesh(const struct FRotator& NewParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.RotateMesh");

	ABP_PlayerCharacter_MainCity_C_RotateMesh_Params params;
	params.NewParam = NewParam;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.SetAllCollisionEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::SetAllCollisionEnabled(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.SetAllCollisionEnabled");

	ABP_PlayerCharacter_MainCity_C_SetAllCollisionEnabled_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.MoveOutScope
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_MainCity_C::MoveOutScope()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.MoveOutScope");

	ABP_PlayerCharacter_MainCity_C_MoveOutScope_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.MoveInScope
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_MainCity_C::MoveInScope()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.MoveInScope");

	ABP_PlayerCharacter_MainCity_C_MoveInScope_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.Reload
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_MainCity_C::Reload()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.Reload");

	ABP_PlayerCharacter_MainCity_C_Reload_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.SwitchCrouch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESTEPoseState>     NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESTEPoseState>     preState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::SwitchCrouch(TEnumAsByte<ESTEPoseState> NewParam, TEnumAsByte<ESTEPoseState> preState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.SwitchCrouch");

	ABP_PlayerCharacter_MainCity_C_SwitchCrouch_Params params;
	params.NewParam = NewParam;
	params.preState = preState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_MainCity_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.UserConstructionScript");

	ABP_PlayerCharacter_MainCity_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.ScopeTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_PlayerCharacter_MainCity_C::ScopeTimeline__FinishedFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.ScopeTimeline__FinishedFunc");

	ABP_PlayerCharacter_MainCity_C_ScopeTimeline__FinishedFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.ScopeTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_PlayerCharacter_MainCity_C::ScopeTimeline__UpdateFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.ScopeTimeline__UpdateFunc");

	ABP_PlayerCharacter_MainCity_C_ScopeTimeline__UpdateFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.OnEnterStateForBp
// (Event, Public, BlueprintEvent)
// Parameters:
// EPawnState*                    State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::OnEnterStateForBp(EPawnState* State)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.OnEnterStateForBp");

	ABP_PlayerCharacter_MainCity_C_OnEnterStateForBp_Params params;
	params.State = State;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.OnLeaveStateForBp
// (Event, Public, BlueprintEvent)
// Parameters:
// EPawnState*                    State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::OnLeaveStateForBp(EPawnState* State)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.OnLeaveStateForBp");

	ABP_PlayerCharacter_MainCity_C_OnLeaveStateForBp_Params params;
	params.State = State;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_PlayerCharacter_MainCity_C::ReceiveDestroyed()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.ReceiveDestroyed");

	ABP_PlayerCharacter_MainCity_C_ReceiveDestroyed_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.PawnVaultServerStopCheckBluePrint
// (Event, Public, BlueprintEvent)

void ABP_PlayerCharacter_MainCity_C::PawnVaultServerStopCheckBluePrint()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.PawnVaultServerStopCheckBluePrint");

	ABP_PlayerCharacter_MainCity_C_PawnVaultServerStopCheckBluePrint_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.PawnVaultStopBluePrint
// (Event, Public, BlueprintEvent)

void ABP_PlayerCharacter_MainCity_C::PawnVaultStopBluePrint()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.PawnVaultStopBluePrint");

	ABP_PlayerCharacter_MainCity_C_PawnVaultStopBluePrint_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.OnWeaponEquipmentUpdate
// (Event, Public, BlueprintEvent)

void ABP_PlayerCharacter_MainCity_C::OnWeaponEquipmentUpdate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.OnWeaponEquipmentUpdate");

	ABP_PlayerCharacter_MainCity_C_OnWeaponEquipmentUpdate_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.SwitchSightAngledLocal
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EAngledSightType>* Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsOnlyTurn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::SwitchSightAngledLocal(TEnumAsByte<EAngledSightType>* Type, bool* IsOnlyTurn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.SwitchSightAngledLocal");

	ABP_PlayerCharacter_MainCity_C_SwitchSightAngledLocal_Params params;
	params.Type = Type;
	params.IsOnlyTurn = IsOnlyTurn;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.DoAngledSight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPush                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::DoAngledSight(bool IsPush)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.DoAngledSight");

	ABP_PlayerCharacter_MainCity_C_DoAngledSight_Params params;
	params.IsPush = IsPush;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.ParachutePlaySound
// (Event, Public, BlueprintEvent)
// Parameters:
// class UAkAudioEvent**          LocalAkEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAkAudioEvent**          RemoteAkEvent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::ParachutePlaySound(class UAkAudioEvent** LocalAkEvent, class UAkAudioEvent** RemoteAkEvent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.ParachutePlaySound");

	ABP_PlayerCharacter_MainCity_C_ParachutePlaySound_Params params;
	params.LocalAkEvent = LocalAkEvent;
	params.RemoteAkEvent = RemoteAkEvent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            NewController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::ReceivePossessed(class AController** NewController)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.ReceivePossessed");

	ABP_PlayerCharacter_MainCity_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.BPReceiveRadialDamage
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         DamageReceived                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Origin                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                ImpulseDir                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float*                         CamerShakeScale                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::BPReceiveRadialDamage(float* DamageReceived, class UDamageType** DamageType, struct FVector* Origin, float* Radius, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FVector* ImpulseDir, float* CamerShakeScale)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.BPReceiveRadialDamage");

	ABP_PlayerCharacter_MainCity_C_BPReceiveRadialDamage_Params params;
	params.DamageReceived = DamageReceived;
	params.DamageType = DamageType;
	params.Origin = Origin;
	params.Radius = Radius;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.ImpulseDir = ImpulseDir;
	params.CamerShakeScale = CamerShakeScale;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.PlayScopeInTimeline
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::PlayScopeInTimeline(float Rate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.PlayScopeInTimeline");

	ABP_PlayerCharacter_MainCity_C_PlayScopeInTimeline_Params params;
	params.Rate = Rate;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.DoNormalSight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPush                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::DoNormalSight(bool IsPush)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.DoNormalSight");

	ABP_PlayerCharacter_MainCity_C_DoNormalSight_Params params;
	params.IsPush = IsPush;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.ScopeInStop
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_MainCity_C::ScopeInStop()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.ScopeInStop");

	ABP_PlayerCharacter_MainCity_C_ScopeInStop_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.PawnVaultAllBluePrint
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         dis                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Length                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                VaultKey                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector*                StartPos                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor**                 checkActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         crossblockMaxFall              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         crossblockMaxDis               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitPoint                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator*               MoveDir                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::PawnVaultAllBluePrint(float* dis, float* Height, float* Length, struct FString* VaultKey, struct FVector* StartPos, class AActor** checkActor, float* crossblockMaxFall, float* crossblockMaxDis, struct FVector* HitPoint, struct FRotator* MoveDir)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.PawnVaultAllBluePrint");

	ABP_PlayerCharacter_MainCity_C_PawnVaultAllBluePrint_Params params;
	params.dis = dis;
	params.Height = Height;
	params.Length = Length;
	params.VaultKey = VaultKey;
	params.StartPos = StartPos;
	params.checkActor = checkActor;
	params.crossblockMaxFall = crossblockMaxFall;
	params.crossblockMaxDis = crossblockMaxDis;
	params.HitPoint = HitPoint;
	params.MoveDir = MoveDir;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.PawnVaultServerBluePrint
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         dis                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Length                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                VaultKey                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector*                StartPos                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor**                 checkActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         crossblockMaxFall              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         crossblockMaxDis               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitPoint                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor**                 WindowActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               MoveDir                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::PawnVaultServerBluePrint(float* dis, float* Height, float* Length, struct FString* VaultKey, struct FVector* StartPos, class AActor** checkActor, float* crossblockMaxFall, float* crossblockMaxDis, struct FVector* HitPoint, class AActor** WindowActor, struct FRotator* MoveDir)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.PawnVaultServerBluePrint");

	ABP_PlayerCharacter_MainCity_C_PawnVaultServerBluePrint_Params params;
	params.dis = dis;
	params.Height = Height;
	params.Length = Length;
	params.VaultKey = VaultKey;
	params.StartPos = StartPos;
	params.checkActor = checkActor;
	params.crossblockMaxFall = crossblockMaxFall;
	params.crossblockMaxDis = crossblockMaxDis;
	params.HitPoint = HitPoint;
	params.WindowActor = WindowActor;
	params.MoveDir = MoveDir;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.OnUnEquipWeapon
// (Event, Public, BlueprintEvent)

void ABP_PlayerCharacter_MainCity_C::OnUnEquipWeapon()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.OnUnEquipWeapon");

	ABP_PlayerCharacter_MainCity_C_OnUnEquipWeapon_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.OnPetOwnerPossessed
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_MainCity_C::OnPetOwnerPossessed()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.OnPetOwnerPossessed");

	ABP_PlayerCharacter_MainCity_C_OnPetOwnerPossessed_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.StopSwitchAngledSight
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_MainCity_C::StopSwitchAngledSight()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.StopSwitchAngledSight");

	ABP_PlayerCharacter_MainCity_C_StopSwitchAngledSight_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.ParachuteOnWater
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_MainCity_C::ParachuteOnWater()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.ParachuteOnWater");

	ABP_PlayerCharacter_MainCity_C_ParachuteOnWater_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.BPReceiveDamage
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDamageType>*      DamageEventType                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::BPReceiveDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser, TEnumAsByte<EDamageType>* DamageEventType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.BPReceiveDamage");

	ABP_PlayerCharacter_MainCity_C_BPReceiveDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.DamageEventType = DamageEventType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.CustomEvent_4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraShootWeapon*     Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EWeaponAttachmentSocketType    Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEquip                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::CustomEvent_4(class ASTExtraShootWeapon* Weapon, EWeaponAttachmentSocketType Type, bool bEquip)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.CustomEvent_4");

	ABP_PlayerCharacter_MainCity_C_CustomEvent_4_Params params;
	params.Weapon = Weapon;
	params.Type = Type;
	params.bEquip = bEquip;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.EnablePet
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::EnablePet(bool* Enable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.EnablePet");

	ABP_PlayerCharacter_MainCity_C_EnablePet_Params params;
	params.Enable = Enable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsBegin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::CustomEvent_1(bool bIsBegin)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.CustomEvent_1");

	ABP_PlayerCharacter_MainCity_C_CustomEvent_1_Params params;
	params.bIsBegin = bIsBegin;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.OnPoseStateChange
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESTEPoseState>*    LastState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESTEPoseState>*    CurState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::OnPoseStateChange(TEnumAsByte<ESTEPoseState>* LastState, TEnumAsByte<ESTEPoseState>* CurState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.OnPoseStateChange");

	ABP_PlayerCharacter_MainCity_C_OnPoseStateChange_Params params;
	params.LastState = LastState;
	params.CurState = CurState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.OnLanded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::OnLanded(struct FHitResult* Hit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.OnLanded");

	ABP_PlayerCharacter_MainCity_C_OnLanded_Params params;
	params.Hit = Hit;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.OnNotifyHurt
// (Event, Public, BlueprintEvent)

void ABP_PlayerCharacter_MainCity_C::OnNotifyHurt()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.OnNotifyHurt");

	ABP_PlayerCharacter_MainCity_C_OnNotifyHurt_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.OnEquipWeapon
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESurviveWeaponPropSlot>* Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::OnEquipWeapon(TEnumAsByte<ESurviveWeaponPropSlot>* Slot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.OnEquipWeapon");

	ABP_PlayerCharacter_MainCity_C_OnEquipWeapon_Params params;
	params.Slot = Slot;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.OnVehicleStateChange
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_MainCity_C::OnVehicleStateChange()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.OnVehicleStateChange");

	ABP_PlayerCharacter_MainCity_C_OnVehicleStateChange_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.OnHitByCake
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_MainCity_C::OnHitByCake()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.OnHitByCake");

	ABP_PlayerCharacter_MainCity_C_OnHitByCake_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.OnBPStateCheckIn
// (Event, Public, BlueprintEvent)

void ABP_PlayerCharacter_MainCity_C::OnBPStateCheckIn()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.OnBPStateCheckIn");

	ABP_PlayerCharacter_MainCity_C_OnBPStateCheckIn_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.LuaReceiveBeginPlay
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_MainCity_C::LuaReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.LuaReceiveBeginPlay");

	ABP_PlayerCharacter_MainCity_C_LuaReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.SwitchRearSight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PrevIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NewIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                AngleRotator                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::SwitchRearSight(int PrevIndex, int NewIndex, const struct FRotator& AngleRotator)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.SwitchRearSight");

	ABP_PlayerCharacter_MainCity_C_SwitchRearSight_Params params;
	params.PrevIndex = PrevIndex;
	params.NewIndex = NewIndex;
	params.AngleRotator = AngleRotator;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.ReloadEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_MainCity_C::ReloadEvent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.ReloadEvent");

	ABP_PlayerCharacter_MainCity_C_ReloadEvent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.BPNotifyStartDying
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AController**            Killer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             KillingHitInfo                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector*                KillingHitImpulseDir           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UClass**                 KillingHitDamageType           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::BPNotifyStartDying(class AController** Killer, class AActor** DamageCauser, struct FHitResult* KillingHitInfo, struct FVector* KillingHitImpulseDir, class UClass** KillingHitDamageType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.BPNotifyStartDying");

	ABP_PlayerCharacter_MainCity_C_BPNotifyStartDying_Params params;
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


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PlayerCharacter_MainCity_C::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.ReceiveBeginPlay");

	ABP_PlayerCharacter_MainCity_C_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.BPOnRespawned
// (Event, Public, BlueprintEvent)

void ABP_PlayerCharacter_MainCity_C::BPOnRespawned()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.BPOnRespawned");

	ABP_PlayerCharacter_MainCity_C_BPOnRespawned_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.RemoveRemainingCameraBlood
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SeatType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::RemoveRemainingCameraBlood(int SeatType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.RemoveRemainingCameraBlood");

	ABP_PlayerCharacter_MainCity_C_RemoveRemainingCameraBlood_Params params;
	params.SeatType = SeatType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.StateEnterHandler_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPawnState                     State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::StateEnterHandler_Event_1(EPawnState State)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.StateEnterHandler_Event_1");

	ABP_PlayerCharacter_MainCity_C_StateEnterHandler_Event_1_Params params;
	params.State = State;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.BindAndExecStateChanged
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_MainCity_C::BindAndExecStateChanged()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.BindAndExecStateChanged");

	ABP_PlayerCharacter_MainCity_C_BindAndExecStateChanged_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.DoWeaponSight
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_MainCity_C::DoWeaponSight()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.DoWeaponSight");

	ABP_PlayerCharacter_MainCity_C_DoWeaponSight_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.SetWeaponSightStateLocal
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsOpenWeaponSight              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::SetWeaponSightStateLocal(bool* IsOpenWeaponSight)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.SetWeaponSightStateLocal");

	ABP_PlayerCharacter_MainCity_C_SetWeaponSightStateLocal_Params params;
	params.IsOpenWeaponSight = IsOpenWeaponSight;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.RearSightTimeLineUpdate
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::RearSightTimeLineUpdate(float* Alpha)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.RearSightTimeLineUpdate");

	ABP_PlayerCharacter_MainCity_C_RearSightTimeLineUpdate_Params params;
	params.Alpha = Alpha;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.RearSightTimeLineFinish
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           InRearSightNewIndex            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::RearSightTimeLineFinish(int* InRearSightNewIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.RearSightTimeLineFinish");

	ABP_PlayerCharacter_MainCity_C_RearSightTimeLineFinish_Params params;
	params.InRearSightNewIndex = InRearSightNewIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.AngleSightTimeLineUpdate
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::AngleSightTimeLineUpdate(float* Alpha)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.AngleSightTimeLineUpdate");

	ABP_PlayerCharacter_MainCity_C_AngleSightTimeLineUpdate_Params params;
	params.Alpha = Alpha;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.AngleSightTimeLineFinish
// (Event, Public, BlueprintEvent)

void ABP_PlayerCharacter_MainCity_C::AngleSightTimeLineFinish()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.AngleSightTimeLineFinish");

	ABP_PlayerCharacter_MainCity_C_AngleSightTimeLineFinish_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.DoAutoReloadCurrentWeapon
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASTExtraShootWeapon**    ShootWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::DoAutoReloadCurrentWeapon(class ASTExtraShootWeapon** ShootWeapon)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.DoAutoReloadCurrentWeapon");

	ABP_PlayerCharacter_MainCity_C_DoAutoReloadCurrentWeapon_Params params;
	params.ShootWeapon = ShootWeapon;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.ExecuteUbergraph_BP_PlayerCharacter_MainCity
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::ExecuteUbergraph_BP_PlayerCharacter_MainCity(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.ExecuteUbergraph_BP_PlayerCharacter_MainCity");

	ABP_PlayerCharacter_MainCity_C_ExecuteUbergraph_BP_PlayerCharacter_MainCity_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.OnCakePlacement__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_MainCity_C::OnCakePlacement__DelegateSignature(bool Success)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_MainCity.BP_PlayerCharacter_MainCity_C.OnCakePlacement__DelegateSignature");

	ABP_PlayerCharacter_MainCity_C_OnCakePlacement__DelegateSignature_Params params;
	params.Success = Success;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

