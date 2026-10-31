#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:32 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.MakeBulletInBagOrOnGround
struct UBattleItemHandle_MainWeapon_C_MakeBulletInBagOrOnGround_Params
{
	struct FItemDefineID                               BulletDefine;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.CanDropWeapon
struct UBattleItemHandle_MainWeapon_C_CanDropWeapon_Params
{
	EBattleItemDropReason                              DropReason;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCanDrop;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.HandleOnWeaponDestroy
struct UBattleItemHandle_MainWeapon_C_HandleOnWeaponDestroy_Params
{
	EBattleItemDisuseReason                            Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.AutoEquipAttachmentsInArray
struct UBattleItemHandle_MainWeapon_C_AutoEquipAttachmentsInArray_Params
{
	TArray<class UBattleItemHandleBase*>               Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bReplaceUse;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.ReturnMultiBullet
struct UBattleItemHandle_MainWeapon_C_ReturnMultiBullet_Params
{
	int                                                WantReturnCount;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.GetWrapperClass
struct UBattleItemHandle_MainWeapon_C_GetWrapperClass_Params
{
	bool                                               found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WrapperClass;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.GetBulletWrapperClass
struct UBattleItemHandle_MainWeapon_C_GetBulletWrapperClass_Params
{
	int                                                BulletID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WrapperClass;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.GetWeaponClass
struct UBattleItemHandle_MainWeapon_C_GetWeaponClass_Params
{
	bool                                               found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WeaponClass;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.CreateVirtualPendantItemHandle
struct UBattleItemHandle_MainWeapon_C_CreateVirtualPendantItemHandle_Params
{
	struct FItemDefineID                               ItemDefineID;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UBattleItemHandleBase*                       ItemHandle;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.AutoEquipPendant
struct UBattleItemHandle_MainWeapon_C_AutoEquipPendant_Params
{
};

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.EquipPendant
struct UBattleItemHandle_MainWeapon_C_EquipPendant_Params
{
	int                                                pendantID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.CheckPendantCanAttach
struct UBattleItemHandle_MainWeapon_C_CheckPendantCanAttach_Params
{
	bool                                               CanAttach;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.GetOwingtWeapon
struct UBattleItemHandle_MainWeapon_C_GetOwingtWeapon_Params
{
	class ASTExtraWeapon*                              NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.AutoEquipAttachments
struct UBattleItemHandle_MainWeapon_C_AutoEquipAttachments_Params
{
};

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.ReturnBullets
struct UBattleItemHandle_MainWeapon_C_ReturnBullets_Params
{
	int                                                Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.UpdateEquipedAttach
struct UBattleItemHandle_MainWeapon_C_UpdateEquipedAttach_Params
{
	EWeaponAttachmentSocketType                        WeapAttachSockType;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBattleItemHandle_WeapAttachment_C*          WeapAttachItemHandle;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEquip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.LocalHandleDisuse
struct UBattleItemHandle_MainWeapon_C_LocalHandleDisuse_Params
{
	EBattleItemDisuseReason                            Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.CreateWrapperOnGround
struct UBattleItemHandle_MainWeapon_C_CreateWrapperOnGround_Params
{
};

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.GetAvailableTargetLogicSocketName
struct UBattleItemHandle_MainWeapon_C_GetAvailableTargetLogicSocketName_Params
{
	struct FName                                       TargetSocket;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bNeedPutDownOldWeapon;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoUse;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.GetAvailableInstantLogicSocketName
struct UBattleItemHandle_MainWeapon_C_GetAvailableInstantLogicSocketName_Params
{
	struct FName                                       Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bNeedPutDownOldWeapon;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoUse;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.JudgeHasTargetAttachmentSlot
struct UBattleItemHandle_MainWeapon_C_JudgeHasTargetAttachmentSlot_Params
{
	int                                                AttachBPID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EWeaponAttachmentSocketType                        AttachType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBackpackWeaponAttachHandle*                 AttachHandle;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanSwap;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                AttachResID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanEquip;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               HasOcupied;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               CanReplace;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.HandleDisuse
struct UBattleItemHandle_MainWeapon_C_HandleDisuse_Params
{
	EBattleItemDisuseReason*                           Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.HandleUse
struct UBattleItemHandle_MainWeapon_C_HandleUse_Params
{
	struct FBattleItemUseTarget*                       Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	EBattleItemUseReason*                              Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.HandleDrop
struct UBattleItemHandle_MainWeapon_C_HandleDrop_Params
{
	int*                                               InCount;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBattleItemDropReason*                             Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.HandlePickup
struct UBattleItemHandle_MainWeapon_C_HandlePickup_Params
{
	TScriptInterface<class UItemContainerInterface>    ItemContainer;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FBattleItemPickupInfo*                      PickupInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	EBattleItemPickupReason*                           Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.ReturnAllBullets
struct UBattleItemHandle_MainWeapon_C_ReturnAllBullets_Params
{
};

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.LocalAutoEquipAttachments
struct UBattleItemHandle_MainWeapon_C_LocalAutoEquipAttachments_Params
{
};

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.ReturnBullet
struct UBattleItemHandle_MainWeapon_C_ReturnBullet_Params
{
	int*                                               BulletNum;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.ExecuteUbergraph_BattleItemHandle_MainWeapon
struct UBattleItemHandle_MainWeapon_C_ExecuteUbergraph_BattleItemHandle_MainWeapon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

