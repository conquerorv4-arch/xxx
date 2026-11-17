#pragma once

#include <imgui.h>
#include <cstddef>
#include <cstdint>

#ifdef _WIN32
#include <d3d11.h>

class c_image final
{
public:
    c_image( ) = default;
    ~c_image( ) { release( ); }

    c_image( const c_image& ) = delete;
    c_image& operator=( const c_image& ) = delete;
    c_image( c_image&& ) = delete;
    c_image& operator=( c_image&& ) = delete;

    [[nodiscard]] bool load( ID3D11Device* device, const void* data, std::size_t size );
    void release( ) noexcept;

    [[nodiscard]] bool ready( ) const noexcept { return view_ != nullptr; }
    [[nodiscard]] ImVec2 size( ) const noexcept { return size_; }

#if IMGUI_VERSION_NUM >= 19200
    operator ImTextureRef( ) const noexcept { return ImTextureRef{ static_cast< ImTextureID >( reinterpret_cast< std::uintptr_t >( view_ ) ) }; }
#else
    operator ImTextureID( ) const noexcept { return static_cast< ImTextureID >( reinterpret_cast< std::uintptr_t >( view_ ) ); }
#endif

private:
    ID3D11ShaderResourceView* view_ = nullptr;
    ImVec2 size_{ };
};

#else

// iOS / Metal mühiti üçün xəta verməyən sadələşdirilmiş image sinfi
class c_image final
{
public:
    c_image( ) = default;
    ~c_image( ) = default;

    template <typename... Args>
    bool load( Args&&... ) { return true; }
    void release( ) noexcept {}
    bool ready( ) const noexcept { return false; }
    ImVec2 size( ) const noexcept { return ImVec2{ 0, 0 }; }

#if IMGUI_VERSION_NUM >= 19200
    operator ImTextureRef( ) const noexcept { return ImTextureRef{ 0 }; }
#else
    operator ImTextureID( ) const noexcept { return (ImTextureID)0; }
#endif
};

#endif
