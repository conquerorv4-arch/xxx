#pragma once

#include <stdarg.h>
#include <stdint.h>

#ifdef __cplusplus
typedef decltype(nullptr) nullptr_t;
#endif

#ifndef _SIZE_T
#define _SIZE_T
typedef unsigned long size_t;
#endif

// Windows / DX11 Stubs for iOS build compatibility
typedef void* HWND;
typedef unsigned int UINT;
typedef unsigned long DWORD;
typedef unsigned long ULONG;
typedef long HRESULT;

#ifndef S_OK
#define S_OK ((HRESULT)0L)
#endif

#ifndef E_FAIL
#define E_FAIL ((HRESULT)0x80004005L)
#endif

#ifndef SUCCEEDED
#define SUCCEEDED(hr) (((HRESULT)(hr)) >= 0)
#endif

#ifndef FAILED
#define FAILED(hr) (((HRESULT)(hr)) < 0)
#endif

#define WM_CLOSE 0x0010
#define SW_MINIMIZE 6

inline void PostMessageW(HWND, UINT, DWORD, DWORD) {}
inline void ShowWindow(HWND, int) {}

enum DXGI_FORMAT {
    DXGI_FORMAT_UNKNOWN = 0,
    DXGI_FORMAT_R8G8B8A8_UNORM = 28
};

enum D3D11_USAGE {
    D3D11_USAGE_DEFAULT = 0,
    D3D11_USAGE_IMMUTABLE = 1,
    D3D11_USAGE_DYNAMIC = 2,
    D3D11_USAGE_STAGING = 3
};

enum D3D11_BIND_FLAG {
    D3D11_BIND_VERTEX_BUFFER = 0x1L,
    D3D11_BIND_INDEX_BUFFER = 0x2L,
    D3D11_BIND_CONSTANT_BUFFER = 0x4L,
    D3D11_BIND_SHADER_RESOURCE = 0x8L,
    D3D11_BIND_RENDER_TARGET = 0x20L
};

struct D3D11_BLEND_DESC {
    int dummy;
};

struct D3D11_TEXTURE2D_DESC {
    UINT Width = 0;
    UINT Height = 0;
    UINT MipLevels = 1;
    UINT ArraySize = 1;
    DXGI_FORMAT Format = DXGI_FORMAT_UNKNOWN;
    UINT SampleDescCount = 1;
    UINT SampleDescQuality = 0;
    D3D11_USAGE Usage = D3D11_USAGE_DEFAULT;
    UINT BindFlags = 0;
    UINT CPUAccessFlags = 0;
    UINT MiscFlags = 0;
};

struct ID3D11BlendState {
    void Release() {}
};

struct ID3D11Texture2D {
    void Release() {}
};

struct ID3D11ShaderResourceView {
    void Release() {}
};

struct ID3D11PixelShader {
    void Release() {}
};

struct ID3D11DeviceContext {
    void Release() {}
    void VSSetShader(void*, void* const*, UINT) {}
    void PSSetShader(ID3D11PixelShader*, void* const*, UINT) {}
    void PSSetShaderResources(UINT, UINT, ID3D11ShaderResourceView* const*) {}
    void PSSetSamplers(UINT, UINT, void* const*) {}
    void OMSetBlendState(ID3D11BlendState*, const float[4], UINT) {}
    void Draw(UINT, UINT) {}
    void CopyResource(ID3D11Texture2D*, ID3D11Texture2D*) {}
};

struct ID3DBlob {
    void Release() {}
    void* GetBufferPointer() { return nullptr; }
    size_t GetBufferSize() { return 0; }
};

struct IDXGISwapChain {
    void Release() {}
};

struct ID3D11Device {
    void Release() {}
    void GetImmediateContext(ID3D11DeviceContext** ppImmediateContext) {
        if (ppImmediateContext) *ppImmediateContext = nullptr;
    }
    HRESULT CreateTexture2D(const D3D11_TEXTURE2D_DESC*, const void*, ID3D11Texture2D** ppTexture2D) {
        if (ppTexture2D) *ppTexture2D = nullptr;
        return E_FAIL;
    }
    HRESULT CreateShaderResourceView(ID3D11Texture2D*, const void*, ID3D11ShaderResourceView** ppSRView) {
        if (ppSRView) *ppSRView = nullptr;
        return E_FAIL;
    }
    HRESULT CreatePixelShader(const void*, size_t, void*, ID3D11PixelShader** ppPixelShader) {
        if (ppPixelShader) *ppPixelShader = nullptr;
        return E_FAIL;
    }
    HRESULT CreateBlendState(const D3D11_BLEND_DESC*, ID3D11BlendState** ppBlendState) {
        if (ppBlendState) *ppBlendState = nullptr;
        return E_FAIL;
    }
};

inline HRESULT D3DCompile(const void*, size_t, const char*, const void*, void*, const char*, const char*, UINT, UINT, ID3DBlob** ppCode, ID3DBlob**) {
    if (ppCode) *ppCode = nullptr;
    return E_FAIL;
}
