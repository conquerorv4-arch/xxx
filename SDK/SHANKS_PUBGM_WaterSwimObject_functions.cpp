// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:53 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WaterSwimObject.WaterSwimObject_C.SetWaterMaterialByGamePawnEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGamePawnEvent>    Event                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWaterSwimObject_C::SetWaterMaterialByGamePawnEvent(TEnumAsByte<EGamePawnEvent> Event)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function WaterSwimObject.WaterSwimObject_C.SetWaterMaterialByGamePawnEvent");

	AWaterSwimObject_C_SetWaterMaterialByGamePawnEvent_Params params;
	params.Event = Event;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function WaterSwimObject.WaterSwimObject_C.SetWaterMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWaterSwimObject_C::SetWaterMaterial(int NewParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function WaterSwimObject.WaterSwimObject_C.SetWaterMaterial");

	AWaterSwimObject_C_SetWaterMaterial_Params params;
	params.NewParam = NewParam;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function WaterSwimObject.WaterSwimObject_C.RefreshWaterMaterial
// (Public, BlueprintCallable, BlueprintEvent)

void AWaterSwimObject_C::RefreshWaterMaterial()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function WaterSwimObject.WaterSwimObject_C.RefreshWaterMaterial");

	AWaterSwimObject_C_RefreshWaterMaterial_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function WaterSwimObject.WaterSwimObject_C.DoTrySetWaterMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWaterSwimObject_C::DoTrySetWaterMaterial(int NewParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function WaterSwimObject.WaterSwimObject_C.DoTrySetWaterMaterial");

	AWaterSwimObject_C_DoTrySetWaterMaterial_Params params;
	params.NewParam = NewParam;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function WaterSwimObject.WaterSwimObject_C.TrySetWaterMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWaterSwimObject_C::TrySetWaterMaterial(int NewParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function WaterSwimObject.WaterSwimObject_C.TrySetWaterMaterial");

	AWaterSwimObject_C_TrySetWaterMaterial_Params params;
	params.NewParam = NewParam;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function WaterSwimObject.WaterSwimObject_C.IsSupportIndex
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewParam1                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWaterSwimObject_C::IsSupportIndex(int NewParam, bool* NewParam1)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function WaterSwimObject.WaterSwimObject_C.IsSupportIndex");

	AWaterSwimObject_C_IsSupportIndex_Params params;
	params.NewParam = NewParam;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NewParam1 != nullptr)
		*NewParam1 = params.NewParam1;
}


// Function WaterSwimObject.WaterSwimObject_C.IsNewIphone
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsNewIphone                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWaterSwimObject_C::IsNewIphone(bool* IsNewIphone)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function WaterSwimObject.WaterSwimObject_C.IsNewIphone");

	AWaterSwimObject_C_IsNewIphone_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (IsNewIphone != nullptr)
		*IsNewIphone = params.IsNewIphone;
}


// Function WaterSwimObject.WaterSwimObject_C.SetWateMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bHDR                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWaterSwimObject_C::SetWateMaterial(bool bHDR)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function WaterSwimObject.WaterSwimObject_C.SetWateMaterial");

	AWaterSwimObject_C_SetWateMaterial_Params params;
	params.bHDR = bHDR;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function WaterSwimObject.WaterSwimObject_C.HideUnderWaterEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    WaterPlane                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UExponentialHeightFogComponent* CamFog                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWaterSwimObject_C::HideUnderWaterEffect(class UStaticMeshComponent* WaterPlane, class UExponentialHeightFogComponent* CamFog)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function WaterSwimObject.WaterSwimObject_C.HideUnderWaterEffect");

	AWaterSwimObject_C_HideUnderWaterEffect_Params params;
	params.WaterPlane = WaterPlane;
	params.CamFog = CamFog;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function WaterSwimObject.WaterSwimObject_C.ShowUnderWaterEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    WaterPlane                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UExponentialHeightFogComponent* CamFog                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWaterSwimObject_C::ShowUnderWaterEffect(class UStaticMeshComponent* WaterPlane, class UExponentialHeightFogComponent* CamFog)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function WaterSwimObject.WaterSwimObject_C.ShowUnderWaterEffect");

	AWaterSwimObject_C_ShowUnderWaterEffect_Params params;
	params.WaterPlane = WaterPlane;
	params.CamFog = CamFog;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function WaterSwimObject.WaterSwimObject_C.IsCapsult
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         comp                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWaterSwimObject_C::IsCapsult(class UObject* PlayerPawn, class UActorComponent* comp)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function WaterSwimObject.WaterSwimObject_C.IsCapsult");

	AWaterSwimObject_C_IsCapsult_Params params;
	params.PlayerPawn = PlayerPawn;
	params.comp = comp;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WaterSwimObject.WaterSwimObject_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWaterSwimObject_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function WaterSwimObject.WaterSwimObject_C.UserConstructionScript");

	AWaterSwimObject_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function WaterSwimObject.WaterSwimObject_C.BndEvt__PostSceneBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AWaterSwimObject_C::BndEvt__PostSceneBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function WaterSwimObject.WaterSwimObject_C.BndEvt__PostSceneBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AWaterSwimObject_C_BndEvt__PostSceneBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function WaterSwimObject.WaterSwimObject_C.BndEvt__PostSceneBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWaterSwimObject_C::BndEvt__PostSceneBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function WaterSwimObject.WaterSwimObject_C.BndEvt__PostSceneBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature");

	AWaterSwimObject_C_BndEvt__PostSceneBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function WaterSwimObject.WaterSwimObject_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWaterSwimObject_C::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function WaterSwimObject.WaterSwimObject_C.ReceiveBeginPlay");

	AWaterSwimObject_C_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function WaterSwimObject.WaterSwimObject_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UserQualitySettingLevel        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWaterSwimObject_C::CustomEvent_2(int UserQualitySettingLevel)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function WaterSwimObject.WaterSwimObject_C.CustomEvent_2");

	AWaterSwimObject_C_CustomEvent_2_Params params;
	params.UserQualitySettingLevel = UserQualitySettingLevel;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function WaterSwimObject.WaterSwimObject_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWaterSwimObject_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function WaterSwimObject.WaterSwimObject_C.ReceiveEndPlay");

	AWaterSwimObject_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function WaterSwimObject.WaterSwimObject_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UserMsaaSetting                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWaterSwimObject_C::CustomEvent_3(bool UserMsaaSetting)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function WaterSwimObject.WaterSwimObject_C.CustomEvent_3");

	AWaterSwimObject_C_CustomEvent_3_Params params;
	params.UserMsaaSetting = UserMsaaSetting;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function WaterSwimObject.WaterSwimObject_C.CustomEvent_4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bOpenWaterReflection           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWaterSwimObject_C::CustomEvent_4(bool bOpenWaterReflection)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function WaterSwimObject.WaterSwimObject_C.CustomEvent_4");

	AWaterSwimObject_C_CustomEvent_4_Params params;
	params.bOpenWaterReflection = bOpenWaterReflection;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function WaterSwimObject.WaterSwimObject_C.ExecuteUbergraph_WaterSwimObject
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWaterSwimObject_C::ExecuteUbergraph_WaterSwimObject(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function WaterSwimObject.WaterSwimObject_C.ExecuteUbergraph_WaterSwimObject");

	AWaterSwimObject_C_ExecuteUbergraph_WaterSwimObject_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

