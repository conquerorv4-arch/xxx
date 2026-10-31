#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:34:48 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GenericActorEditor.ActorEditorCharacterMovementSyncData
// 0x0050
struct FActorEditorCharacterMovementSyncData
{
	float                                              MaxAcceleration;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BrakingFriction;                                          // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxWalkSpeed;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxWalkSpeedCrouched;                                     // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxSwimSpeed;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxFlySpeed;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxCustomMovementSpeed;                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              JumpZVelocity;                                            // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GravityScale;                                             // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AirControl;                                               // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FallingLateralFriction;                                   // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BrakingDecelerationWalking;                               // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BrakingDecelerationFalling;                               // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BrakingDecelerationFlying;                                // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BrakingDecelerationSwimming;                              // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GroundFriction;                                           // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bOrientRotationToMovement;                                // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseControllerDesiredRotation;                            // 0x0041(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0042(0x0002) MISSED OFFSET
	struct FRotator                                    RotationRate;                                             // 0x0044(0x000C) (IsPlainOldData)
};

}

