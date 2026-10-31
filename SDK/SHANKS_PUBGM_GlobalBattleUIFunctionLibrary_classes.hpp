#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:13 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C
// 0x0000 (0x0090 - 0x0090)
class UGlobalBattleUIFunctionLibrary_C : public UBlueprintFunctionOverride
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C");
		return pStaticClass;
	}


	static void GetPlayerTeamColor(int Index, class UObject* __WorldContext, struct FLinearColor* Result);
	static void GetAudioIDSignType(class UObject* WorldContext, int actorid, int SignType, class UObject* __WorldContext, int* audioID);
	static void IsBankExistByActorID(class UObject* WorldContext, int actorid, class UObject* __WorldContext, bool* bExist);
	static void GetButtomQualityPath(int Quality, class UObject* __WorldContext, struct FString* Path);
	static void GetBgQualityPath(int Quality, class UObject* __WorldContext, struct FString* Path);
	static void IsCustomUIDataValid(class UWidget* Widget, const struct FVector2D& SaveDateSize, class UObject* __WorldContext, bool* IsValid);
	static void GetDurabilityColorConfig(int Durability, int MaxDurability, class UObject* __WorldContext, struct FSlateColor* OutColor, int* status);
	static void GetQuickSignText(class UObject* WorldContext, int SignType, int actorid, class UObject* __WorldContext, int* TextId);
	static void GetLocalizeVoiceText(const struct FString& Key, class UObject* __WorldContext, struct FString* Text);
	static void Get3DTouchSwitch(class UObject* __WorldContext, bool* TouchSwitch);
	static void Get3DTouchValue(class UObject* __WorldContext, float* TouchValue);
	static void IsIOSOneGigabyteDevice(class UObject* __WorldContext, bool* Output);
	static void GetLocalizeBattleText(const struct FString& Key, class UObject* __WorldContext, struct FString* Text);
	static void GetReportBugSwitch(class UObject* __WorldContext, bool* Ret);
	static void GetSelfieSwitch(class UObject* __WorldContext, bool* Ret);
	static void ShowGender(class UObject* __WorldContext, bool* BShowGender);
	static void IsWidgetVisible(class UWidget* Widget, class UObject* __WorldContext, bool* Visible);
	static void GetTimeByInt(int second_, class UObject* __WorldContext, struct FString* Time);
	static void SetImageWithSpriteResInBattle(const struct FString& ResPath, class UImage* Image, class UObject* __WorldContext);
	static void GetNationInfoInBattle(const struct FString& NationCode, class UObject* __WorldContext, struct FBP_STRUCT_RegionConfig_type* NationInfo);
	static void GetNationSwitch(const struct FString& Name, class UObject* __WorldContext, bool* Ret);
	static void CreateUAEUserWidget(class UClass* Class, class UUAEUserWidget* Parent, class UObject* __WorldContext, class UUAEUserWidget** Widget);
	static void GetLocalizeText(const struct FString& Key, class UObject* __WorldContext, struct FString* Text);
};


}

