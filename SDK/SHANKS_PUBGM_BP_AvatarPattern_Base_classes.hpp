#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:22 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AvatarPattern_Base.BP_AvatarPattern_Base_C
// 0x0008 (0x0080 - 0x0078)
class UBP_AvatarPattern_Base_C : public UBackpackAvatarItemPattern
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0078(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_AvatarPattern_Base.BP_AvatarPattern_Base_C");
		return pStaticClass;
	}


	void GetPatternNumTexturePath(int* InNumID, struct FSoftObjectPath* OutTexture1, struct FSoftObjectPath* OutTexture2);
	void SetCustomPattern_Implementation(class UMaterialInterface* InMaterial, const struct FSlotToMatPattern& InMatPattern);
	void SetCustomPatternNum_Implementation(class UMaterialInterface* InMaterial, const struct FSlotToMatPattern& InMatPattern);
	void SetCustomPatternDeffered(class UMaterialInterface** InMaterial, struct FSlotToMatPattern* InMatPattern);
	void ExecuteUbergraph_BP_AvatarPattern_Base(int EntryPoint);
};


}

