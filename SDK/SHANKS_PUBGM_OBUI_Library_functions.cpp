// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:36:05 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OBUI_Library.OBUI_Library_C.GetSyncOBDataActor
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ASyncOBDataActor*        SyncOBDataActor                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOBUI_Library_C::GetSyncOBDataActor(class UObject* __WorldContext, class ASyncOBDataActor** SyncOBDataActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function OBUI_Library.OBUI_Library_C.GetSyncOBDataActor");

	UOBUI_Library_C_GetSyncOBDataActor_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SyncOBDataActor != nullptr)
		*SyncOBDataActor = params.SyncOBDataActor;
}


// Function OBUI_Library.OBUI_Library_C.GetPlayerNameLinearColorByTeamID
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TeamID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            NewParam1                      (Parm, OutParm, IsPlainOldData)

void UOBUI_Library_C::GetPlayerNameLinearColorByTeamID(int TeamID, class UObject* __WorldContext, struct FLinearColor* NewParam1)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function OBUI_Library.OBUI_Library_C.GetPlayerNameLinearColorByTeamID");

	UOBUI_Library_C_GetPlayerNameLinearColorByTeamID_Params params;
	params.TeamID = TeamID;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NewParam1 != nullptr)
		*NewParam1 = params.NewParam1;
}


// Function OBUI_Library.OBUI_Library_C.GetPlayerLinearColorByTeamID
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TeamID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            NewParam                       (Parm, OutParm, IsPlainOldData)

void UOBUI_Library_C::GetPlayerLinearColorByTeamID(int TeamID, class UObject* __WorldContext, struct FLinearColor* NewParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function OBUI_Library.OBUI_Library_C.GetPlayerLinearColorByTeamID");

	UOBUI_Library_C_GetPlayerLinearColorByTeamID_Params params;
	params.TeamID = TeamID;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function OBUI_Library.OBUI_Library_C.GetPlayerMakeupPicbyUID
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UID                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFind                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 logoPath                       (Parm, OutParm, ZeroConstructor)
// class UTexture2D*              LogoObject                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOBUI_Library_C::GetPlayerMakeupPicbyUID(const struct FString& UID, class UObject* __WorldContext, bool* bFind, struct FString* logoPath, class UTexture2D** LogoObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function OBUI_Library.OBUI_Library_C.GetPlayerMakeupPicbyUID");

	UOBUI_Library_C_GetPlayerMakeupPicbyUID_Params params;
	params.UID = UID;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bFind != nullptr)
		*bFind = params.bFind;
	if (logoPath != nullptr)
		*logoPath = params.logoPath;
	if (LogoObject != nullptr)
		*LogoObject = params.LogoObject;
}


// Function OBUI_Library.OBUI_Library_C.IsAllStarGame
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObj                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRes                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOBUI_Library_C::IsAllStarGame(class UObject* WorldContextObj, class UObject* __WorldContext, bool* bRes)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function OBUI_Library.OBUI_Library_C.IsAllStarGame");

	UOBUI_Library_C_IsAllStarGame_Params params;
	params.WorldContextObj = WorldContextObj;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bRes != nullptr)
		*bRes = params.bRes;
}


// Function OBUI_Library.OBUI_Library_C.GetCustomTeammatePicByName
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Resolution                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFind                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 logoPath                       (Parm, OutParm, ZeroConstructor)
// class UTexture2D*              LogoObject                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOBUI_Library_C::GetCustomTeammatePicByName(const struct FString& PlayerName, class UObject* __WorldContext, TArray<struct FString>* Resolution, bool* bFind, struct FString* logoPath, class UTexture2D** LogoObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function OBUI_Library.OBUI_Library_C.GetCustomTeammatePicByName");

	UOBUI_Library_C_GetCustomTeammatePicByName_Params params;
	params.PlayerName = PlayerName;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Resolution != nullptr)
		*Resolution = params.Resolution;
	if (bFind != nullptr)
		*bFind = params.bFind;
	if (logoPath != nullptr)
		*logoPath = params.logoPath;
	if (LogoObject != nullptr)
		*LogoObject = params.LogoObject;
}


// Function OBUI_Library.OBUI_Library_C.GetCustomCornerMarkByTeamID
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TeamID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFind                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 CornerMark                     (Parm, OutParm, ZeroConstructor)

