// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:34:54 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function STestKitMobile.STestKitMobileLibrary.TapWidget
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FSTestMobileTapOptions  Options                        (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTestKitMobileLibrary::TapWidget(class UWidget* Widget, const struct FSTestMobileTapOptions& Options)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function STestKitMobile.STestKitMobileLibrary.TapWidget");

	USTestKitMobileLibrary_TapWidget_Params params;
	params.Widget = Widget;
	params.Options = Options;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function STestKitMobile.STestKitMobileLibrary.ShowConnectionPanel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTestKitMobileLibrary::ShowConnectionPanel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function STestKitMobile.STestKitMobileLibrary.ShowConnectionPanel");

	USTestKitMobileLibrary_ShowConnectionPanel_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function STestKitMobile.STestKitMobileLibrary.RequestPairing
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTestKitMobileLibrary::RequestPairing()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function STestKitMobile.STestKitMobileLibrary.RequestPairing");

	USTestKitMobileLibrary_RequestPairing_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function STestKitMobile.STestKitMobileLibrary.ReportResult
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 RunId                          (Parm, ZeroConstructor)
// bool                           bSuccess                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Payload                        (Parm, ZeroConstructor)
// struct FString                 Error                          (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTestKitMobileLibrary::ReportResult(const struct FString& RunId, bool bSuccess, const struct FString& Payload, const struct FString& Error)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function STestKitMobile.STestKitMobileLibrary.ReportResult");

	USTestKitMobileLibrary_ReportResult_Params params;
	params.RunId = RunId;
	params.bSuccess = bSuccess;
	params.Payload = Payload;
	params.Error = Error;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function STestKitMobile.STestKitMobileLibrary.ReportEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 RunId                          (Parm, ZeroConstructor)
// struct FString                 EventJson                      (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTestKitMobileLibrary::ReportEvent(const struct FString& RunId, const struct FString& EventJson)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function STestKitMobile.STestKitMobileLibrary.ReportEvent");

	USTestKitMobileLibrary_ReportEvent_Params params;
	params.RunId = RunId;
	params.EventJson = EventJson;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function STestKitMobile.STestKitMobileLibrary.IsRuntimeEnabled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTestKitMobileLibrary::IsRuntimeEnabled()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function STestKitMobile.STestKitMobileLibrary.IsRuntimeEnabled");

	USTestKitMobileLibrary_IsRuntimeEnabled_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function STestKitMobile.STestKitMobileLibrary.IsBridgeConnected
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTestKitMobileLibrary::IsBridgeConnected()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function STestKitMobile.STestKitMobileLibrary.IsBridgeConnected");

	USTestKitMobileLibrary_IsBridgeConnected_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function STestKitMobile.STestKitMobileLibrary.HitTestSelf
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTestKitMobileLibrary::HitTestSelf(class UWidget* Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function STestKitMobile.STestKitMobileLibrary.HitTestSelf");

	USTestKitMobileLibrary_HitTestSelf_Params params;
	params.Widget = Widget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function STestKitMobile.STestKitMobileLibrary.HideConnectionPanel
// (Final, Native, Static, Public, BlueprintCallable)

void USTestKitMobileLibrary::HideConnectionPanel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function STestKitMobile.STestKitMobileLibrary.HideConnectionPanel");

	USTestKitMobileLibrary_HideConnectionPanel_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function STestKitMobile.STestKitMobileLibrary.GetWidgetRect
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector4                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector4 USTestKitMobileLibrary::GetWidgetRect(class UWidget* Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function STestKitMobile.STestKitMobileLibrary.GetWidgetRect");

	USTestKitMobileLibrary_GetWidgetRect_Params params;
	params.Widget = Widget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function STestKitMobile.STestKitMobileLibrary.GetUIReferenceCaptureStatusJson
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString USTestKitMobileLibrary::GetUIReferenceCaptureStatusJson()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function STestKitMobile.STestKitMobileLibrary.GetUIReferenceCaptureStatusJson");

	USTestKitMobileLibrary_GetUIReferenceCaptureStatusJson_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function STestKitMobile.STestKitMobileLibrary.GetScreenCenter
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D USTestKitMobileLibrary::GetScreenCenter(class UWidget* Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function STestKitMobile.STestKitMobileLibrary.GetScreenCenter");

	USTestKitMobileLibrary_GetScreenCenter_Params params;
	params.Widget = Widget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function STestKitMobile.STestKitMobileLibrary.GetPairingCode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString USTestKitMobileLibrary::GetPairingCode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function STestKitMobile.STestKitMobileLibrary.GetPairingCode");

	USTestKitMobileLibrary_GetPairingCode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function STestKitMobile.STestKitMobileLibrary.GetDeviceId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString USTestKitMobileLibrary::GetDeviceId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function STestKitMobile.STestKitMobileLibrary.GetDeviceId");

	USTestKitMobileLibrary_GetDeviceId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function STestKitMobile.STestKitMobileLibrary.GetBridgeStatusJson
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString USTestKitMobileLibrary::GetBridgeStatusJson()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function STestKitMobile.STestKitMobileLibrary.GetBridgeStatusJson");

	USTestKitMobileLibrary_GetBridgeStatusJson_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function STestKitMobile.STestKitMobileLibrary.FindWidgetInUI
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 UIName                         (Parm, ZeroConstructor)
// struct FString                 WidgetName                     (Parm, ZeroConstructor)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* USTestKitMobileLibrary::FindWidgetInUI(const struct FString& UIName, const struct FString& WidgetName, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function STestKitMobile.STestKitMobileLibrary.FindWidgetInUI");

	USTestKitMobileLibrary_FindWidgetInUI_Params params;
	params.UIName = UIName;
	params.WidgetName = WidgetName;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function STestKitMobile.STestKitMobileLibrary.FindUserWidgetByUIName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 UIName                         (Parm, ZeroConstructor)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* USTestKitMobileLibrary::FindUserWidgetByUIName(const struct FString& UIName, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function STestKitMobile.STestKitMobileLibrary.FindUserWidgetByUIName");

	USTestKitMobileLibrary_FindUserWidgetByUIName_Params params;
	params.UIName = UIName;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function STestKitMobile.STestKitMobileLibrary.FillText
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 Text                           (Parm, ZeroConstructor)
// struct FSTestMobileFillOptions Options                        (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTestKitMobileLibrary::FillText(class UWidget* Widget, const struct FString& Text, const struct FSTestMobileFillOptions& Options)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function STestKitMobile.STestKitMobileLibrary.FillText");

	USTestKitMobileLibrary_FillText_Params params;
	params.Widget = Widget;
	params.Text = Text;
	params.Options = Options;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function STestKitMobile.STestKitMobileLibrary.DumpRuntimeWidgetTree
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           bVisibleOnly                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIncludeText                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString USTestKitMobileLibrary::DumpRuntimeWidgetTree(bool bVisibleOnly, bool bIncludeText)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function STestKitMobile.STestKitMobileLibrary.DumpRuntimeWidgetTree");

	USTestKitMobileLibrary_DumpRuntimeWidgetTree_Params params;
	params.bVisibleOnly = bVisibleOnly;
	params.bIncludeText = bIncludeText;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function STestKitMobile.STestKitMobileLibrary.DragWidget
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UWidget*                 From                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget*                 To                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FSTestMobileDragOptions Options                        (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTestKitMobileLibrary::DragWidget(class UWidget* From, class UWidget* To, const struct FSTestMobileDragOptions& Options)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function STestKitMobile.STestKitMobileLibrary.DragWidget");

	USTestKitMobileLibrary_DragWidget_Params params;
	params.From = From;
	params.To = To;
	params.Options = Options;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function STestKitMobile.STestKitMobileLibrary.DragByOffset
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Dx                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Dy                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FSTestMobileDragOptions Options                        (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTestKitMobileLibrary::DragByOffset(class UWidget* Widget, float Dx, float Dy, const struct FSTestMobileDragOptions& Options)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function STestKitMobile.STestKitMobileLibrary.DragByOffset");

	USTestKitMobileLibrary_DragByOffset_Params params;
	params.Widget = Widget;
	params.Dx = Dx;
	params.Dy = Dy;
	params.Options = Options;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function STestKitMobile.STestKitMobileLibrary.DisconnectBridge
// (Final, Native, Static, Public, BlueprintCallable)

void USTestKitMobileLibrary::DisconnectBridge()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function STestKitMobile.STestKitMobileLibrary.DisconnectBridge");

	USTestKitMobileLibrary_DisconnectBridge_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function STestKitMobile.STestKitMobileLibrary.ConnectBridge
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 BridgeUrl                      (Parm, ZeroConstructor)
// bool                           bSaveUrl                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTestKitMobileLibrary::ConnectBridge(const struct FString& BridgeUrl, bool bSaveUrl)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function STestKitMobile.STestKitMobileLibrary.ConnectBridge");

	USTestKitMobileLibrary_ConnectBridge_Params params;
	params.BridgeUrl = BridgeUrl;
	params.bSaveUrl = bSaveUrl;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function STestKitMobile.STestKitMobileLibrary.CollectVisibleWidgetBlueprintPaths
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            MaxDepth                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString USTestKitMobileLibrary::CollectVisibleWidgetBlueprintPaths(int MaxDepth)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function STestKitMobile.STestKitMobileLibrary.CollectVisibleWidgetBlueprintPaths");

	USTestKitMobileLibrary_CollectVisibleWidgetBlueprintPaths_Params params;
	params.MaxDepth = MaxDepth;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function STestKitMobile.STestKitMobileLibrary.CollectVisibleWidgetBlueprintHierarchy
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            MaxDepth                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString USTestKitMobileLibrary::CollectVisibleWidgetBlueprintHierarchy(int MaxDepth)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function STestKitMobile.STestKitMobileLibrary.CollectVisibleWidgetBlueprintHierarchy");

	USTestKitMobileLibrary_CollectVisibleWidgetBlueprintHierarchy_Params params;
	params.MaxDepth = MaxDepth;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function STestKitMobile.STestKitMobileLibrary.CaptureAndUploadUIReference
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ServerURL                      (Parm, ZeroConstructor)
// struct FString                 APIKey                         (Parm, ZeroConstructor)
// struct FString                 Source                         (Parm, ZeroConstructor)
// int                            JpegQuality                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTestKitMobileLibrary::CaptureAndUploadUIReference(const struct FString& ServerURL, const struct FString& APIKey, const struct FString& Source, int JpegQuality)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function STestKitMobile.STestKitMobileLibrary.CaptureAndUploadUIReference");

	USTestKitMobileLibrary_CaptureAndUploadUIReference_Params params;
	params.ServerURL = ServerURL;
	params.APIKey = APIKey;
	params.Source = Source;
	params.JpegQuality = JpegQuality;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function STestKitMobile.STestKitMobileLibrary.CaptureAndUploadConfiguredUIReference
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Source                         (Parm, ZeroConstructor)
// int                            JpegQuality                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTestKitMobileLibrary::CaptureAndUploadConfiguredUIReference(const struct FString& Source, int JpegQuality)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function STestKitMobile.STestKitMobileLibrary.CaptureAndUploadConfiguredUIReference");

	USTestKitMobileLibrary_CaptureAndUploadConfiguredUIReference_Params params;
	params.Source = Source;
	params.JpegQuality = JpegQuality;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

