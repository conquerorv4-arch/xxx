#pragma once

#ifndef _WIN32
#define HWND void*
#define WM_CLOSE 0x0010
#define SW_MINIMIZE 6

struct ID3D11Device;
struct ID3D11DeviceContext;
struct IDXGISwapChain;
struct ID3D11ShaderResourceView;
struct ID3D11Texture2D;
struct ID3D11RenderTargetView;
struct ID3D11PixelShader;
struct ID3D11Buffer;

inline int PostMessageW(void*, unsigned int, unsigned long long, long long) { return 0; }
inline int ShowWindow(void*, int) { return 0; }

#include <iterator>
namespace std {
    template <typename T, std::size_t N>
    constexpr auto size(const T(&)[N]) noexcept { return N; }
}
#endif
