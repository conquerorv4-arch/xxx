// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:36:12 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Common_Avatar_BP.Common_Avatar_BP_C.SetAssetLoadingMethod
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Async                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_Avatar_BP_C::SetAssetLoadingMethod(bool Async)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_Avatar_BP.Common_Avatar_BP_C.SetAssetLoadingMethod");

	UCommon_Avatar_BP_C_SetAssetLoadingMethod_Params params;
	params.Async = Async;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Common_Avatar_BP.Common_Avatar_BP_C.InitView
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Style                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 UID                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 iconUrl                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Gender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            frameLevel                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            PlayerLevel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ignoreFrame                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 RoleNation                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UCommon_Avatar_BP_C::InitView(int Style, const struct FString& UID, const struct FString& iconUrl, int Gender, int frameLevel, int PlayerLevel, bool ignoreFrame, const struct FString& RoleNation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_Avatar_BP.Common_Avatar_BP_C.InitView");

	UCommon_Avatar_BP_C_InitView_Params params;
	params.Style = Style;
	params.UID = UID;
	params.iconUrl = iconUrl;
	params.Gender = Gender;
	params.frameLevel = frameLevel;
	params.PlayerLevel = PlayerLevel;
	params.ignoreFrame = ignoreFrame;
	params.RoleNation = RoleNation;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Common_Avatar_BP.Common_Avatar_BP_C.DownloadSuc__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCommon_Avatar_BP_C::DownloadSuc__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_Avatar_BP.Common_Avatar_BP_C.DownloadSuc__DelegateSignature");

	UCommon_Avatar_BP_C_DownloadSuc__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Common_Avatar_BP.Common_Avatar_BP_C.OnClickItemCallback__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UID                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UCommon_Avatar_BP_C::OnClickItemCallback__DelegateSignature(const struct FString& UID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_Avatar_BP.Common_Avatar_BP_C.OnClickItemCallback__DelegateSignature");

	UCommon_Avatar_BP_C_OnClickItemCallback__DelegateSignature_Params params;
	params.UID = UID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

