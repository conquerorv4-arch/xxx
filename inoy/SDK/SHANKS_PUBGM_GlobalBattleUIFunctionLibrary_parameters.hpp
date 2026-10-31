#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:13 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetPlayerTeamColor
struct UGlobalBattleUIFunctionLibrary_C_GetPlayerTeamColor_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Result;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetAudioIDSignType
struct UGlobalBattleUIFunctionLibrary_C_GetAudioIDSignType_Params
{
	class UObject*                                     WorldContext;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                actorid;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SignType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                audioID;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.IsBankExistByActorID
struct UGlobalBattleUIFunctionLibrary_C_IsBankExistByActorID_Params
{
	class UObject*                                     WorldContext;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                actorid;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bExist;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetButtomQualityPath
struct UGlobalBattleUIFunctionLibrary_C_GetButtomQualityPath_Params
{
	int                                                Quality;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Path;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetBgQualityPath
struct UGlobalBattleUIFunctionLibrary_C_GetBgQualityPath_Params
{
	int                                                Quality;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Path;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.IsCustomUIDataValid
struct UGlobalBattleUIFunctionLibrary_C_IsCustomUIDataValid_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SaveDateSize;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetDurabilityColorConfig
struct UGlobalBattleUIFunctionLibrary_C_GetDurabilityColorConfig_Params
{
	int                                                Durability;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxDurability;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 OutColor;                                                 // (Parm, OutParm)
	int                                                status;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetQuickSignText
struct UGlobalBattleUIFunctionLibrary_C_GetQuickSignText_Params
{
	class UObject*                                     WorldContext;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SignType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                actorid;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TextId;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetLocalizeVoiceText
struct UGlobalBattleUIFunctionLibrary_C_GetLocalizeVoiceText_Params
{
	struct FString                                     Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Text;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.Get3DTouchSwitch
struct UGlobalBattleUIFunctionLibrary_C_Get3DTouchSwitch_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TouchSwitch;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.Get3DTouchValue
struct UGlobalBattleUIFunctionLibrary_C_Get3DTouchValue_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TouchValue;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.IsIOSOneGigabyteDevice
struct UGlobalBattleUIFunctionLibrary_C_IsIOSOneGigabyteDevice_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetLocalizeBattleText
struct UGlobalBattleUIFunctionLibrary_C_GetLocalizeBattleText_Params
{
	struct FString                                     Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Text;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetReportBugSwitch
struct UGlobalBattleUIFunctionLibrary_C_GetReportBugSwitch_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetSelfieSwitch
struct UGlobalBattleUIFunctionLibrary_C_GetSelfieSwitch_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.ShowGender
struct UGlobalBattleUIFunctionLibrary_C_ShowGender_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               BShowGender;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.IsWidgetVisible
struct UGlobalBattleUIFunctionLibrary_C_IsWidgetVisible_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Visible;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetTimeByInt
struct UGlobalBattleUIFunctionLibrary_C_GetTimeByInt_Params
{
	int                                                second_;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Time;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.SetImageWithSpriteResInBattle
struct UGlobalBattleUIFunctionLibrary_C_SetImageWithSpriteResInBattle_Params
{
	struct FString                                     ResPath;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UImage*                                      Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetNationInfoInBattle
struct UGlobalBattleUIFunctionLibrary_C_GetNationInfoInBattle_Params
{
	struct FString                                     NationCode;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_RegionConfig_type                NationInfo;                                               // (Parm, OutParm)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetNationSwitch
struct UGlobalBattleUIFunctionLibrary_C_GetNationSwitch_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.CreateUAEUserWidget
struct UGlobalBattleUIFunctionLibrary_C_CreateUAEUserWidget_Params
{
	class UClass*                                      Class;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUAEUserWidget*                              Parent;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUAEUserWidget*                              Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetLocalizeText
struct UGlobalBattleUIFunctionLibrary_C_GetLocalizeText_Params
{
	struct FString                                     Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Text;                                                     // (Parm, OutParm, ZeroConstructor)
};

}

