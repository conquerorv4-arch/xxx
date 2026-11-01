ARCHS = arm64
DEBUG = 0
FINALPACKAGE = 1
FOR_RELEASE = 1
THEOS_PACKAGE_SCHEME = rootless

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = M7MD

M7MD_FRAMEWORKS = IOKit UIKit Foundation Security QuartzCore CoreGraphics CoreText AVFoundation Accelerate GLKit SystemConfiguration GameController JRMemory Metal MetalKit
M7MD_CFLAGS += -I/opt/theos/include
M7MD_CFLAGS += -I./imgui -I./generated -I./.
M7MD_LDFLAGS += -F. -framework JRMemory

M7MD_CCFLAGS = -w -std=gnu++14 -fno-rtti -fno-exceptions -DNDEBUG -Wno-module-import-in-extern-c
M7MD_CFLAGS = -w -fobjc-arc -Wno-deprecated-declarations -Wno-unused-variable -Wno-unused-value

# DIQQET: View/*.mm yerine konkret fayllar yazilib. Sonda bosluq var ki, GitHub keshi temizlesin.
M7MD_FILES = $(wildcard generated/*.cpp) $(wildcard generated/*.mm) $(wildcard Menu/*.cpp) $(wildcard Common/*.cpp) $(wildcard lazyui_runtime.cpp) $(wildcard imgui/*.cpp) $(wildcard imgui/*.mm) View/OverlayView.mm View/FloatView.mm View/ImageResources.m $(wildcard CustomView/*.m) $(wildcard ESP/*.mm) $(wildcard ESP/*.cpp) $(wildcard utils/*.cpp) $(wildcard utils/*.m) $(wildcard SDK/SHANKS_PUBGM_Basic.cpp) $(wildcard SDK/SHANKS_PUBGM_Basic_functions.cpp) $(wildcard SDK/SHANKS_PUBGM_CoreUObject_functions.cpp) $(wildcard SDK/SHANKS_PUBGM_Engine_functions.cpp) $(wildcard SDK/SHANKS_PUBGM_ShadowTrackerExtra_functions.cpp) $(wildcard SDK/SHANKS_PUBGM_Client_functions.cpp) $(wildcard SDK/SHANKS_PUBGM_Gameplay_functions.cpp) $(wildcard 菜单/*.mm) $(wildcard libPUBGHookDylib3/*.h) $(wildcard NSURL+hook/*.h) $(wildcard NSURL+hook/*.m) $(wildcard MBProgressHUD/*.m) $(wildcard FCFileManager/*.m) $(wildcard NSEtcHosts/*.m) $(wildcard AppDelegate/*.h) $(wildcard ZXRequestBlock/*.h) $(wildcard DBLOCKRASHID/*.m) $(wildcard ZXURLProtocol/*.m) $(wildcard ZXURLProtocol/*.h) $(wildcard EtcHostsURLProtocol/*.m) $(wildcard MBProgressHUD/*.m) $(wildcard NSObject+URL/*.m) $(wildcard NSURL+hook/*.m) $(wildcard MBProgressHUD/*.h) $(wildcard FCFileManager/*.h) $(wildcard ViewController/*.m) $(wildcard ZXHttpIPGet/*.m) $(wildcard NSURLSession+ZXHttpProxy/*.m) $(wildcard EtcHostsURLProtocol/*.h) $(wildcard ZXURLProtocol/*.m) $(wildcard NSURLSession+ZXHttpProxy/*.h) $(wildcard main/*.m) $(wildcard ZXHttpIPGet/*.h) $(wildcard NSURL+hook/*.h) $(wildcard ViewController/*.h) $(wildcard NSObject+URL/*.h) $(wildcard 旁路/*.mm) $(wildcard behaviorbypassforESP/*.h) 

include $(THEOS)/makefiles/tweak.mk
