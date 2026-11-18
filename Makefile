THEOS_DEVICE_IP = 127.0.0.1
ARCHS = arm64
TARGET = iphone:clang:16.5:14.0

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = M7MD

# Əgər əsas faylın adı Tweak.xm-dirsə buranı Tweak.xm saxla, əgər başqadırsa adını yaz
M7MD_FILES = Tweak.xm $(wildcard generated/*.cpp)

# Modul xətalarını aradan qaldıran və başlıq qovluqlarını tənzimləyən bayraqlar
ADDITIONAL_CFLAGS += -fno-modules -Xclang -fno-implicit-modules -Xclang -fno-implicit-module-maps -I./fonts -I./
ADDITIONAL_CCFLAGS += -fno-modules -Xclang -fno-implicit-modules -Xclang -fno-implicit-module-maps -I./fonts -I./

include $(THEOS_MAKE_PATH)/tweak.mk
