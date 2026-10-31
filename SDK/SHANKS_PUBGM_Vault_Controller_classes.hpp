#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:36:02 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Vault_Controller.Vault_Controller_C
// 0x0008 (0x0AB8 - 0x0AB0)
class UVault_Controller_C : public UPlayerMantleComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AB0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass Vault_Controller.Vault_Controller_C");
		return pStaticClass;
	}


	void JumpVault();
	void VaultServer(float dis, float Height, float Length, const struct FString& VaultKey, const struct FVector& StartPos, class AActor* checkActor, float crossblockMaxFall, float crossblockMaxDis, const struct FVector& HitPoint, class AActor* WindowActor, const struct FRotator& MoveDir);
	void vaultAll(float dis, float Height, float Length, const struct FString& VaultKey, const struct FVector& StartPos, class AActor* checkActor, float crossmaxFalling, float crossmaxDis, const struct FVector& HitPoint, const struct FRotator& MoveDir);
	void StopVault();
	void DsCheckStopVault();
	void ExecuteUbergraph_Vault_Controller(int EntryPoint);
};


}

