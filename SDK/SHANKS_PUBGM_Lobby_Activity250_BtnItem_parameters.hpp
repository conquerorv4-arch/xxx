#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:33 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Lobby_Activity250_BtnItem.Lobby_Activity250_BtnItem_C.SetOnlineActivityData
struct ULobby_Activity250_BtnItem_C_SetOnlineActivityData_Params
{
	int                                                status;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     strText;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Lobby_Activity250_BtnItem.Lobby_Activity250_BtnItem_C.SetBtnData
struct ULobby_Activity250_BtnItem_C_SetBtnData_Params
{
	struct FString                                     ActivityName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     IconPath;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     JumpUrl;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               IsShowCountDownIcon;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsNew;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     DependItems;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                ActID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CreatedUtc;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_Activity250_BtnItem.Lobby_Activity250_BtnItem_C.ItemClickDispatcher__DelegateSignature
struct ULobby_Activity250_BtnItem_C_ItemClickDispatcher__DelegateSignature_Params
{
	class ULobby_Activity_BtnItem_C*                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_Activity250_BtnItem.Lobby_Activity250_BtnItem_C.ItemMoveRightDispatcher__DelegateSignature
struct ULobby_Activity250_BtnItem_C_ItemMoveRightDispatcher__DelegateSignature_Params
{
	class ULobby_Activity_BtnItem_C*                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_Activity250_BtnItem.Lobby_Activity250_BtnItem_C.ItemMoveLeftDispatcher__DelegateSignature
struct ULobby_Activity250_BtnItem_C_ItemMoveLeftDispatcher__DelegateSignature_Params
{
	class ULobby_Activity_BtnItem_C*                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

