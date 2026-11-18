#pragma once

#ifndef _WIN32
#include <stddef.h>

#define HWND void*
#define WM_CLOSE 0x0010
#define SW_MINIMIZE 6
#define FALSE 0
#define TRUE 1

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

#define D3D11_COLOR_WRITE_ENABLE_ALL 0x0f
#define D3D11_MAP_WRITE_DISCARD 3
#define D3D11_RESOURCE_MISC_GENERATE_MIPS 0x1L
#define D3D11_CPU_ACCESS_WRITE 0x10000L

#define D3D11_BLEND_ZERO 1
#define D3D11_BLEND_ONE 2
#define D3D11_BLEND_SRC_ALPHA 5
#define D3D11_BLEND_INV_SRC_ALPHA 6
#define D3D11_BLEND_OP_ADD 1

#define SWP_NOACTIVATE 0x0010
#define SWP_NOSIZE 0x0001
#define SWP_NOZORDER 0x0004

// __uuidof simulyasiyası
#define __uuidof(type) (0)
#define IID_PPV_ARGS(ppType) (0), (void**)(ppType)

// Windows strukturları
struct POINT { long x; long y; };
struct RECT { long left; long top; long right; long bottom; };

// DirectX strukturları
struct ID3D11BlendState { void Release() {} };
struct ID3D11Resource {
    template<typename... T> long QueryInterface(T...) { return 0; }
    void Release() {}
};
struct ID3D11Texture2D : public ID3D11Resource {
    template<typename... T> void GetDesc(T...) {}
};

struct ID3D11Device;
struct IDXGISwapChain {
    template<typename... T> long GetBuffer(T...) { return 0; }
};

struct ID3D11Device {
    template<typename... T> long CreateTexture2D(T...) { return 0; }
    template<typename... T> long CreateRenderTargetView(T...) { return 0; }
    template<typename... T> long CreateShaderResourceView(T...) { return 0; }
    template<typename... T> long CreatePixelShader(T...) { return 0; }
    template<typename... T> long CreateBuffer(T...) { return 0; }
    template<typename... T> long CreateBlendState(T...) { return 0; }
};

struct ID3D11DeviceContext {
    template<typename... T> void ClearRenderTargetView(T...) {}
    template<typename... T> void OMGetRenderTargets(T...) {}
    template<typename... T> void PSSetShaderResources(T...) {}
    template<typename... T> void ResolveSubresource(T...) {}
    template<typename... T> void CopySubresourceRegion(T...) {}
    template<typename... T> long Map(T...) { return 0; }
    template<typename... T> void Unmap(T...) {}
    template<typename... T> void PSSetConstantBuffers(T...) {}
    template<typename... T> void PSSetShader(T...) {}
    template<typename... T> void OMSetBlendState(T...) {}
    template<typename... T> void GenerateMips(T...) {}
    template<typename... T> void OMSetRenderTargets(T...) {}
};

struct ID3D11ShaderResourceView { void Release() {} };
struct ID3D11RenderTargetView : public ID3D11Resource {
    template<typename... T> void GetResource(T...) {}
};
struct ID3D11PixelShader { void Release() {} };
struct ID3D11Buffer { void Release() {} };

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

struct D3D11_RENDER_TARGET_BLEND_DESC {
    int BlendEnable;
    int SrcBlend;
    int DestBlend;
    int BlendOp;
    int SrcBlendAlpha;
    int DestBlendAlpha;
    int BlendOpAlpha;
    unsigned char RenderTargetWriteMask;
};

struct D3D11_BLEND_DESC {
    int AlphaToCoverageEnable;
    int IndependentBlendEnable;
    D3D11_RENDER_TARGET_BLEND_DESC RenderTarget[8];
};

struct D3D11_MAPPED_SUBRESOURCE {
    void* pData;
    UINT RowPitch;
    UINT DepthPitch;
};

// set_graphics təkrarını önləmək üçün namespace daxilində elan edirik
namespace lazyui {
    inline void set_graphics(ID3D11Device*, IDXGISwapChain*) {}
}

// Funksiya stub-ları
inline int PostMessageW(void*, unsigned int, unsigned long long, long long) { return 0; }
inline int ShowWindow(void*, int) { return 0; }
inline int GetCursorPos(POINT*) { return 0; }
inline int GetWindowRect(HWND, RECT*) { return 0; }
inline int SetWindowPos(HWND, HWND, int, int, int, int, unsigned int) { return 0; }
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
