#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:36:05 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OBUI_Library.OBUI_Library_C.GetSyncOBDataActor
struct UOBUI_Library_C_GetSyncOBDataActor_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ASyncOBDataActor*                            SyncOBDataActor;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OBUI_Library.OBUI_Library_C.GetPlayerNameLinearColorByTeamID
struct UOBUI_Library_C_GetPlayerNameLinearColorByTeamID_Params
{
	int                                                TeamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                NewParam1;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function OBUI_Library.OBUI_Library_C.GetPlayerLinearColorByTeamID
struct UOBUI_Library_C_GetPlayerLinearColorByTeamID_Params
{
	int                                                TeamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                NewParam;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function OBUI_Library.OBUI_Library_C.GetPlayerMakeupPicbyUID
struct UOBUI_Library_C_GetPlayerMakeupPicbyUID_Params
{
	struct FString                                     UID;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFind;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     logoPath;                                                 // (Parm, OutParm, ZeroConstructor)
	class UTexture2D*                                  LogoObject;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OBUI_Library.OBUI_Library_C.IsAllStarGame
struct UOBUI_Library_C_IsAllStarGame_Params
{
	class UObject*                                     WorldContextObj;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRes;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OBUI_Library.OBUI_Library_C.GetCustomTeammatePicByName
struct UOBUI_Library_C_GetCustomTeammatePicByName_Params
{
	TArray<struct FString>                             Resolution;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     PlayerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFind;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     logoPath;                                                 // (Parm, OutParm, ZeroConstructor)
	class UTexture2D*                                  LogoObject;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OBUI_Library.OBUI_Library_C.GetCustomCornerMarkByTeamID
struct UOBUI_Library_C_GetCustomCornerMarkByTeamID_Params
{
	int                                                TeamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFind;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     CornerMark;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function OBUI_Library.OBUI_Library_C.GetCustomKillInfoByTeamID
struct UOBUI_Library_C_GetCustomKillInfoByTeamID_Params
{
	int                                                TeamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFind;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     logoPath;                                                 // (Parm, OutParm, ZeroConstructor)
	class UTexture2D*                                  LogoObject;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OBUI_Library.OBUI_Library_C.GetCustomTeamNameByTeamID
struct UOBUI_Library_C_GetCustomTeamNameByTeamID_Params
{
	int                                                TeamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFind;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     TeamName;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function OBUI_Library.OBUI_Library_C.IsTeamMatch
struct UOBUI_Library_C_IsTeamMatch_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRet;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OBUI_Library.OBUI_Library_C.GetCustomTeamLogoByTeamID
struct UOBUI_Library_C_GetCustomTeamLogoByTeamID_Params
{
	int                                                TeamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             Resolution;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFind;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     logoPath;                                                 // (Parm, OutParm, ZeroConstructor)
	class UTexture2D*                                  LogoObject;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OBUI_Library.OBUI_Library_C.GetPlayerNameColorByTeamID
struct UOBUI_Library_C_GetPlayerNameColorByTeamID_Params
{
	int                                                TeamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FColor                                      PlayerNameColor;                                          // (Parm, OutParm, IsPlainOldData)
};

// Function OBUI_Library.OBUI_Library_C.GetPlayerColorByTeamID
struct UOBUI_Library_C_GetPlayerColorByTeamID_Params
{
	int                                                TeamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FColor                                      PlayerColor;                                              // (Parm, OutParm, IsPlainOldData)
};

}

