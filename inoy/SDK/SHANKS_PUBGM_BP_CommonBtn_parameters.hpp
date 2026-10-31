#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:12 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_CommonBtn.BP_CommonBtn_C.OnChangeOpenDoorMode
struct UBP_CommonBtn_C_OnChangeOpenDoorMode_Params
{
	int                                                OpenMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CommonBtn.BP_CommonBtn_C.UnRegistShowDoorButton
struct UBP_CommonBtn_C_UnRegistShowDoorButton_Params
{
};

// Function BP_CommonBtn.BP_CommonBtn_C.OnShowDoorButton
struct UBP_CommonBtn_C_OnShowDoorButton_Params
{
	TEnumAsByte<ECommonBtn>                            Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OpenParam;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CommonBtn.BP_CommonBtn_C.RegistShowDoorButton
struct UBP_CommonBtn_C_RegistShowDoorButton_Params
{
};

// Function BP_CommonBtn.BP_CommonBtn_C.ShowDoorButton
struct UBP_CommonBtn_C_ShowDoorButton_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Open;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OpenMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CommonBtn.BP_CommonBtn_C.GetPlayerController
struct UBP_CommonBtn_C_GetPlayerController_Params
{
	class ABP_STExtraPlayerController_C*               PlayerController;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CommonBtn.BP_CommonBtn_C.ReceiveBeginPlay
struct UBP_CommonBtn_C_ReceiveBeginPlay_Params
{
};

// Function BP_CommonBtn.BP_CommonBtn_C.CharacterStatusChanged
struct UBP_CommonBtn_C_CharacterStatusChanged_Params
{
	bool                                               IsNearDeath;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsRescueingOther;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CommonBtn.BP_CommonBtn_C.PlayerControllerReconnectedDelegate_Event_1
struct UBP_CommonBtn_C_PlayerControllerReconnectedDelegate_Event_1_Params
{
};

// Function BP_CommonBtn.BP_CommonBtn_C.UI_Click
struct UBP_CommonBtn_C_UI_Click_Params
{
	bool                                               bSimulateExtraDoor;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OpenParam;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CommonBtn.BP_CommonBtn_C.ToogleDoor
struct UBP_CommonBtn_C_ToogleDoor_Params
{
};

// Function BP_CommonBtn.BP_CommonBtn_C.BP_ShowDoorBtn
struct UBP_CommonBtn_C_BP_ShowDoorBtn_Params
{
	bool*                                              bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bOpen;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               doorOpenMode;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CommonBtn.BP_CommonBtn_C.AutoOpenDoor
struct UBP_CommonBtn_C_AutoOpenDoor_Params
{
	bool                                               BoolValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CommonBtn.BP_CommonBtn_C.BP_SimulateUIClick
struct UBP_CommonBtn_C_BP_SimulateUIClick_Params
{
	bool*                                              bExtraDoor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CommonBtn.BP_CommonBtn_C.ExecuteUbergraph_BP_CommonBtn
struct UBP_CommonBtn_C_ExecuteUbergraph_BP_CommonBtn_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

