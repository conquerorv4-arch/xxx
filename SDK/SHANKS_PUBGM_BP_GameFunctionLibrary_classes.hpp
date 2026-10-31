#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:13 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GameFunctionLibrary.BP_GameFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBP_GameFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_GameFunctionLibrary.BP_GameFunctionLibrary_C");
		return pStaticClass;
	}


	static void GetModeMaxTeammateNum(class UObject* __WorldContext, int* Result);
	static void EditorGetGameModeID(class UObject* WorldCont, class UObject* __WorldContext, struct FString* ModeID);
	static bool IsInFloatRangeUpperBound(float Value, const struct FFloatRangeBound& FloatRangeBound, class UObject* __WorldContext);
	static bool IsInFloatRangeLowerBound(float Value, const struct FFloatRangeBound& FloatRangeBound, class UObject* __WorldContext);
	static bool IsInFloatRange(float Value, const struct FFloatRange& FloatRange, class UObject* __WorldContext);
	static void GetGuideTextStruct(int NewParam, class UObject* __WorldContext, struct FBP_STRUCT_GuideText_type* NewParam1);
	static void GetMinimapPathByModeID(class UObject* WorldContext, class UObject* __WorldContext, struct FString* MinimapPath);
	static void GetCurLevelMinimapPath(class UObject* WorldContext, class UObject* __WorldContext, struct FString* MinimapPath);
	static void ClampStringLength(const struct FString& Source, int Length, class UObject* __WorldContext, struct FString* Result);
	static void IsPlayerCanSeeWidget(class UWidget* NewParam, class UObject* __WorldContext, bool* cansee);
	static void GetCurLevelMapTexture(class UObject* __WorldContext, class UTexture2D** Texture);
	static void GetActorsByTag(const struct FName& Tag, class UObject* ContextObject, class UClass* ActorClass, class UObject* __WorldContext, TArray<class AActor*>* Targets);
	static void AddActorTag(class AActor* Target, const struct FName& TagInfo, class UObject* __WorldContext);
	static void SetUpGamePostProcessEffectData(class APostProcessVolume* Volume, class UObject* ContextObject, class UObject* __WorldContext);
};


}

