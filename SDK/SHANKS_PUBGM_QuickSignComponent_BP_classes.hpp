#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:11 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass QuickSignComponent_BP.QuickSignComponent_BP_C
// 0x0250 (0x0C80 - 0x0A30)
class UQuickSignComponent_BP_C : public UQuickSignComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A30(0x0008) (Transient, DuplicateTransient)
	class UUAEDataTable*                               QuickSignDataTable;                                       // 0x0A38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FString, struct FBP_STRUCT_QuickSignCfg_type> QuickTableConfigMap;                                      // 0x0A40(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, struct FQuickSignMark>        QuickMarkMap;                                             // 0x0A90(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     TeammateColor;                                            // 0x0AE0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     SelfColor;                                                // 0x0AF0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     ColonChar;                                                // 0x0B00(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     EndChar;                                                  // 0x0B10(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     SelfName;                                                 // 0x0B20(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FQuickSignMsg                               CurrMsg;                                                  // 0x0B30(0x0070) (Edit, BlueprintVisible)
	bool                                               IsPlayVoiceCooldown;                                      // 0x0BA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0BA1(0x0007) MISSED OFFSET
	TMap<EWeaponAttachmentSocketType, int>             WeaponAttachmentSocketTextIDMap;                          // 0x0BA8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, int>                                     DefaultAudioMap;                                          // 0x0BF8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FText                                       distanceString;                                           // 0x0C48(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               isShowDistance;                                           // 0x0C60(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0C61(0x0007) MISSED OFFSET
	TArray<EQuickSignSubType>                          ShowDistanceTypes;                                        // 0x0C68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                CurDistance;                                              // 0x0C78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxShowVoiceDistance;                                     // 0x0C7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass QuickSignComponent_BP.QuickSignComponent_BP_C");
		return pStaticClass;
	}


	void SetBoxMarkText(const struct FString& InputParam, struct FString* FinalText);
	void GetMarkTextShowedInChatBox(const struct FString& PlayerKey, int OldTextID, struct FString* Text);
	void SpectatorActorMark(class AActor** Actor, struct FQuickSignMsg* OriMarkInfo, struct FQuickSignMsg* MarkInfo);
	void SetDistanceText(const struct FVector& HidPosition, EQuickSignSubType MsgType);
	void GetAudioEventAndBank(int audioID, int actorid, struct FString* OutBankName, struct FString* OutEventName);
	int GetVoiceAudioID(int* MsgType);
	void PickupWrapperActorHandle(const struct FString& Param, struct FQuickSignMark* MarkInfo);
	bool GenerateMarkInfo(struct FQuickSignMsg* MsgItem, struct FQuickSignMark* MarkInfo);
	void LoadConfig();
	void ReceiveBeginPlay();
	void ShowMsgTipsVoice(struct FQuickSignMsg* MsgItem, bool* IsSelf, struct FString* PlayerKey);
	void PlayVoiceCD(float Duration);
	void ReportQuickSign(struct FQuickSignMsg* MsgItem);
	void ExecuteUbergraph_QuickSignComponent_BP(int EntryPoint);
};


}

