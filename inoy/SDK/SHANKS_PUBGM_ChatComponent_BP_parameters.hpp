#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:01 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ChatComponent_BP.ChatComponent_BP_C.GetIsForbidCustomChat
struct UChatComponent_BP_C_GetIsForbidCustomChat_Params
{
	bool                                               bIsForbid;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ChatComponent_BP.ChatComponent_BP_C.PlayAutoLanguageMsg
struct UChatComponent_BP_C_PlayAutoLanguageMsg_Params
{
	int                                                actorid;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MsgID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChatComponent_BP.ChatComponent_BP_C.CheckCDMsgs
struct UChatComponent_BP_C_CheckCDMsgs_Params
{
	int                                                MsgID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsShow;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ChatComponent_BP.ChatComponent_BP_C.AddMarkAndPlaySound
struct UChatComponent_BP_C_AddMarkAndPlaySound_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     Content;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                MsgID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemCount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerKeyString;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bIsMe;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PlaySound;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShowChat;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChatComponent_BP.ChatComponent_BP_C.AddOneMarkToUIInner
struct UChatComponent_BP_C_AddOneMarkToUIInner_Params
{
	bool                                               bIsMe;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     TextMsg;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function ChatComponent_BP.ChatComponent_BP_C.IsActorInGlobal
struct UChatComponent_BP_C_IsActorInGlobal_Params
{
	int                                                actorid;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsExist;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ChatComponent_BP.ChatComponent_BP_C.CheckIsAddReplyBtn
struct UChatComponent_BP_C_CheckIsAddReplyBtn_Params
{
	int                                                MsgID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function ChatComponent_BP.ChatComponent_BP_C.GetSpecialDistanceString
struct UChatComponent_BP_C_GetSpecialDistanceString_Params
{
	struct FString                                     SendPlayerName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FText                                       DistanceText;                                             // (Parm, OutParm)
};

// Function ChatComponent_BP.ChatComponent_BP_C.DistanceToString
struct UChatComponent_BP_C_DistanceToString_Params
{
	int                                                Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MsgID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FText                                       DistanceText;                                             // (Parm, OutParm)
};

// Function ChatComponent_BP.ChatComponent_BP_C.GetActorNameByID
struct UChatComponent_BP_C_GetActorNameByID_Params
{
	int                                                actorid;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     actorName;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function ChatComponent_BP.ChatComponent_BP_C.GetLocalText
struct UChatComponent_BP_C_GetLocalText_Params
{
	int                                                MsgID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerKeyString;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                ItemCount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ContentMsg;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function ChatComponent_BP.ChatComponent_BP_C.LoadVehicleModeQuickMsg
struct UChatComponent_BP_C_LoadVehicleModeQuickMsg_Params
{
};

// Function ChatComponent_BP.ChatComponent_BP_C.IsVehicleWarMode
struct UChatComponent_BP_C_IsVehicleWarMode_Params
{
	bool                                               IsVehicleWarMode;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ChatComponent_BP.ChatComponent_BP_C.InitActorIDList
struct UChatComponent_BP_C_InitActorIDList_Params
{
};

// Function ChatComponent_BP.ChatComponent_BP_C.LoadInfectModeQuickMsg
struct UChatComponent_BP_C_LoadInfectModeQuickMsg_Params
{
};

// Function ChatComponent_BP.ChatComponent_BP_C.IsInfectMode
struct UChatComponent_BP_C_IsInfectMode_Params
{
	bool                                               IsInfectMode;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ChatComponent_BP.ChatComponent_BP_C.InitChatFlagList
struct UChatComponent_BP_C_InitChatFlagList_Params
{
};

// Function ChatComponent_BP.ChatComponent_BP_C.SetTurnplateQuickChatList
struct UChatComponent_BP_C_SetTurnplateQuickChatList_Params
{
};

// Function ChatComponent_BP.ChatComponent_BP_C.GetActorBankByID
struct UChatComponent_BP_C_GetActorBankByID_Params
{
	int                                                actorid;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     BankName;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function ChatComponent_BP.ChatComponent_BP_C.SwitchActorAudio
struct UChatComponent_BP_C_SwitchActorAudio_Params
{
	int                                                actorid;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChatComponent_BP.ChatComponent_BP_C.LoadSingleAudio
struct UChatComponent_BP_C_LoadSingleAudio_Params
{
	int                                                chatTextID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChatComponent_BP.ChatComponent_BP_C.LoadAllAudio
struct UChatComponent_BP_C_LoadAllAudio_Params
{
};

// Function ChatComponent_BP.ChatComponent_BP_C.CreateAudio
struct UChatComponent_BP_C_CreateAudio_Params
{
	class UObject*                                     audio;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChatComponent_BP.ChatComponent_BP_C.SetQuickChatList
struct UChatComponent_BP_C_SetQuickChatList_Params
{
};

// Function ChatComponent_BP.ChatComponent_BP_C.InitFromSetting
struct UChatComponent_BP_C_InitFromSetting_Params
{
};

// Function ChatComponent_BP.ChatComponent_BP_C.AddOneMsgToUIInner
struct UChatComponent_BP_C_AddOneMsgToUIInner_Params
{
	bool                                               isMe;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChatComponent_BP.ChatComponent_BP_C.PlaySound
struct UChatComponent_BP_C_PlaySound_Params
{
	int                                                MsgID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                actorid;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChatComponent_BP.ChatComponent_BP_C.AddToArray
struct UChatComponent_BP_C_AddToArray_Params
{
};

// Function ChatComponent_BP.ChatComponent_BP_C.AddOneMsgToUI1
struct UChatComponent_BP_C_AddOneMsgToUI1_Params
{
	struct FString*                                    Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString*                                    Content;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int*                                               MsgID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               audioID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    PlayerKeyString;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool*                                              isMe;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              PlaySound;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ShowChat;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChatComponent_BP.ChatComponent_BP_C.NotifyFriendChat
struct UChatComponent_BP_C_NotifyFriendChat_Params
{
	struct FString*                                    str_gid;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString*                                    sender_name;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString*                                    chat_content;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool*                                              self_msg;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChatComponent_BP.ChatComponent_BP_C.NotifyFriendInvite
struct UChatComponent_BP_C_NotifyFriendInvite_Params
{
	struct FString*                                    str_gid;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString*                                    sender_name;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function ChatComponent_BP.ChatComponent_BP_C.NotifyFriendReplyInvite
struct UChatComponent_BP_C_NotifyFriendReplyInvite_Params
{
	struct FString*                                    str_gid;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString*                                    sender_name;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool*                                              bReply;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChatComponent_BP.ChatComponent_BP_C.CloseChatHistoryList
struct UChatComponent_BP_C_CloseChatHistoryList_Params
{
};

// Function ChatComponent_BP.ChatComponent_BP_C.UpdateQuickItemText
struct UChatComponent_BP_C_UpdateQuickItemText_Params
{
	int*                                               MsgID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               alternateMsgID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ItemCount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChatComponent_BP.ChatComponent_BP_C.ReportBattleChat
struct UChatComponent_BP_C_ReportBattleChat_Params
{
	int*                                               MsgID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    Msg;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int*                                               msgExtraParam;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChatComponent_BP.ChatComponent_BP_C.ReceiveBeginPlay
struct UChatComponent_BP_C_ReceiveBeginPlay_Params
{
};

// Function ChatComponent_BP.ChatComponent_BP_C.AddOneMarkToUI
struct UChatComponent_BP_C_AddOneMarkToUI_Params
{
	struct FString*                                    Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString*                                    Content;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int*                                               MsgID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               audioID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    PlayerKeyString;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool*                                              isMe;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              PlaySound;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ShowChat;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChatComponent_BP.ChatComponent_BP_C.ExecuteUbergraph_ChatComponent_BP
struct UChatComponent_BP_C_ExecuteUbergraph_ChatComponent_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

