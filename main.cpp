#include <lazy.h>
#include <dx11_imgui_app.h>

#include "generated/generated_ui.hpp"

#include <cstdlib>

int WINAPI WinMain( HINSTANCE instance, HINSTANCE, LPSTR, int )
{
    lazyui::window_config config;
    config.class_name = L"LazyUIMenu";
    config.title = L"LazyUI Menu";
    config.width = ::GetSystemMetrics( SM_CXSCREEN );
    config.height = ::GetSystemMetrics( SM_CYSCREEN );
    config.x = 0;
    config.y = 0;
    config.dpi_aware = true;

    lazyui::dx11_imgui_app host;
    if ( !host.initialize( instance, config ) )
    {
        ::MessageBoxW( nullptr, L"DirectX 11 could not be initialized.", config.title.c_str( ), MB_OK | MB_ICONERROR );
        return EXIT_FAILURE;
    }
    lazyui::app = { host.window( ), host.device( ), host.device_context( ), host.swap_chain( ) };

    ( void )figma_generated::setup_generated_fonts( );

    host.show( SW_SHOWDEFAULT );
    while ( host.pump_messages( ) )
    {
        host.begin_frame( );
        figma_generated::render( );
        host.end_frame( );
    }
    return EXIT_SUCCESS;
}
