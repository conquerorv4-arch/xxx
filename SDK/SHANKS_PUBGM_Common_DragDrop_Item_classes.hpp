#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:37 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Common_DragDrop_Item.Common_DragDrop_Item_C
// 0x0090 (0x0358 - 0x02C8)
class UCommon_DragDrop_Item_C : public ULuaUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnDragCanceled;                                           // 0x02C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDragReadyToShape;                                       // 0x02D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDragClicked;                                            // 0x02E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDragSuccess;                                            // 0x02F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemTouchStarted;                                       // 0x0308(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemTouchEnded;                                         // 0x0318(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemTouchMoved;                                         // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTestDragEnter;                                          // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTestDragLeave;                                          // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Common_DragDrop_Item.Common_DragDrop_Item_C");
		return pStaticClass;
	}


	void OnTestDragLeave__DelegateSignature();
	void OnTestDragEnter__DelegateSignature();
	void OnItemTouchMoved__DelegateSignature();
	void OnItemTouchEnded__DelegateSignature();
	void OnItemTouchStarted__DelegateSignature();
	void OnDragSuccess__DelegateSignature(class UCommon_DragDrop_Data_C* Operation);
	void OnDragClicked__DelegateSignature();
	void OnDragReadyToShape__DelegateSignature(class UWidget* generatedWidget, class UCommon_DragDrop_Data_C* dragOperation);
	void OnDragCanceled__DelegateSignature(class UCommon_DragDrop_Data_C* Operation);
};


}

