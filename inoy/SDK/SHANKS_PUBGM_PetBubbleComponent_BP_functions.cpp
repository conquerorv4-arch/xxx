// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:55 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PetBubbleComponent_BP.PetBubbleComponent_BP_C.DisposePetBubble
// (Public, BlueprintCallable, BlueprintEvent)

void UPetBubbleComponent_BP_C::DisposePetBubble()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PetBubbleComponent_BP.PetBubbleComponent_BP_C.DisposePetBubble");

	UPetBubbleComponent_BP_C_DisposePetBubble_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PetBubbleComponent_BP.PetBubbleComponent_BP_C.InvokePetBubble
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Bubble_ID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPetBubbleComponent_BP_C::InvokePetBubble(int Bubble_ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PetBubbleComponent_BP.PetBubbleComponent_BP_C.InvokePetBubble");

	UPetBubbleComponent_BP_C_InvokePetBubble_Params params;
	params.Bubble_ID = Bubble_ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PetBubbleComponent_BP.PetBubbleComponent_BP_C.SpawnEmoteBubble
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BubbleID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPetBubbleComponent_BP_C::SpawnEmoteBubble(int BubbleID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PetBubbleComponent_BP.PetBubbleComponent_BP_C.SpawnEmoteBubble");

	UPetBubbleComponent_BP_C_SpawnEmoteBubble_Params params;
	params.BubbleID = BubbleID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PetBubbleComponent_BP.PetBubbleComponent_BP_C.OnLoadBubbleTextureCallBack
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Asset                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPetBubbleComponent_BP_C::OnLoadBubbleTextureCallBack(class UObject* Asset, int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PetBubbleComponent_BP.PetBubbleComponent_BP_C.OnLoadBubbleTextureCallBack");

	UPetBubbleComponent_BP_C_OnLoadBubbleTextureCallBack_Params params;
	params.Asset = Asset;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PetBubbleComponent_BP.PetBubbleComponent_BP_C.OnLoadEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 LoadedObject                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TexParamName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPetBubbleComponent_BP_C::OnLoadEffect(class UObject* LoadedObject, const struct FName& TexParamName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PetBubbleComponent_BP.PetBubbleComponent_BP_C.OnLoadEffect");

	UPetBubbleComponent_BP_C_OnLoadEffect_Params params;
	params.LoadedObject = LoadedObject;
	params.TexParamName = TexParamName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PetBubbleComponent_BP.PetBubbleComponent_BP_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 LoadedObject                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            RequestID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPetBubbleComponent_BP_C::CustomEvent_1(class UObject* LoadedObject, int RequestID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PetBubbleComponent_BP.PetBubbleComponent_BP_C.CustomEvent_1");

	UPetBubbleComponent_BP_C_CustomEvent_1_Params params;
	params.LoadedObject = LoadedObject;
	params.RequestID = RequestID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PetBubbleComponent_BP.PetBubbleComponent_BP_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 LoadedObject                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            RequestID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPetBubbleComponent_BP_C::CustomEvent_2(class UObject* LoadedObject, int RequestID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PetBubbleComponent_BP.PetBubbleComponent_BP_C.CustomEvent_2");

	UPetBubbleComponent_BP_C_CustomEvent_2_Params params;
	params.LoadedObject = LoadedObject;
	params.RequestID = RequestID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PetBubbleComponent_BP.PetBubbleComponent_BP_C.MIDOK
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* MaterialInstanceDynamic        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPetBubbleComponent_BP_C::MIDOK(class UMaterialInstanceDynamic* MaterialInstanceDynamic)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PetBubbleComponent_BP.PetBubbleComponent_BP_C.MIDOK");

	UPetBubbleComponent_BP_C_MIDOK_Params params;
	params.MaterialInstanceDynamic = MaterialInstanceDynamic;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PetBubbleComponent_BP.PetBubbleComponent_BP_C.ReqSpawnPetBubble
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BubbleID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPetBubbleComponent_BP_C::ReqSpawnPetBubble(int BubbleID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PetBubbleComponent_BP.PetBubbleComponent_BP_C.ReqSpawnPetBubble");

	UPetBubbleComponent_BP_C_ReqSpawnPetBubble_Params params;
	params.BubbleID = BubbleID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PetBubbleComponent_BP.PetBubbleComponent_BP_C.OnNotifySpawnPetBubble
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BubbleID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPetBubbleComponent_BP_C::OnNotifySpawnPetBubble(int BubbleID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PetBubbleComponent_BP.PetBubbleComponent_BP_C.OnNotifySpawnPetBubble");

	UPetBubbleComponent_BP_C_OnNotifySpawnPetBubble_Params params;
	params.BubbleID = BubbleID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PetBubbleComponent_BP.PetBubbleComponent_BP_C.ExecuteUbergraph_PetBubbleComponent_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPetBubbleComponent_BP_C::ExecuteUbergraph_PetBubbleComponent_BP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PetBubbleComponent_BP.PetBubbleComponent_BP_C.ExecuteUbergraph_PetBubbleComponent_BP");

	UPetBubbleComponent_BP_C_ExecuteUbergraph_PetBubbleComponent_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

