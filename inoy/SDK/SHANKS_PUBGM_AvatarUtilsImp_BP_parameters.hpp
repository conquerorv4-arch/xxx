#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:36:29 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetAdjustWeaponBPID_Lobby
struct UAvatarUtilsImp_BP_C_GetAdjustWeaponBPID_Lobby_Params
{
	int*                                               WeaponId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetVehicleDefaultStyleID
struct UAvatarUtilsImp_BP_C_GetVehicleDefaultStyleID_Params
{
	int*                                               InVehicleSkinID;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        OutStyleIDList;                                           // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetVehicleBPPathBySkinID
struct UAvatarUtilsImp_BP_C_GetVehicleBPPathBySkinID_Params
{
	int*                                               InVehicleSkinID;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetVehicleShapeBySkinID
struct UAvatarUtilsImp_BP_C_GetVehicleShapeBySkinID_Params
{
	int*                                               InVehicleSkinID;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetBPTableName
struct UAvatarUtilsImp_BP_C_GetBPTableName_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TypeSpecificID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     BPTableName;                                              // (Parm, OutParm, ZeroConstructor)
	int                                                SpecificID;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.CreateAvatarHandle
struct UAvatarUtilsImp_BP_C_CreateAvatarHandle_Params
{
	struct FItemDefineID*                              DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    Outer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bLobby;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UItemHandleBase*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetAvatarHandlePath
struct UAvatarUtilsImp_BP_C_GetAvatarHandlePath_Params
{
	struct FItemDefineID*                              DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              bLobby;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

