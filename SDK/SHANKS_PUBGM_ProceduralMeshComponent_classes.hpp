#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:34:53 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ProceduralMeshComponent.ProceduralMeshComponent
// 0x0070 (0x0A90 - 0x0A20)
class UProceduralMeshComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0A20(0x0008) MISSED OFFSET
	bool                                               bUseComplexAsSimpleCollision;                             // 0x0A28(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAsyncCooking;                                         // 0x0A29(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0A2A(0x0006) MISSED OFFSET
	class UBodySetup*                                  ProcMeshBodySetup;                                        // 0x0A30(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FProcMeshSection>                    ProcMeshSections;                                         // 0x0A38(0x0010) (ZeroConstructor)
	TArray<struct FKConvexElem>                        CollisionConvexElems;                                     // 0x0A48(0x0010) (ZeroConstructor)
	struct FBoxSphereBounds                            LocalBounds;                                              // 0x0A58(0x001C) (IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0A74(0x0004) MISSED OFFSET
	TArray<class UBodySetup*>                          AsyncBodySetupQueue;                                      // 0x0A78(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0A88(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ProceduralMeshComponent.ProceduralMeshComponent");
		return pStaticClass;
	}


	void UpdateMeshSectionUV0(int SectionIndex, TArray<struct FVector2D> UV0);
	void UpdateMeshSection_LinearColor(int SectionIndex, TArray<struct FVector> Vertices, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FLinearColor> VertexColors, TArray<struct FProcMeshTangent> Tangents);
	void UpdateMeshSection(int SectionIndex, TArray<struct FVector> Vertices, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FColor> VertexColors, TArray<struct FProcMeshTangent> Tangents);
	void SetMeshSectionVisible(int SectionIndex, bool bNewVisibility);
	bool IsMeshSectionVisible(int SectionIndex);
	int GetNumSections();
	void CreateMeshSection_LinearColor(int SectionIndex, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FLinearColor> VertexColors, TArray<struct FProcMeshTangent> Tangents, bool bCreateCollision);
	void CreateMeshSection(int SectionIndex, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FColor> VertexColors, TArray<struct FProcMeshTangent> Tangents, bool bCreateCollision);
	void ClearMeshSection(int SectionIndex);
	void ClearCollisionConvexMeshes();
	void ClearAllMeshSections();
	void AddCollisionConvexMesh(TArray<struct FVector> ConvexVerts);
};


// Class ProceduralMeshComponent.KismetProceduralMeshLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetProceduralMeshLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ProceduralMeshComponent.KismetProceduralMeshLibrary");
		return pStaticClass;
	}


	static void SliceProceduralMesh(class UProceduralMeshComponent* InProcMesh, const struct FVector& PlanePosition, const struct FVector& PlaneNormal, bool bCreateOtherHalf, class UMaterialInterface* CapMaterial, EProcMeshSliceCapOption CapOption, class UProceduralMeshComponent** OutOtherHalfProcMesh);
	static void GetSectionFromStaticMesh(class UStaticMesh* InMesh, int LODIndex, int SectionIndex, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents);
	static void GenerateBoxMesh(const struct FVector& BoxRadius, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents);
	static void CreateGridMeshTriangles(int NumX, int NumY, bool bWinding, TArray<int>* Triangles);
	static void CopyProceduralMeshFromStaticMeshComponent(class UStaticMeshComponent* StaticMeshComponent, int LODIndex, class UProceduralMeshComponent* ProcMeshComponent, bool bCreateCollision);
	static void ConvertQuadToTriangles(int Vert0, int Vert1, int Vert2, int Vert3, TArray<int>* Triangles);
	static void CalculateTangentsForMesh(TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector2D> UVs, TArray<struct FVector>* Normals, TArray<struct FProcMeshTangent>* Tangents);
};


}

