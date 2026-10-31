// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:13 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetPlayerTeamColor
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Result                         (Parm, OutParm, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::GetPlayerTeamColor(int Index, class UObject* __WorldContext, struct FLinearColor* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetPlayerTeamColor");

	UGlobalBattleUIFunctionLibrary_C_GetPlayerTeamColor_Params params;
	params.Index = Index;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetAudioIDSignType
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContext                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            actorid                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SignType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            audioID                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::GetAudioIDSignType(class UObject* WorldContext, int actorid, int SignType, class UObject* __WorldContext, int* audioID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetAudioIDSignType");

	UGlobalBattleUIFunctionLibrary_C_GetAudioIDSignType_Params params;
	params.WorldContext = WorldContext;
	params.actorid = actorid;
	params.SignType = SignType;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (audioID != nullptr)
		*audioID = params.audioID;
}


// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.IsBankExistByActorID
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContext                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            actorid                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bExist                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::IsBankExistByActorID(class UObject* WorldContext, int actorid, class UObject* __WorldContext, bool* bExist)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.IsBankExistByActorID");

	UGlobalBattleUIFunctionLibrary_C_IsBankExistByActorID_Params params;
	params.WorldContext = WorldContext;
	params.actorid = actorid;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bExist != nullptr)
		*bExist = params.bExist;
}


// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetButtomQualityPath
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Quality                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Path                           (Parm, OutParm, ZeroConstructor)

void UGlobalBattleUIFunctionLibrary_C::GetButtomQualityPath(int Quality, class UObject* __WorldContext, struct FString* Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetButtomQualityPath");

	UGlobalBattleUIFunctionLibrary_C_GetButtomQualityPath_Params params;
	params.Quality = Quality;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Path != nullptr)
		*Path = params.Path;
}


// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetBgQualityPath
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Quality                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Path                           (Parm, OutParm, ZeroConstructor)

void UGlobalBattleUIFunctionLibrary_C::GetBgQualityPath(int Quality, class UObject* __WorldContext, struct FString* Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetBgQualityPath");

	UGlobalBattleUIFunctionLibrary_C_GetBgQualityPath_Params params;
	params.Quality = Quality;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Path != nullptr)
		*Path = params.Path;
}


// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.IsCustomUIDataValid
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               SaveDateSize                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::IsCustomUIDataValid(class UWidget* Widget, const struct FVector2D& SaveDateSize, class UObject* __WorldContext, bool* IsValid)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.IsCustomUIDataValid");

	UGlobalBattleUIFunctionLibrary_C_IsCustomUIDataValid_Params params;
	params.Widget = Widget;
	params.SaveDateSize = SaveDateSize;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetDurabilityColorConfig
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Durability                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxDurability                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             OutColor                       (Parm, OutParm)
// int                            status                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::GetDurabilityColorConfig(int Durability, int MaxDurability, class UObject* __WorldContext, struct FSlateColor* OutColor, int* status)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetDurabilityColorConfig");

	UGlobalBattleUIFunctionLibrary_C_GetDurabilityColorConfig_Params params;
	params.Durability = Durability;
	params.MaxDurability = MaxDurability;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutColor != nullptr)
		*OutColor = params.OutColor;
	if (status != nullptr)
		*status = params.status;
}


// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetQuickSignText
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContext                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SignType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            actorid                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TextId                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::GetQuickSignText(class UObject* WorldContext, int SignType, int actorid, class UObject* __WorldContext, int* TextId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetQuickSignText");

	UGlobalBattleUIFunctionLibrary_C_GetQuickSignText_Params params;
	params.WorldContext = WorldContext;
	params.SignType = SignType;
	params.actorid = actorid;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TextId != nullptr)
		*TextId = params.TextId;
}


// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetLocalizeVoiceText
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Text                           (Parm, OutParm, ZeroConstructor)

void UGlobalBattleUIFunctionLibrary_C::GetLocalizeVoiceText(const struct FString& Key, class UObject* __WorldContext, struct FString* Text)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetLocalizeVoiceText");

	UGlobalBattleUIFunctionLibrary_C_GetLocalizeVoiceText_Params params;
	params.Key = Key;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.Get3DTouchSwitch
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           TouchSwitch                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::Get3DTouchSwitch(class UObject* __WorldContext, bool* TouchSwitch)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.Get3DTouchSwitch");

	UGlobalBattleUIFunctionLibrary_C_Get3DTouchSwitch_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TouchSwitch != nullptr)
		*TouchSwitch = params.TouchSwitch;
}


// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.Get3DTouchValue
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TouchValue                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::Get3DTouchValue(class UObject* __WorldContext, float* TouchValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.Get3DTouchValue");

	UGlobalBattleUIFunctionLibrary_C_Get3DTouchValue_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TouchValue != nullptr)
		*TouchValue = params.TouchValue;
}


// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.IsIOSOneGigabyteDevice
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::IsIOSOneGigabyteDevice(class UObject* __WorldContext, bool* Output)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.IsIOSOneGigabyteDevice");

	UGlobalBattleUIFunctionLibrary_C_IsIOSOneGigabyteDevice_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetLocalizeBattleText
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Text                           (Parm, OutParm, ZeroConstructor)

void UGlobalBattleUIFunctionLibrary_C::GetLocalizeBattleText(const struct FString& Key, class UObject* __WorldContext, struct FString* Text)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetLocalizeBattleText");

	UGlobalBattleUIFunctionLibrary_C_GetLocalizeBattleText_Params params;
	params.Key = Key;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetReportBugSwitch
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::GetReportBugSwitch(class UObject* __WorldContext, bool* Ret)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetReportBugSwitch");

	UGlobalBattleUIFunctionLibrary_C_GetReportBugSwitch_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetSelfieSwitch
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::GetSelfieSwitch(class UObject* __WorldContext, bool* Ret)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetSelfieSwitch");

	UGlobalBattleUIFunctionLibrary_C_GetSelfieSwitch_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.ShowGender
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           BShowGender                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::ShowGender(class UObject* __WorldContext, bool* BShowGender)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.ShowGender");

	UGlobalBattleUIFunctionLibrary_C_ShowGender_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (BShowGender != nullptr)
		*BShowGender = params.BShowGender;
}


// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.IsWidgetVisible
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Visible                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::IsWidgetVisible(class UWidget* Widget, class UObject* __WorldContext, bool* Visible)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.IsWidgetVisible");

	UGlobalBattleUIFunctionLibrary_C_IsWidgetVisible_Params params;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Visible != nullptr)
		*Visible = params.Visible;
}


// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetTimeByInt
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            second_                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Time                           (Parm, OutParm, ZeroConstructor)

void UGlobalBattleUIFunctionLibrary_C::GetTimeByInt(int second_, class UObject* __WorldContext, struct FString* Time)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetTimeByInt");

	UGlobalBattleUIFunctionLibrary_C_GetTimeByInt_Params params;
	params.second_ = second_;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;
}


// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.SetImageWithSpriteResInBattle
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ResPath                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::SetImageWithSpriteResInBattle(const struct FString& ResPath, class UImage* Image, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.SetImageWithSpriteResInBattle");

	UGlobalBattleUIFunctionLibrary_C_SetImageWithSpriteResInBattle_Params params;
	params.ResPath = ResPath;
	params.Image = Image;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetNationInfoInBattle
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NationCode                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBP_STRUCT_RegionConfig_type NationInfo                     (Parm, OutParm)

void UGlobalBattleUIFunctionLibrary_C::GetNationInfoInBattle(const struct FString& NationCode, class UObject* __WorldContext, struct FBP_STRUCT_RegionConfig_type* NationInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetNationInfoInBattle");

	UGlobalBattleUIFunctionLibrary_C_GetNationInfoInBattle_Params params;
	params.NationCode = NationCode;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NationInfo != nullptr)
		*NationInfo = params.NationInfo;
}


// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetNationSwitch
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::GetNationSwitch(const struct FString& Name, class UObject* __WorldContext, bool* Ret)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetNationSwitch");

	UGlobalBattleUIFunctionLibrary_C_GetNationSwitch_Params params;
	params.Name = Name;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.CreateUAEUserWidget
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUAEUserWidget*          Parent                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUAEUserWidget*          Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::CreateUAEUserWidget(class UClass* Class, class UUAEUserWidget* Parent, class UObject* __WorldContext, class UUAEUserWidget** Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.CreateUAEUserWidget");

	UGlobalBattleUIFunctionLibrary_C_CreateUAEUserWidget_Params params;
	params.Class = Class;
	params.Parent = Parent;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetLocalizeText
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Text                           (Parm, OutParm, ZeroConstructor)

void UGlobalBattleUIFunctionLibrary_C::GetLocalizeText(const struct FString& Key, class UObject* __WorldContext, struct FString* Text)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetLocalizeText");

	UGlobalBattleUIFunctionLibrary_C_GetLocalizeText_Params params;
	params.Key = Key;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


}

