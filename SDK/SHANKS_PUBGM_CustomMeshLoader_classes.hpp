#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:34:55 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CustomMeshLoader.CustomMeshLoaderBPLibrary
// 0x0000 (0x0028 - 0x0028)
class UCustomMeshLoaderBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CustomMeshLoader.CustomMeshLoaderBPLibrary");
		return pStaticClass;
	}


	static class UStaticMesh* LoadSModelFromMemory(TArray<unsigned char> Data, const struct FString& MeshName, TArray<class UMaterialInstance*> Materials);
	static void LoadSModelFileAsync(const struct FString& FilePath, const struct FString& MeshName, const struct FScriptDelegate& OnComplete);
	static class UStaticMesh* LoadSModelFile(const struct FString& FilePath, const struct FString& MeshName);
	static class USkeletalMesh* LoadSKModelFromMemory(TArray<unsigned char> Data, const struct FString& MeshName, TArray<class UMaterialInterface*> Materials);
	static class USkeletalMesh* LoadSKModelFileToAsset(const struct FString& FilePath, const struct FString& AssetPath, TArray<class UMaterialInterface*> Materials);
	static class USkeletalMesh* LoadSKModelFile(const struct FString& FilePath, const struct FString& MeshName, TArray<class UMaterialInterface*> Materials);
	static bool IsValidSModelFile(const struct FString& FilePath);
	static bool IsValidSKModelFile(const struct FString& FilePath);
	static bool GetSModelFileInfo(const struct FString& FilePath, int* OutSectionCount, int* OutMaterialCount, int* OutVertexCount);
	static struct FString DumpStaticMeshVertexDataByPath(const struct FString& MeshAssetPath, const struct FString& OutputFilePath, int LODIndex, int MaxVertices);
	static struct FString DumpStaticMeshVertexData(class UStaticMesh* Mesh, const struct FString& OutputFilePath, int LODIndex, int MaxVertices);
	static struct FString DumpSKModelVertexData(const struct FString& SKModelPath, const struct FString& OutputFilePath, int LODIndex, int MaxVertices);
	static struct FString DumpSkeletonDataFromMesh(class USkeletalMesh* Mesh, const struct FString& OutputFilePath);
	static struct FString DumpSkeletonData(class USkeleton* Skeleton, const struct FString& OutputFilePath);
	static struct FString DumpSkeletalMeshVertexDataByPath(const struct FString& MeshAssetPath, const struct FString& OutputFilePath, int LODIndex, int MaxVertices);
	static struct FString DumpSkeletalMeshVertexData(class USkeletalMesh* Mesh, const struct FString& OutputFilePath, int LODIndex, int MaxVertices);
	static struct FString DumpAnimSequenceDataByPath(const struct FString& AnimAssetPath, const struct FString& OutputFilePath);
	static struct FString DumpAnimSequenceData(class UAnimSequence* AnimSequence, const struct FString& OutputFilePath);
};


}

