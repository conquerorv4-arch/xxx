// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:34:55 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CustomMeshLoader.CustomMeshLoaderBPLibrary.LoadSModelFromMemory
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          Data                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 MeshName                       (Parm, ZeroConstructor)
// TArray<class UMaterialInstance*> Materials                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UStaticMesh*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UStaticMesh* UCustomMeshLoaderBPLibrary::LoadSModelFromMemory(TArray<unsigned char> Data, const struct FString& MeshName, TArray<class UMaterialInstance*> Materials)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CustomMeshLoader.CustomMeshLoaderBPLibrary.LoadSModelFromMemory");

	UCustomMeshLoaderBPLibrary_LoadSModelFromMemory_Params params;
	params.Data = Data;
	params.MeshName = MeshName;
	params.Materials = Materials;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomMeshLoader.CustomMeshLoaderBPLibrary.LoadSModelFileAsync
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 FilePath                       (Parm, ZeroConstructor)
// struct FString                 MeshName                       (Parm, ZeroConstructor)
// struct FScriptDelegate         OnComplete                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCustomMeshLoaderBPLibrary::LoadSModelFileAsync(const struct FString& FilePath, const struct FString& MeshName, const struct FScriptDelegate& OnComplete)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CustomMeshLoader.CustomMeshLoaderBPLibrary.LoadSModelFileAsync");

	UCustomMeshLoaderBPLibrary_LoadSModelFileAsync_Params params;
	params.FilePath = FilePath;
	params.MeshName = MeshName;
	params.OnComplete = OnComplete;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function CustomMeshLoader.CustomMeshLoaderBPLibrary.LoadSModelFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 FilePath                       (Parm, ZeroConstructor)
// struct FString                 MeshName                       (Parm, ZeroConstructor)
// class UStaticMesh*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UStaticMesh* UCustomMeshLoaderBPLibrary::LoadSModelFile(const struct FString& FilePath, const struct FString& MeshName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CustomMeshLoader.CustomMeshLoaderBPLibrary.LoadSModelFile");

	UCustomMeshLoaderBPLibrary_LoadSModelFile_Params params;
	params.FilePath = FilePath;
	params.MeshName = MeshName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomMeshLoader.CustomMeshLoaderBPLibrary.LoadSKModelFromMemory
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          Data                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 MeshName                       (Parm, ZeroConstructor)
// TArray<class UMaterialInterface*> Materials                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class USkeletalMesh*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USkeletalMesh* UCustomMeshLoaderBPLibrary::LoadSKModelFromMemory(TArray<unsigned char> Data, const struct FString& MeshName, TArray<class UMaterialInterface*> Materials)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CustomMeshLoader.CustomMeshLoaderBPLibrary.LoadSKModelFromMemory");

	UCustomMeshLoaderBPLibrary_LoadSKModelFromMemory_Params params;
	params.Data = Data;
	params.MeshName = MeshName;
	params.Materials = Materials;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomMeshLoader.CustomMeshLoaderBPLibrary.LoadSKModelFileToAsset
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 FilePath                       (Parm, ZeroConstructor)
// struct FString                 AssetPath                      (Parm, ZeroConstructor)
// TArray<class UMaterialInterface*> Materials                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class USkeletalMesh*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USkeletalMesh* UCustomMeshLoaderBPLibrary::LoadSKModelFileToAsset(const struct FString& FilePath, const struct FString& AssetPath, TArray<class UMaterialInterface*> Materials)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CustomMeshLoader.CustomMeshLoaderBPLibrary.LoadSKModelFileToAsset");

	UCustomMeshLoaderBPLibrary_LoadSKModelFileToAsset_Params params;
	params.FilePath = FilePath;
	params.AssetPath = AssetPath;
	params.Materials = Materials;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomMeshLoader.CustomMeshLoaderBPLibrary.LoadSKModelFile
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 FilePath                       (Parm, ZeroConstructor)
// struct FString                 MeshName                       (Parm, ZeroConstructor)
// TArray<class UMaterialInterface*> Materials                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class USkeletalMesh*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USkeletalMesh* UCustomMeshLoaderBPLibrary::LoadSKModelFile(const struct FString& FilePath, const struct FString& MeshName, TArray<class UMaterialInterface*> Materials)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CustomMeshLoader.CustomMeshLoaderBPLibrary.LoadSKModelFile");

	UCustomMeshLoaderBPLibrary_LoadSKModelFile_Params params;
	params.FilePath = FilePath;
	params.MeshName = MeshName;
	params.Materials = Materials;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomMeshLoader.CustomMeshLoaderBPLibrary.IsValidSModelFile
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 FilePath                       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCustomMeshLoaderBPLibrary::IsValidSModelFile(const struct FString& FilePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CustomMeshLoader.CustomMeshLoaderBPLibrary.IsValidSModelFile");

	UCustomMeshLoaderBPLibrary_IsValidSModelFile_Params params;
	params.FilePath = FilePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomMeshLoader.CustomMeshLoaderBPLibrary.IsValidSKModelFile
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 FilePath                       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCustomMeshLoaderBPLibrary::IsValidSKModelFile(const struct FString& FilePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CustomMeshLoader.CustomMeshLoaderBPLibrary.IsValidSKModelFile");

	UCustomMeshLoaderBPLibrary_IsValidSKModelFile_Params params;
	params.FilePath = FilePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomMeshLoader.CustomMeshLoaderBPLibrary.GetSModelFileInfo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 FilePath                       (Parm, ZeroConstructor)
// int                            OutSectionCount                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            OutMaterialCount               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            OutVertexCount                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCustomMeshLoaderBPLibrary::GetSModelFileInfo(const struct FString& FilePath, int* OutSectionCount, int* OutMaterialCount, int* OutVertexCount)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CustomMeshLoader.CustomMeshLoaderBPLibrary.GetSModelFileInfo");

	UCustomMeshLoaderBPLibrary_GetSModelFileInfo_Params params;
	params.FilePath = FilePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutSectionCount != nullptr)
		*OutSectionCount = params.OutSectionCount;
	if (OutMaterialCount != nullptr)
		*OutMaterialCount = params.OutMaterialCount;
	if (OutVertexCount != nullptr)
		*OutVertexCount = params.OutVertexCount;

	return params.ReturnValue;
}


