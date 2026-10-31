#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:41 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C
// 0x00C8 (0x0390 - 0x02C8)
class UCommon_RankIntegralLevel_Style_Small_UIBP_C : public ULuaUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C8(0x0008) (Transient, DuplicateTransient)
	class UCanvasPanel*                                Root;                                                     // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TEnumAsByte<ERankIntegralType>                     RankIntegralType;                                         // 0x02D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02D9(0x0007) MISSED OFFSET
	class UUserWidget*                                 RankIntegralUIBP;                                         // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FSlateColor                                 RankTextColor;                                            // 0x02E8(0x0028) (Edit, BlueprintVisible)
	struct FSlateColor                                 RankTextShadowColor;                                      // 0x0310(0x0028) (Edit, BlueprintVisible)
	struct FSlateFontInfo                              RankFontInfo;                                             // 0x0338(0x0058) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C");
		return pStaticClass;
	}


	void ConstructPreviewSubItem();
	void SetRankInteral(int rankIntegral, class UTextBlock* textIntegralName);
	void SetArenaRankInteral(int rankIntegral, class UTextBlock* textIntegralName);
	void PreConstruct(bool* IsDesignTime);
	void ExecuteUbergraph_Common_RankIntegralLevel_Style_Small_UIBP(int EntryPoint);
};


}

