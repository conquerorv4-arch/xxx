#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:34:54 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class STestKitMobile.STestKitMobileLibrary
// 0x0000 (0x0028 - 0x0028)
class USTestKitMobileLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class STestKitMobile.STestKitMobileLibrary");
		return pStaticClass;
	}


	static bool TapWidget(class UWidget* Widget, const struct FSTestMobileTapOptions& Options);
	static bool ShowConnectionPanel();
	static bool RequestPairing();
	static bool ReportResult(const struct FString& RunId, bool bSuccess, const struct FString& Payload, const struct FString& Error);
	static bool ReportEvent(const struct FString& RunId, const struct FString& EventJson);
	static bool IsRuntimeEnabled();
	static bool IsBridgeConnected();
	static bool HitTestSelf(class UWidget* Widget);
	static void HideConnectionPanel();
	static struct FVector4 GetWidgetRect(class UWidget* Widget);
	static struct FString GetUIReferenceCaptureStatusJson();
	static struct FVector2D GetScreenCenter(class UWidget* Widget);
	static struct FString GetPairingCode();
	static struct FString GetDeviceId();
	static struct FString GetBridgeStatusJson();
	static class UWidget* FindWidgetInUI(const struct FString& UIName, const struct FString& WidgetName, int Index);
	static class UWidget* FindUserWidgetByUIName(const struct FString& UIName, int Index);
	static bool FillText(class UWidget* Widget, const struct FString& Text, const struct FSTestMobileFillOptions& Options);
	static struct FString DumpRuntimeWidgetTree(bool bVisibleOnly, bool bIncludeText);
	static bool DragWidget(class UWidget* From, class UWidget* To, const struct FSTestMobileDragOptions& Options);
	static bool DragByOffset(class UWidget* Widget, float Dx, float Dy, const struct FSTestMobileDragOptions& Options);
	static void DisconnectBridge();
	static bool ConnectBridge(const struct FString& BridgeUrl, bool bSaveUrl);
	static struct FString CollectVisibleWidgetBlueprintPaths(int MaxDepth);
	static struct FString CollectVisibleWidgetBlueprintHierarchy(int MaxDepth);
	static bool CaptureAndUploadUIReference(const struct FString& ServerURL, const struct FString& APIKey, const struct FString& Source, int JpegQuality);
	static bool CaptureAndUploadConfiguredUIReference(const struct FString& Source, int JpegQuality);
};


}

