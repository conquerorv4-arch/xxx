THEOS_DEVICE_IP = 127.0.0.1
ARCHS = arm64
TARGET = iphone:clang:16.5:14.0

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = M7MD

M7MD_FILES = Tweak.mm $(wildcard generated/*.cpp)

# Clang-ın daxili include qovluğunu tapıb sistem yolu kimi əlavə edirik
CLANG_INCLUDE = $(shell dirname $$(which clang))/../lib/clang/$$(clang --version | grep version | awk '{print $$4}')/include

ADDITIONAL_CFLAGS += -fno-modules -isystem $(CLANG_INCLUDE) -I./imgui -I./fonts -I./
ADDITIONAL_CCFLAGS += -fno-modules -isystem $(CLANG_INCLUDE) -I./imgui -I./fonts -I./

include $(THEOS_MAKE_PATH)/tweak.mk
