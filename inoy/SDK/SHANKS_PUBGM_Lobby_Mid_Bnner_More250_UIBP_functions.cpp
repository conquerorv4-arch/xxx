// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:33 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Lobby_Mid_Bnner_More250_UIBP.Lobby_Mid_Bnner_More250_UIBP_C.GetCurScroll
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULoopScrollBox*          Scroll                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULobby_Mid_Bnner_More250_UIBP_C::GetCurScroll(class ULoopScrollBox** Scroll)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Lobby_Mid_Bnner_More250_UIBP.Lobby_Mid_Bnner_More250_UIBP_C.GetCurScroll");

	ULobby_Mid_Bnner_More250_UIBP_C_GetCurScroll_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Scroll != nullptr)
		*Scroll = params.Scroll;
}


// Function Lobby_Mid_Bnner_More250_UIBP.Lobby_Mid_Bnner_More250_UIBP_C.GetOffset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Offset                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULobby_Mid_Bnner_More250_UIBP_C::GetOffset(float* Offset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Lobby_Mid_Bnner_More250_UIBP.Lobby_Mid_Bnner_More250_UIBP_C.GetOffset");

	ULobby_Mid_Bnner_More250_UIBP_C_GetOffset_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Offset != nullptr)
		*Offset = params.Offset;
}


// Function Lobby_Mid_Bnner_More250_UIBP.Lobby_Mid_Bnner_More250_UIBP_C.GetCurrentIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULobby_Mid_Bnner_More250_UIBP_C::GetCurrentIndex(int* Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Lobby_Mid_Bnner_More250_UIBP.Lobby_Mid_Bnner_More250_UIBP_C.GetCurrentIndex");

	ULobby_Mid_Bnner_More250_UIBP_C_GetCurrentIndex_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function Lobby_Mid_Bnner_More250_UIBP.Lobby_Mid_Bnner_More250_UIBP_C.OnClickActivityItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULobby_Activity_BtnItem_C* Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobby_Mid_Bnner_More250_UIBP_C::OnClickActivityItem(class ULobby_Activity_BtnItem_C* Item)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Lobby_Mid_Bnner_More250_UIBP.Lobby_Mid_Bnner_More250_UIBP_C.OnClickActivityItem");

	ULobby_Mid_Bnner_More250_UIBP_C_OnClickActivityItem_Params params;
	params.Item = Item;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Lobby_Mid_Bnner_More250_UIBP.Lobby_Mid_Bnner_More250_UIBP_C.UpdateCurrentPage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULobby_Mid_Bnner_More250_UIBP_C::UpdateCurrentPage()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Lobby_Mid_Bnner_More250_UIBP.Lobby_Mid_Bnner_More250_UIBP_C.UpdateCurrentPage");

	ULobby_Mid_Bnner_More250_UIBP_C_UpdateCurrentPage_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Lobby_Mid_Bnner_More250_UIBP.Lobby_Mid_Bnner_More250_UIBP_C.SetActivityListPageCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            pageCount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobby_Mid_Bnner_More250_UIBP_C::SetActivityListPageCount(int pageCount)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Lobby_Mid_Bnner_More250_UIBP.Lobby_Mid_Bnner_More250_UIBP_C.SetActivityListPageCount");

	ULobby_Mid_Bnner_More250_UIBP_C_SetActivityListPageCount_Params params;
	params.pageCount = pageCount;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Lobby_Mid_Bnner_More250_UIBP.Lobby_Mid_Bnner_More250_UIBP_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobby_Mid_Bnner_More250_UIBP_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Lobby_Mid_Bnner_More250_UIBP.Lobby_Mid_Bnner_More250_UIBP_C.Tick");

	ULobby_Mid_Bnner_More250_UIBP_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Lobby_Mid_Bnner_More250_UIBP.Lobby_Mid_Bnner_More250_UIBP_C.ExecuteUbergraph_Lobby_Mid_Bnner_More250_UIBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobby_Mid_Bnner_More250_UIBP_C::ExecuteUbergraph_Lobby_Mid_Bnner_More250_UIBP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Lobby_Mid_Bnner_More250_UIBP.Lobby_Mid_Bnner_More250_UIBP_C.ExecuteUbergraph_Lobby_Mid_Bnner_More250_UIBP");

	ULobby_Mid_Bnner_More250_UIBP_C_ExecuteUbergraph_Lobby_Mid_Bnner_More250_UIBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Lobby_Mid_Bnner_More250_UIBP.Lobby_Mid_Bnner_More250_UIBP_C.EventDispatcherClickItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 JumpUrl                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULobby_Mid_Bnner_More250_UIBP_C::EventDispatcherClickItem__DelegateSignature(int ID, const struct FString& JumpUrl)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Lobby_Mid_Bnner_More250_UIBP.Lobby_Mid_Bnner_More250_UIBP_C.EventDispatcherClickItem__DelegateSignature");

	ULobby_Mid_Bnner_More250_UIBP_C_EventDispatcherClickItem__DelegateSignature_Params params;
	params.ID = ID;
	params.JumpUrl = JumpUrl;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

