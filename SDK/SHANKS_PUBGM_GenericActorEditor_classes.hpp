#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:34:48 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GenericActorEditor.ActorEditorActorComponent
// 0x00B8 (0x0230 - 0x0178)
class UActorEditorActorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0178(0x0058) MISSED OFFSET
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x01D0(0x0050) (Net)
	struct FString                                     LuaFilePath;                                              // 0x0220(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericActorEditor.ActorEditorActorComponent");
		return pStaticClass;
	}

};


// Class GenericActorEditor.ActorEditorAnimInstanceBase
// 0x0000 (0x03F0 - 0x03F0)
class UActorEditorAnimInstanceBase : public UAnimInstance
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericActorEditor.ActorEditorAnimInstanceBase");
		return pStaticClass;
	}


	void ClearAnimReferences();
};


// Class GenericActorEditor.ActorEditorBoxComponent
// 0x00D0 (0x0AC0 - 0x09F0)
class UActorEditorBoxComponent : public UBoxComponent
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x09F0(0x0068) MISSED OFFSET
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x0A58(0x0050) (Net)
	struct FString                                     LuaFilePath;                                              // 0x0AA8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0AB8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericActorEditor.ActorEditorBoxComponent");
		return pStaticClass;
	}

};


// Class GenericActorEditor.ActorEditorCameraComponent
// 0x00C0 (0x0A60 - 0x09A0)
class UActorEditorCameraComponent : public UCameraComponent
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x09A0(0x0060) MISSED OFFSET
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x0A00(0x0050) (Net)
	struct FString                                     LuaFilePath;                                              // 0x0A50(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericActorEditor.ActorEditorCameraComponent");
		return pStaticClass;
	}

};


// Class GenericActorEditor.ActorEditorCapsuleComponent
// 0x00C0 (0x0AD0 - 0x0A10)
class UActorEditorCapsuleComponent : public UCapsuleComponent
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0A10(0x0060) MISSED OFFSET
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x0A70(0x0050) (Net)
	struct FString                                     LuaFilePath;                                              // 0x0AC0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericActorEditor.ActorEditorCapsuleComponent");
		return pStaticClass;
	}

};


// Class GenericActorEditor.ActorEditorCharacter
// 0x0000 (0x09A0 - 0x09A0)
class AActorEditorCharacter : public ALuaCharacter
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericActorEditor.ActorEditorCharacter");
		return pStaticClass;
	}

};


// Class GenericActorEditor.ActorEditorCharacterMovementComponent
// 0x0100 (0x0910 - 0x0810)
class UActorEditorCharacterMovementComponent : public UCharacterMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0810(0x0050) MISSED OFFSET
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x0860(0x0050) (Net)
	struct FActorEditorCharacterMovementSyncData       CharacterMovementSyncData;                                // 0x08B0(0x0050) (Net)
	struct FString                                     LuaFilePath;                                              // 0x0900(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericActorEditor.ActorEditorCharacterMovementComponent");
		return pStaticClass;
	}


	void OnRep_CharacterMovementSyncData();
};


// Class GenericActorEditor.ActorEditorComponentBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UActorEditorComponentBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericActorEditor.ActorEditorComponentBlueprintLibrary");
		return pStaticClass;
	}


	static void UnregisterComponent(class UActorComponent* InComponent);
	static void SetWidgetOpacityFromTexture(class UWidgetComponent* InComp, float Opacity);
	static void SetWidgetDrawAtDesiredSize(class UWidgetComponent* InComp, bool bDrawAtDesiredSize);
	static void SetParticleSystemAutoDestroy(class UParticleSystemComponent* InComp, bool bAutoDestroy);
	static void SetMobility(class USceneComponent* InSceneComp, TEnumAsByte<EComponentMobility> NewMobility);
	static void SetComponentAutoActivate(class UActorComponent* InComponent, bool bAutoActivate);
	static bool SetActorRootComponent(class AActor* InActor, class USceneComponent* NewRootComponent);
	static void ReregisterComponent(class UActorComponent* InComponent);
	static void RegisterComponent(class UActorComponent* InComponent);
	static bool IsSimulatingPhysics(class UPrimitiveComponent* InComp);
	static bool IsComponentRegistered(class UActorComponent* InComponent);
	static bool GetParticleSystemAutoDestroy(class UParticleSystemComponent* InComp);
	static float GetFloatParameter(class UParticleSystemComponent* InComp, const struct FName& InName);
	static void GetComponentBounds(class USceneComponent* InSceneComp, struct FVector* Origin, struct FVector* BoxExtent, float* SphereRadius);
	static TEnumAsByte<ECollisionTraceFlag> GetCollisionTraceFlag(class UPrimitiveComponent* InComp);
	static struct FTransform GetBoneTransform(class USkinnedMeshComponent* InComp, int BoneIdx, const struct FTransform& LocalToWorld);
	static struct FVector GetBoneLocation(class USkinnedMeshComponent* InComp, const struct FName& BoneName, TEnumAsByte<EBoneSpaces> Space);
	static class USceneComponent* GetActorRootComponent(class AActor* InActor);
	static bool ChangeRootComponent(class AActor* InActor, class USceneComponent* NewRootComponent);
};


