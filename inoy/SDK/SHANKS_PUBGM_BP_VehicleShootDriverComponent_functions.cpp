// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:21 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_VehicleShootDriverComponent.BP_VehicleShootDriverComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_VehicleShootDriverComponent_C::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_VehicleShootDriverComponent.BP_VehicleShootDriverComponent_C.ReceiveBeginPlay");

	UBP_VehicleShootDriverComponent_C_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_VehicleShootDriverComponent.BP_VehicleShootDriverComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_VehicleShootDriverComponent_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_VehicleShootDriverComponent.BP_VehicleShootDriverComponent_C.ReceiveEndPlay");

	UBP_VehicleShootDriverComponent_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_VehicleShootDriverComponent.BP_VehicleShootDriverComponent_C.ExecuteUbergraph_BP_VehicleShootDriverComponent
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_VehicleShootDriverComponent_C::ExecuteUbergraph_BP_VehicleShootDriverComponent(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_VehicleShootDriverComponent.BP_VehicleShootDriverComponent_C.ExecuteUbergraph_BP_VehicleShootDriverComponent");

	UBP_VehicleShootDriverComponent_C_ExecuteUbergraph_BP_VehicleShootDriverComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

