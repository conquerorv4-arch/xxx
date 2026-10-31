#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:51 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function FPPComponent.FPPComponent_C.IsNeedChangeTexOpacity
struct UFPPComponent_C_IsNeedChangeTexOpacity_Params
{
	bool                                               bNeedChange;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FPPComponent.FPPComponent_C.GetMateriaByString
struct UFPPComponent_C_GetMateriaByString_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UMaterialInterface*                          Material;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FPPComponent.FPPComponent_C.ScopingAttachToHead
struct UFPPComponent_C_ScopingAttachToHead_Params
{
};

// Function FPPComponent.FPPComponent_C.ScopingAttachToGun
struct UFPPComponent_C_ScopingAttachToGun_Params
{
};

// Function FPPComponent.FPPComponent_C.GetScopeMaterialOverride
struct UFPPComponent_C_GetScopeMaterialOverride_Params
{
	class ASTExtraShootWeapon**                        Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FPPComponent.FPPComponent_C.ResetScreenPercentage
struct UFPPComponent_C_ResetScreenPercentage_Params
{
};

// Function FPPComponent.FPPComponent_C.DownScreenPercentage
struct UFPPComponent_C_DownScreenPercentage_Params
{
};

// Function FPPComponent.FPPComponent_C.ChangeScopeTPPGlassMat
struct UFPPComponent_C_ChangeScopeTPPGlassMat_Params
{
	class UMeshComponent*                              ScopeMeshComp;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ScopeID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FPPComponent.FPPComponent_C.GetScopeMatTableKey
struct UFPPComponent_C_GetScopeMatTableKey_Params
{
	class ASTExtraPlayerController*                    PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ASTExtraShootWeapon*                         Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EWeaponAttachmentSocketType                        ScopeType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Key;                                                      // (Parm, OutParm, ZeroConstructor)
};

// Function FPPComponent.FPPComponent_C.IsScopeSpecialMatExist
struct UFPPComponent_C_IsScopeSpecialMatExist_Params
{
	class ASTExtraWeapon*                              Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EWeaponAttachmentSocketType                        ScopeType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               exist;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                MatTableKey;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FPPComponent.FPPComponent_C.SwitchAngledSightConfigMaterial
struct UFPPComponent_C_SwitchAngledSightConfigMaterial_Params
{
	bool*                                              forceSwitch;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FPPComponent.FPPComponent_C.ShowAngledSightTPPMaterial
struct UFPPComponent_C_ShowAngledSightTPPMaterial_Params
{
	bool*                                              forceADSState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FPPComponent.FPPComponent_C.SwitchSightConfigMaterial
struct UFPPComponent_C_SwitchSightConfigMaterial_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FPPComponent.FPPComponent_C.ShowReflectorSightTPPMaterial
struct UFPPComponent_C_ShowReflectorSightTPPMaterial_Params
{
	bool*                                              forceADSState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FPPComponent.FPPComponent_C.GetScopeFov
struct UFPPComponent_C_GetScopeFov_Params
{
	class ASTExtraWeapon**                             Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsAngled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FPPComponent.FPPComponent_C.SetTagCullingBP
struct UFPPComponent_C_SetTagCullingBP_Params
{
	bool                                               IsUse;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FPPComponent.FPPComponent_C.requestResourceGuarantee
struct UFPPComponent_C_requestResourceGuarantee_Params
{
	int                                                InOrOut;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELoadMode>                             loadMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EApplyStatus>                          applyStatus;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FPPComponent.FPPComponent_C.ReceiveTick
struct UFPPComponent_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FPPComponent.FPPComponent_C.ReloadEvent
struct UFPPComponent_C_ReloadEvent_Params
{
};

// Function FPPComponent.FPPComponent_C.SetTagCulling
struct UFPPComponent_C_SetTagCulling_Params
{
	bool*                                              IsUse;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FPPComponent.FPPComponent_C.PlayScopeInTimeline
struct UFPPComponent_C_PlayScopeInTimeline_Params
{
};

// Function FPPComponent.FPPComponent_C.ScopeInEnd
struct UFPPComponent_C_ScopeInEnd_Params
{
};

// Function FPPComponent.FPPComponent_C.ScopeOutEnd
struct UFPPComponent_C_ScopeOutEnd_Params
{
};

// Function FPPComponent.FPPComponent_C.StopScopeIn
struct UFPPComponent_C_StopScopeIn_Params
{
};

// Function FPPComponent.FPPComponent_C.AttachToSight
struct UFPPComponent_C_AttachToSight_Params
{
};

// Function FPPComponent.FPPComponent_C.AttachTo
struct UFPPComponent_C_AttachTo_Params
{
	class USceneComponent*                             NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FPPComponent.FPPComponent_C.Detach
struct UFPPComponent_C_Detach_Params
{
	class USceneComponent*                             NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FPPComponent.FPPComponent_C.AutoReloadEvent
struct UFPPComponent_C_AutoReloadEvent_Params
{
	class ASTExtraShootWeapon*                         ShootWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FPPComponent.FPPComponent_C.AttachToSightKeepTransform
struct UFPPComponent_C_AttachToSightKeepTransform_Params
{
};

// Function FPPComponent.FPPComponent_C.ExecuteUbergraph_FPPComponent
struct UFPPComponent_C_ExecuteUbergraph_FPPComponent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

