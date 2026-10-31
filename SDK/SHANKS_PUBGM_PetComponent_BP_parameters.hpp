#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:36:01 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PetComponent_BP.PetComponent_BP_C.SetSpawnPetPosZ
struct UPetComponent_BP_C_SetSpawnPetPosZ_Params
{
};

// Function PetComponent_BP.PetComponent_BP_C.IsFPPMode
struct UPetComponent_BP_C_IsFPPMode_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PetComponent_BP.PetComponent_BP_C.GetPetOwnerPlayerPawn
struct UPetComponent_BP_C_GetPetOwnerPlayerPawn_Params
{
	class ABP_PlayerPawn_C*                            Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PetComponent_BP.PetComponent_BP_C.GetPetPawn
struct UPetComponent_BP_C_GetPetPawn_Params
{
	class ABasePetCharacter_BP_C*                      Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PetComponent_BP.PetComponent_BP_C.SetPetPawn
struct UPetComponent_BP_C_SetPetPawn_Params
{
	class ASTExtraPetCharacter*                        InPetPawn;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ASTExtraPetCharacter*                        Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PetComponent_BP.PetComponent_BP_C.SetPetOwnerPlayerPawn
struct UPetComponent_BP_C_SetPetOwnerPlayerPawn_Params
{
	class ASTExtraBaseCharacter*                       InPlayerPawn;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ASTExtraBaseCharacter*                       Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PetComponent_BP.PetComponent_BP_C.ResetAttachTrans
struct UPetComponent_BP_C_ResetAttachTrans_Params
{
};

// Function PetComponent_BP.PetComponent_BP_C.SpawnPetWithInfo
struct UPetComponent_BP_C_SpawnPetWithInfo_Params
{
	struct FGameModePlayerPetInfo                      Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PetComponent_BP.PetComponent_BP_C.SpawnPet
struct UPetComponent_BP_C_SpawnPet_Params
{
	class UClass*                                      PetClass;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PetComponent_BP.PetComponent_BP_C.RemovePet
struct UPetComponent_BP_C_RemovePet_Params
{
};

// Function PetComponent_BP.PetComponent_BP_C.PlayerStateChange
struct UPetComponent_BP_C_PlayerStateChange_Params
{
	EPawnState                                         State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPawnStateChangeType>                  ChangeType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PetComponent_BP.PetComponent_BP_C.OnOwnerPlayerPossessed
struct UPetComponent_BP_C_OnOwnerPlayerPossessed_Params
{
	struct FGameModePlayerPetInfo                      PetInfo;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PetComponent_BP.PetComponent_BP_C.OnOwnerDetachedVehicle
struct UPetComponent_BP_C_OnOwnerDetachedVehicle_Params
{
};

// Function PetComponent_BP.PetComponent_BP_C.OnRep_PetPawn
struct UPetComponent_BP_C_OnRep_PetPawn_Params
{
};

// Function PetComponent_BP.PetComponent_BP_C.OnRep_PetOwnerPlayerPawn
struct UPetComponent_BP_C_OnRep_PetOwnerPlayerPawn_Params
{
};

// Function PetComponent_BP.PetComponent_BP_C.OnRep_PetInfo
struct UPetComponent_BP_C_OnRep_PetInfo_Params
{
};

// Function PetComponent_BP.PetComponent_BP_C.DoChangePetWithInfo
struct UPetComponent_BP_C_DoChangePetWithInfo_Params
{
	struct FGameModePlayerPetInfo*                     InPetInfo;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PetComponent_BP.PetComponent_BP_C.OnPlayerStateEnterEvent
struct UPetComponent_BP_C_OnPlayerStateEnterEvent_Params
{
	EPawnState                                         State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PetComponent_BP.PetComponent_BP_C.OnPlayerStateLeaveEvent
struct UPetComponent_BP_C_OnPlayerStateLeaveEvent_Params
{
	EPawnState                                         State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PetComponent_BP.PetComponent_BP_C.ExecuteUbergraph_PetComponent_BP
struct UPetComponent_BP_C_ExecuteUbergraph_PetComponent_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PetComponent_BP.PetComponent_BP_C.OnRepPetInfo__DelegateSignature
struct UPetComponent_BP_C_OnRepPetInfo__DelegateSignature_Params
{
};

// Function PetComponent_BP.PetComponent_BP_C.OnRepPetPawnCalled__DelegateSignature
struct UPetComponent_BP_C_OnRepPetPawnCalled__DelegateSignature_Params
{
};

}

