#pragma once

#include <stdarg.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C++" {
typedef decltype(nullptr) nullptr_t;
}
#endif

#ifndef _SIZE_T
#define _SIZE_T
typedef unsigned long size_t;
#endif

// Windows API Mock for iOS
typedef void* HWND;
typedef void* ID3D11Device;
typedef void* ID3D11DeviceContext;
typedef void* IDXGISwapChain;
typedef void* ID3DBlob;

typedef unsigned int UINT;
typedef unsigned long DWORD;

#define WM_CLOSE 0x0010
#define SW_MINIMIZE 6

inline void PostMessageW(HWND, UINT, DWORD, DWORD) {}
inline void ShowWindow(HWND, int) {}

struct D3D11_BLEND_DESC {
    int dummy;
};

inline long D3DCompile(const void*, size_t, const char*, const void*, void*, const char*, const char*, UINT, UINT, ID3DBlob**, ID3DBlob**) { 
    return -1; 
}
