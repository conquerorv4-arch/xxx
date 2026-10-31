// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:34:49 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CreativeLua.CreativeBridgeLuaVM.UGCLuaError
// (Final, Native, Public, Const)
// Parameters:
// int                            ErrCode                        (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeBridgeLuaVM::UGCLuaError(int ErrCode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CreativeLua.CreativeBridgeLuaVM.UGCLuaError");

	UCreativeBridgeLuaVM_UGCLuaError_Params params;
	params.ErrCode = ErrCode;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function CreativeLua.CreativeBridgeLuaVM.SetUGCSuspendStateFix
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeBridgeLuaVM::SetUGCSuspendStateFix(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CreativeLua.CreativeBridgeLuaVM.SetUGCSuspendStateFix");

	UCreativeBridgeLuaVM_SetUGCSuspendStateFix_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function CreativeLua.CreativeBridgeLuaVM.RegisterSluaCallUgcluaEventHandler
// (Final, Native, Public)

void UCreativeBridgeLuaVM::RegisterSluaCallUgcluaEventHandler()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CreativeLua.CreativeBridgeLuaVM.RegisterSluaCallUgcluaEventHandler");

	UCreativeBridgeLuaVM_RegisterSluaCallUgcluaEventHandler_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function CreativeLua.CreativeBridgeLuaVM.PostInit
// (Native, Public, BlueprintCallable)

void UCreativeBridgeLuaVM::PostInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CreativeLua.CreativeBridgeLuaVM.PostInit");

	UCreativeBridgeLuaVM_PostInit_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function CreativeLua.CreativeBridgeLuaVM.GetUGCSuspendStateFix
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeBridgeLuaVM::GetUGCSuspendStateFix()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CreativeLua.CreativeBridgeLuaVM.GetUGCSuspendStateFix");

	UCreativeBridgeLuaVM_GetUGCSuspendStateFix_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CreativeLua.CreativeEnvLuaVMFactory.CreateCreativeEnvLuaVM
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 InLuaFilePath                  (Parm, ZeroConstructor)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeEnvLuaVM*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeEnvLuaVM* UCreativeEnvLuaVMFactory::CreateCreativeEnvLuaVM(const struct FString& InLuaFilePath, class UObject* WorldContextObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CreativeLua.CreativeEnvLuaVMFactory.CreateCreativeEnvLuaVM");

	UCreativeEnvLuaVMFactory_CreateCreativeEnvLuaVM_Params params;
	params.InLuaFilePath = InLuaFilePath;
	params.WorldContextObject = WorldContextObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

