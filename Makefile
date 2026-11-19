THEOS_DEVICE_IP = 127.0.0.1
ARCHS = arm64
TARGET = iphone:clang:16.5:14.0

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = M7MD

M7MD_FILES = Tweak.mm $(wildcard generated/*.cpp)

CLANG_INC = $(shell dirname $(shell which clang))/../lib/clang/$(shell clang -dumpversion)/include

COMMON_FLAGS = -fno-modules -std=c++17 -Wno-c++17-extensions -Wno-unused-const-variable -Wno-error -isystem $(CLANG_INC) -include compatibility.h -I./imgui -I./fonts -I./

ADDITIONAL_CFLAGS += $(COMMON_FLAGS)
ADDITIONAL_CCFLAGS += $(COMMON_FLAGS)

include $(THEOS_MAKE_PATH)/tweak.mk
