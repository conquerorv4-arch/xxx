#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:34:50 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum AIGCKit.EAIGCAnimVersion
enum class EAIGCAnimVersion : uint8_t
{
	EAIGCAnimVersion_InValid       = 0,
	EAIGCAnimVersion_UnCompress    = 1,
	EAIGCAnimVersion_Compress      = 2,
	EAIGCAnimVersion_MAX           = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AIGCKit.AIBonesTransfroms
// 0x0090
struct FAIBonesTransfroms
{
	TArray<struct FName>                               BonesName;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FVector>                             BonesTranslation;                                         // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FVector>                             BonesScale;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FRotator>                            BonesRotation;                                            // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<struct FName, int>                            BonesIdxs;                                                // 0x0040(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AIGCKit.SkeletonModifyRule
// 0x0006
struct FSkeletonModifyRule
{
	TEnumAsByte<EBoneModificationMode>                 TranslationMode;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneModificationMode>                 RotationMode;                                             // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneModificationMode>                 ScaleMode;                                                // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     TranslationSpace;                                         // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     RotationSpace;                                            // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     ScaleSpace;                                               // 0x0005(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIGCKit.SkeletonAnimCompressInfo
// 0x0050
struct FSkeletonAnimCompressInfo
{
	TMap<struct FName, int>                            NodeToTrackMap;                                           // 0x0000(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AIGCKit.SkeletonNodeInfo
// 0x0060
struct FSkeletonNodeInfo
{
	TArray<struct FName>                               SkeletonNodes;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FSkeletonAnimCompressInfo                   CompressInfo;                                             // 0x0010(0x0050) (Edit, BlueprintVisible)
};

}

