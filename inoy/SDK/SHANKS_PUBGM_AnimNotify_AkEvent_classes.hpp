#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:55 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AnimNotify_AkEvent.AnimNotify_AkEvent_C
// 0x0049 (0x0081 - 0x0038)
class UAnimNotify_AkEvent_C : public UAnimNotify
{
public:
	struct FString                                     Attach_Name;                                              // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UAkAudioEvent*                               Event;                                                    // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Follow;                                                   // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	struct FString                                     EventName;                                                // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<EAnimNotifyLimit>                      NotifyLimit;                                              // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	class UAkAudioEvent*                               OverrideEvent_Teammate;                                   // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               OverrideEvent_Enemy;                                      // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseOwnersOwnerForPawnCheck;                              // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass AnimNotify_AkEvent.AnimNotify_AkEvent_C");
		return pStaticClass;
	}


	void TryGetOwnerPawn(class AActor* Owner, class APawn** Pawn);
	void GetEvent(class USkeletalMeshComponent* MeshComp, class UAkAudioEvent** OutEvent);
	bool Received_Notify(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation);
};


}

