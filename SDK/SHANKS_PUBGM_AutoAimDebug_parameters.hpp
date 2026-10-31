#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:52 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AutoAimDebug.AutoAimDebug_C.Get_TextBlock_7_Text_1
struct UAutoAimDebug_C_Get_TextBlock_7_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AutoAimDebug.AutoAimDebug_C.Get_TextBlock_3_Text_1
struct UAutoAimDebug_C_Get_TextBlock_3_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AutoAimDebug.AutoAimDebug_C.HandleDamage
struct UAutoAimDebug_C_HandleDamage_Params
{
	bool                                               NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewParam1;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoAimDebug.AutoAimDebug_C.Get_TextBlock_14_Text_1
struct UAutoAimDebug_C_Get_TextBlock_14_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AutoAimDebug.AutoAimDebug_C.Get_TextBlock_12_Text_1
struct UAutoAimDebug_C_Get_TextBlock_12_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AutoAimDebug.AutoAimDebug_C.OnPaint
struct UAutoAimDebug_C_OnPaint_Params
{
	struct FPaintContext                               Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AutoAimDebug.AutoAimDebug_C.DrawDebug
struct UAutoAimDebug_C_DrawDebug_Params
{
	TArray<float>                                      DebugInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AutoAimDebug.AutoAimDebug_C.Construct
struct UAutoAimDebug_C_Construct_Params
{
};

// Function AutoAimDebug.AutoAimDebug_C.Tick
struct UAutoAimDebug_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoAimDebug.AutoAimDebug_C.OnEquip
struct UAutoAimDebug_C_OnEquip_Params
{
	class ASTExtraWeapon*                              Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESurviveWeaponPropSlot>                Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoAimDebug.AutoAimDebug_C.CustomEvent_1
struct UAutoAimDebug_C_CustomEvent_1_Params
{
};

// Function AutoAimDebug.AutoAimDebug_C.CustomEvent_2
struct UAutoAimDebug_C_CustomEvent_2_Params
{
};

// Function AutoAimDebug.AutoAimDebug_C.CustomEvent_3
struct UAutoAimDebug_C_CustomEvent_3_Params
{
	class ASTExtraShootWeapon*                         ShootWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ASTExtraShootWeaponBulletBase*               Bullet;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoAimDebug.AutoAimDebug_C.CustomEvent_4
struct UAutoAimDebug_C_CustomEvent_4_Params
{
	class ASTExtraShootWeapon*                         ShootWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ASTExtraShootWeaponBulletBase*               Bullet;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitRet;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function AutoAimDebug.AutoAimDebug_C.CustomEvent_5
struct UAutoAimDebug_C_CustomEvent_5_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class AActor*                                      Casuer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Victim;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoAimDebug.AutoAimDebug_C.ExecuteUbergraph_AutoAimDebug
struct UAutoAimDebug_C_ExecuteUbergraph_AutoAimDebug_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

