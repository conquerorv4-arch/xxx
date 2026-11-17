#pragma once

#ifndef _WIN32
// Windows API elementlərini iOS üçün stub edirik
#define HWND void*
#define WM_CLOSE 0x0010
#define SW_MINIMIZE 6

inline int PostMessageW(void*, unsigned int, unsigned long long, long long) { return 0; }
inline int ShowWindow(void*, int) { return 0; }

#include <iterator>
namespace std {
    template <typename T, std::size_t N>
    constexpr auto size(const T(&)[N]) noexcept { return N; }
}
#endif
