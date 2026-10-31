// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:36:27 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Common_KingMark_UIBP_3.Common_KingMark_UIBP_2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCommon_KingMark_UIBP_2_C::Construct()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_KingMark_UIBP_3.Common_KingMark_UIBP_2_C.Construct");

	UCommon_KingMark_UIBP_2_C_Construct_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Common_KingMark_UIBP_3.Common_KingMark_UIBP_2_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_KingMark_UIBP_2_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_KingMark_UIBP_3.Common_KingMark_UIBP_2_C.Tick");

	UCommon_KingMark_UIBP_2_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Common_KingMark_UIBP_3.Common_KingMark_UIBP_2_C.ExecuteUbergraph_Common_KingMark_UIBP_3
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_KingMark_UIBP_2_C::ExecuteUbergraph_Common_KingMark_UIBP_3(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_KingMark_UIBP_3.Common_KingMark_UIBP_2_C.ExecuteUbergraph_Common_KingMark_UIBP_3");

	UCommon_KingMark_UIBP_2_C_ExecuteUbergraph_Common_KingMark_UIBP_3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

