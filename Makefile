THEOS_DEVICE_IP = 127.0.0.1
ARCHS = arm64
TARGET = iphone:clang:16.5:14.0

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = M7MD

M7MD_FILES = Tweak.mm $(wildcard generated/*.cpp)

# Clang-ın daxili daxiletmə qovluğunu sistem yolu olaraq əlavə edirik
CLANG_INC = $(shell dirname $(shell which clang))/../lib/clang/$(shell clang -dumpversion)/include

ADDITIONAL_CFLAGS += -fno-modules -std=c++17 -Wno-c++17-extensions -isystem $(CLANG_INC) -I./imgui -I./fonts -I./
ADDITIONAL_CCFLAGS += -fno-modules -std=c++17 -Wno-c++17-extensions -isystem $(CLANG_INC) -I./imgui -I./fonts -I./

include $(THEOS_MAKE_PATH)/tweak.mk
