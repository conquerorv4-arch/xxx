#pragma once

#ifndef _WIN32
// Windows və DirectX tiplərini iOS üçün stub edirik
#define HWND void*
#define WM_CLOSE 0x0010
#define SW_MINIMIZE 6

// DirectX strukturları üçün boş tiplər
typedef void* ID3D11Device;
typedef void* ID3D11DeviceContext;
typedef void* IDXGISwapChain;
typedef void* ID3D11ShaderResourceView;
typedef void* ID3D11Texture2D;
typedef void* ID3D11RenderTargetView;
typedef void* ID3D11PixelShader;
typedef void* ID3D11Buffer;

inline int PostMessageW(void*, unsigned int, unsigned long long, long long) { return 0; }
inline int ShowWindow(void*, int) { return 0; }

#include <iterator>
namespace std {
    template <typename T, std::size_t N>
    constexpr auto size(const T(&)[N]) noexcept { return N; }
}

// d3d11.h tələb olunduqda xəta verməsin deyə boş başqı təmin edirik
#define __D3D11_H__
#endif