void UOBUI_Library_C::GetCustomCornerMarkByTeamID(int TeamID, class UObject* __WorldContext, bool* bFind, struct FString* CornerMark)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function OBUI_Library.OBUI_Library_C.GetCustomCornerMarkByTeamID");

	UOBUI_Library_C_GetCustomCornerMarkByTeamID_Params params;
	params.TeamID = TeamID;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bFind != nullptr)
		*bFind = params.bFind;
	if (CornerMark != nullptr)
		*CornerMark = params.CornerMark;
}


// Function OBUI_Library.OBUI_Library_C.GetCustomKillInfoByTeamID
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TeamID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFind                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 logoPath                       (Parm, OutParm, ZeroConstructor)
// class UTexture2D*              LogoObject                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOBUI_Library_C::GetCustomKillInfoByTeamID(int TeamID, class UObject* __WorldContext, bool* bFind, struct FString* logoPath, class UTexture2D** LogoObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function OBUI_Library.OBUI_Library_C.GetCustomKillInfoByTeamID");

	UOBUI_Library_C_GetCustomKillInfoByTeamID_Params params;
	params.TeamID = TeamID;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bFind != nullptr)
		*bFind = params.bFind;
	if (logoPath != nullptr)
		*logoPath = params.logoPath;
	if (LogoObject != nullptr)
		*LogoObject = params.LogoObject;
}


// Function OBUI_Library.OBUI_Library_C.GetCustomTeamNameByTeamID
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TeamID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFind                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 TeamName                       (Parm, OutParm, ZeroConstructor)

void UOBUI_Library_C::GetCustomTeamNameByTeamID(int TeamID, class UObject* __WorldContext, bool* bFind, struct FString* TeamName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function OBUI_Library.OBUI_Library_C.GetCustomTeamNameByTeamID");

	UOBUI_Library_C_GetCustomTeamNameByTeamID_Params params;
	params.TeamID = TeamID;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bFind != nullptr)
		*bFind = params.bFind;
	if (TeamName != nullptr)
		*TeamName = params.TeamName;
}


// Function OBUI_Library.OBUI_Library_C.IsTeamMatch
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRet                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOBUI_Library_C::IsTeamMatch(class UObject* __WorldContext, bool* bRet)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function OBUI_Library.OBUI_Library_C.IsTeamMatch");

	UOBUI_Library_C_IsTeamMatch_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bRet != nullptr)
		*bRet = params.bRet;
}


// Function OBUI_Library.OBUI_Library_C.GetCustomTeamLogoByTeamID
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TeamID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         Resolution                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFind                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 logoPath                       (Parm, OutParm, ZeroConstructor)
// class UTexture2D*              LogoObject                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOBUI_Library_C::GetCustomTeamLogoByTeamID(int TeamID, class UObject* __WorldContext, TArray<struct FString>* Resolution, bool* bFind, struct FString* logoPath, class UTexture2D** LogoObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function OBUI_Library.OBUI_Library_C.GetCustomTeamLogoByTeamID");

	UOBUI_Library_C_GetCustomTeamLogoByTeamID_Params params;
	params.TeamID = TeamID;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Resolution != nullptr)
		*Resolution = params.Resolution;
	if (bFind != nullptr)
		*bFind = params.bFind;
	if (logoPath != nullptr)
		*logoPath = params.logoPath;
	if (LogoObject != nullptr)
		*LogoObject = params.LogoObject;
}


// Function OBUI_Library.OBUI_Library_C.GetPlayerNameColorByTeamID
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TeamID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FColor                  PlayerNameColor                (Parm, OutParm, IsPlainOldData)

void UOBUI_Library_C::GetPlayerNameColorByTeamID(int TeamID, class UObject* __WorldContext, struct FColor* PlayerNameColor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function OBUI_Library.OBUI_Library_C.GetPlayerNameColorByTeamID");

	UOBUI_Library_C_GetPlayerNameColorByTeamID_Params params;
	params.TeamID = TeamID;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (PlayerNameColor != nullptr)
		*PlayerNameColor = params.PlayerNameColor;
}


// Function OBUI_Library.OBUI_Library_C.GetPlayerColorByTeamID
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TeamID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FColor                  PlayerColor                    (Parm, OutParm, IsPlainOldData)

void UOBUI_Library_C::GetPlayerColorByTeamID(int TeamID, class UObject* __WorldContext, struct FColor* PlayerColor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function OBUI_Library.OBUI_Library_C.GetPlayerColorByTeamID");

	UOBUI_Library_C_GetPlayerColorByTeamID_Params params;
	params.TeamID = TeamID;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (PlayerColor != nullptr)
		*PlayerColor = params.PlayerColor;
}


}

