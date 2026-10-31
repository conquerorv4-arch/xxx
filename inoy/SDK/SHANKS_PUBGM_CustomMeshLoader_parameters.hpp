#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:34:55 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CustomMeshLoader.CustomMeshLoaderBPLibrary.LoadSModelFromMemory
struct UCustomMeshLoaderBPLibrary_LoadSModelFromMemory_Params
{
	TArray<unsigned char>                              Data;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     MeshName;                                                 // (Parm, ZeroConstructor)
	TArray<class UMaterialInstance*>                   Materials;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UStaticMesh*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomMeshLoader.CustomMeshLoaderBPLibrary.LoadSModelFileAsync
struct UCustomMeshLoaderBPLibrary_LoadSModelFileAsync_Params
{
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
	struct FString                                     MeshName;                                                 // (Parm, ZeroConstructor)
	struct FScriptDelegate                             OnComplete;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function CustomMeshLoader.CustomMeshLoaderBPLibrary.LoadSModelFile
struct UCustomMeshLoaderBPLibrary_LoadSModelFile_Params
{
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
	struct FString                                     MeshName;                                                 // (Parm, ZeroConstructor)
	class UStaticMesh*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomMeshLoader.CustomMeshLoaderBPLibrary.LoadSKModelFromMemory
struct UCustomMeshLoaderBPLibrary_LoadSKModelFromMemory_Params
{
	TArray<unsigned char>                              Data;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     MeshName;                                                 // (Parm, ZeroConstructor)
	TArray<class UMaterialInterface*>                  Materials;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class USkeletalMesh*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomMeshLoader.CustomMeshLoaderBPLibrary.LoadSKModelFileToAsset
struct UCustomMeshLoaderBPLibrary_LoadSKModelFileToAsset_Params
{
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
	struct FString                                     AssetPath;                                                // (Parm, ZeroConstructor)
	TArray<class UMaterialInterface*>                  Materials;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class USkeletalMesh*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomMeshLoader.CustomMeshLoaderBPLibrary.LoadSKModelFile
struct UCustomMeshLoaderBPLibrary_LoadSKModelFile_Params
{
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
	struct FString                                     MeshName;                                                 // (Parm, ZeroConstructor)
	TArray<class UMaterialInterface*>                  Materials;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class USkeletalMesh*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomMeshLoader.CustomMeshLoaderBPLibrary.IsValidSModelFile
struct UCustomMeshLoaderBPLibrary_IsValidSModelFile_Params
{
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomMeshLoader.CustomMeshLoaderBPLibrary.IsValidSKModelFile
struct UCustomMeshLoaderBPLibrary_IsValidSKModelFile_Params
{
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomMeshLoader.CustomMeshLoaderBPLibrary.GetSModelFileInfo
struct UCustomMeshLoaderBPLibrary_GetSModelFileInfo_Params
{
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
	int                                                OutSectionCount;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OutMaterialCount;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OutVertexCount;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomMeshLoader.CustomMeshLoaderBPLibrary.DumpStaticMeshVertexDataByPath
struct UCustomMeshLoaderBPLibrary_DumpStaticMeshVertexDataByPath_Params
{
	struct FString                                     MeshAssetPath;                                            // (Parm, ZeroConstructor)
	struct FString                                     OutputFilePath;                                           // (Parm, ZeroConstructor)
	int                                                LODIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxVertices;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CustomMeshLoader.CustomMeshLoaderBPLibrary.DumpStaticMeshVertexData
struct UCustomMeshLoaderBPLibrary_DumpStaticMeshVertexData_Params
{
	class UStaticMesh*                                 Mesh;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OutputFilePath;                                           // (Parm, ZeroConstructor)
	int                                                LODIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxVertices;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CustomMeshLoader.CustomMeshLoaderBPLibrary.DumpSKModelVertexData
struct UCustomMeshLoaderBPLibrary_DumpSKModelVertexData_Params
{
	struct FString                                     SKModelPath;                                              // (Parm, ZeroConstructor)
	struct FString                                     OutputFilePath;                                           // (Parm, ZeroConstructor)
	int                                                LODIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxVertices;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CustomMeshLoader.CustomMeshLoaderBPLibrary.DumpSkeletonDataFromMesh
struct UCustomMeshLoaderBPLibrary_DumpSkeletonDataFromMesh_Params
{
	class USkeletalMesh*                               Mesh;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OutputFilePath;                                           // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CustomMeshLoader.CustomMeshLoaderBPLibrary.DumpSkeletonData
struct UCustomMeshLoaderBPLibrary_DumpSkeletonData_Params
{
	class USkeleton*                                   Skeleton;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OutputFilePath;                                           // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CustomMeshLoader.CustomMeshLoaderBPLibrary.DumpSkeletalMeshVertexDataByPath
struct UCustomMeshLoaderBPLibrary_DumpSkeletalMeshVertexDataByPath_Params
{
	struct FString                                     MeshAssetPath;                                            // (Parm, ZeroConstructor)
	struct FString                                     OutputFilePath;                                           // (Parm, ZeroConstructor)
	int                                                LODIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxVertices;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CustomMeshLoader.CustomMeshLoaderBPLibrary.DumpSkeletalMeshVertexData
struct UCustomMeshLoaderBPLibrary_DumpSkeletalMeshVertexData_Params
{
	class USkeletalMesh*                               Mesh;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OutputFilePath;                                           // (Parm, ZeroConstructor)
	int                                                LODIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxVertices;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CustomMeshLoader.CustomMeshLoaderBPLibrary.DumpAnimSequenceDataByPath
struct UCustomMeshLoaderBPLibrary_DumpAnimSequenceDataByPath_Params
{
	struct FString                                     AnimAssetPath;                                            // (Parm, ZeroConstructor)
	struct FString                                     OutputFilePath;                                           // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CustomMeshLoader.CustomMeshLoaderBPLibrary.DumpAnimSequenceData
struct UCustomMeshLoaderBPLibrary_DumpAnimSequenceData_Params
{
	class UAnimSequence*                               AnimSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OutputFilePath;                                           // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

