#pragma once

#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#ifndef _SIZE_T
#define _SIZE_T
typedef unsigned long size_t;
#endif

// nullptr_t dəstəyi üçün uyğunlaşdırma
#ifdef __cplusplus
namespace std {
    typedef decltype(nullptr) nullptr_t;
}
using std::nullptr_t;
#endif

// DirectX və Windows tiplərinin iOS üçün uyğunlaşdırılması (Mock)
typedef void* ID3D11Device;
typedef void* ID3D11DeviceContext;
typedef void* IDXGISwapChain;
typedef void* ID3DBlob;
typedef void* HWND;

typedef unsigned int UINT;
typedef unsigned long DWORD;

struct D3D11_BLEND_DESC {
    int dummy;
};

inline long D3DCompile(const void*, size_t, const char*, const void*, void*, const char*, const char*, UINT, UINT, ID3DBlob**, ID3DBlob**) { 
    return -1; 
}
