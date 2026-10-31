#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:36:04 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CameraShakeForFalling.CameraShakeForFalling_C
// 0x0008 (0x0168 - 0x0160)
class UCameraShakeForFalling_C : public UCameraShake
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0160(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass CameraShakeForFalling.CameraShakeForFalling_C");
		return pStaticClass;
	}


	void ReceivePlayShake(float* Scale);
	void ExecuteUbergraph_CameraShakeForFalling(int EntryPoint);
};


}

