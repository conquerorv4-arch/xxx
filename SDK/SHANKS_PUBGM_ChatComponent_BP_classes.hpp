#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:01 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ChatComponent_BP.ChatComponent_BP_C
// 0x03A0 (0x08B0 - 0x0510)
class UChatComponent_BP_C : public UChatComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (Transient, DuplicateTransient)
	struct FString                                     addToUIText;                                              // 0x0518(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             UITextArray;                                              // 0x0528(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                FirstIndex;                                               // 0x0538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x053C(0x0004) MISSED OFFSET
	struct FString                                     currContentMsg;                                           // 0x0540(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bInitSetting;                                             // 0x0550(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0551(0x0007) MISSED OFFSET
	struct FString                                     FriendChatStrGid;                                         // 0x0558(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     FriendChatSenderName;                                     // 0x0568(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     FriendChatContent;                                        // 0x0578(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               FriendChatSelfMsg;                                        // 0x0588(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0589(0x0007) MISSED OFFSET
	struct FString                                     FriendInviteStrGid;                                       // 0x0590(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     FriendInviteSenderName;                                   // 0x05A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     FriendInviteBattleTextValue;                              // 0x05B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     FriendReplyStrGid;                                        // 0x05C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     FriendReplySenderName;                                    // 0x05D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               FriendReplyReply;                                         // 0x05E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isMe;                                                     // 0x05E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x05E2(0x0002) MISSED OFFSET
	int                                                UI_MsgID;                                                 // 0x05E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     UI_ItemName;                                              // 0x05E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                UI_AlternateMsgID;                                        // 0x05F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x05FC(0x0004) MISSED OFFSET
	class USettingConfig_C*                            SettingConfig;                                            // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<int>                                        ChatFlagTypeList;                                         // 0x0608(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        TmpChatIDList;                                            // 0x0618(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bIsInfectMode;                                            // 0x0628(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0629(0x0007) MISSED OFFSET
	TArray<struct FChatQuickTextInfo>                  ChatQuikcTextIDList_HumanMenu;                            // 0x0630(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FChatQuickTextInfo>                  ChatQuikcTextIDList_HumanTurnplate;                       // 0x0640(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FChatQuickTextInfo>                  ChatQuikcTextIDList_ZombieMenu;                           // 0x0650(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FChatQuickTextInfo>                  ChatQuikcTextIDList_ZombieTurnplate;                      // 0x0660(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        InfectModePlayerType;                                     // 0x0670(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	ECharacterMainType                                 CurInfectModePlayerType;                                  // 0x0680(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0681(0x0003) MISSED OFFSET
	struct FQuickChatIDAndAudio                        QuickChat;                                                // 0x0684(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0694(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData08[0x50];                                      // 0x0694(0x0050) UNKNOWN PROPERTY: SetProperty ChatComponent_BP.ChatComponent_BP_C.GlobalActorIDList
	bool                                               bIsVehicleWarMode;                                        // 0x06E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x06E9(0x0007) MISSED OFFSET
	TArray<struct FChatQuickTextInfo>                  ChatQuikcTextIDList_VWMenu;                               // 0x06F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FChatQuickTextInfo>                  ChatQuikcTextIDList_VWTurnplate;                          // 0x0700(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                TraceItemID;                                              // 0x0710(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0714(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData11[0x50];                                      // 0x0714(0x0050) UNKNOWN PROPERTY: SetProperty ChatComponent_BP.ChatComponent_BP_C.MuteOnGlobal
	unsigned char                                      UnknownData12[0x50];                                      // 0x0768(0x0050) UNKNOWN PROPERTY: SetProperty ChatComponent_BP.ChatComponent_BP_C.MuteMsgOnBluehole
	TArray<int>                                        SpecialShowDistanceMsgID;                                 // 0x07B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                MaxShowVoiceDistance;                                     // 0x07C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsMarkText;                                              // 0x07CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x07CD(0x0003) MISSED OFFSET
	struct FString                                     MarkText;                                                 // 0x07D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             MarkTextArray;                                            // 0x07E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                addToUIMsgID;                                             // 0x07F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x07F4(0x0004) MISSED OFFSET
	TMap<int, int>                                     UIMsgIDMap;                                               // 0x07F8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData15[0x50];                                      // 0x0848(0x0050) UNKNOWN PROPERTY: SetProperty ChatComponent_BP.ChatComponent_BP_C.CDMsgIDs
	float                                              CDMsgDuration;                                            // 0x0898(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x089C(0x0004) MISSED OFFSET
	TArray<struct FChatQuickTextInfo>                  NewVar_1;                                                 // 0x08A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass ChatComponent_BP.ChatComponent_BP_C");
		return pStaticClass;
	}


	void GetIsForbidCustomChat(bool* bIsForbid);
	void PlayAutoLanguageMsg(int actorid, int MsgID);
	void CheckCDMsgs(int MsgID, bool* bIsShow);
	void AddMarkAndPlaySound(const struct FString& Name, const struct FString& Content, int MsgID, int ItemCount, int ItemId, const struct FString& PlayerKeyString, bool bIsMe, bool PlaySound, bool ShowChat, float Distance);
	void AddOneMarkToUIInner(bool bIsMe, const struct FString& TextMsg);
	void IsActorInGlobal(int actorid, bool* IsExist);
	void CheckIsAddReplyBtn(int MsgID, const struct FString& PlayerName);
	void GetSpecialDistanceString(const struct FString& SendPlayerName, struct FText* DistanceText);
	void DistanceToString(int Distance, int MsgID, const struct FString& PlayerName, struct FText* DistanceText);
	void GetActorNameByID(int actorid, struct FString* actorName);
	void GetLocalText(int MsgID, int ItemId, const struct FString& PlayerKeyString, int Distance, const struct FString& PlayerName, int ItemCount, struct FString* ContentMsg);
	void LoadVehicleModeQuickMsg();
	void IsVehicleWarMode(bool* IsVehicleWarMode);
	void InitActorIDList();
	void LoadInfectModeQuickMsg();
	void IsInfectMode(bool* IsInfectMode);
	void InitChatFlagList();
	void SetTurnplateQuickChatList();
	void GetActorBankByID(int actorid, struct FString* BankName);
	void SwitchActorAudio(int actorid);
	void LoadSingleAudio(int chatTextID);
	void LoadAllAudio();
	void CreateAudio(class UObject* audio, int resID);
	void SetQuickChatList();
	void InitFromSetting();
	void AddOneMsgToUIInner(bool isMe);
	void PlaySound(int MsgID, int actorid);
	void AddToArray();
	void AddOneMsgToUI1(struct FString* Name, struct FString* Content, int* MsgID, int* audioID, int* ItemId, struct FString* PlayerKeyString, bool* isMe, bool* PlaySound, bool* ShowChat, float* Distance);
	void NotifyFriendChat(struct FString* str_gid, struct FString* sender_name, struct FString* chat_content, bool* self_msg);
	void NotifyFriendInvite(struct FString* str_gid, struct FString* sender_name);
	void NotifyFriendReplyInvite(struct FString* str_gid, struct FString* sender_name, bool* bReply);
	void CloseChatHistoryList();
	void UpdateQuickItemText(int* MsgID, int* resID, int* alternateMsgID, int* ItemCount);
	void ReportBattleChat(int* MsgID, struct FString* Msg, int* msgExtraParam);
	void ReceiveBeginPlay();
	void AddOneMarkToUI(struct FString* Name, struct FString* Content, int* MsgID, int* audioID, int* ItemId, struct FString* PlayerKeyString, bool* isMe, bool* PlaySound, bool* ShowChat, float* Distance);
	void ExecuteUbergraph_ChatComponent_BP(int EntryPoint);
};


}

