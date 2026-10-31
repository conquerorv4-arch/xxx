#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:34:49 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CreativeLua.CreativeBridgeLuaVM.UGCLuaError
struct UCreativeBridgeLuaVM_UGCLuaError_Params
{
	int                                                ErrCode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CreativeLua.CreativeBridgeLuaVM.SetUGCSuspendStateFix
struct UCreativeBridgeLuaVM_SetUGCSuspendStateFix_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CreativeLua.CreativeBridgeLuaVM.RegisterSluaCallUgcluaEventHandler
struct UCreativeBridgeLuaVM_RegisterSluaCallUgcluaEventHandler_Params
{
};

// Function CreativeLua.CreativeBridgeLuaVM.PostInit
struct UCreativeBridgeLuaVM_PostInit_Params
{
};

// Function CreativeLua.CreativeBridgeLuaVM.GetUGCSuspendStateFix
struct UCreativeBridgeLuaVM_GetUGCSuspendStateFix_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CreativeLua.CreativeEnvLuaVMFactory.CreateCreativeEnvLuaVM
struct UCreativeEnvLuaVMFactory_CreateCreativeEnvLuaVM_Params
{
	struct FString                                     InLuaFilePath;                                            // (Parm, ZeroConstructor)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeEnvLuaVM*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

