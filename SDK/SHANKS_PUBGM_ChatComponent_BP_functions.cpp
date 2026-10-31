// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:01 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ChatComponent_BP.ChatComponent_BP_C.GetIsForbidCustomChat
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsForbid                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UChatComponent_BP_C::GetIsForbidCustomChat(bool* bIsForbid)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.GetIsForbidCustomChat");

	UChatComponent_BP_C_GetIsForbidCustomChat_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bIsForbid != nullptr)
		*bIsForbid = params.bIsForbid;
}


// Function ChatComponent_BP.ChatComponent_BP_C.PlayAutoLanguageMsg
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            actorid                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            MsgID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChatComponent_BP_C::PlayAutoLanguageMsg(int actorid, int MsgID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.PlayAutoLanguageMsg");

	UChatComponent_BP_C_PlayAutoLanguageMsg_Params params;
	params.actorid = actorid;
	params.MsgID = MsgID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ChatComponent_BP.ChatComponent_BP_C.CheckCDMsgs
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            MsgID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsShow                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UChatComponent_BP_C::CheckCDMsgs(int MsgID, bool* bIsShow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.CheckCDMsgs");

	UChatComponent_BP_C_CheckCDMsgs_Params params;
	params.MsgID = MsgID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bIsShow != nullptr)
		*bIsShow = params.bIsShow;
}


// Function ChatComponent_BP.ChatComponent_BP_C.AddMarkAndPlaySound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 Content                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            MsgID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemCount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PlayerKeyString                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bIsMe                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           PlaySound                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShowChat                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChatComponent_BP_C::AddMarkAndPlaySound(const struct FString& Name, const struct FString& Content, int MsgID, int ItemCount, int ItemId, const struct FString& PlayerKeyString, bool bIsMe, bool PlaySound, bool ShowChat, float Distance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.AddMarkAndPlaySound");

	UChatComponent_BP_C_AddMarkAndPlaySound_Params params;
	params.Name = Name;
	params.Content = Content;
	params.MsgID = MsgID;
	params.ItemCount = ItemCount;
	params.ItemId = ItemId;
	params.PlayerKeyString = PlayerKeyString;
	params.bIsMe = bIsMe;
	params.PlaySound = PlaySound;
	params.ShowChat = ShowChat;
	params.Distance = Distance;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ChatComponent_BP.ChatComponent_BP_C.AddOneMarkToUIInner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsMe                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 TextMsg                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UChatComponent_BP_C::AddOneMarkToUIInner(bool bIsMe, const struct FString& TextMsg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.AddOneMarkToUIInner");

	UChatComponent_BP_C_AddOneMarkToUIInner_Params params;
	params.bIsMe = bIsMe;
	params.TextMsg = TextMsg;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ChatComponent_BP.ChatComponent_BP_C.IsActorInGlobal
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            actorid                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsExist                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UChatComponent_BP_C::IsActorInGlobal(int actorid, bool* IsExist)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.IsActorInGlobal");

	UChatComponent_BP_C_IsActorInGlobal_Params params;
	params.actorid = actorid;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (IsExist != nullptr)
		*IsExist = params.IsExist;
}


// Function ChatComponent_BP.ChatComponent_BP_C.CheckIsAddReplyBtn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            MsgID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UChatComponent_BP_C::CheckIsAddReplyBtn(int MsgID, const struct FString& PlayerName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.CheckIsAddReplyBtn");

	UChatComponent_BP_C_CheckIsAddReplyBtn_Params params;
	params.MsgID = MsgID;
	params.PlayerName = PlayerName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ChatComponent_BP.ChatComponent_BP_C.GetSpecialDistanceString
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SendPlayerName                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FText                   DistanceText                   (Parm, OutParm)

void UChatComponent_BP_C::GetSpecialDistanceString(const struct FString& SendPlayerName, struct FText* DistanceText)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.GetSpecialDistanceString");

	UChatComponent_BP_C_GetSpecialDistanceString_Params params;
	params.SendPlayerName = SendPlayerName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (DistanceText != nullptr)
		*DistanceText = params.DistanceText;
}


