THEOS_DEVICE_IP = 127.0.0.1
ARCHS = arm64
TARGET = iphone:clang:16.5:14.0

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = M7MD

# Əsas fayl olaraq Tweak.mm göstərilir
M7MD_FILES = Tweak.mm $(wildcard generated/*.cpp)

ADDITIONAL_CFLAGS += -fno-modules -Xclang -fno-implicit-modules -Xclang -fno-implicit-module-maps -I./fonts -I./
ADDITIONAL_CCFLAGS += -fno-modules -Xclang -fno-implicit-modules -Xclang -fno-implicit-module-maps -I./fonts -I./

include $(THEOS_MAKE_PATH)/tweak.mk
