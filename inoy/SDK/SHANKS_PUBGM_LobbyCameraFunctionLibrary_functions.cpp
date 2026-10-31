// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:17 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LobbyCameraFunctionLibrary.LobbyCameraFunctionLibrary_C.OnViewportSizeChanged
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               OldViewport                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               NewViewport                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobbyCameraFunctionLibrary_C::OnViewportSizeChanged(const struct FVector2D& OldViewport, const struct FVector2D& NewViewport, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LobbyCameraFunctionLibrary.LobbyCameraFunctionLibrary_C.OnViewportSizeChanged");

	ULobbyCameraFunctionLibrary_C_OnViewportSizeChanged_Params params;
	params.OldViewport = OldViewport;
	params.NewViewport = NewViewport;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function LobbyCameraFunctionLibrary.LobbyCameraFunctionLibrary_C.LevelSequence_ExecuteStartCallback
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobbyCameraFunctionLibrary_C::LevelSequence_ExecuteStartCallback(class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LobbyCameraFunctionLibrary.LobbyCameraFunctionLibrary_C.LevelSequence_ExecuteStartCallback");

	ULobbyCameraFunctionLibrary_C_LevelSequence_ExecuteStartCallback_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function LobbyCameraFunctionLibrary.LobbyCameraFunctionLibrary_C.GetCurrentCameraActor
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ACameraActor*            CameraActor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULobbyCameraFunctionLibrary_C::GetCurrentCameraActor(class UObject* __WorldContext, class ACameraActor** CameraActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LobbyCameraFunctionLibrary.LobbyCameraFunctionLibrary_C.GetCurrentCameraActor");

	ULobbyCameraFunctionLibrary_C_GetCurrentCameraActor_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (CameraActor != nullptr)
		*CameraActor = params.CameraActor;
}


// Function LobbyCameraFunctionLibrary.LobbyCameraFunctionLibrary_C.LevelSequence_ExecuteEndCallback
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobbyCameraFunctionLibrary_C::LevelSequence_ExecuteEndCallback(class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LobbyCameraFunctionLibrary.LobbyCameraFunctionLibrary_C.LevelSequence_ExecuteEndCallback");

	ULobbyCameraFunctionLibrary_C_LevelSequence_ExecuteEndCallback_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function LobbyCameraFunctionLibrary.LobbyCameraFunctionLibrary_C.SwitchCamera_Only
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CameraID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobbyCameraFunctionLibrary_C::SwitchCamera_Only(int CameraID, float BlendTime, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LobbyCameraFunctionLibrary.LobbyCameraFunctionLibrary_C.SwitchCamera_Only");

	ULobbyCameraFunctionLibrary_C_SwitchCamera_Only_Params params;
	params.CameraID = CameraID;
	params.BlendTime = BlendTime;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function LobbyCameraFunctionLibrary.LobbyCameraFunctionLibrary_C.CreateLevelSequencePlayerAndActor
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelSequence*          level_sequence                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ALevelSequenceActor*     OutActor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ULevelSequencePlayer*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULevelSequencePlayer* ULobbyCameraFunctionLibrary_C::CreateLevelSequencePlayerAndActor(class ULevelSequence* level_sequence, class UObject* __WorldContext, class ALevelSequenceActor** OutActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LobbyCameraFunctionLibrary.LobbyCameraFunctionLibrary_C.CreateLevelSequencePlayerAndActor");

	ULobbyCameraFunctionLibrary_C_CreateLevelSequencePlayerAndActor_Params params;
	params.level_sequence = level_sequence;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutActor != nullptr)
		*OutActor = params.OutActor;

	return params.ReturnValue;
}


// Function LobbyCameraFunctionLibrary.LobbyCameraFunctionLibrary_C.SwitchCamera
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewCameraID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IgnoreLight                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobbyCameraFunctionLibrary_C::SwitchCamera(int NewCameraID, float BlendTime, bool IgnoreLight, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LobbyCameraFunctionLibrary.LobbyCameraFunctionLibrary_C.SwitchCamera");

	ULobbyCameraFunctionLibrary_C_SwitchCamera_Params params;
	params.NewCameraID = NewCameraID;
	params.BlendTime = BlendTime;
	params.IgnoreLight = IgnoreLight;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

