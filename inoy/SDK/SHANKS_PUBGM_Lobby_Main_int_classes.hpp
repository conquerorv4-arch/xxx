#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:43 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Lobby_Main_int.Lobby_Main_int_C
// 0x0070 (0x0590 - 0x0520)
class ALobby_Main_int_C : public ALuaLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0520(0x0008) (Transient, DuplicateTransient)
	class UFrontendUtils*                              frontUtils;                                               // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               blockBackScene;                                           // 0x0530(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0531(0x0007) MISSED OFFSET
	struct FName                                       lastSceneCamera;                                          // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USettingConfig_C*                            SetConfig;                                                // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    Dispatcher_OpenBox;                                       // 0x0548(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FVector2D                                   viewportSize;                                             // 0x0558(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              accumTime;                                                // 0x0560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                folderDevice;                                             // 0x0564(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ASkyLight*                                   SkyLight_1_EdGraph_4_RefProperty;                         // 0x0568(0x0008) (ZeroConstructor, IsPlainOldData)
	class APointLight*                                 PointLight_0_EdGraph_4_RefProperty;                       // 0x0570(0x0008) (ZeroConstructor, IsPlainOldData)
	class ADirectionalLight*                           DirectionalLight_0_EdGraph_4_RefProperty;                 // 0x0578(0x0008) (ZeroConstructor, IsPlainOldData)
	class ACameraActor*                                LobbySecondCam_EdGraph_4_RefProperty;                     // 0x0580(0x0008) (ZeroConstructor, IsPlainOldData)
	class ACameraActor*                                LobbyFirstCam_EdGraph_4_RefProperty;                      // 0x0588(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass Lobby_Main_int.Lobby_Main_int_C");
		return pStaticClass;
	}


	void RegistPersistLevelObjs(class UFrontendUtils* Utils);
	void InpActEvt_N_K2Node_InputKeyEvent_12(const struct FKey& Key);
	void InpActEvt_B_K2Node_InputKeyEvent_11(const struct FKey& Key);
	void InpActEvt_Android_Back_K2Node_InputKeyEvent_10(const struct FKey& Key);
	void InpActEvt_BackSpace_K2Node_InputKeyEvent_9(const struct FKey& Key);
	void InpActEvt_E_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void InpActEvt_G_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpAxisKeyEvt_RotationRate_K2Node_InputVectorAxisEvent_1(const struct FVector& AxisValue);
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void OnViewportChanged(const struct FVector2D& OldViewportSize, const struct FVector2D& NewViewportSize);
	void ExecuteUbergraph_Lobby_Main_int(int EntryPoint);
	void Dispatcher_OpenBox__DelegateSignature(class ASkeletalMeshActor* NewParam);
};


}

