// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:34:48 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GenericActorEditor.ActorEditorAnimInstanceBase.ClearAnimReferences
// (Native, Public, BlueprintCallable)

void UActorEditorAnimInstanceBase::ClearAnimReferences()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorAnimInstanceBase.ClearAnimReferences");

	UActorEditorAnimInstanceBase_ClearAnimReferences_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericActorEditor.ActorEditorCharacterMovementComponent.OnRep_CharacterMovementSyncData
// (Final, Native, Protected)

void UActorEditorCharacterMovementComponent::OnRep_CharacterMovementSyncData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorCharacterMovementComponent.OnRep_CharacterMovementSyncData");

	UActorEditorCharacterMovementComponent_OnRep_CharacterMovementSyncData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.UnregisterComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActorComponent*         InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UActorEditorComponentBlueprintLibrary::UnregisterComponent(class UActorComponent* InComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.UnregisterComponent");

	UActorEditorComponentBlueprintLibrary_UnregisterComponent_Params params;
	params.InComponent = InComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.SetWidgetOpacityFromTexture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWidgetComponent*        InComp                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Opacity                        (Parm, ZeroConstructor, IsPlainOldData)

void UActorEditorComponentBlueprintLibrary::SetWidgetOpacityFromTexture(class UWidgetComponent* InComp, float Opacity)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.SetWidgetOpacityFromTexture");

	UActorEditorComponentBlueprintLibrary_SetWidgetOpacityFromTexture_Params params;
	params.InComp = InComp;
	params.Opacity = Opacity;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.SetWidgetDrawAtDesiredSize
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWidgetComponent*        InComp                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bDrawAtDesiredSize             (Parm, ZeroConstructor, IsPlainOldData)

void UActorEditorComponentBlueprintLibrary::SetWidgetDrawAtDesiredSize(class UWidgetComponent* InComp, bool bDrawAtDesiredSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.SetWidgetDrawAtDesiredSize");

	UActorEditorComponentBlueprintLibrary_SetWidgetDrawAtDesiredSize_Params params;
	params.InComp = InComp;
	params.bDrawAtDesiredSize = bDrawAtDesiredSize;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.SetParticleSystemAutoDestroy
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UParticleSystemComponent* InComp                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bAutoDestroy                   (Parm, ZeroConstructor, IsPlainOldData)

void UActorEditorComponentBlueprintLibrary::SetParticleSystemAutoDestroy(class UParticleSystemComponent* InComp, bool bAutoDestroy)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.SetParticleSystemAutoDestroy");

	UActorEditorComponentBlueprintLibrary_SetParticleSystemAutoDestroy_Params params;
	params.InComp = InComp;
	params.bAutoDestroy = bAutoDestroy;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.SetMobility
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*         InSceneComp                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EComponentMobility> NewMobility                    (Parm, ZeroConstructor, IsPlainOldData)

void UActorEditorComponentBlueprintLibrary::SetMobility(class USceneComponent* InSceneComp, TEnumAsByte<EComponentMobility> NewMobility)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.SetMobility");

	UActorEditorComponentBlueprintLibrary_SetMobility_Params params;
	params.InSceneComp = InSceneComp;
	params.NewMobility = NewMobility;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.SetComponentAutoActivate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActorComponent*         InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bAutoActivate                  (Parm, ZeroConstructor, IsPlainOldData)

void UActorEditorComponentBlueprintLibrary::SetComponentAutoActivate(class UActorComponent* InComponent, bool bAutoActivate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.SetComponentAutoActivate");

	UActorEditorComponentBlueprintLibrary_SetComponentAutoActivate_Params params;
	params.InComponent = InComponent;
	params.bAutoActivate = bAutoActivate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.SetActorRootComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         NewRootComponent               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActorEditorComponentBlueprintLibrary::SetActorRootComponent(class AActor* InActor, class USceneComponent* NewRootComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.SetActorRootComponent");

	UActorEditorComponentBlueprintLibrary_SetActorRootComponent_Params params;
	params.InActor = InActor;
	params.NewRootComponent = NewRootComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.ReregisterComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActorComponent*         InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UActorEditorComponentBlueprintLibrary::ReregisterComponent(class UActorComponent* InComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.ReregisterComponent");

	UActorEditorComponentBlueprintLibrary_ReregisterComponent_Params params;
	params.InComponent = InComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.RegisterComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActorComponent*         InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UActorEditorComponentBlueprintLibrary::RegisterComponent(class UActorComponent* InComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.RegisterComponent");

	UActorEditorComponentBlueprintLibrary_RegisterComponent_Params params;
	params.InComponent = InComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.IsSimulatingPhysics
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     InComp                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActorEditorComponentBlueprintLibrary::IsSimulatingPhysics(class UPrimitiveComponent* InComp)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.IsSimulatingPhysics");

	UActorEditorComponentBlueprintLibrary_IsSimulatingPhysics_Params params;
	params.InComp = InComp;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.IsComponentRegistered
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActorComponent*         InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActorEditorComponentBlueprintLibrary::IsComponentRegistered(class UActorComponent* InComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.IsComponentRegistered");

	UActorEditorComponentBlueprintLibrary_IsComponentRegistered_Params params;
	params.InComponent = InComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.GetParticleSystemAutoDestroy
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UParticleSystemComponent* InComp                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActorEditorComponentBlueprintLibrary::GetParticleSystemAutoDestroy(class UParticleSystemComponent* InComp)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.GetParticleSystemAutoDestroy");

	UActorEditorComponentBlueprintLibrary_GetParticleSystemAutoDestroy_Params params;
	params.InComp = InComp;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.GetFloatParameter
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UParticleSystemComponent* InComp                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   InName                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UActorEditorComponentBlueprintLibrary::GetFloatParameter(class UParticleSystemComponent* InComp, const struct FName& InName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.GetFloatParameter");

	UActorEditorComponentBlueprintLibrary_GetFloatParameter_Params params;
	params.InComp = InComp;
	params.InName = InName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.GetComponentBounds
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class USceneComponent*         InSceneComp                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 Origin                         (Parm, OutParm, IsPlainOldData)
// struct FVector                 BoxExtent                      (Parm, OutParm, IsPlainOldData)
// float                          SphereRadius                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UActorEditorComponentBlueprintLibrary::GetComponentBounds(class USceneComponent* InSceneComp, struct FVector* Origin, struct FVector* BoxExtent, float* SphereRadius)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.GetComponentBounds");

	UActorEditorComponentBlueprintLibrary_GetComponentBounds_Params params;
	params.InSceneComp = InSceneComp;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Origin != nullptr)
		*Origin = params.Origin;
	if (BoxExtent != nullptr)
		*BoxExtent = params.BoxExtent;
	if (SphereRadius != nullptr)
		*SphereRadius = params.SphereRadius;
}


// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.GetCollisionTraceFlag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     InComp                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<ECollisionTraceFlag> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ECollisionTraceFlag> UActorEditorComponentBlueprintLibrary::GetCollisionTraceFlag(class UPrimitiveComponent* InComp)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.GetCollisionTraceFlag");

	UActorEditorComponentBlueprintLibrary_GetCollisionTraceFlag_Params params;
	params.InComp = InComp;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.GetBoneTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class USkinnedMeshComponent*   InComp                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            BoneIdx                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              LocalToWorld                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UActorEditorComponentBlueprintLibrary::GetBoneTransform(class USkinnedMeshComponent* InComp, int BoneIdx, const struct FTransform& LocalToWorld)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.GetBoneTransform");

	UActorEditorComponentBlueprintLibrary_GetBoneTransform_Params params;
	params.InComp = InComp;
	params.BoneIdx = BoneIdx;
	params.LocalToWorld = LocalToWorld;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.GetBoneLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class USkinnedMeshComponent*   InComp                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EBoneSpaces>       Space                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UActorEditorComponentBlueprintLibrary::GetBoneLocation(class USkinnedMeshComponent* InComp, const struct FName& BoneName, TEnumAsByte<EBoneSpaces> Space)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.GetBoneLocation");

	UActorEditorComponentBlueprintLibrary_GetBoneLocation_Params params;
	params.InComp = InComp;
	params.BoneName = BoneName;
	params.Space = Space;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.GetActorRootComponent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USceneComponent* UActorEditorComponentBlueprintLibrary::GetActorRootComponent(class AActor* InActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.GetActorRootComponent");

	UActorEditorComponentBlueprintLibrary_GetActorRootComponent_Params params;
	params.InActor = InActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.ChangeRootComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         NewRootComponent               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActorEditorComponentBlueprintLibrary::ChangeRootComponent(class AActor* InActor, class USceneComponent* NewRootComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.ChangeRootComponent");

	UActorEditorComponentBlueprintLibrary_ChangeRootComponent_Params params;
	params.InActor = InActor;
	params.NewRootComponent = NewRootComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericActorEditor.ActorEditorDisableTransformReplicationInterface.SetDisableTransformReplication
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInDisable                     (Parm, ZeroConstructor, IsPlainOldData)

void UActorEditorDisableTransformReplicationInterface::SetDisableTransformReplication(bool bInDisable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorDisableTransformReplicationInterface.SetDisableTransformReplication");

	UActorEditorDisableTransformReplicationInterface_SetDisableTransformReplication_Params params;
	params.bInDisable = bInDisable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericActorEditor.ActorEditorParticleSystemComponent.GetEmitterInstanceNum
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UActorEditorParticleSystemComponent::GetEmitterInstanceNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorParticleSystemComponent.GetEmitterInstanceNum");

	UActorEditorParticleSystemComponent_GetEmitterInstanceNum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericActorEditor.ActorEditorSkeletalMeshComponent.SetSkeletalModelPreset
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ModePresetIDStr                (Parm, ZeroConstructor)

void UActorEditorSkeletalMeshComponent::SetSkeletalModelPreset(const struct FString& ModePresetIDStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorSkeletalMeshComponent.SetSkeletalModelPreset");

	UActorEditorSkeletalMeshComponent_SetSkeletalModelPreset_Params params;
	params.ModePresetIDStr = ModePresetIDStr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericActorEditor.ActorEditorSkeletalMeshComponent.PlaySkeletalAnimationPreset
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 AnimationPresetIDStr           (Parm, ZeroConstructor)

void UActorEditorSkeletalMeshComponent::PlaySkeletalAnimationPreset(const struct FString& AnimationPresetIDStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorSkeletalMeshComponent.PlaySkeletalAnimationPreset");

	UActorEditorSkeletalMeshComponent_PlaySkeletalAnimationPreset_Params params;
	params.AnimationPresetIDStr = AnimationPresetIDStr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericActorEditor.ActorEditorStaticMeshComponent.SetStaticMeshPath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InMeshPath                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActorEditorStaticMeshComponent::SetStaticMeshPath(const struct FString& InMeshPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorStaticMeshComponent.SetStaticMeshPath");

	UActorEditorStaticMeshComponent_SetStaticMeshPath_Params params;
	params.InMeshPath = InMeshPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericActorEditor.ActorEditorStaticMeshComponent.OnRep_StaticMeshPath
// (Final, Native, Private)
// Parameters:
// struct FString                 OldPath                        (Parm, ZeroConstructor)

void UActorEditorStaticMeshComponent::OnRep_StaticMeshPath(const struct FString& OldPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorStaticMeshComponent.OnRep_StaticMeshPath");

	UActorEditorStaticMeshComponent_OnRep_StaticMeshPath_Params params;
	params.OldPath = OldPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

