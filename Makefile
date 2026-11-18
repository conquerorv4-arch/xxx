THEOS_DEVICE_IP = 127.0.0.1
ARCHS = arm64
TARGET = iphone:clang:16.5:14.0

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = M7MD

M7MD_FILES = Tweak.mm $(wildcard generated/*.cpp)

# Xəbərdarlıqların build-i dayandırmasının qarşısını alırıq
ADDITIONAL_CFLAGS += -fno-modules -std=c++17 -Wno-c++17-extensions -Wno-unused-const-variable -Wno-error -I./imgui -I./fonts -I./
ADDITIONAL_CCFLAGS += -fno-modules -std=c++17 -Wno-c++17-extensions -Wno-unused-const-variable -Wno-error -I./imgui -I./fonts -I./

include $(THEOS_MAKE_PATH)/tweak.mk
