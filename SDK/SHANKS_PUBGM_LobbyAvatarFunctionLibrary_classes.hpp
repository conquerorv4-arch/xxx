#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:36:28 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LobbyAvatarFunctionLibrary.LobbyAvatarFunctionLibrary_C
// 0x0000 (0x0090 - 0x0090)
class ULobbyAvatarFunctionLibrary_C : public UBlueprintFunctionOverride
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass LobbyAvatarFunctionLibrary.LobbyAvatarFunctionLibrary_C");
		return pStaticClass;
	}


	static void OnPlayerRotate(class UCharacterAvatarComp2_BP_C* AvatarComp, class UObject* __WorldContext);
};


}

