#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:34:40 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class RuntimeMeshComponent.RuntimeMeshComponent
// 0x0180 (0x0BA0 - 0x0A20)
class URuntimeMeshComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0A20(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    CollisionUpdated;                                         // 0x0A28(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bUseComplexAsSimpleCollision;                             // 0x0A38(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAsyncCooking;                                         // 0x0A39(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCanbeOccluded;                                           // 0x0A3A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldSerializeMeshData;                                 // 0x0A3B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ERuntimeMeshCollisionCookingMode                   CollisionMode;                                            // 0x0A3C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0A3D(0x0003) MISSED OFFSET
	class UBodySetup*                                  BodySetup;                                                // 0x0A40(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x30];                                      // 0x0A48(0x0030) MISSED OFFSET
	TArray<struct FRuntimeMeshCollisionSection>        MeshCollisionSections;                                    // 0x0A78(0x0010) (ZeroConstructor, Transient)
	TArray<struct FRuntimeConvexCollisionSection>      ConvexCollisionSections;                                  // 0x0A88(0x0010) (ZeroConstructor, Transient)
	struct FBoxSphereBounds                            LocalBounds;                                              // 0x0A98(0x001C) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0AB4(0x0004) MISSED OFFSET
	struct FRuntimeMeshComponentPrePhysicsTickFunction PrePhysicsTick;                                           // 0x0AB8(0x00B8) (Transient)
	TArray<class UBodySetup*>                          AsyncBodySetupQueue;                                      // 0x0B70(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData04[0x20];                                      // 0x0B80(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class RuntimeMeshComponent.RuntimeMeshComponent");
		return pStaticClass;
	}


	void UpdateMeshSection_Blueprint(int SectionIndex, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<struct FRuntimeMeshTangent> Tangents, TArray<struct FVector2D> UV0, TArray<struct FVector2D> UV1, TArray<struct FLinearColor> Colors, bool bCalculateNormalTangent, bool bGenerateTessellationTriangles);
	void SetSectionTessellationTriangles(int SectionIndex, TArray<int> TessellationTriangles, bool bShouldMoveArray);
	void SetMeshSectionVisible(int SectionIndex, bool bNewVisibility);
	void SetMeshSectionCollisionEnabled(int SectionIndex, bool bNewCollisionEnabled);
	void SetMeshSectionCastsShadow(int SectionIndex, bool bNewCastsShadow);
	void SetMeshCollisionSection(int CollisionSectionIndex, TArray<struct FVector> Vertices, TArray<int> Triangles);
	void RuntimeMeshCollisionUpdatedDelegate__DelegateSignature();
	bool IsMeshSectionVisible(int SectionIndex);
	bool IsMeshSectionCollisionEnabled(int SectionIndex);
	bool IsMeshSectionCastingShadows(int SectionIndex);
	int GetNumSections();
	int GetLastSectionIndex();
	int FirstAvailableMeshSectionIndex();
	void EndBatchUpdates();
	bool DoesSectionExist(int SectionIndex);
	void CreateMeshSection_Blueprint(int SectionIndex, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<struct FRuntimeMeshTangent> Tangents, TArray<struct FVector2D> UV0, TArray<struct FVector2D> UV1, TArray<struct FLinearColor> Colors, bool bCreateCollision, bool bCalculateNormalTangent, bool bGenerateTessellationTriangles, EUpdateFrequency UpdateFrequency);
	void CookCollisionNow();
	void ClearMeshSection(int SectionIndex);
	void ClearMeshCollisionSection(int CollisionSectionIndex);
	void ClearCollisionConvexMeshes();
	void ClearAllMeshSections();
	void ClearAllMeshCollisionSections();
	bool ChangeRuntimeMeshSectionUVs(int SectionIndex, int Index, TMap<int, struct FVector2D> UVs);
	void BeginBatchUpdates();
	void AddCollisionConvexMesh(TArray<struct FVector> ConvexVerts);
};


// Class RuntimeMeshComponent.RuntimeMeshLodComponent
// 0x01A0 (0x0BC0 - 0x0A20)
class URuntimeMeshLodComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0A20(0x0038) MISSED OFFSET
	TArray<struct FRuntimeMeshCollisionSection>        MeshCollisionSections;                                    // 0x0A58(0x0010) (ZeroConstructor, Transient)
	TArray<struct FRuntimeConvexCollisionSection>      ConvexCollisionSections;                                  // 0x0A68(0x0010) (ZeroConstructor, Transient)
	struct FBoxSphereBounds                            LocalBounds;                                              // 0x0A78(0x001C) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0A94(0x0004) MISSED OFFSET
	struct FRuntimeMeshComponentPrePhysicsTickFunction PrePhysicsTick;                                           // 0x0A98(0x00B8) (Transient)
	TArray<class UBodySetup*>                          AsyncBodySetupQueue;                                      // 0x0B50(0x0010) (ZeroConstructor, Transient)
	TMap<struct FIntPoint, int>                        LodSectionIndexs;                                         // 0x0B60(0x0050) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0BB0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class RuntimeMeshComponent.RuntimeMeshLodComponent");
		return pStaticClass;
	}

};


// Class RuntimeMeshComponent.RuntimeMeshLibrary
// 0x0000 (0x0028 - 0x0028)
class URuntimeMeshLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class RuntimeMeshComponent.RuntimeMeshLibrary");
		return pStaticClass;
	}


	static void GetSectionFromStaticMesh(class UStaticMesh* InMesh, int LODIndex, int SectionIndex, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FRuntimeMeshTangent>* Tangents);
	static void GenerateTessellationIndexBuffer(TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector2D> UVs, TArray<struct FVector>* Normals, TArray<struct FRuntimeMeshTangent>* Tangents, TArray<int>* OutTessTriangles);
	static void CreateGridMeshTriangles(int NumX, int NumY, bool bWinding, TArray<int>* Triangles);
	static void CreateBoxMesh(const struct FVector& BoxRadius, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FRuntimeMeshTangent>* Tangents);
	static void CopyRuntimeMeshFromStaticMeshComponent(class UStaticMeshComponent* StaticMeshComp, int LODIndex, class URuntimeMeshComponent* RuntimeMeshComp, bool bShouldCreateCollision);
	static void CopyRuntimeMeshFromStaticMesh(class UStaticMesh* StaticMesh, int LODIndex, class URuntimeMeshComponent* RuntimeMeshComp, bool bShouldCreateCollision);
	static void ConvertQuadToTriangles(int Vert0, int Vert1, int Vert2, int Vert3, TArray<int>* Triangles);
	static void CalculateTangentsForMesh(TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector2D> UVs, TArray<struct FVector>* Normals, TArray<struct FRuntimeMeshTangent>* Tangents);
};


}

