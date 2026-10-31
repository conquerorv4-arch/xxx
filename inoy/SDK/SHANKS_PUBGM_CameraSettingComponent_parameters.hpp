#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:36:03 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CameraSettingComponent.CameraSettingComponent_C.SaveCurCameraSetting
struct UCameraSettingComponent_C_SaveCurCameraSetting_Params
{
	class USpringArmComponent*                         SprintArm;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CameraSettingComponent.CameraSettingComponent_C.LerpCameraSettings
struct UCameraSettingComponent_C_LerpCameraSettings_Params
{
	float                                              LerpAlpha;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSTR_CameraSetting                          CameraSettings;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	class USpringArmComponent*                         SpringArm;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

