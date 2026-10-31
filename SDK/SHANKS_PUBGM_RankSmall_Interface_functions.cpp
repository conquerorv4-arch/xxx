// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:36:15 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RankSmall_Interface.RankSmall_Interface_C.SetRankText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor             Color                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateColor             ShadowColor                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateFontInfo          FontInfo                       (BlueprintVisible, BlueprintReadOnly, Parm)

void URankSmall_Interface_C::SetRankText(const struct FSlateColor& Color, const struct FSlateColor& ShadowColor, const struct FSlateFontInfo& FontInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RankSmall_Interface.RankSmall_Interface_C.SetRankText");

	URankSmall_Interface_C_SetRankText_Params params;
	params.Color = Color;
	params.ShadowColor = ShadowColor;
	params.FontInfo = FontInfo;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function RankSmall_Interface.RankSmall_Interface_C.SetRankIntegral
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBP_STRUCT_RankIntegralLevel_type RankIntegralLevel_Info         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           isStarOpen                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URankSmall_Interface_C::SetRankIntegral(const struct FBP_STRUCT_RankIntegralLevel_type& RankIntegralLevel_Info, bool isStarOpen)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RankSmall_Interface.RankSmall_Interface_C.SetRankIntegral");

	URankSmall_Interface_C_SetRankIntegral_Params params;
	params.RankIntegralLevel_Info = RankIntegralLevel_Info;
	params.isStarOpen = isStarOpen;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

