// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:52 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AutoAimDebug.AutoAimDebug_C.Get_TextBlock_7_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UAutoAimDebug_C::Get_TextBlock_7_Text_1()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoAimDebug.AutoAimDebug_C.Get_TextBlock_7_Text_1");

	UAutoAimDebug_C_Get_TextBlock_7_Text_1_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoAimDebug.AutoAimDebug_C.Get_TextBlock_3_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UAutoAimDebug_C::Get_TextBlock_3_Text_1()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoAimDebug.AutoAimDebug_C.Get_TextBlock_3_Text_1");

	UAutoAimDebug_C_Get_TextBlock_3_Text_1_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoAimDebug.AutoAimDebug_C.HandleDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewParam1                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAutoAimDebug_C::HandleDamage(bool NewParam, bool NewParam1)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoAimDebug.AutoAimDebug_C.HandleDamage");

	UAutoAimDebug_C_HandleDamage_Params params;
	params.NewParam = NewParam;
	params.NewParam1 = NewParam1;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoAimDebug.AutoAimDebug_C.Get_TextBlock_14_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UAutoAimDebug_C::Get_TextBlock_14_Text_1()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoAimDebug.AutoAimDebug_C.Get_TextBlock_14_Text_1");

	UAutoAimDebug_C_Get_TextBlock_14_Text_1_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoAimDebug.AutoAimDebug_C.Get_TextBlock_12_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UAutoAimDebug_C::Get_TextBlock_12_Text_1()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoAimDebug.AutoAimDebug_C.Get_TextBlock_12_Text_1");

	UAutoAimDebug_C_Get_TextBlock_12_Text_1_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoAimDebug.AutoAimDebug_C.OnPaint
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext           Context                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAutoAimDebug_C::OnPaint(struct FPaintContext* Context)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoAimDebug.AutoAimDebug_C.OnPaint");

	UAutoAimDebug_C_OnPaint_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function AutoAimDebug.AutoAimDebug_C.DrawDebug
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<float>                  DebugInfo                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAutoAimDebug_C::DrawDebug(TArray<float>* DebugInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoAimDebug.AutoAimDebug_C.DrawDebug");

	UAutoAimDebug_C_DrawDebug_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (DebugInfo != nullptr)
		*DebugInfo = params.DebugInfo;
}


// Function AutoAimDebug.AutoAimDebug_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAutoAimDebug_C::Construct()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoAimDebug.AutoAimDebug_C.Construct");

	UAutoAimDebug_C_Construct_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoAimDebug.AutoAimDebug_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAutoAimDebug_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoAimDebug.AutoAimDebug_C.Tick");

	UAutoAimDebug_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoAimDebug.AutoAimDebug_C.OnEquip
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraWeapon*          Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESurviveWeaponPropSlot> Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAutoAimDebug_C::OnEquip(class ASTExtraWeapon* Weapon, TEnumAsByte<ESurviveWeaponPropSlot> Slot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoAimDebug.AutoAimDebug_C.OnEquip");

	UAutoAimDebug_C_OnEquip_Params params;
	params.Weapon = Weapon;
	params.Slot = Slot;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoAimDebug.AutoAimDebug_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void UAutoAimDebug_C::CustomEvent_1()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoAimDebug.AutoAimDebug_C.CustomEvent_1");

	UAutoAimDebug_C_CustomEvent_1_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoAimDebug.AutoAimDebug_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)

void UAutoAimDebug_C::CustomEvent_2()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoAimDebug.AutoAimDebug_C.CustomEvent_2");

	UAutoAimDebug_C_CustomEvent_2_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoAimDebug.AutoAimDebug_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraShootWeapon*     ShootWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ASTExtraShootWeaponBulletBase* Bullet                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAutoAimDebug_C::CustomEvent_3(class ASTExtraShootWeapon* ShootWeapon, class ASTExtraShootWeaponBulletBase* Bullet)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoAimDebug.AutoAimDebug_C.CustomEvent_3");

	UAutoAimDebug_C_CustomEvent_3_Params params;
	params.ShootWeapon = ShootWeapon;
	params.Bullet = Bullet;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoAimDebug.AutoAimDebug_C.CustomEvent_4
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraShootWeapon*     ShootWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ASTExtraShootWeaponBulletBase* Bullet                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitRet                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UAutoAimDebug_C::CustomEvent_4(class ASTExtraShootWeapon* ShootWeapon, class ASTExtraShootWeaponBulletBase* Bullet, const struct FHitResult& HitRet)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoAimDebug.AutoAimDebug_C.CustomEvent_4");

	UAutoAimDebug_C_CustomEvent_4_Params params;
	params.ShootWeapon = ShootWeapon;
	params.Bullet = Bullet;
	params.HitRet = HitRet;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoAimDebug.AutoAimDebug_C.CustomEvent_5
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class AActor*                  Casuer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Victim                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAutoAimDebug_C::CustomEvent_5(float Damage, const struct FDamageEvent& DamageEvent, class AActor* Casuer, class AActor* Victim)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoAimDebug.AutoAimDebug_C.CustomEvent_5");

	UAutoAimDebug_C_CustomEvent_5_Params params;
	params.Damage = Damage;
	params.DamageEvent = DamageEvent;
	params.Casuer = Casuer;
	params.Victim = Victim;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AutoAimDebug.AutoAimDebug_C.ExecuteUbergraph_AutoAimDebug
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAutoAimDebug_C::ExecuteUbergraph_AutoAimDebug(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AutoAimDebug.AutoAimDebug_C.ExecuteUbergraph_AutoAimDebug");

	UAutoAimDebug_C_ExecuteUbergraph_AutoAimDebug_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

