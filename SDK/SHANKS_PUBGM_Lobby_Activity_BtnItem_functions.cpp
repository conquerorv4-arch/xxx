// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:33 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.SetOnlineActivityData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            status                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 strText                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULobby_Activity_BtnItem_C::SetOnlineActivityData(int status, const struct FString& strText)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.SetOnlineActivityData");

	ULobby_Activity_BtnItem_C_SetOnlineActivityData_Params params;
	params.status = status;
	params.strText = strText;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.SetBtnData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ActivityName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 IconPath                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 JumpUrl                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           IsShowCountDownIcon            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsNew                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 DependItems                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            ActID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            CreatedUtc                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobby_Activity_BtnItem_C::SetBtnData(const struct FString& ActivityName, const struct FString& IconPath, const struct FString& JumpUrl, bool IsShowCountDownIcon, bool IsNew, const struct FString& DependItems, int ActID, int CreatedUtc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.SetBtnData");

	ULobby_Activity_BtnItem_C_SetBtnData_Params params;
	params.ActivityName = ActivityName;
	params.IconPath = IconPath;
	params.JumpUrl = JumpUrl;
	params.IsShowCountDownIcon = IsShowCountDownIcon;
	params.IsNew = IsNew;
	params.DependItems = DependItems;
	params.ActID = ActID;
	params.CreatedUtc = CreatedUtc;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.ItemClickDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULobby_Activity_BtnItem_C* Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobby_Activity_BtnItem_C::ItemClickDispatcher__DelegateSignature(class ULobby_Activity_BtnItem_C* Item)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.ItemClickDispatcher__DelegateSignature");

	ULobby_Activity_BtnItem_C_ItemClickDispatcher__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.ItemMoveRightDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULobby_Activity_BtnItem_C* Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobby_Activity_BtnItem_C::ItemMoveRightDispatcher__DelegateSignature(class ULobby_Activity_BtnItem_C* Item)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.ItemMoveRightDispatcher__DelegateSignature");

	ULobby_Activity_BtnItem_C_ItemMoveRightDispatcher__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.ItemMoveLeftDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULobby_Activity_BtnItem_C* Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobby_Activity_BtnItem_C::ItemMoveLeftDispatcher__DelegateSignature(class ULobby_Activity_BtnItem_C* Item)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.ItemMoveLeftDispatcher__DelegateSignature");

	ULobby_Activity_BtnItem_C_ItemMoveLeftDispatcher__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

