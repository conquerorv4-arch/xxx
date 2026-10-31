#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:13 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GameEventListener.BP_GameEventListener_C
// 0x0008 (0x0320 - 0x0318)
class UBP_GameEventListener_C : public UGameEventListener
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0318(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_GameEventListener.BP_GameEventListener_C");
		return pStaticClass;
	}


	void SetDefaultNearClipPlane();
	void IsIOSPlatform();
	void SetDefaultRendering();
	void EnableGrassLOD(int Enable);
	void ChangeStreamingLevel();
	void InitIncaseReconnect();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void UnloadTree();
	void LoadTree();
	void ExecuteUbergraph_BP_GameEventListener(int EntryPoint);
};


}

