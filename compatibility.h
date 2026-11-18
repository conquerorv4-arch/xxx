#pragma once

#ifndef _WIN32
#define HWND void*
#define WM_CLOSE 0x0010
#define SW_MINIMIZE 6

// Əsas Windows tipləri və sabitlər
typedef unsigned int UINT;
typedef unsigned long DWORD;
typedef int HRESULT;
#define SUCCEEDED(hr) (((HRESULT)(hr)) >= 0)
#define FAILED(hr) (((HRESULT)(hr)) < 0)

// DXGI və D3D11 Sabitləri
typedef int DXGI_FORMAT;
#define DXGI_FORMAT_UNKNOWN 0
#define DXGI_FORMAT_R8G8B8A8_UNORM 28

typedef int D3D11_USAGE;
#define D3D11_USAGE_DEFAULT 0
#define D3D11_USAGE_DYNAMIC 2

typedef int D3D11_BIND_FLAG;
#define D3D11_BIND_RENDER_TARGET 0x04L
#define D3D11_BIND_SHADER_RESOURCE 0x08L
#define D3D11_BIND_CONSTANT_BUFFER 0x01L

typedef int D3D11_CPU_ACCESS_FLAG;
#define D3D11_CPU_ACCESS_WRITE 0x10000L

// Tam struktur və sinif tərifləri (incomplete type xətalarını önləmək üçün)
struct ID3D11Device {
    template<typename... T> long CreateTexture2D(T...) { return 0; }
    template<typename... T> long CreateRenderTargetView(T...) { return 0; }
    template<typename... T> long CreateShaderResourceView(T...) { return 0; }
    template<typename... T> long CreatePixelShader(T...) { return 0; }
    template<typename... T> long CreateBuffer(T...) { return 0; }
};

struct ID3D11DeviceContext {
    template<typename... T> void ClearRenderTargetView(T...) {}
};

struct IDXGISwapChain {};
struct ID3D11ShaderResourceView { void Release() {} };
struct ID3D11Texture2D { void Release() {} };
struct ID3D11RenderTargetView { void Release() {} };
struct ID3D11PixelShader {};
struct ID3D11Buffer {};
struct ID3D11BlendState {};

struct ID3DBlob {
    void* GetBufferPointer() { return nullptr; }
    unsigned long GetBufferSize() { return 0; }
    void Release() {}
};

// Strukturlar
struct D3D11_TEXTURE2D_DESC {
    UINT Width;
    UINT Height;
    UINT MipLevels;
    UINT ArraySize;
    DXGI_FORMAT Format;
    struct { UINT Count; UINT Quality; } SampleDesc;
    D3D11_USAGE Usage;
    UINT BindFlags;
    UINT CPUAccessFlags;
    UINT MiscFlags;
};

struct D3D11_BUFFER_DESC {
    UINT ByteWidth;
    D3D11_USAGE Usage;
    UINT BindFlags;
    UINT CPUAccessFlags;
    UINT MiscFlags;
    UINT StructureByteStride;
};

// Funksiya stub-ları
inline int PostMessageW(void*, unsigned int, unsigned long long, long long) { return 0; }
inline int ShowWindow(void*, int) { return 0; }
inline long D3DCompile(const void*, size_t, const char*, const void*, void*, const char*, const char*, UINT, UINT, ID3DBlob**, ID3DBlob**) { return -1; }

#include <iterator>
namespace std {
    template <typename T, std::size_t N>
    constexpr auto size(const T(&)[N]) noexcept { return N; }
}

#define __D3D11_H__
#define __DXGI_H__
#define __D3DCOMPILER_H__
#endif
