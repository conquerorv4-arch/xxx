#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:36:05 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OBUI_Library.OBUI_Library_C
// 0x0000 (0x0028 - 0x0028)
class UOBUI_Library_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass OBUI_Library.OBUI_Library_C");
		return pStaticClass;
	}


	static void GetSyncOBDataActor(class UObject* __WorldContext, class ASyncOBDataActor** SyncOBDataActor);
	static void GetPlayerNameLinearColorByTeamID(int TeamID, class UObject* __WorldContext, struct FLinearColor* NewParam1);
	static void GetPlayerLinearColorByTeamID(int TeamID, class UObject* __WorldContext, struct FLinearColor* NewParam);
	static void GetPlayerMakeupPicbyUID(const struct FString& UID, class UObject* __WorldContext, bool* bFind, struct FString* logoPath, class UTexture2D** LogoObject);
	static void IsAllStarGame(class UObject* WorldContextObj, class UObject* __WorldContext, bool* bRes);
	static void GetCustomTeammatePicByName(const struct FString& PlayerName, class UObject* __WorldContext, TArray<struct FString>* Resolution, bool* bFind, struct FString* logoPath, class UTexture2D** LogoObject);
	static void GetCustomCornerMarkByTeamID(int TeamID, class UObject* __WorldContext, bool* bFind, struct FString* CornerMark);
	static void GetCustomKillInfoByTeamID(int TeamID, class UObject* __WorldContext, bool* bFind, struct FString* logoPath, class UTexture2D** LogoObject);
	static void GetCustomTeamNameByTeamID(int TeamID, class UObject* __WorldContext, bool* bFind, struct FString* TeamName);
	static void IsTeamMatch(class UObject* __WorldContext, bool* bRet);
	static void GetCustomTeamLogoByTeamID(int TeamID, class UObject* __WorldContext, TArray<struct FString>* Resolution, bool* bFind, struct FString* logoPath, class UTexture2D** LogoObject);
	static void GetPlayerNameColorByTeamID(int TeamID, class UObject* __WorldContext, struct FColor* PlayerNameColor);
	static void GetPlayerColorByTeamID(int TeamID, class UObject* __WorldContext, struct FColor* PlayerColor);
};


}