// Function CustomMeshLoader.CustomMeshLoaderBPLibrary.DumpStaticMeshVertexDataByPath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 MeshAssetPath                  (Parm, ZeroConstructor)
// struct FString                 OutputFilePath                 (Parm, ZeroConstructor)
// int                            LODIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxVertices                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCustomMeshLoaderBPLibrary::DumpStaticMeshVertexDataByPath(const struct FString& MeshAssetPath, const struct FString& OutputFilePath, int LODIndex, int MaxVertices)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CustomMeshLoader.CustomMeshLoaderBPLibrary.DumpStaticMeshVertexDataByPath");

	UCustomMeshLoaderBPLibrary_DumpStaticMeshVertexDataByPath_Params params;
	params.MeshAssetPath = MeshAssetPath;
	params.OutputFilePath = OutputFilePath;
	params.LODIndex = LODIndex;
	params.MaxVertices = MaxVertices;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomMeshLoader.CustomMeshLoaderBPLibrary.DumpStaticMeshVertexData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UStaticMesh*             Mesh                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OutputFilePath                 (Parm, ZeroConstructor)
// int                            LODIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxVertices                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCustomMeshLoaderBPLibrary::DumpStaticMeshVertexData(class UStaticMesh* Mesh, const struct FString& OutputFilePath, int LODIndex, int MaxVertices)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CustomMeshLoader.CustomMeshLoaderBPLibrary.DumpStaticMeshVertexData");

	UCustomMeshLoaderBPLibrary_DumpStaticMeshVertexData_Params params;
	params.Mesh = Mesh;
	params.OutputFilePath = OutputFilePath;
	params.LODIndex = LODIndex;
	params.MaxVertices = MaxVertices;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomMeshLoader.CustomMeshLoaderBPLibrary.DumpSKModelVertexData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 SKModelPath                    (Parm, ZeroConstructor)