// Class GenericActorEditor.ActorEditorDecoratorActor
// 0x0000 (0x0660 - 0x0660)
class AActorEditorDecoratorActor : public ADecoratorActor
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericActorEditor.ActorEditorDecoratorActor");
		return pStaticClass;
	}

};


// Class GenericActorEditor.ActorEditorDisableTransformReplicationInterface
// 0x0000 (0x0028 - 0x0028)
class UActorEditorDisableTransformReplicationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericActorEditor.ActorEditorDisableTransformReplicationInterface");
		return pStaticClass;
	}


	void SetDisableTransformReplication(bool bInDisable);
};


// Class GenericActorEditor.ActorEditorMovementComponent
// 0x00B8 (0x0270 - 0x01B8)
class UActorEditorMovementComponent : public UMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x01B8(0x0058) MISSED OFFSET
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x0210(0x0050) (Net)
	struct FString                                     LuaFilePath;                                              // 0x0260(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericActorEditor.ActorEditorMovementComponent");
		return pStaticClass;
	}

};


// Class GenericActorEditor.ActorEditorParticleSystemComponent
// 0x00D0 (0x0DD0 - 0x0D00)
class UActorEditorParticleSystemComponent : public UParticleSystemComponent
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0D00(0x0068) MISSED OFFSET
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x0D68(0x0050) (Net)
	struct FString                                     LuaFilePath;                                              // 0x0DB8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0DC8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericActorEditor.ActorEditorParticleSystemComponent");
		return pStaticClass;
	}


	int GetEmitterInstanceNum();
};


// Class GenericActorEditor.ActorEditorPawn
// 0x0000 (0x05C8 - 0x05C8)
class AActorEditorPawn : public ALuaPawn
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericActorEditor.ActorEditorPawn");
		return pStaticClass;
	}

};


// Class GenericActorEditor.ActorEditorSceneComponent
// 0x00C0 (0x0460 - 0x03A0)
class UActorEditorSceneComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x03A0(0x0058) MISSED OFFSET
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x03F8(0x0050) (Net)
	struct FString                                     LuaFilePath;                                              // 0x0448(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0458(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericActorEditor.ActorEditorSceneComponent");
		return pStaticClass;
	}

};


// Class GenericActorEditor.ActorEditorSkeletalMeshComponent
// 0x00C0 (0x1410 - 0x1350)
class UActorEditorSkeletalMeshComponent : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x1350(0x0060) MISSED OFFSET
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x13B0(0x0050) (Net)
	struct FString                                     LuaFilePath;                                              // 0x1400(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericActorEditor.ActorEditorSkeletalMeshComponent");
		return pStaticClass;
	}


	void SetSkeletalModelPreset(const struct FString& ModePresetIDStr);
	void PlaySkeletalAnimationPreset(const struct FString& AnimationPresetIDStr);
};


// Class GenericActorEditor.ActorEditorSphereComponent
// 0x00C0 (0x0AB0 - 0x09F0)
class UActorEditorSphereComponent : public USphereComponent
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x09F0(0x0060) MISSED OFFSET
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x0A50(0x0050) (Net)
	struct FString                                     LuaFilePath;                                              // 0x0AA0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericActorEditor.ActorEditorSphereComponent");
		return pStaticClass;
	}

};


// Class GenericActorEditor.ActorEditorSplineComponent
// 0x00D0 (0x0B80 - 0x0AB0)
class UActorEditorSplineComponent : public USplineComponent
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0AB0(0x0068) MISSED OFFSET
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x0B18(0x0050) (Net)
	struct FString                                     LuaFilePath;                                              // 0x0B68(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0B78(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericActorEditor.ActorEditorSplineComponent");
		return pStaticClass;
	}

};


// Class GenericActorEditor.ActorEditorSpringArmComponent
// 0x00C0 (0x0510 - 0x0450)
class UActorEditorSpringArmComponent : public USpringArmComponent
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0450(0x0060) MISSED OFFSET
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x04B0(0x0050) (Net)
	struct FString                                     LuaFilePath;                                              // 0x0500(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericActorEditor.ActorEditorSpringArmComponent");
		return pStaticClass;
	}

};


// Class GenericActorEditor.ActorEditorStaticMeshComponent
// 0x00D0 (0x0CA0 - 0x0BD0)
class UActorEditorStaticMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0BD0(0x0060) MISSED OFFSET
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x0C30(0x0050) (Net)
	struct FString                                     LuaFilePath;                                              // 0x0C80(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     StaticMeshPath;                                           // 0x0C90(0x0010) (Edit, Net, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericActorEditor.ActorEditorStaticMeshComponent");
		return pStaticClass;
	}


	bool SetStaticMeshPath(const struct FString& InMeshPath);
	void OnRep_StaticMeshPath(const struct FString& OldPath);
};


// Class GenericActorEditor.ActorEditorWidgetComponent
// 0x00D0 (0x0C60 - 0x0B90)
class UActorEditorWidgetComponent : public UWidgetComponent
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0B90(0x0068) MISSED OFFSET
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x0BF8(0x0050) (Net)
	bool                                               bFaceCamera;                                              // 0x0C48(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0C49(0x0007) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0C50(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericActorEditor.ActorEditorWidgetComponent");
		return pStaticClass;
	}

};


}

