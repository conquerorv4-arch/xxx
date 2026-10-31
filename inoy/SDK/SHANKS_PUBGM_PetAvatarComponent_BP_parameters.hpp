#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:55 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PetAvatarComponent_BP.PetAvatarComponent_BP_C.GetFakeAvatarHandleItem
struct UPetAvatarComponent_BP_C_GetFakeAvatarHandleItem_Params
{
	int*                                               InSlotID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InItemID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               AdditionalItemID;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PetAvatarComponent_BP.PetAvatarComponent_BP_C.PetHasEquippedItem
struct UPetAvatarComponent_BP_C_PetHasEquippedItem_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PetAvatarComponent_BP.PetAvatarComponent_BP_C.PetUnequipItemById
struct UPetAvatarComponent_BP_C_PetUnequipItemById_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PetAvatarComponent_BP.PetAvatarComponent_BP_C.PetEquipItemById
struct UPetAvatarComponent_BP_C_PetEquipItemById_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

