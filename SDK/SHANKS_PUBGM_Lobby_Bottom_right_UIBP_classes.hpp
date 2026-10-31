#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:42 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Lobby_Bottom_right_UIBP.Lobby_Bottom_Right_UIBP_C
// 0x0018 (0x0278 - 0x0260)
class ULobby_Bottom_Right_UIBP_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (Transient, DuplicateTransient)
	class ULobby_Main_Expression_UIBP_C*               Lobby_Main_Expression_UIBP;                               // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                preWidth;                                                 // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                preHeight;                                                // 0x0274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Lobby_Bottom_right_UIBP.Lobby_Bottom_Right_UIBP_C");
		return pStaticClass;
	}


	void CheckAdaption(bool* bAdapt, float* Width, float* Height);
	void GetAdaptWidthHeight(float Width, float Height, float* adaptWidth, float* adaptHeight);
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void Construct();
	void ExecuteUbergraph_Lobby_Bottom_Right_UIBP(int EntryPoint);
};


}

