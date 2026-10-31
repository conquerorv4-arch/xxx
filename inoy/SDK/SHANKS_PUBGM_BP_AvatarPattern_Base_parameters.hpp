#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:22 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_AvatarPattern_Base.BP_AvatarPattern_Base_C.GetPatternNumTexturePath
struct UBP_AvatarPattern_Base_C_GetPatternNumTexturePath_Params
{
	int*                                               InNumID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSoftObjectPath                             OutTexture1;                                              // (Parm, OutParm)
	struct FSoftObjectPath                             OutTexture2;                                              // (Parm, OutParm)
};

// Function BP_AvatarPattern_Base.BP_AvatarPattern_Base_C.SetCustomPattern_Implementation
struct UBP_AvatarPattern_Base_C_SetCustomPattern_Implementation_Params
{
	class UMaterialInterface*                          InMaterial;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlotToMatPattern                           InMatPattern;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_AvatarPattern_Base.BP_AvatarPattern_Base_C.SetCustomPatternNum_Implementation
struct UBP_AvatarPattern_Base_C_SetCustomPatternNum_Implementation_Params
{
	class UMaterialInterface*                          InMaterial;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlotToMatPattern                           InMatPattern;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_AvatarPattern_Base.BP_AvatarPattern_Base_C.SetCustomPatternDeffered
struct UBP_AvatarPattern_Base_C_SetCustomPatternDeffered_Params
{
	class UMaterialInterface**                         InMaterial;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlotToMatPattern*                          InMatPattern;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_AvatarPattern_Base.BP_AvatarPattern_Base_C.ExecuteUbergraph_BP_AvatarPattern_Base
struct UBP_AvatarPattern_Base_C_ExecuteUbergraph_BP_AvatarPattern_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

