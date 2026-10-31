#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:36:19 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AnimNotify_SelfAkEvent.AnimNotify_SelfAkEvent_C
// 0x0000 (0x0081 - 0x0081)
class UAnimNotify_SelfAkEvent_C : public UAnimNotify_AkEvent_C
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass AnimNotify_SelfAkEvent.AnimNotify_SelfAkEvent_C");
		return pStaticClass;
	}


	bool PlayAkEvent(class USkeletalMeshComponent* MeshComp);
	bool Received_Notify(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation);
};


}

