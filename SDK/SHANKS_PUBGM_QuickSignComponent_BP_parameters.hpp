#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:11 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function QuickSignComponent_BP.QuickSignComponent_BP_C.SetBoxMarkText
struct UQuickSignComponent_BP_C_SetBoxMarkText_Params
{
	struct FString                                     InputParam;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     FinalText;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function QuickSignComponent_BP.QuickSignComponent_BP_C.GetMarkTextShowedInChatBox
struct UQuickSignComponent_BP_C_GetMarkTextShowedInChatBox_Params
{
	struct FString                                     PlayerKey;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                OldTextID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Text;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function QuickSignComponent_BP.QuickSignComponent_BP_C.SpectatorActorMark
struct UQuickSignComponent_BP_C_SpectatorActorMark_Params
{
	struct FQuickSignMsg                               OriMarkInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FQuickSignMsg                               MarkInfo;                                                 // (Parm, OutParm)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuickSignComponent_BP.QuickSignComponent_BP_C.SetDistanceText
struct UQuickSignComponent_BP_C_SetDistanceText_Params
{
	struct FVector                                     HidPosition;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	EQuickSignSubType                                  MsgType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuickSignComponent_BP.QuickSignComponent_BP_C.GetAudioEventAndBank
struct UQuickSignComponent_BP_C_GetAudioEventAndBank_Params
{
	int                                                audioID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                actorid;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OutBankName;                                              // (Parm, OutParm, ZeroConstructor)
	struct FString                                     OutEventName;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function QuickSignComponent_BP.QuickSignComponent_BP_C.GetVoiceAudioID
struct UQuickSignComponent_BP_C_GetVoiceAudioID_Params
{
	int*                                               MsgType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function QuickSignComponent_BP.QuickSignComponent_BP_C.PickupWrapperActorHandle
struct UQuickSignComponent_BP_C_PickupWrapperActorHandle_Params
{
	struct FString                                     Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FQuickSignMark                              MarkInfo;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function QuickSignComponent_BP.QuickSignComponent_BP_C.GenerateMarkInfo
struct UQuickSignComponent_BP_C_GenerateMarkInfo_Params
{
	struct FQuickSignMsg                               MsgItem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FQuickSignMark                              MarkInfo;                                                 // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function QuickSignComponent_BP.QuickSignComponent_BP_C.LoadConfig
struct UQuickSignComponent_BP_C_LoadConfig_Params
{
};

// Function QuickSignComponent_BP.QuickSignComponent_BP_C.ReceiveBeginPlay
struct UQuickSignComponent_BP_C_ReceiveBeginPlay_Params
{
};

// Function QuickSignComponent_BP.QuickSignComponent_BP_C.ShowMsgTipsVoice
struct UQuickSignComponent_BP_C_ShowMsgTipsVoice_Params
{
	struct FQuickSignMsg*                              MsgItem;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool*                                              IsSelf;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    PlayerKey;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function QuickSignComponent_BP.QuickSignComponent_BP_C.PlayVoiceCD
struct UQuickSignComponent_BP_C_PlayVoiceCD_Params
{
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuickSignComponent_BP.QuickSignComponent_BP_C.ReportQuickSign
struct UQuickSignComponent_BP_C_ReportQuickSign_Params
{
	struct FQuickSignMsg*                              MsgItem;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function QuickSignComponent_BP.QuickSignComponent_BP_C.ExecuteUbergraph_QuickSignComponent_BP
struct UQuickSignComponent_BP_C_ExecuteUbergraph_QuickSignComponent_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

