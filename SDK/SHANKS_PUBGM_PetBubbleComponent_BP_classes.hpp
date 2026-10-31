#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:55 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PetBubbleComponent_BP.PetBubbleComponent_BP_C
// 0x0038 (0x01B0 - 0x0178)
class UPetBubbleComponent_BP_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0178(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    BubbleParticle;                                           // 0x0180(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurBubbleType;                                            // 0x0188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x018C(0x0004) MISSED OFFSET
	class UTexture*                                    BubbleTexture;                                            // 0x0190(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BubbleOffset;                                             // 0x0198(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01A4(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    PlayingBubbleParticle;                                    // 0x01A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass PetBubbleComponent_BP.PetBubbleComponent_BP_C");
		return pStaticClass;
	}


	void DisposePetBubble();
	void InvokePetBubble(int Bubble_ID);
	void SpawnEmoteBubble(int BubbleID);
	void OnLoadBubbleTextureCallBack(class UObject* Asset, int ID);
	void OnLoadEffect(class UObject* LoadedObject, const struct FName& TexParamName);
	void CustomEvent_1(class UObject* LoadedObject, int RequestID);
	void CustomEvent_2(class UObject* LoadedObject, int RequestID);
	void MIDOK(class UMaterialInstanceDynamic* MaterialInstanceDynamic);
	void ReqSpawnPetBubble(int BubbleID);
	void OnNotifySpawnPetBubble(int BubbleID);
	void ExecuteUbergraph_PetBubbleComponent_BP(int EntryPoint);
};


}

