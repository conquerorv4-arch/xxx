#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:35:11 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_VehicleUser.BP_VehicleUser_C
// 0x0039 (0x06E1 - 0x06A8)
class UBP_VehicleUser_C : public UVehicleUserComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06A8(0x0008) (Transient, DuplicateTransient)
	bool                                               AxisMoveForwardFreezed;                                   // 0x06B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AxisMoveRightFreezed;                                     // 0x06B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x06B2(0x0002) MISSED OFFSET
	float                                              Fuel;                                                     // 0x06B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FuelMax;                                                  // 0x06B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HP;                                                       // 0x06BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HPMax;                                                    // 0x06C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RawSpeed;                                                 // 0x06C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // 0x06C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ESurviveWeaponPropSlot>                LastWeaponSlot;                                           // 0x06C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x06CA(0x0002) MISSED OFFSET
	float                                              UnmanedFuel;                                              // 0x06CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnmanedFuelMax;                                           // 0x06D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnmanedHP;                                                // 0x06D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnmanedHPMax;                                             // 0x06D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnmanedCallBackTime;                                      // 0x06DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShowUnmanedLowPowerTips;                                 // 0x06E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_VehicleUser.BP_VehicleUser_C");
		return pStaticClass;
	}


	void EditorAxisMoveFreezed();
	void SetUAVSpeedPercent(float SpeedPercent);
	void SetUAVCameraMode(bool FreeCamera);
	void OnUnmanedVehicleFuelChanged(float Fuel, float MacFuel);
	void SendUIMsgWhenChangeSeatCompleted();
	void SendUIMsgWhenEnterVehicleCompleted();
	void SendUIMsgWhenExitVehicleCompleted();
	void GetVehicleGoStraight(float* VehicleGoStraight);
	void SetHelicopterCameraMode(bool IsFreeCamera);
	void HandleCharacterUnequipWeapon(class ASTExtraWeapon* NewParam);
	void HandleCharacterEquipWeapon(class ASTExtraWeapon* NewWeapon, TEnumAsByte<ESurviveWeaponPropSlot> Slot);
	void SwitchToLastWeapon();
	void CacheLastUseWeaponSlot();
	void SetDrivingViewMode(int int_mode);
	void ResetInputs();
	void OnMotorcycleContactChanged();
	void FixGoStraight(float InMoveRightRate, float GoStraightThreshold, float* OutMoveRightRate);
	void GetPlayerController(class ABP_STExtraPlayerController_C** PlayerController);
	void ExitVehicle();
	void EnterVehicle(bool IsDriver);
	void OnEnterVehicleCompleted(ESTExtraVehicleSeatType* SeatType);
	void OnExitVehicleCompleted();
	void ReceiveBeginPlay();
	void OnChangeVehicleSeatCompleted(ESTExtraVehicleSeatType* SeatType);
	void OnCurrrentClosestVehicleChanged();
	void EventSetDrivingViewMode(int IntValue);
	void OnInputAxisMoveForward(float* Rate);
	void OnInputAxisMoveRight(float* Rate);
	void EventSetCarMusicSwitch(bool BoolValue);
	void EventSetHelicopterFreeCamera(bool BoolValue);
	void OnShutDownUnmannedVehicleCompleted(float* cdTime);
	void OnLaunchUnmannedVehicleCompleted();
	void OnPauseUnmannedVehicleCompleted();
	void EventSetUAVFreeCamera(bool BoolValue);
	void EventSetSpeedPercent(float FloatValue);
	void EventUAVSingleOperate(bool BoolValue);
	void ExecuteUbergraph_BP_VehicleUser(int EntryPoint);
};


}

