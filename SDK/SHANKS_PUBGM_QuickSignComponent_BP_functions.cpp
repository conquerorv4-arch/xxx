// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:11 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function QuickSignComponent_BP.QuickSignComponent_BP_C.SetBoxMarkText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InputParam                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 FinalText                      (Parm, OutParm, ZeroConstructor)

void UQuickSignComponent_BP_C::SetBoxMarkText(const struct FString& InputParam, struct FString* FinalText)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QuickSignComponent_BP.QuickSignComponent_BP_C.SetBoxMarkText");

	UQuickSignComponent_BP_C_SetBoxMarkText_Params params;
	params.InputParam = InputParam;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (FinalText != nullptr)
		*FinalText = params.FinalText;
}


// Function QuickSignComponent_BP.QuickSignComponent_BP_C.GetMarkTextShowedInChatBox
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PlayerKey                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            OldTextID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Text                           (Parm, OutParm, ZeroConstructor)

void UQuickSignComponent_BP_C::GetMarkTextShowedInChatBox(const struct FString& PlayerKey, int OldTextID, struct FString* Text)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QuickSignComponent_BP.QuickSignComponent_BP_C.GetMarkTextShowedInChatBox");

	UQuickSignComponent_BP_C_GetMarkTextShowedInChatBox_Params params;
	params.PlayerKey = PlayerKey;
	params.OldTextID = OldTextID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function QuickSignComponent_BP.QuickSignComponent_BP_C.SpectatorActorMark
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuickSignMsg           OriMarkInfo                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FQuickSignMsg           MarkInfo                       (Parm, OutParm)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuickSignComponent_BP_C::SpectatorActorMark(class AActor** Actor, struct FQuickSignMsg* OriMarkInfo, struct FQuickSignMsg* MarkInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QuickSignComponent_BP.QuickSignComponent_BP_C.SpectatorActorMark");

	UQuickSignComponent_BP_C_SpectatorActorMark_Params params;
	params.Actor = Actor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OriMarkInfo != nullptr)
		*OriMarkInfo = params.OriMarkInfo;
	if (MarkInfo != nullptr)
		*MarkInfo = params.MarkInfo;
}


// Function QuickSignComponent_BP.QuickSignComponent_BP_C.SetDistanceText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HidPosition                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// EQuickSignSubType              MsgType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuickSignComponent_BP_C::SetDistanceText(const struct FVector& HidPosition, EQuickSignSubType MsgType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QuickSignComponent_BP.QuickSignComponent_BP_C.SetDistanceText");

	UQuickSignComponent_BP_C_SetDistanceText_Params params;
	params.HidPosition = HidPosition;
	params.MsgType = MsgType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function QuickSignComponent_BP.QuickSignComponent_BP_C.GetAudioEventAndBank
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            audioID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            actorid                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OutBankName                    (Parm, OutParm, ZeroConstructor)
// struct FString                 OutEventName                   (Parm, OutParm, ZeroConstructor)

void UQuickSignComponent_BP_C::GetAudioEventAndBank(int audioID, int actorid, struct FString* OutBankName, struct FString* OutEventName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QuickSignComponent_BP.QuickSignComponent_BP_C.GetAudioEventAndBank");

	UQuickSignComponent_BP_C_GetAudioEventAndBank_Params params;
	params.audioID = audioID;
	params.actorid = actorid;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutBankName != nullptr)
		*OutBankName = params.OutBankName;
	if (OutEventName != nullptr)
		*OutEventName = params.OutEventName;
}


// Function QuickSignComponent_BP.QuickSignComponent_BP_C.GetVoiceAudioID
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           MsgType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UQuickSignComponent_BP_C::GetVoiceAudioID(int* MsgType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QuickSignComponent_BP.QuickSignComponent_BP_C.GetVoiceAudioID");

	UQuickSignComponent_BP_C_GetVoiceAudioID_Params params;
	params.MsgType = MsgType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QuickSignComponent_BP.QuickSignComponent_BP_C.PickupWrapperActorHandle
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Param                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FQuickSignMark          MarkInfo                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UQuickSignComponent_BP_C::PickupWrapperActorHandle(const struct FString& Param, struct FQuickSignMark* MarkInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QuickSignComponent_BP.QuickSignComponent_BP_C.PickupWrapperActorHandle");

	UQuickSignComponent_BP_C_PickupWrapperActorHandle_Params params;
	params.Param = Param;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (MarkInfo != nullptr)
		*MarkInfo = params.MarkInfo;
}


// Function QuickSignComponent_BP.QuickSignComponent_BP_C.GenerateMarkInfo
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuickSignMsg           MsgItem                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FQuickSignMark          MarkInfo                       (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UQuickSignComponent_BP_C::GenerateMarkInfo(struct FQuickSignMsg* MsgItem, struct FQuickSignMark* MarkInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QuickSignComponent_BP.QuickSignComponent_BP_C.GenerateMarkInfo");

	UQuickSignComponent_BP_C_GenerateMarkInfo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (MsgItem != nullptr)
		*MsgItem = params.MsgItem;
	if (MarkInfo != nullptr)
		*MarkInfo = params.MarkInfo;

	return params.ReturnValue;
}


// Function QuickSignComponent_BP.QuickSignComponent_BP_C.LoadConfig
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UQuickSignComponent_BP_C::LoadConfig()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QuickSignComponent_BP.QuickSignComponent_BP_C.LoadConfig");

	UQuickSignComponent_BP_C_LoadConfig_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function QuickSignComponent_BP.QuickSignComponent_BP_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UQuickSignComponent_BP_C::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QuickSignComponent_BP.QuickSignComponent_BP_C.ReceiveBeginPlay");

	UQuickSignComponent_BP_C_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function QuickSignComponent_BP.QuickSignComponent_BP_C.ShowMsgTipsVoice
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FQuickSignMsg*          MsgItem                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool*                          IsSelf                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                PlayerKey                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UQuickSignComponent_BP_C::ShowMsgTipsVoice(struct FQuickSignMsg* MsgItem, bool* IsSelf, struct FString* PlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QuickSignComponent_BP.QuickSignComponent_BP_C.ShowMsgTipsVoice");

	UQuickSignComponent_BP_C_ShowMsgTipsVoice_Params params;
	params.MsgItem = MsgItem;
	params.IsSelf = IsSelf;
	params.PlayerKey = PlayerKey;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function QuickSignComponent_BP.QuickSignComponent_BP_C.PlayVoiceCD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuickSignComponent_BP_C::PlayVoiceCD(float Duration)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QuickSignComponent_BP.QuickSignComponent_BP_C.PlayVoiceCD");

	UQuickSignComponent_BP_C_PlayVoiceCD_Params params;
	params.Duration = Duration;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function QuickSignComponent_BP.QuickSignComponent_BP_C.ReportQuickSign
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FQuickSignMsg*          MsgItem                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UQuickSignComponent_BP_C::ReportQuickSign(struct FQuickSignMsg* MsgItem)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QuickSignComponent_BP.QuickSignComponent_BP_C.ReportQuickSign");

	UQuickSignComponent_BP_C_ReportQuickSign_Params params;
	params.MsgItem = MsgItem;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function QuickSignComponent_BP.QuickSignComponent_BP_C.ExecuteUbergraph_QuickSignComponent_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuickSignComponent_BP_C::ExecuteUbergraph_QuickSignComponent_BP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QuickSignComponent_BP.QuickSignComponent_BP_C.ExecuteUbergraph_QuickSignComponent_BP");

	UQuickSignComponent_BP_C_ExecuteUbergraph_QuickSignComponent_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

