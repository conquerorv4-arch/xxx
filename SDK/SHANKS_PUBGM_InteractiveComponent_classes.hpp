#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:45 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass InteractiveComponent.InteractiveComponent_C
// 0x0070 (0x0610 - 0x05A0)
class UInteractiveComponent_C : public UInteractiveComponentBase
{
public:
	struct FSoftObjectPath                             BtnImage;                                                 // 0x05A0(0x0018) (Edit, BlueprintVisible)
	int                                                TextId;                                                   // 0x05B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x05BC(0x0004) MISSED OFFSET
	struct FSoftObjectPath                             DisabledMaterial;                                         // 0x05C0(0x0018) (Edit, BlueprintVisible)
	struct FSoftObjectPath                             DefaultMaterial;                                          // 0x05D8(0x0018) (Edit, BlueprintVisible)
	struct FSoftObjectPath                             AudioEvent;                                               // 0x05F0(0x0018) (Edit, BlueprintVisible)
	bool                                               AutoStandWhenInteract;                                    // 0x0608(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowGuide;                                               // 0x0609(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x060A(0x0002) MISSED OFFSET
	int                                                ButtonPriority;                                           // 0x060C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass InteractiveComponent.InteractiveComponent_C");
		return pStaticClass;
	}

};


}

