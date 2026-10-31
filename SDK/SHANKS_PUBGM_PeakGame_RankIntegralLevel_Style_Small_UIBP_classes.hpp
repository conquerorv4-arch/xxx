#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:36:25 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass PeakGame_RankIntegralLevel_Style_Small_UIBP.PeakGame_RankIntegralLevel_Style_Small_UIBP_C
// 0x00C8 (0x0328 - 0x0260)
class UPeakGame_RankIntegralLevel_Style_Small_UIBP_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (Transient, DuplicateTransient)
	class UCanvasPanel*                                Root;                                                     // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TEnumAsByte<EPeakGame_RankIntegralType>            RankIntegralType;                                         // 0x0270(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0271(0x0007) MISSED OFFSET
	class UUserWidget*                                 RankIntegralUIBP;                                         // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FSlateColor                                 RankTextColor;                                            // 0x0280(0x0028) (Edit, BlueprintVisible)
	struct FSlateColor                                 RankTextShadowColor;                                      // 0x02A8(0x0028) (Edit, BlueprintVisible)
	struct FSlateFontInfo                              RankFontInfo;                                             // 0x02D0(0x0058) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass PeakGame_RankIntegralLevel_Style_Small_UIBP.PeakGame_RankIntegralLevel_Style_Small_UIBP_C");
		return pStaticClass;
	}


	void GetPreviewPath(struct FString* BPPath);
	void ConstructPreviewSubItem();
	void PreConstruct(bool* IsDesignTime);
	void ExecuteUbergraph_PeakGame_RankIntegralLevel_Style_Small_UIBP(int EntryPoint);
};


}

