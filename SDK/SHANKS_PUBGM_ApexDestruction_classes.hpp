#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:34:46 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ApexDestruction.DestructibleActor
// 0x0020 (0x04D0 - 0x04B0)
class ADestructibleActor : public AActor
{
public:
	class UDestructibleComponent*                      DestructibleComponent;                                    // 0x04B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      bAffectNavigation : 1;                                    // 0x04B8(0x0001) (Edit, BlueprintVisible, Config)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04B9(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnActorFracture;                                          // 0x04C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ApexDestruction.DestructibleActor");
		return pStaticClass;
	}

};


// Class ApexDestruction.DestructibleComponent
// 0x00D0 (0x0D10 - 0x0C40)
class UDestructibleComponent : public USkinnedMeshComponent
{
public:
	unsigned char                                      bFractureEffectOverride : 1;                              // 0x0C40(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0C41(0x0007) MISSED OFFSET
	TArray<struct FFractureEffect>                     FractureEffects;                                          // 0x0C48(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor)
	bool                                               bEnableHardSleeping;                                      // 0x0C58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0C59(0x0003) MISSED OFFSET
	float                                              LargeChunkThreshold;                                      // 0x0C5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0C60(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnComponentFracture;                                      // 0x0C70(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x90];                                      // 0x0C80(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ApexDestruction.DestructibleComponent");
		return pStaticClass;
	}


	void SetDestructibleMesh(class UDestructibleMesh* NewMesh);
	class UDestructibleMesh* GetDestructibleMesh();
	void ApplyRadiusDamage(float BaseDamage, const struct FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage);
	void ApplyDamage(float DamageAmount, const struct FVector& HitLocation, const struct FVector& ImpulseDir, float ImpulseStrength);
};


// Class ApexDestruction.DestructibleFractureSettings
// 0x0068 (0x0090 - 0x0028)
class UDestructibleFractureSettings : public UObject
{
public:
	int                                                CellSiteCount;                                            // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFractureMaterial                           FractureMaterialDesc;                                     // 0x002C(0x0024) (Edit, Transient)
	int                                                RandomSeed;                                               // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	TArray<struct FVector>                             VoronoiSites;                                             // 0x0058(0x0010) (ZeroConstructor)
	int                                                OriginalSubmeshCount;                                     // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x0070(0x0010) (ZeroConstructor)
	TArray<struct FDestructibleChunkParameters>        ChunkParameters;                                          // 0x0080(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ApexDestruction.DestructibleFractureSettings");
		return pStaticClass;
	}

};


// Class ApexDestruction.DestructibleMesh
// 0x0098 (0x04A0 - 0x0408)
class UDestructibleMesh : public USkeletalMesh
{
public:
	struct FDestructibleParameters                     DefaultDestructibleParameters;                            // 0x0408(0x0088) (Edit)
	TArray<struct FFractureEffect>                     FractureEffects;                                          // 0x0490(0x0010) (Edit, EditFixedSize, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ApexDestruction.DestructibleMesh");
		return pStaticClass;
	}

};


}

