// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:55 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PetAvatarComponent_BP.PetAvatarComponent_BP_C.GetFakeAvatarHandleItem
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           InSlotID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           InItemID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           AdditionalItemID               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPetAvatarComponent_BP_C::GetFakeAvatarHandleItem(int* InSlotID, int* InItemID, int* AdditionalItemID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PetAvatarComponent_BP.PetAvatarComponent_BP_C.GetFakeAvatarHandleItem");

	UPetAvatarComponent_BP_C_GetFakeAvatarHandleItem_Params params;
	params.InSlotID = InSlotID;
	params.InItemID = InItemID;
	params.AdditionalItemID = AdditionalItemID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PetAvatarComponent_BP.PetAvatarComponent_BP_C.PetHasEquippedItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPetAvatarComponent_BP_C::PetHasEquippedItem(int ID, bool* Out)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PetAvatarComponent_BP.PetAvatarComponent_BP_C.PetHasEquippedItem");

	UPetAvatarComponent_BP_C_PetHasEquippedItem_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function PetAvatarComponent_BP.PetAvatarComponent_BP_C.PetUnequipItemById
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPetAvatarComponent_BP_C::PetUnequipItemById(int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PetAvatarComponent_BP.PetAvatarComponent_BP_C.PetUnequipItemById");

	UPetAvatarComponent_BP_C_PetUnequipItemById_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PetAvatarComponent_BP.PetAvatarComponent_BP_C.PetEquipItemById
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPetAvatarComponent_BP_C::PetEquipItemById(int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PetAvatarComponent_BP.PetAvatarComponent_BP_C.PetEquipItemById");

	UPetAvatarComponent_BP_C_PetEquipItemById_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

