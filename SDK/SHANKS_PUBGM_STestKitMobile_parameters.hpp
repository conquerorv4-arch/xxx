#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:34:54 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function STestKitMobile.STestKitMobileLibrary.TapWidget
struct USTestKitMobileLibrary_TapWidget_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FSTestMobileTapOptions                      Options;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function STestKitMobile.STestKitMobileLibrary.ShowConnectionPanel
struct USTestKitMobileLibrary_ShowConnectionPanel_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function STestKitMobile.STestKitMobileLibrary.RequestPairing
struct USTestKitMobileLibrary_RequestPairing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function STestKitMobile.STestKitMobileLibrary.ReportResult
struct USTestKitMobileLibrary_ReportResult_Params
{
	struct FString                                     RunId;                                                    // (Parm, ZeroConstructor)
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Payload;                                                  // (Parm, ZeroConstructor)
	struct FString                                     Error;                                                    // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function STestKitMobile.STestKitMobileLibrary.ReportEvent
struct USTestKitMobileLibrary_ReportEvent_Params
{
	struct FString                                     RunId;                                                    // (Parm, ZeroConstructor)
	struct FString                                     EventJson;                                                // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function STestKitMobile.STestKitMobileLibrary.IsRuntimeEnabled
struct USTestKitMobileLibrary_IsRuntimeEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function STestKitMobile.STestKitMobileLibrary.IsBridgeConnected
struct USTestKitMobileLibrary_IsBridgeConnected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function STestKitMobile.STestKitMobileLibrary.HitTestSelf
struct USTestKitMobileLibrary_HitTestSelf_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function STestKitMobile.STestKitMobileLibrary.HideConnectionPanel
struct USTestKitMobileLibrary_HideConnectionPanel_Params
{
};

// Function STestKitMobile.STestKitMobileLibrary.GetWidgetRect
struct USTestKitMobileLibrary_GetWidgetRect_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector4                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function STestKitMobile.STestKitMobileLibrary.GetUIReferenceCaptureStatusJson
struct USTestKitMobileLibrary_GetUIReferenceCaptureStatusJson_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function STestKitMobile.STestKitMobileLibrary.GetScreenCenter
struct USTestKitMobileLibrary_GetScreenCenter_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function STestKitMobile.STestKitMobileLibrary.GetPairingCode
struct USTestKitMobileLibrary_GetPairingCode_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function STestKitMobile.STestKitMobileLibrary.GetDeviceId
struct USTestKitMobileLibrary_GetDeviceId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function STestKitMobile.STestKitMobileLibrary.GetBridgeStatusJson
struct USTestKitMobileLibrary_GetBridgeStatusJson_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function STestKitMobile.STestKitMobileLibrary.FindWidgetInUI
struct USTestKitMobileLibrary_FindWidgetInUI_Params
{
	struct FString                                     UIName;                                                   // (Parm, ZeroConstructor)
	struct FString                                     WidgetName;                                               // (Parm, ZeroConstructor)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function STestKitMobile.STestKitMobileLibrary.FindUserWidgetByUIName
struct USTestKitMobileLibrary_FindUserWidgetByUIName_Params
{
	struct FString                                     UIName;                                                   // (Parm, ZeroConstructor)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function STestKitMobile.STestKitMobileLibrary.FillText
struct USTestKitMobileLibrary_FillText_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     Text;                                                     // (Parm, ZeroConstructor)
	struct FSTestMobileFillOptions                     Options;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function STestKitMobile.STestKitMobileLibrary.DumpRuntimeWidgetTree
struct USTestKitMobileLibrary_DumpRuntimeWidgetTree_Params
{
	bool                                               bVisibleOnly;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeText;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function STestKitMobile.STestKitMobileLibrary.DragWidget
struct USTestKitMobileLibrary_DragWidget_Params
{
	class UWidget*                                     From;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     To;                                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FSTestMobileDragOptions                     Options;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function STestKitMobile.STestKitMobileLibrary.DragByOffset
struct USTestKitMobileLibrary_DragByOffset_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Dx;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Dy;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSTestMobileDragOptions                     Options;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function STestKitMobile.STestKitMobileLibrary.DisconnectBridge
struct USTestKitMobileLibrary_DisconnectBridge_Params
{
};

// Function STestKitMobile.STestKitMobileLibrary.ConnectBridge
struct USTestKitMobileLibrary_ConnectBridge_Params
{
	struct FString                                     BridgeUrl;                                                // (Parm, ZeroConstructor)
	bool                                               bSaveUrl;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function STestKitMobile.STestKitMobileLibrary.CollectVisibleWidgetBlueprintPaths
struct USTestKitMobileLibrary_CollectVisibleWidgetBlueprintPaths_Params
{
	int                                                MaxDepth;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function STestKitMobile.STestKitMobileLibrary.CollectVisibleWidgetBlueprintHierarchy
struct USTestKitMobileLibrary_CollectVisibleWidgetBlueprintHierarchy_Params
{
	int                                                MaxDepth;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function STestKitMobile.STestKitMobileLibrary.CaptureAndUploadUIReference
struct USTestKitMobileLibrary_CaptureAndUploadUIReference_Params
{
	struct FString                                     ServerURL;                                                // (Parm, ZeroConstructor)
	struct FString                                     APIKey;                                                   // (Parm, ZeroConstructor)
	struct FString                                     Source;                                                   // (Parm, ZeroConstructor)
	int                                                JpegQuality;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function STestKitMobile.STestKitMobileLibrary.CaptureAndUploadConfiguredUIReference
struct USTestKitMobileLibrary_CaptureAndUploadConfiguredUIReference_Params
{
	struct FString                                     Source;                                                   // (Parm, ZeroConstructor)
	int                                                JpegQuality;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

