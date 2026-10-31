// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:36:02 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Vault_Controller.Vault_Controller_C.JumpVault
// (BlueprintCallable, BlueprintEvent)

void UVault_Controller_C::JumpVault()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.JumpVault");

	UVault_Controller_C_JumpVault_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Vault_Controller.Vault_Controller_C.VaultServer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          dis                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Length                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 VaultKey                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FVector                 StartPos                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  checkActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          crossblockMaxFall              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          crossblockMaxDis               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitPoint                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  WindowActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                MoveDir                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UVault_Controller_C::VaultServer(float dis, float Height, float Length, const struct FString& VaultKey, const struct FVector& StartPos, class AActor* checkActor, float crossblockMaxFall, float crossblockMaxDis, const struct FVector& HitPoint, class AActor* WindowActor, const struct FRotator& MoveDir)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.VaultServer");

	UVault_Controller_C_VaultServer_Params params;
	params.dis = dis;
	params.Height = Height;
	params.Length = Length;
	params.VaultKey = VaultKey;
	params.StartPos = StartPos;
	params.checkActor = checkActor;
	params.crossblockMaxFall = crossblockMaxFall;
	params.crossblockMaxDis = crossblockMaxDis;
	params.HitPoint = HitPoint;
	params.WindowActor = WindowActor;
	params.MoveDir = MoveDir;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Vault_Controller.Vault_Controller_C.vaultAll
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          dis                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Length                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 VaultKey                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FVector                 StartPos                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  checkActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          crossmaxFalling                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          crossmaxDis                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitPoint                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                MoveDir                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UVault_Controller_C::vaultAll(float dis, float Height, float Length, const struct FString& VaultKey, const struct FVector& StartPos, class AActor* checkActor, float crossmaxFalling, float crossmaxDis, const struct FVector& HitPoint, const struct FRotator& MoveDir)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.vaultAll");

	UVault_Controller_C_vaultAll_Params params;
	params.dis = dis;
	params.Height = Height;
	params.Length = Length;
	params.VaultKey = VaultKey;
	params.StartPos = StartPos;
	params.checkActor = checkActor;
	params.crossmaxFalling = crossmaxFalling;
	params.crossmaxDis = crossmaxDis;
	params.HitPoint = HitPoint;
	params.MoveDir = MoveDir;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Vault_Controller.Vault_Controller_C.StopVault
// (BlueprintCallable, BlueprintEvent)

void UVault_Controller_C::StopVault()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.StopVault");

	UVault_Controller_C_StopVault_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Vault_Controller.Vault_Controller_C.DsCheckStopVault
// (BlueprintCallable, BlueprintEvent)

void UVault_Controller_C::DsCheckStopVault()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.DsCheckStopVault");

	UVault_Controller_C_DsCheckStopVault_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Vault_Controller.Vault_Controller_C.ExecuteUbergraph_Vault_Controller
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::ExecuteUbergraph_Vault_Controller(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.ExecuteUbergraph_Vault_Controller");

	UVault_Controller_C_ExecuteUbergraph_Vault_Controller_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

