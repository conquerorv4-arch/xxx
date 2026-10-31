#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:34:43 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Renderer.SparseVolumeTextureViewerComponent
// 0x0030 (0x0A00 - 0x09D0)
class USparseVolumeTextureViewerComponent : public UPrimitiveComponent
{
public:
	float                                              Frame;                                                    // 0x09D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FrameRate;                                                // 0x09D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bPlayIng : 1;                                             // 0x09D8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bLooping : 1;                                             // 0x09D8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bReversePlayback : 1;                                     // 0x09D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bBlockingStreamingRequests : 1;                           // 0x09D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bApplyPerFrameTransforms : 1;                             // 0x09D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bPivotAtCentroid : 1;                                     // 0x09D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x3];                                       // 0x09D9(0x0003) MISSED OFFSET
	float                                              VoxelSize;                                                // 0x09DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ESparseVolumeTexturePreviewAttribute               PreviewAttribute;                                         // 0x09E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x09E1(0x0003) MISSED OFFSET
	int                                                MipLevel;                                                 // 0x09E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Extinction;                                               // 0x09E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x14];                                      // 0x09EC(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Renderer.SparseVolumeTextureViewerComponent");
		return pStaticClass;
	}

};


// Class Renderer.SparseVolumeTextureViewer
// 0x0008 (0x04B8 - 0x04B0)
class ASparseVolumeTextureViewer : public AInfo
{
public:
	class USparseVolumeTextureViewerComponent*         SparseVolumeTextureViewerComponent;                       // 0x04B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Renderer.SparseVolumeTextureViewer");
		return pStaticClass;
	}

};


}