// Function ChatComponent_BP.ChatComponent_BP_C.DistanceToString
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            MsgID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FText                   DistanceText                   (Parm, OutParm)

void UChatComponent_BP_C::DistanceToString(int Distance, int MsgID, const struct FString& PlayerName, struct FText* DistanceText)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.DistanceToString");

	UChatComponent_BP_C_DistanceToString_Params params;
	params.Distance = Distance;
	params.MsgID = MsgID;
	params.PlayerName = PlayerName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (DistanceText != nullptr)
		*DistanceText = params.DistanceText;
}


// Function ChatComponent_BP.ChatComponent_BP_C.GetActorNameByID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            actorid                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 actorName                      (Parm, OutParm, ZeroConstructor)

void UChatComponent_BP_C::GetActorNameByID(int actorid, struct FString* actorName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.GetActorNameByID");

	UChatComponent_BP_C_GetActorNameByID_Params params;
	params.actorid = actorid;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (actorName != nullptr)
		*actorName = params.actorName;
}


// Function ChatComponent_BP.ChatComponent_BP_C.GetLocalText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            MsgID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PlayerKeyString                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            ItemCount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ContentMsg                     (Parm, OutParm, ZeroConstructor)

void UChatComponent_BP_C::GetLocalText(int MsgID, int ItemId, const struct FString& PlayerKeyString, int Distance, const struct FString& PlayerName, int ItemCount, struct FString* ContentMsg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.GetLocalText");

	UChatComponent_BP_C_GetLocalText_Params params;
	params.MsgID = MsgID;
	params.ItemId = ItemId;
	params.PlayerKeyString = PlayerKeyString;
	params.Distance = Distance;
	params.PlayerName = PlayerName;
	params.ItemCount = ItemCount;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ContentMsg != nullptr)
		*ContentMsg = params.ContentMsg;
}


// Function ChatComponent_BP.ChatComponent_BP_C.LoadVehicleModeQuickMsg
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UChatComponent_BP_C::LoadVehicleModeQuickMsg()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.LoadVehicleModeQuickMsg");

	UChatComponent_BP_C_LoadVehicleModeQuickMsg_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ChatComponent_BP.ChatComponent_BP_C.IsVehicleWarMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsVehicleWarMode               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UChatComponent_BP_C::IsVehicleWarMode(bool* IsVehicleWarMode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.IsVehicleWarMode");

	UChatComponent_BP_C_IsVehicleWarMode_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (IsVehicleWarMode != nullptr)
		*IsVehicleWarMode = params.IsVehicleWarMode;
}


// Function ChatComponent_BP.ChatComponent_BP_C.InitActorIDList
// (Public, BlueprintCallable, BlueprintEvent)

void UChatComponent_BP_C::InitActorIDList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.InitActorIDList");

	UChatComponent_BP_C_InitActorIDList_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ChatComponent_BP.ChatComponent_BP_C.LoadInfectModeQuickMsg
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UChatComponent_BP_C::LoadInfectModeQuickMsg()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.LoadInfectModeQuickMsg");

	UChatComponent_BP_C_LoadInfectModeQuickMsg_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ChatComponent_BP.ChatComponent_BP_C.IsInfectMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsInfectMode                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UChatComponent_BP_C::IsInfectMode(bool* IsInfectMode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.IsInfectMode");

	UChatComponent_BP_C_IsInfectMode_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (IsInfectMode != nullptr)
		*IsInfectMode = params.IsInfectMode;
}


// Function ChatComponent_BP.ChatComponent_BP_C.InitChatFlagList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UChatComponent_BP_C::InitChatFlagList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.InitChatFlagList");

	UChatComponent_BP_C_InitChatFlagList_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ChatComponent_BP.ChatComponent_BP_C.SetTurnplateQuickChatList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UChatComponent_BP_C::SetTurnplateQuickChatList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.SetTurnplateQuickChatList");

	UChatComponent_BP_C_SetTurnplateQuickChatList_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ChatComponent_BP.ChatComponent_BP_C.GetActorBankByID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            actorid                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 BankName                       (Parm, OutParm, ZeroConstructor)

