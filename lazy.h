#pragma once

#ifndef IMGUI_DEFINE_MATH_OPERATORS
#define IMGUI_DEFINE_MATH_OPERATORS
#endif

#ifdef _WIN32
#include <Windows.h>
#include <d3d11.h>
#include <dxgi.h>
#endif

#include <imgui.h>
#include <imgui_internal.h>

#include "blur.h"
#include "image.h"

namespace lazyui
{
    struct app_context
    {
#ifdef _WIN32
        HWND window = nullptr;
        ID3D11Device* device = nullptr;
        ID3D11DeviceContext* device_context = nullptr;
        IDXGISwapChain* swap_chain = nullptr;
#else
        void* window = nullptr;
        void* device = nullptr;
        void* device_context = nullptr;
        void* swap_chain = nullptr;
#endif
    };

    inline app_context app{ };
}
