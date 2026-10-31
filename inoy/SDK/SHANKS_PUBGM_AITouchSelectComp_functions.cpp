// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:45 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AITouchSelectComp.AITouchSelectComp_C.UpdateViewportLocalSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAITouchSelectComp_C::UpdateViewportLocalSize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AITouchSelectComp.AITouchSelectComp_C.UpdateViewportLocalSize");

	UAITouchSelectComp_C_UpdateViewportLocalSize_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AITouchSelectComp.AITouchSelectComp_C.ModifyTouchLoc
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D               TouchLoc                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UAITouchSelectComp_C::ModifyTouchLoc(struct FGeometry* MyGeometry, struct FVector2D* TouchLoc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AITouchSelectComp.AITouchSelectComp_C.ModifyTouchLoc");

	UAITouchSelectComp_C_ModifyTouchLoc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (MyGeometry != nullptr)
		*MyGeometry = params.MyGeometry;
	if (TouchLoc != nullptr)
		*TouchLoc = params.TouchLoc;

	return params.ReturnValue;
}


// Function AITouchSelectComp.AITouchSelectComp_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UAITouchSelectComp_C::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AITouchSelectComp.AITouchSelectComp_C.ReceiveBeginPlay");

	UAITouchSelectComp_C_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AITouchSelectComp.AITouchSelectComp_C.OnTouchSelect
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  SelectActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               TouchLoc                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UAITouchSelectComp_C::OnTouchSelect(class AActor* SelectActor, const struct FVector2D& TouchLoc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AITouchSelectComp.AITouchSelectComp_C.OnTouchSelect");

	UAITouchSelectComp_C_OnTouchSelect_Params params;
	params.SelectActor = SelectActor;
	params.TouchLoc = TouchLoc;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AITouchSelectComp.AITouchSelectComp_C.OnViewPortChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               OldViewportSize                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               NewViewportSize                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UAITouchSelectComp_C::OnViewPortChange(const struct FVector2D& OldViewportSize, const struct FVector2D& NewViewportSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AITouchSelectComp.AITouchSelectComp_C.OnViewPortChange");

	UAITouchSelectComp_C_OnViewPortChange_Params params;
	params.OldViewportSize = OldViewportSize;
	params.NewViewportSize = NewViewportSize;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AITouchSelectComp.AITouchSelectComp_C.ExecuteUbergraph_AITouchSelectComp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAITouchSelectComp_C::ExecuteUbergraph_AITouchSelectComp(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AITouchSelectComp.AITouchSelectComp_C.ExecuteUbergraph_AITouchSelectComp");

	UAITouchSelectComp_C_ExecuteUbergraph_AITouchSelectComp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