void UChatComponent_BP_C::GetActorBankByID(int actorid, struct FString* BankName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.GetActorBankByID");

	UChatComponent_BP_C_GetActorBankByID_Params params;
	params.actorid = actorid;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (BankName != nullptr)
		*BankName = params.BankName;
}


// Function ChatComponent_BP.ChatComponent_BP_C.SwitchActorAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            actorid                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChatComponent_BP_C::SwitchActorAudio(int actorid)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.SwitchActorAudio");

	UChatComponent_BP_C_SwitchActorAudio_Params params;
	params.actorid = actorid;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ChatComponent_BP.ChatComponent_BP_C.LoadSingleAudio
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            chatTextID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChatComponent_BP_C::LoadSingleAudio(int chatTextID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.LoadSingleAudio");

	UChatComponent_BP_C_LoadSingleAudio_Params params;
	params.chatTextID = chatTextID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ChatComponent_BP.ChatComponent_BP_C.LoadAllAudio
// (Public, BlueprintCallable, BlueprintEvent)

void UChatComponent_BP_C::LoadAllAudio()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.LoadAllAudio");

	UChatComponent_BP_C_LoadAllAudio_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ChatComponent_BP.ChatComponent_BP_C.CreateAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 audio                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChatComponent_BP_C::CreateAudio(class UObject* audio, int resID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.CreateAudio");

	UChatComponent_BP_C_CreateAudio_Params params;
	params.audio = audio;
	params.resID = resID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ChatComponent_BP.ChatComponent_BP_C.SetQuickChatList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UChatComponent_BP_C::SetQuickChatList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.SetQuickChatList");

	UChatComponent_BP_C_SetQuickChatList_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ChatComponent_BP.ChatComponent_BP_C.InitFromSetting
// (Public, BlueprintCallable, BlueprintEvent)

void UChatComponent_BP_C::InitFromSetting()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.InitFromSetting");

	UChatComponent_BP_C_InitFromSetting_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ChatComponent_BP.ChatComponent_BP_C.AddOneMsgToUIInner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isMe                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChatComponent_BP_C::AddOneMsgToUIInner(bool isMe)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.AddOneMsgToUIInner");

	UChatComponent_BP_C_AddOneMsgToUIInner_Params params;
	params.isMe = isMe;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ChatComponent_BP.ChatComponent_BP_C.PlaySound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            MsgID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            actorid                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChatComponent_BP_C::PlaySound(int MsgID, int actorid)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.PlaySound");

	UChatComponent_BP_C_PlaySound_Params params;
	params.MsgID = MsgID;
	params.actorid = actorid;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ChatComponent_BP.ChatComponent_BP_C.AddToArray
// (Public, BlueprintCallable, BlueprintEvent)

void UChatComponent_BP_C::AddToArray()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.AddToArray");

	UChatComponent_BP_C_AddToArray_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ChatComponent_BP.ChatComponent_BP_C.AddOneMsgToUI1
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString*                Content                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           MsgID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           audioID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                PlayerKeyString                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool*                          isMe                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          PlaySound                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ShowChat                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChatComponent_BP_C::AddOneMsgToUI1(struct FString* Name, struct FString* Content, int* MsgID, int* audioID, int* ItemId, struct FString* PlayerKeyString, bool* isMe, bool* PlaySound, bool* ShowChat, float* Distance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.AddOneMsgToUI1");

	UChatComponent_BP_C_AddOneMsgToUI1_Params params;
	params.Name = Name;
	params.Content = Content;
	params.MsgID = MsgID;
	params.audioID = audioID;
	params.ItemId = ItemId;
	params.PlayerKeyString = PlayerKeyString;
	params.isMe = isMe;
	params.PlaySound = PlaySound;
	params.ShowChat = ShowChat;
	params.Distance = Distance;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ChatComponent_BP.ChatComponent_BP_C.NotifyFriendChat
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                str_gid                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString*                sender_name                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString*                chat_content                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool*                          self_msg                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChatComponent_BP_C::NotifyFriendChat(struct FString* str_gid, struct FString* sender_name, struct FString* chat_content, bool* self_msg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.NotifyFriendChat");

	UChatComponent_BP_C_NotifyFriendChat_Params params;
	params.str_gid = str_gid;
	params.sender_name = sender_name;
	params.chat_content = chat_content;
	params.self_msg = self_msg;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ChatComponent_BP.ChatComponent_BP_C.NotifyFriendInvite
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                str_gid                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString*                sender_name                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UChatComponent_BP_C::NotifyFriendInvite(struct FString* str_gid, struct FString* sender_name)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.NotifyFriendInvite");

	UChatComponent_BP_C_NotifyFriendInvite_Params params;
	params.str_gid = str_gid;
	params.sender_name = sender_name;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ChatComponent_BP.ChatComponent_BP_C.NotifyFriendReplyInvite
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                str_gid                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString*                sender_name                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool*                          bReply                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChatComponent_BP_C::NotifyFriendReplyInvite(struct FString* str_gid, struct FString* sender_name, bool* bReply)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.NotifyFriendReplyInvite");

	UChatComponent_BP_C_NotifyFriendReplyInvite_Params params;
	params.str_gid = str_gid;
	params.sender_name = sender_name;
	params.bReply = bReply;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ChatComponent_BP.ChatComponent_BP_C.CloseChatHistoryList
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UChatComponent_BP_C::CloseChatHistoryList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.CloseChatHistoryList");

	UChatComponent_BP_C_CloseChatHistoryList_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ChatComponent_BP.ChatComponent_BP_C.UpdateQuickItemText
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           MsgID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           alternateMsgID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ItemCount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChatComponent_BP_C::UpdateQuickItemText(int* MsgID, int* resID, int* alternateMsgID, int* ItemCount)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.UpdateQuickItemText");

	UChatComponent_BP_C_UpdateQuickItemText_Params params;
	params.MsgID = MsgID;
	params.resID = resID;
	params.alternateMsgID = alternateMsgID;
	params.ItemCount = ItemCount;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ChatComponent_BP.ChatComponent_BP_C.ReportBattleChat
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           MsgID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                Msg                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           msgExtraParam                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChatComponent_BP_C::ReportBattleChat(int* MsgID, struct FString* Msg, int* msgExtraParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.ReportBattleChat");

	UChatComponent_BP_C_ReportBattleChat_Params params;
	params.MsgID = MsgID;
	params.Msg = Msg;
	params.msgExtraParam = msgExtraParam;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ChatComponent_BP.ChatComponent_BP_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UChatComponent_BP_C::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.ReceiveBeginPlay");

	UChatComponent_BP_C_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ChatComponent_BP.ChatComponent_BP_C.AddOneMarkToUI
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString*                Content                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           MsgID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           audioID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                PlayerKeyString                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool*                          isMe                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          PlaySound                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ShowChat                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChatComponent_BP_C::AddOneMarkToUI(struct FString* Name, struct FString* Content, int* MsgID, int* audioID, int* ItemId, struct FString* PlayerKeyString, bool* isMe, bool* PlaySound, bool* ShowChat, float* Distance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.AddOneMarkToUI");

	UChatComponent_BP_C_AddOneMarkToUI_Params params;
	params.Name = Name;
	params.Content = Content;
	params.MsgID = MsgID;
	params.audioID = audioID;
	params.ItemId = ItemId;
	params.PlayerKeyString = PlayerKeyString;
	params.isMe = isMe;
	params.PlaySound = PlaySound;
	params.ShowChat = ShowChat;
	params.Distance = Distance;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ChatComponent_BP.ChatComponent_BP_C.ExecuteUbergraph_ChatComponent_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChatComponent_BP_C::ExecuteUbergraph_ChatComponent_BP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.ExecuteUbergraph_ChatComponent_BP");

	UChatComponent_BP_C_ExecuteUbergraph_ChatComponent_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