// struct FString                 OutputFilePath                 (Parm, ZeroConstructor)
// int                            LODIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxVertices                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCustomMeshLoaderBPLibrary::DumpSKModelVertexData(const struct FString& SKModelPath, const struct FString& OutputFilePath, int LODIndex, int MaxVertices)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CustomMeshLoader.CustomMeshLoaderBPLibrary.DumpSKModelVertexData");

	UCustomMeshLoaderBPLibrary_DumpSKModelVertexData_Params params;
	params.SKModelPath = SKModelPath;
	params.OutputFilePath = OutputFilePath;
	params.LODIndex = LODIndex;
	params.MaxVertices = MaxVertices;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomMeshLoader.CustomMeshLoaderBPLibrary.DumpSkeletonDataFromMesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMesh*           Mesh                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OutputFilePath                 (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCustomMeshLoaderBPLibrary::DumpSkeletonDataFromMesh(class USkeletalMesh* Mesh, const struct FString& OutputFilePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CustomMeshLoader.CustomMeshLoaderBPLibrary.DumpSkeletonDataFromMesh");

	UCustomMeshLoaderBPLibrary_DumpSkeletonDataFromMesh_Params params;
	params.Mesh = Mesh;
	params.OutputFilePath = OutputFilePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomMeshLoader.CustomMeshLoaderBPLibrary.DumpSkeletonData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeleton*               Skeleton                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OutputFilePath                 (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCustomMeshLoaderBPLibrary::DumpSkeletonData(class USkeleton* Skeleton, const struct FString& OutputFilePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CustomMeshLoader.CustomMeshLoaderBPLibrary.DumpSkeletonData");

	UCustomMeshLoaderBPLibrary_DumpSkeletonData_Params params;
	params.Skeleton = Skeleton;
	params.OutputFilePath = OutputFilePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomMeshLoader.CustomMeshLoaderBPLibrary.DumpSkeletalMeshVertexDataByPath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 MeshAssetPath                  (Parm, ZeroConstructor)
// struct FString                 OutputFilePath                 (Parm, ZeroConstructor)
// int                            LODIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxVertices                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCustomMeshLoaderBPLibrary::DumpSkeletalMeshVertexDataByPath(const struct FString& MeshAssetPath, const struct FString& OutputFilePath, int LODIndex, int MaxVertices)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CustomMeshLoader.CustomMeshLoaderBPLibrary.DumpSkeletalMeshVertexDataByPath");

	UCustomMeshLoaderBPLibrary_DumpSkeletalMeshVertexDataByPath_Params params;
	params.MeshAssetPath = MeshAssetPath;
	params.OutputFilePath = OutputFilePath;
	params.LODIndex = LODIndex;
	params.MaxVertices = MaxVertices;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomMeshLoader.CustomMeshLoaderBPLibrary.DumpSkeletalMeshVertexData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMesh*           Mesh                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OutputFilePath                 (Parm, ZeroConstructor)
// int                            LODIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxVertices                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCustomMeshLoaderBPLibrary::DumpSkeletalMeshVertexData(class USkeletalMesh* Mesh, const struct FString& OutputFilePath, int LODIndex, int MaxVertices)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CustomMeshLoader.CustomMeshLoaderBPLibrary.DumpSkeletalMeshVertexData");

	UCustomMeshLoaderBPLibrary_DumpSkeletalMeshVertexData_Params params;
	params.Mesh = Mesh;
	params.OutputFilePath = OutputFilePath;
	params.LODIndex = LODIndex;
	params.MaxVertices = MaxVertices;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomMeshLoader.CustomMeshLoaderBPLibrary.DumpAnimSequenceDataByPath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 AnimAssetPath                  (Parm, ZeroConstructor)
// struct FString                 OutputFilePath                 (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCustomMeshLoaderBPLibrary::DumpAnimSequenceDataByPath(const struct FString& AnimAssetPath, const struct FString& OutputFilePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CustomMeshLoader.CustomMeshLoaderBPLibrary.DumpAnimSequenceDataByPath");

	UCustomMeshLoaderBPLibrary_DumpAnimSequenceDataByPath_Params params;
	params.AnimAssetPath = AnimAssetPath;
	params.OutputFilePath = OutputFilePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomMeshLoader.CustomMeshLoaderBPLibrary.DumpAnimSequenceData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAnimSequence*           AnimSequence                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OutputFilePath                 (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCustomMeshLoaderBPLibrary::DumpAnimSequenceData(class UAnimSequence* AnimSequence, const struct FString& OutputFilePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CustomMeshLoader.CustomMeshLoaderBPLibrary.DumpAnimSequenceData");

	UCustomMeshLoaderBPLibrary_DumpAnimSequenceData_Params params;
	params.AnimSequence = AnimSequence;
	params.OutputFilePath = OutputFilePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

