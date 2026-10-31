#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:34 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Common_DragDrop_Data.Common_DragDrop_Data_C
// 0x001C (0x00A4 - 0x0088)
class UCommon_DragDrop_Data_C : public UDragDropOperation
{
public:
	int                                                dragItem;                                                 // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	struct FString                                     dragExtendData;                                           // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                dragIndex;                                                // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass Common_DragDrop_Data.Common_DragDrop_Data_C");
		return pStaticClass;
	}

};


}

