#include <lazy.h>

#include "generated_ui.hpp"
#include "generated_assets.hpp"
#include "generated_theme.hpp"
#include "lazyui_runtime.hpp"

#include <array>
#include <cstddef>
#include <iterator>

namespace figma_generated
{
    namespace controls
    {
        using namespace lazyui;

        switch_state watermark{ true, 1.f, 0.f };
        switch_state keybinds{ true, 1.f, 0.f };
        switch_state bomb_timer{ true, 1.f, 0.f };
        switch_state bomb_pressure{ false, 0.f, 0.f };
        switch_state spectator_list{ true, 1.f, 0.f };
        switch_state velocity{ true, 1.f, 0.f };
        switch_state jump_stats{ false, 0.f, 0.f };
        switch_state radar{ false, 0.f, 0.f };
        switch_state danger_ranges{ false, 0.f, 0.f };
        switch_state target_info{ false, 0.f, 0.f };
        switch_state round_timer{ false, 0.f, 0.f };
        switch_state purchase_logs{ false, 0.f, 0.f };
        switch_state enemy_counter{ false, 0.f, 0.f };
        switch_state offscreen_indicators{ false, 0.f, 0.f };
        switch_state damage_panel{ false, 0.f, 0.f };
        switch_state movement_keys{ false, 0.f, 0.f };
        switch_state crosshair_overlay{ true, 1.f, 0.f };
        switch_state scope_overlay{ true, 1.f, 0.f };
        switch_state grenade_proximity{ true, 1.f, 0.f };
        switch_state last_second_defuse{ true, 1.f, 0.f };
        switch_state zeus_range{ false, 0.f, 0.f };
        switch_state hat{ false, 0.f, 0.f };
        switch_state strafe_visualizer{ false, 0.f, 0.f };
        switch_state strafe_sync{ false, 0.f, 0.f };
        switch_state custom_fov{ false, 0.f, 0.f };
        switch_state thirdperson_x{ false, 0.f, 0.f };
        switch_state aspect_ratio{ false, 0.f, 0.f };
        switch_state viewmodel_fov{ true, 1.f, 0.f };
        switch_state viewmodel_position{ false, 0.f, 0.f };
        switch_state no_hand_movement{ false, 0.f, 0.f };
        switch_state removals{ true, 1.f, 0.f };
        const char* const unrivaled_options[] = { "Ragebot" };
        combo_state unrivaled{ };
        const char* const combo_header_options[] = { "Visuals / Other ESP" };
        combo_state combo_header{ };
        selection_state< 5 > category_bar{ 4, 0.f, 131.49f };
        const ImVec4 category_bar_slots[5] = {
            ImVec4{ 41.15f, 139.f, 120.8925f, 26.f },
            ImVec4{ 161.88f, 139.f, 141.5865f, 26.f },
            ImVec4{ 313.93f, 139.f, 102.8455f, 26.f },
            ImVec4{ 439.28f, 139.f, 113.7063f, 26.f },
            ImVec4{ 562.51f, 139.f, 131.49f, 26.f }
        };
        button_state search_button{ };
    }

    namespace
    {
        using namespace lazyui;
        using namespace controls;

        constexpr ImGuiWindowFlags window_flags = ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoScrollWithMouse | ImGuiWindowFlags_NoBackground;

        struct embedded_image
        {
            const unsigned char* data;
            std::size_t size;
        };

        const embedded_image image_sources[] = {
            { assets::game_background_bytes, assets::game_background_bytes_size },
            { assets::picture_detail_bytes, assets::picture_detail_bytes_size },
            { assets::picture_detail_2_bytes, assets::picture_detail_2_bytes_size },
            { assets::picture_detail_3_bytes, assets::picture_detail_3_bytes_size },
            { assets::picture_detail_4_bytes, assets::picture_detail_4_bytes_size },
            { assets::main_window_shadow_bytes, assets::main_window_shadow_bytes_size },
            { assets::visuals_tab_bytes, assets::visuals_tab_bytes_size },
            { assets::inventory_tab_icon_bytes, assets::inventory_tab_icon_bytes_size },
            { assets::settings_tab_icon_bytes, assets::settings_tab_icon_bytes_size },
            { assets::no_hand_movement_options_bytes, assets::no_hand_movement_options_bytes_size },
            { assets::picture_detail_5_bytes, assets::picture_detail_5_bytes_size },
            { assets::picture_detail_6_bytes, assets::picture_detail_6_bytes_size },
            { assets::picture_detail_7_bytes, assets::picture_detail_7_bytes_size },
            { assets::picture_detail_8_bytes, assets::picture_detail_8_bytes_size },
            { assets::picture_detail_9_bytes, assets::picture_detail_9_bytes_size },
            { assets::picture_detail_10_bytes, assets::picture_detail_10_bytes_size }
        };

        std::array< c_image, std::size( image_sources ) > images;

        c_blureffect framework_blur_effect;

        void load_images( )
        {
            for ( std::size_t index = 0; index < images.size( ); ++index )
                if ( !images[index].ready( ) )
                    ( void )images[index].load( lazyui::app.device, image_sources[index].data, image_sources[index].size );
        }

        bool ensure_framework_blur( )
        {
            if ( framework_blur_effect.ready( ) && framework_blur_effect.matches_display( ImGui::GetIO( ).DisplaySize ) )
                return true;
            return framework_blur_effect.setup( lazyui::app.device, lazyui::app.device_context, lazyui::app.swap_chain );
        }

        namespace text
        {
            const text_glyph ragebot[] = {
                { 0x0052, -0.003f, 12.11f }, { 0x0061, 8.362f, 12.11f }, { 0x0067, 15.701f, 12.11f }, { 0x0065, 23.687f, 12.11f },
                { 0x0062, 31.295f, 12.11f }, { 0x006F, 39.268f, 12.11f }, { 0x0074, 47.083f, 12.11f }
            };

            const text_glyph anti_aim[] = {
                { 0x0041, 0.002f, 12.6f }, { 0x006E, 8.772f, 12.6f }, { 0x0074, 16.252f, 12.6f }, { 0x0069, 20.305f, 12.6f },
                { 0x002D, 23.254f, 12.6f }, { 0x0041, 29.033f, 12.6f }, { 0x0069, 37.802f, 12.6f }, { 0x006D, 40.751f, 12.6f }
            };

            const text_glyph legitbot[] = {
                { 0x004C, 0.001f, 12.59f }, { 0x0065, 7.352f, 12.59f }, { 0x0067, 14.931f, 12.59f }, { 0x0069, 22.903f, 12.59f },
                { 0x0074, 26.052f, 12.59f }, { 0x0062, 30.305f, 12.59f }, { 0x006F, 38.265f, 12.59f }, { 0x0074, 46.06f, 12.59f }
            };

            const text_glyph world[] = {
                { 0x0057, -0.004f, 12.11f }, { 0x006F, 12.313f, 12.11f }, { 0x0072, 19.808f, 12.11f }, { 0x006C, 24.514f, 12.11f },
                { 0x0064, 27.541f, 12.11f }
            };

            const text_glyph inventory[] = {
                { 0x0049, 0.004f, 12.11f }, { 0x006E, 3.361f, 12.11f }, { 0x0076, 10.746f, 12.11f }, { 0x0065, 17.772f, 12.11f },
                { 0x006E, 25.059f, 12.11f }, { 0x0074, 32.444f, 12.11f }, { 0x006F, 36.534f, 12.11f }, { 0x0072, 44.029f, 12.11f },
                { 0x0079, 48.735f, 12.11f }
            };

            const text_glyph misc[] = {
                { 0x004D, 0.003f, 12.11f }, { 0x0069, 11.465f, 12.11f }, { 0x0073, 14.662f, 12.11f }, { 0x0063, 21.43f, 12.11f }
            };

            const text_glyph helpers[] = {
                { 0x0048, -0.003f, 12.11f }, { 0x0065, 9.447f, 12.11f }, { 0x006C, 16.894f, 12.11f }, { 0x0070, 20.082f, 12.11f },
                { 0x0065, 27.895f, 12.11f }, { 0x0072, 35.343f, 12.11f }, { 0x0073, 40.209f, 12.11f }
            };

            const text_glyph settings[] = {
                { 0x0053, -0.003f, 12.1f }, { 0x0065, 8.017f, 12.1f }, { 0x0074, 15.305f, 12.1f }, { 0x0074, 19.394f, 12.1f },
                { 0x0069, 23.484f, 12.1f }, { 0x006E, 26.511f, 12.1f }, { 0x0067, 33.896f, 12.1f }, { 0x0073, 41.562f, 12.1f }
            };

            const text_glyph enemies[] = {
                { 0x0045, 0.004f, 12.83f }, { 0x006E, 7.983f, 12.83f }, { 0x0065, 15.556f, 12.83f }, { 0x006D, 22.954f, 12.83f },
                { 0x0069, 34.524f, 12.83f }, { 0x0065, 37.764f, 12.83f }, { 0x0073, 45.162f, 12.83f }
            };

            const text_glyph teammates[] = {
                { 0x0054, -0.002f, 12.6f }, { 0x0065, 8.385f, 12.6f }, { 0x0061, 15.921f, 12.6f }, { 0x006D, 23.204f, 12.6f },
                { 0x006D, 34.65f, 12.6f }, { 0x0061, 46.097f, 12.6f }, { 0x0074, 53.379f, 12.6f }, { 0x0065, 57.703f, 12.6f },
                { 0x0073, 65.239f, 12.6f }
            };

            const text_glyph local[] = {
                { 0x004C, 0.001f, 12.83f }, { 0x006F, 7.305f, 12.83f }, { 0x0063, 15.365f, 12.83f }, { 0x0061, 22.912f, 12.83f },
                { 0x006C, 30.108f, 12.83f }
            };

            const text_glyph effects[] = {
                { 0x0045, 0.f, 12.11f }, { 0x0066, 7.853f, 12.11f }, { 0x0066, 12.82f, 12.11f }, { 0x0065, 17.786f, 12.11f },
                { 0x0063, 25.414f, 12.11f }, { 0x0074, 32.895f, 12.11f }, { 0x0073, 37.324f, 12.11f }
            };

            const text_glyph other_esp[] = {
                { 0x004F, -0.004f, 13.4f }, { 0x0074, 10.275f, 13.4f }, { 0x0068, 15.533f, 13.4f }, { 0x0065, 23.261f, 13.4f },
                { 0x0072, 30.867f, 13.4f }, { 0x0020, 35.814f, 13.4f }, { 0x0045, 39.06f, 13.4f }, { 0x0053, 46.559f, 13.4f },
                { 0x0050, 54.273f, 13.4f }
            };

            const text_glyph hud_elements[] = {
                { 0x0048, 0.f, 13.4f }, { 0x0055, 9.018f, 13.4f }, { 0x0044, 17.686f, 13.4f }, { 0x0020, 26.745f, 13.4f },
                { 0x0045, 29.891f, 13.4f }, { 0x006C, 37.289f, 13.4f }, { 0x0065, 40.179f, 13.4f }, { 0x006D, 47.685f, 13.4f },
                { 0x0065, 59.62f, 13.4f }, { 0x006E, 67.126f, 13.4f }, { 0x0074, 74.741f, 13.4f }, { 0x0073, 79.898f, 13.4f }
            };

            const text_glyph watermark[] = {
                { 0x0057, -0.003f, 12.83f }, { 0x0061, 12.498f, 12.83f }, { 0x0074, 19.464f, 12.83f }, { 0x0065, 24.594f, 12.83f },
                { 0x0072, 31.992f, 12.83f }, { 0x006D, 36.703f, 12.83f }, { 0x0061, 48.273f, 12.83f }, { 0x0072, 55.239f, 12.83f },
                { 0x006B, 59.95f, 12.83f }
            };

            const text_glyph keybinds[] = {
                { 0x004B, 0.004f, 12.82f }, { 0x0065, 7.993f, 12.82f }, { 0x0079, 14.915f, 12.82f }, { 0x0062, 21.945f, 12.82f },
                { 0x0069, 29.636f, 12.82f }, { 0x006E, 32.616f, 12.82f }, { 0x0064, 39.93f, 12.82f }, { 0x0073, 47.608f, 12.82f }
            };

            const text_glyph bomb_timer[] = {
                { 0x0042, 0.003f, 13.57f }, { 0x006F, 8.886f, 13.57f }, { 0x006D, 16.216f, 13.57f }, { 0x0062, 27.705f, 13.57f },
                { 0x0020, 35.467f, 13.57f }, { 0x0074, 38.572f, 13.57f }, { 0x0069, 43.378f, 13.57f }, { 0x006D, 46.483f, 13.57f },
                { 0x0065, 57.891f, 13.57f }, { 0x0072, 65.059f, 13.57f }
            };

            const text_glyph bomb_pressure[] = {
                { 0x0042, 0.003f, 13.3f }, { 0x006F, 8.327f, 13.3f }, { 0x006D, 16.217f, 13.3f }, { 0x0062, 27.985f, 13.3f },
                { 0x0020, 36.001f, 13.3f }, { 0x0070, 39.187f, 13.3f }, { 0x0072, 47.273f, 13.3f }, { 0x0065, 51.929f, 13.3f },
                { 0x0073, 59.371f, 13.3f }, { 0x0073, 65.651f, 13.3f }, { 0x0075, 71.945f, 13.3f }, { 0x0072, 79.569f, 13.3f },
                { 0x0065, 84.225f, 13.3f }
            };

            const text_glyph spectator_list[] = {
                { 0x0053, -0.002f, 13.3f }, { 0x0070, 8.566f, 13.3f }, { 0x0065, 16.882f, 13.3f }, { 0x0063, 24.554f, 13.3f },
                { 0x0074, 32.142f, 13.3f }, { 0x0061, 37.462f, 13.3f }, { 0x0074, 44.686f, 13.3f }, { 0x006F, 50.006f, 13.3f },
                { 0x0072, 58.126f, 13.3f }, { 0x0020, 63.012f, 13.3f }, { 0x006C, 66.428f, 13.3f }, { 0x0069, 69.606f, 13.3f },
                { 0x0073, 72.966f, 13.3f }, { 0x0074, 79.49f, 13.3f }
            };

            const text_glyph velocity[] = {
                { 0x0056, -0.001f, 12.6f }, { 0x0065, 9.168f, 12.6f }, { 0x006C, 16.947f, 12.6f }, { 0x006F, 20.295f, 12.6f },
                { 0x0063, 28.29f, 12.6f }, { 0x0069, 35.917f, 12.6f }, { 0x0074, 39.266f, 12.6f }, { 0x0079, 43.718f, 12.6f }
            };

            const text_glyph jump_stats[] = {
                { 0x004A, -0.003f, 13.39f }, { 0x0075, 6.386f, 13.39f }, { 0x006D, 13.76f, 13.39f }, { 0x0070, 25.455f, 13.39f },
                { 0x0020, 33.477f, 13.39f }, { 0x0053, 36.383f, 13.39f }, { 0x0074, 43.758f, 13.39f }, { 0x0061, 48.675f, 13.39f },
                { 0x0074, 55.496f, 13.39f }, { 0x0073, 60.414f, 13.39f }
            };

            const text_glyph radar[] = {
                { 0x0052, -0.004f, 12.83f }, { 0x0061, 8.515f, 12.83f }, { 0x0064, 15.481f, 12.83f }, { 0x0061, 23.419f, 12.83f },
                { 0x0072, 30.385f, 12.83f }
            };

            const text_glyph danger_ranges[] = {
                { 0x0044, 0.001f, 13.3f }, { 0x0061, 9.633f, 13.3f }, { 0x006E, 16.773f, 13.3f }, { 0x0067, 24.585f, 13.3f },
                { 0x0065, 32.803f, 13.3f }, { 0x0072, 40.447f, 13.3f }, { 0x0020, 45.179f, 13.3f }, { 0x0072, 48.637f, 13.3f },
                { 0x0061, 53.369f, 13.3f }, { 0x006E, 60.509f, 13.3f }, { 0x0067, 68.321f, 13.3f }, { 0x0065, 76.539f, 13.3f },
                { 0x0073, 84.183f, 13.3f }
            };

            const text_glyph target_info[] = {
                { 0x0054, -0.004f, 12.6f }, { 0x0061, 8.697f, 12.6f }, { 0x0072, 16.307f, 12.6f }, { 0x0067, 21.511f, 12.6f },
                { 0x0065, 29.794f, 12.6f }, { 0x0074, 37.683f, 12.6f }, { 0x0020, 42.246f, 12.6f }, { 0x0069, 46.212f, 12.6f },
                { 0x006E, 49.67f, 12.6f }, { 0x0066, 57.661f, 12.6f }, { 0x006F, 62.783f, 12.6f }
            };

            const text_glyph round_timer[] = {
                { 0x0052, -0.001f, 12.6f }, { 0x006F, 8.475f, 12.6f }, { 0x0075, 16.38f, 12.6f }, { 0x006E, 24.177f, 12.6f },
                { 0x0064, 31.967f, 12.6f }, { 0x0020, 40.037f, 12.6f }, { 0x0074, 43.804f, 12.6f }, { 0x0069, 48.166f, 12.6f },
                { 0x006D, 51.425f, 12.6f }, { 0x0065, 62.923f, 12.6f }, { 0x0072, 70.612f, 12.6f }
            };

            const text_glyph purchase_logs[] = {
                { 0x0050, 0.f, 13.3f }, { 0x0075, 7.91f, 13.3f }, { 0x0072, 15.582f, 13.3f }, { 0x0063, 20.174f, 13.3f },
                { 0x0068, 27.608f, 13.3f }, { 0x0061, 35.28f, 13.3f }, { 0x0073, 42.28f, 13.3f }, { 0x0065, 48.664f, 13.3f },
                { 0x0020, 56.168f, 13.3f }, { 0x006C, 59.486f, 13.3f }, { 0x006F, 62.426f, 13.3f }, { 0x0067, 70.406f, 13.3f },
                { 0x0073, 78.484f, 13.3f }
            };

            const text_glyph enemy_counter[] = {
                { 0x0045, -0.001f, 12.83f }, { 0x006E, 7.818f, 12.83f }, { 0x0065, 15.231f, 12.83f }, { 0x006D, 22.469f, 12.83f },
                { 0x0079, 33.757f, 12.83f }, { 0x0020, 40.887f, 12.83f }, { 0x0063, 44.021f, 12.83f }, { 0x006F, 51.178f, 12.83f },
                { 0x0075, 58.848f, 12.83f }, { 0x006E, 66.262f, 12.83f }, { 0x0074, 73.675f, 12.83f }, { 0x0065, 78.645f, 12.83f },
                { 0x0072, 85.883f, 12.83f }
            };

            const text_glyph offscreen_indicators[] = {
                { 0x004F, -0.001f, 12.82f }, { 0x0066, 10.605f, 12.82f }, { 0x0066, 15.716f, 12.82f }, { 0x0073, 20.828f, 12.82f },
                { 0x0063, 27.249f, 12.82f }, { 0x0072, 34.682f, 12.82f }, { 0x0065, 39.375f, 12.82f }, { 0x0065, 46.876f, 12.82f },
                { 0x006E, 54.377f, 12.82f }, { 0x0020, 62.04f, 12.82f }, { 0x0069, 65.505f, 12.82f }, { 0x006E, 68.767f, 12.82f },
                { 0x0064, 76.43f, 12.82f }, { 0x0069, 84.471f, 12.82f }, { 0x0063, 87.733f, 12.82f }, { 0x0061, 95.166f, 12.82f },
                { 0x0074, 102.181f, 12.82f }, { 0x006F, 107.374f, 12.82f }, { 0x0072, 115.334f, 12.82f }, { 0x0073, 120.027f, 12.82f }
            };

            const text_glyph damage_panel[] = {
                { 0x0044, -0.001f, 12.9f }, { 0x0061, 9.021f, 12.9f }, { 0x006D, 16.262f, 12.9f }, { 0x0061, 28.053f, 12.9f },
                { 0x0067, 35.294f, 12.9f }, { 0x0065, 42.444f, 12.9f }, { 0x0020, 49.971f, 12.9f }, { 0x0070, 53.299f, 12.9f },
                { 0x0061, 61.554f, 12.9f }, { 0x006E, 68.795f, 12.9f }, { 0x0065, 76.426f, 12.9f }, { 0x006C, 83.953f, 12.9f }
            };

            const text_glyph movement_keys[] = {
                { 0x004D, 0.004f, 12.83f }, { 0x006F, 11.466f, 12.83f }, { 0x0076, 19.08f, 12.83f }, { 0x0065, 26.059f, 12.83f },
                { 0x006D, 33.457f, 12.83f }, { 0x0065, 45.027f, 12.83f }, { 0x006E, 52.425f, 12.83f }, { 0x0074, 59.998f, 12.83f },
                { 0x0020, 65.182f, 12.83f }, { 0x006B, 68.476f, 12.83f }, { 0x0065, 75.024f, 12.83f }, { 0x0079, 82.206f, 12.83f },
                { 0x0073, 89.496f, 12.83f }
            };

            const text_glyph overlays[] = {
                { 0x004F, -0.004f, 12.83f }, { 0x0076, 10.242f, 12.83f }, { 0x0065, 16.952f, 12.83f }, { 0x0072, 24.08f, 12.83f },
                { 0x006C, 28.521f, 12.83f }, { 0x0061, 31.316f, 12.83f }, { 0x0079, 37.89f, 12.83f }, { 0x0073, 44.91f, 12.83f }
            };

            const text_glyph crosshair_overlay[] = {
                { 0x0043, -0.001f, 12.6f }, { 0x0072, 9.355f, 12.6f }, { 0x006F, 14.109f, 12.6f }, { 0x0073, 21.764f, 12.6f },
                { 0x0073, 28.486f, 12.6f }, { 0x0068, 35.208f, 12.6f }, { 0x0061, 42.755f, 12.6f }, { 0x0069, 49.915f, 12.6f },
                { 0x0072, 52.923f, 12.6f }, { 0x0020, 57.677f, 12.6f }, { 0x006F, 61.193f, 12.6f }, { 0x0076, 68.848f, 12.6f },
                { 0x0065, 76.014f, 12.6f }, { 0x0072, 83.454f, 12.6f }, { 0x006C, 88.208f, 12.6f }, { 0x0061, 91.216f, 12.6f },
                { 0x0079, 98.376f, 12.6f }
            };

            const text_glyph scope_overlay[] = {
                { 0x0053, -0.001f, 13.39f }, { 0x0063, 7.829f, 13.39f }, { 0x006F, 15.551f, 13.39f }, { 0x0070, 23.556f, 13.39f },
                { 0x0065, 32.007f, 13.39f }, { 0x0020, 39.675f, 13.39f }, { 0x006F, 43.266f, 13.39f }, { 0x0076, 50.934f, 13.39f },
                { 0x0065, 57.711f, 13.39f }, { 0x0072, 65.379f, 13.39f }, { 0x006C, 70.374f, 13.39f }, { 0x0061, 73.385f, 13.39f },
                { 0x0079, 80.526f, 13.39f }
            };

            const text_glyph grenade_proximity[] = {
                { 0x0047, 0.002f, 12.6f }, { 0x0072, 9.721f, 12.6f }, { 0x0065, 14.748f, 12.6f }, { 0x006E, 22.384f, 12.6f },
                { 0x0061, 30.205f, 12.6f }, { 0x0064, 37.587f, 12.6f }, { 0x0065, 45.623f, 12.6f }, { 0x0020, 53.259f, 12.6f },
                { 0x0070, 56.725f, 12.6f }, { 0x0072, 64.761f, 12.6f }, { 0x006F, 69.789f, 12.6f }, { 0x0078, 77.641f, 12.6f },
                { 0x0069, 84.883f, 12.6f }, { 0x006D, 88.159f, 12.6f }, { 0x0069, 99.705f, 12.6f }, { 0x0074, 102.98f, 12.6f },
                { 0x0079, 107.405f, 12.6f }
            };

            const text_glyph last_second_defuse[] = {
                { 0x004C, -0.002f, 13.39f }, { 0x0061, 6.898f, 13.39f }, { 0x0073, 14.067f, 13.39f }, { 0x0074, 20.346f, 13.39f },
                { 0x0020, 25.463f, 13.39f }, { 0x0073, 28.569f, 13.39f }, { 0x0065, 35.118f, 13.39f }, { 0x0063, 42.584f, 13.39f },
                { 0x006F, 50.105f, 13.39f }, { 0x006E, 57.841f, 13.39f }, { 0x0064, 65.416f, 13.39f }, { 0x0020, 73.652f, 13.39f },
                { 0x0064, 76.758f, 13.39f }, { 0x0065, 84.994f, 13.39f }, { 0x0066, 92.46f, 13.39f }, { 0x0075, 96.835f, 13.39f },
                { 0x0073, 104.41f, 13.39f }, { 0x0065, 110.958f, 13.39f }
            };

            const text_glyph zeus_range[] = {
                { 0x005A, 0.003f, 13.39f }, { 0x0065, 7.115f, 13.39f }, { 0x0075, 14.592f, 13.39f }, { 0x0073, 22.176f, 13.39f },
                { 0x0020, 28.735f, 13.39f }, { 0x0072, 31.851f, 13.39f }, { 0x0061, 36.668f, 13.39f }, { 0x006E, 43.847f, 13.39f },
                { 0x0067, 51.432f, 13.39f }, { 0x0065, 58.517f, 13.39f }
            };

            const text_glyph hat[] = {
                { 0x0048, 0.001f, 12.83f }, { 0x0061, 10.14f, 12.83f }, { 0x0074, 17.106f, 12.83f }
            };

            const text_glyph strafe_visualizer[] = {
                { 0x0053, -0.004f, 13.3f }, { 0x0074, 8.274f, 13.3f }, { 0x0072, 13.36f, 13.3f }, { 0x0061, 17.956f, 13.3f },
                { 0x0066, 24.89f, 13.3f }, { 0x0065, 29.78f, 13.3f }, { 0x0020, 37.162f, 13.3f }, { 0x0076, 40.288f, 13.3f },
                { 0x0069, 47.418f, 13.3f }, { 0x0073, 50.488f, 13.3f }, { 0x0075, 56.722f, 13.3f }, { 0x0061, 64.286f, 13.3f },
                { 0x006C, 71.22f, 13.3f }, { 0x0069, 74.108f, 13.3f }, { 0x007A, 77.178f, 13.3f }, { 0x0065, 83.72f, 13.3f },
                { 0x0072, 91.102f, 13.3f }
            };

            const text_glyph strafe_sync[] = {
                { 0x0053, 0.001f, 12.82f }, { 0x0074, 8.263f, 12.82f }, { 0x0072, 13.447f, 12.82f }, { 0x0061, 18.159f, 12.82f },
                { 0x0066, 25.125f, 12.82f }, { 0x0065, 30.12f, 12.82f }, { 0x0020, 37.518f, 12.82f }, { 0x0073, 40.812f, 12.82f },
                { 0x0079, 47.103f, 12.82f }, { 0x006E, 54.393f, 12.82f }, { 0x0063, 61.966f, 12.82f }
            };

            const text_glyph camera[] = {
                { 0x0043, -0.001f, 12.59f }, { 0x0061, 9.204f, 12.59f }, { 0x006D, 16.256f, 12.59f }, { 0x0065, 27.472f, 12.59f },
                { 0x0072, 34.779f, 12.59f }, { 0x0061, 39.476f, 12.59f }
            };

            const text_glyph custom_fov[] = {
                { 0x0043, 0.001f, 12.82f }, { 0x0075, 9.748f, 12.82f }, { 0x0073, 17.321f, 12.82f }, { 0x0074, 23.612f, 12.82f },
                { 0x006F, 28.742f, 12.82f }, { 0x006D, 36.572f, 12.82f }, { 0x0020, 48.142f, 12.82f }, { 0x0066, 51.436f, 12.82f },
                { 0x006F, 56.431f, 12.82f }, { 0x0076, 64.045f, 12.82f }
            };

            const text_glyph thirdperson_x[] = {
                { 0x0054, 0.002f, 14.88f }, { 0x0068, 8.067f, 14.88f }, { 0x0069, 16.342f, 14.88f }, { 0x0072, 19.592f, 14.88f },
                { 0x0064, 24.507f, 14.88f }, { 0x0070, 33.562f, 14.88f }, { 0x0065, 42.602f, 14.88f }, { 0x0072, 50.772f, 14.88f },
                { 0x0073, 55.972f, 14.88f }, { 0x006F, 63.152f, 14.88f }, { 0x006E, 71.697f, 14.88f }, { 0x0020, 79.957f, 14.88f },
                { 0x0058, 83.597f, 14.88f }
            };

            const text_glyph aspect_ratio[] = {
                { 0x0041, -0.003f, 13.39f }, { 0x0073, 8.93f, 13.39f }, { 0x0070, 15.608f, 13.39f }, { 0x0065, 23.961f, 13.39f },
                { 0x0063, 31.557f, 13.39f }, { 0x0074, 39.059f, 13.39f }, { 0x0020, 44.307f, 13.39f }, { 0x0072, 47.543f, 13.39f },
                { 0x0061, 52.48f, 13.39f }, { 0x0074, 59.631f, 13.39f }, { 0x0069, 64.878f, 13.39f }, { 0x006F, 68.033f, 13.39f }
            };

            const text_glyph viewmodel[] = {
                { 0x0056, 0.f, 13.56f }, { 0x0069, 8.814f, 13.56f }, { 0x0065, 11.985f, 13.56f }, { 0x0077, 19.26f, 13.56f },
                { 0x006D, 29.991f, 13.56f }, { 0x006F, 41.627f, 13.56f }, { 0x0064, 49.28f, 13.56f }, { 0x0065, 57.203f, 13.56f },
                { 0x006C, 64.761f, 13.56f }
            };

            const text_glyph viewmodel_fov[] = {
                { 0x0056, -0.003f, 12.6f }, { 0x0069, 9.214f, 12.6f }, { 0x0065, 12.489f, 12.6f }, { 0x0077, 20.125f, 12.6f },
                { 0x006D, 30.904f, 12.6f }, { 0x006F, 42.45f, 12.6f }, { 0x0064, 50.302f, 12.6f }, { 0x0065, 58.338f, 12.6f },
                { 0x006C, 65.975f, 12.6f }, { 0x0020, 69.25f, 12.6f }, { 0x0066, 72.716f, 12.6f }, { 0x006F, 77.648f, 12.6f },
                { 0x0076, 85.5f, 12.6f }
            };

            const text_glyph viewmodel_position[] = {
                { 0x0056, 0.002f, 12.6f }, { 0x0069, 8.971f, 12.6f }, { 0x0065, 12.12f, 12.6f }, { 0x0077, 19.699f, 12.6f },
                { 0x006D, 30.337f, 12.6f }, { 0x006F, 41.725f, 12.6f }, { 0x0064, 49.52f, 12.6f }, { 0x0065, 57.48f, 12.6f },
                { 0x006C, 65.059f, 12.6f }, { 0x0020, 68.207f, 12.6f }, { 0x0070, 71.864f, 12.6f }, { 0x006F, 79.824f, 12.6f },
                { 0x0073, 87.619f, 12.6f }, { 0x0069, 94.48f, 12.6f }, { 0x0074, 97.629f, 12.6f }, { 0x0069, 101.882f, 12.6f },
                { 0x006F, 105.03f, 12.6f }, { 0x006E, 112.825f, 12.6f }
            };

            const text_glyph no_hand_movement[] = {
                { 0x004E, -0.004f, 13.39f }, { 0x006F, 9.297f, 13.39f }, { 0x0020, 17.193f, 13.39f }, { 0x0068, 20.459f, 13.39f },
                { 0x0061, 28.207f, 13.39f }, { 0x006E, 35.537f, 13.39f }, { 0x0064, 43.271f, 13.39f }, { 0x0020, 51.667f, 13.39f },
                { 0x006D, 54.933f, 13.39f }, { 0x006F, 66.988f, 13.39f }, { 0x0076, 74.56f, 13.39f }, { 0x0065, 81.323f, 13.39f },
                { 0x006D, 88.949f, 13.39f }, { 0x0065, 101.004f, 13.39f }, { 0x006E, 108.63f, 13.39f }, { 0x0074, 116.365f, 13.39f }
            };

            const text_glyph removals[] = {
                { 0x0052, 0.002f, 12.83f }, { 0x0065, 8.52f, 12.83f }, { 0x006D, 15.918f, 12.83f }, { 0x006F, 27.488f, 12.83f },
                { 0x0076, 35.102f, 12.83f }, { 0x0061, 42.081f, 12.83f }, { 0x006C, 49.047f, 12.83f }, { 0x0073, 52.112f, 12.83f }
            };

            const text_glyph removals_2[] = {
                { 0x0052, 0.002f, 12.83f }, { 0x0065, 8.52f, 12.83f }, { 0x006D, 15.918f, 12.83f }, { 0x006F, 27.488f, 12.83f },
                { 0x0076, 35.102f, 12.83f }, { 0x0061, 42.081f, 12.83f }, { 0x006C, 49.047f, 12.83f }, { 0x0073, 52.112f, 12.83f }
            };

            const text_glyph unrivaled[] = {
                { 0x0055, 0.001f, 14.53f }, { 0x004E, 10.98f, 14.53f }, { 0x0052, 22.413f, 14.53f }, { 0x0049, 32.264f, 14.53f },
                { 0x0056, 36.476f, 14.53f }, { 0x0041, 47.674f, 14.53f }, { 0x004C, 58.873f, 14.53f }, { 0x0045, 67.355f, 14.53f },
                { 0x0044, 76.466f, 14.53f }
            };

            const text_glyph visuals_other_esp[] = {
                { 0x0056, 0.003f, 11.9f }, { 0x0069, 8.351f, 11.9f }, { 0x0073, 11.551f, 11.9f }, { 0x0075, 17.895f, 11.9f },
                { 0x0061, 25.091f, 11.9f }, { 0x006C, 31.939f, 11.9f }, { 0x0073, 34.935f, 11.9f }, { 0x0020, 41.279f, 11.9f },
                { 0x002F, 44.791f, 11.9f }, { 0x0020, 49.815f, 11.9f }, { 0x004F, 53.327f, 11.9f }, { 0x0074, 62.935f, 11.9f },
                { 0x0068, 67.959f, 11.9f }, { 0x0065, 75.179f, 11.9f }, { 0x0072, 82.315f, 11.9f }, { 0x0020, 87.075f, 11.9f },
                { 0x0045, 90.587f, 11.9f }, { 0x0053, 97.687f, 11.9f }, { 0x0050, 104.967f, 11.9f }
            };

            const text_glyph furiolko[] = {
                { 0x0066, -0.005f, 9.92f }, { 0x0075, 3.495f, 9.92f }, { 0x0072, 9.365f, 9.92f }, { 0x0069, 13.185f, 9.92f },
                { 0x006F, 15.685f, 9.92f }, { 0x006C, 21.675f, 9.92f }, { 0x006B, 24.045f, 9.92f }, { 0x006F, 28.935f, 9.92f }
            };

            const text_glyph premium[] = {
                { 0x0050, 0.f, 9.92f }, { 0x0052, 6.5f, 9.92f }, { 0x0045, 13.15f, 9.92f }, { 0x004D, 19.45f, 9.92f },
                { 0x0049, 28.59f, 9.92f }, { 0x0055, 31.64f, 9.92f }, { 0x004D, 38.88f, 9.92f }
            };
        }

        void update_controls( ImVec2 origin )
        {
            begin_pointer_frame( );
            update_combo( unrivaled, origin + ImVec2{ 32.f, 77.f }, origin + ImVec2{ 738.f, 129.f }, static_cast< int >( IM_ARRAYSIZE( unrivaled_options ) ) );
            update_combo( combo_header, origin + ImVec2{ 25.f, 26.f }, origin + ImVec2{ 745.f, 68.f }, static_cast< int >( IM_ARRAYSIZE( combo_header_options ) ) );
            update_selection( category_bar, category_bar_slots, origin, false, 562.51f, 131.49f );
            ( void )update_button( search_button, origin + ImVec2{ 705.f, 136.f }, origin + ImVec2{ 737.f, 168.f } );

            if ( category_bar.selected == 4 )
            {
                update_switch( watermark, origin + ImVec2{ 40.f, 209.54f }, origin + ImVec2{ 139.1635f, 233.54f } );
                update_switch( keybinds, origin + ImVec2{ 40.f, 237.49f }, origin + ImVec2{ 125.2145f, 261.49f } );
                update_switch( bomb_timer, origin + ImVec2{ 40.f, 265.205f }, origin + ImVec2{ 142.123f, 289.205f } );
                update_switch( bomb_pressure, origin + ImVec2{ 40.f, 293.35f }, origin + ImVec2{ 163.264f, 317.35f } );
                update_switch( spectator_list, origin + ImVec2{ 40.f, 321.31f }, origin + ImVec2{ 155.628f, 345.31f } );
                update_switch( velocity, origin + ImVec2{ 40.f, 349.68f }, origin + ImVec2{ 122.586f, 373.68f } );
                update_switch( jump_stats, origin + ImVec2{ 40.f, 377.205f }, origin + ImVec2{ 138.3255f, 401.205f } );
                update_switch( radar, origin + ImVec2{ 40.f, 405.54f }, origin + ImVec2{ 106.58f, 429.54f } );
                update_switch( danger_ranges, origin + ImVec2{ 40.f, 433.315f }, origin + ImVec2{ 162.126f, 457.315f } );
                update_switch( target_info, origin + ImVec2{ 40.f, 461.72f }, origin + ImVec2{ 142.4519f, 485.72f } );
                update_switch( round_timer, origin + ImVec2{ 40.f, 489.715f }, origin + ImVec2{ 147.6072f, 513.715f } );
                update_switch( purchase_logs, origin + ImVec2{ 40.f, 517.315f }, origin + ImVec2{ 156.388f, 541.315f } );
                update_switch( enemy_counter, origin + ImVec2{ 40.f, 545.49f }, origin + ImVec2{ 162.0555f, 569.49f } );
                update_switch( offscreen_indicators, origin + ImVec2{ 40.f, 573.58f }, origin + ImVec2{ 198.889f, 597.58f } );
                update_switch( damage_panel, origin + ImVec2{ 40.f, 601.39f }, origin + ImVec2{ 158.575f, 625.39f } );
                update_switch( movement_keys, origin + ImVec2{ 40.f, 629.49f }, origin + ImVec2{ 168.2025f, 653.49f } );
                update_switch( crosshair_overlay, origin + ImVec2{ 277.f, 209.685f }, origin + ImVec2{ 414.7929f, 233.685f } );
                update_switch( scope_overlay, origin + ImVec2{ 277.f, 237.3485f }, origin + ImVec2{ 396.2835f, 261.3485f } );
                update_switch( grenade_proximity, origin + ImVec2{ 277.f, 265.72f }, origin + ImVec2{ 424.0199f, 289.72f } );
                update_switch( last_second_defuse, origin + ImVec2{ 277.f, 293.4285f }, origin + ImVec2{ 427.2665f, 317.4285f } );
                update_switch( zeus_range, origin + ImVec2{ 277.f, 321.2985f }, origin + ImVec2{ 375.3f, 345.2985f } );
                update_switch( hat, origin + ImVec2{ 277.f, 349.54f }, origin + ImVec2{ 330.5485f, 373.54f } );
                update_switch( strafe_visualizer, origin + ImVec2{ 277.f, 377.305f }, origin + ImVec2{ 404.002f, 401.305f } );
                update_switch( strafe_sync, origin + ImVec2{ 277.f, 405.525f }, origin + ImVec2{ 377.762f, 429.525f } );
                update_switch( custom_fov, origin + ImVec2{ 514.f, 209.47f }, origin + ImVec2{ 617.079f, 233.47f } );
                update_switch( thirdperson_x, origin + ImVec2{ 514.f, 237.165f }, origin + ImVec2{ 638.49f, 261.165f } );
                update_switch( aspect_ratio, origin + ImVec2{ 514.f, 265.3685f }, origin + ImVec2{ 620.263f, 289.3685f } );
                update_switch( viewmodel_fov, origin + ImVec2{ 514.f, 341.765f }, origin + ImVec2{ 637.5341f, 365.765f } );
                update_switch( viewmodel_position, origin + ImVec2{ 514.f, 369.715f }, origin + ImVec2{ 665.7039f, 393.715f } );
                update_switch( no_hand_movement, origin + ImVec2{ 514.f, 397.3485f }, origin + ImVec2{ 667.516f, 421.3485f } );
                update_switch( removals, origin + ImVec2{ 514.f, 473.54f }, origin + ImVec2{ 604.221f, 497.54f } );
            }
        }

        void draw_top_bar( ImDrawList* draw, ImVec2 origin )
        {
            draw_image( draw, 0, origin, origin + ImVec2{ 769.f, 690.f }, ImVec2{ 0.f, 0.f }, ImVec2{ 1.f, 1.f }, corner_radii{ 0.f, 0.f, 0.f, 0.f }, IM_COL32_WHITE );
            draw_image( draw, 1, origin + ImVec2{ 496.f, 23.f }, origin + ImVec2{ 747.f, 33.f }, ImVec2{ 0.f, 0.f }, ImVec2{ 1.f, 1.f }, corner_radii{ 0.f, 0.f, 0.f, 0.f }, IM_COL32_WHITE );
            draw_image( draw, 2, origin + ImVec2{ 332.f, 23.f }, origin + ImVec2{ 457.f, 28.f }, ImVec2{ 0.f, 0.f }, ImVec2{ 1.f, 1.f }, corner_radii{ 0.f, 0.f, 0.f, 0.f }, IM_COL32_WHITE );
            draw_image( draw, 3, origin + ImVec2{ 155.f, 23.f }, origin + ImVec2{ 212.f, 28.f }, ImVec2{ 0.f, 0.f }, ImVec2{ 1.f, 1.f }, corner_radii{ 0.f, 0.f, 0.f, 0.f }, IM_COL32_WHITE );
            draw_image( draw, 4, origin + ImVec2{ 63.f, 23.f }, origin + ImVec2{ 82.f, 28.f }, ImVec2{ 0.f, 0.f }, ImVec2{ 1.f, 1.f }, corner_radii{ 0.f, 0.f, 0.f, 0.f }, IM_COL32_WHITE );
            draw_image( draw, 5, origin + ImVec2{ 10.f, 58.f }, origin + ImVec2{ 760.f, 684.f }, ImVec2{ 0.f, 0.f }, ImVec2{ 1.f, 1.f }, corner_radii{ }, theme::color_000000_66 );
            add_rounded_rect_filled( draw, origin + ImVec2{ 25.f, 70.f }, origin + ImVec2{ 745.f, 666.36f }, corner_radii{ 4.f, 4.f, 4.f, 4.f }, theme::fill_000000 );
            add_rounded_rect_filled( draw, origin + ImVec2{ 33.f, 70.f }, origin + ImVec2{ 737.f, 658.f }, corner_radii{ 0.f, 0.f, 0.f, 0.f }, theme::fill_000000 );
            add_rounded_rect_filled( draw, origin + ImVec2{ 32.f, 77.f }, origin + ImVec2{ 738.f, 129.f }, corner_radii{ 9.f, 9.f, 9.f, 9.f }, theme::color_070708 );
            add_rounded_rect_filled( draw, origin + ImVec2{ 271.77f, 84.f }, origin + ImVec2{ 343.f, 122.f }, corner_radii{ 6.f, 6.f, 6.f, 6.f }, theme::fill_ec4899 );
            draw_generated_icon( draw, origin + ImVec2{ 64.62f, 85.f }, theme::icon_85858a_80, icons::settings_bold_duotone_layer1_glyph );
            draw_generated_icon( draw, origin + ImVec2{ 64.62f, 85.f }, theme::icon_85858a, icons::settings_bold_duotone_layer2_glyph );
            if ( unrivaled.selected == 0 ) draw_glyph_run( draw, text_fonts::inter_400_12_5, origin + ImVec2{ 48.75f, 105.86f }, theme::color_909096, text::ragebot );
            if ( unrivaled.selected != 0 ) draw_text_line( draw, text_fonts::inter_400_12_5, origin + ImVec2{ 48.75f, 117.97f }, 0, theme::color_909096, unrivaled_options[unrivaled.selected] );
            draw_generated_icon( draw, origin + ImVec2{ 143.5f, 86.87f }, theme::icon_838388, icons::target_line_duotone_layer1_glyph );
            draw_generated_icon( draw, origin + ImVec2{ 143.5f, 86.87f }, theme::icon_838388_80, icons::target_line_duotone_layer2_glyph );
            draw_generated_icon( draw, origin + ImVec2{ 143.5f, 86.87f }, theme::icon_838388, icons::target_line_duotone_layer3_glyph );
            draw_glyph_run( draw, text_fonts::inter_400_13, origin + ImVec2{ 125.86f, 105.46f }, theme::color_909096, text::anti_aim );
            draw_generated_icon( draw, origin + ImVec2{ 220.7f, 85.7f }, theme::icon_848489, icons::target_glyph );
            draw_glyph_run( draw, text_fonts::inter_400_13, origin + ImVec2{ 203.72f, 105.59f }, theme::color_909096, text::legitbot );
            draw_generated_icon( draw, origin + ImVec2{ 299.f, 86.3f }, theme::icon_0b090c, icons::user_glyph );
            draw_image( draw, 6, origin + ImVec2{ 284.f, 110.f }, origin + ImVec2{ 331.f, 122.f }, ImVec2{ 0.f, 0.f }, ImVec2{ 1.f, 1.f }, corner_radii{ 0.f, 0.f, 0.f, 0.f }, IM_COL32_WHITE );
            draw_generated_icon( draw, origin + ImVec2{ 378.f, 87.f }, theme::icon_848489, icons::globe_glyph );
            draw_glyph_run( draw, text_fonts::inter_400_12_5, origin + ImVec2{ 366.83f, 105.93f }, theme::text_8f8f95, text::world );
            draw_image( draw, 7, origin + ImVec2{ 454.f, 88.f }, origin + ImVec2{ 469.f, 102.f }, ImVec2{ 0.f, 0.f }, ImVec2{ 1.f, 1.f }, corner_radii{ 0.f, 0.f, 0.f, 0.f }, IM_COL32_WHITE );
            draw_glyph_run( draw, text_fonts::inter_400_12_5, origin + ImVec2{ 434.55f, 105.93f }, theme::color_909096, text::inventory );
            {
                const int first_vertex = draw->VtxBuffer.Size;
                draw_generated_icon( draw, origin + ImVec2{ 534.f, 88.04f }, theme::color_96969c, icons::sliders_horizontal_glyph );
                rotate_vertices( draw, first_vertex, origin + ImVec2{ 540.f, 94.04f }, unrivaled.anim * IM_PI );
            }
            draw_glyph_run( draw, text_fonts::inter_400_12_5, origin + ImVec2{ 525.77f, 105.97f }, theme::color_909096, text::misc );
            draw_generated_icon( draw, origin + ImVec2{ 609.5f, 86.85f }, theme::icon_85858a, icons::timer_glyph );
            draw_glyph_run( draw, text_fonts::inter_400_12_5, origin + ImVec2{ 593.76f, 105.7f }, theme::color_909096, text::helpers );
            draw_image( draw, 8, origin + ImVec2{ 688.f, 87.f }, origin + ImVec2{ 702.f, 102.f }, ImVec2{ 0.f, 0.f }, ImVec2{ 1.f, 1.f }, corner_radii{ 0.f, 0.f, 0.f, 0.f }, IM_COL32_WHITE );
            draw_glyph_run( draw, text_fonts::inter_400_12_5, origin + ImVec2{ 670.21f, 105.94f }, theme::color_909096, text::settings );
            add_rounded_rect_stroke( draw, origin + ImVec2{ 32.5f, 77.5f }, origin + ImVec2{ 737.5f, 128.5f }, corner_radii{ 8.5f, 8.5f, 8.5f, 8.5f }, mix_color( theme::color_171719, theme::color_171719, ImMax( unrivaled.anim, unrivaled.hover ) ), 1.f );
            add_rounded_rect_filled( draw, origin + ImVec2{ 33.f, 136.f }, origin + ImVec2{ 697.f, 168.f }, corner_radii{ 8.f, 8.f, 8.f, 8.f }, theme::fill_0f0f11 );
            add_rounded_rect_filled( draw, origin + ImVec2{ 562.51f + category_bar.slide, 139.f }, origin + ImVec2{ 562.51f + category_bar.slide + category_bar.size - 0.f, 165.f }, corner_radii{ 6.f, 6.f, 6.f, 6.f }, theme::fill_ec4899 );
            draw_glyph_run( draw, text_fonts::figtree_light_500_13_5, origin + ImVec2{ 75.56f, 142.15f }, mix_color( mix_color( theme::color_96969c, theme::text_0a0a0c, category_bar.amount[0] ), theme::text_57575b, category_bar.hover[0] * ( 1.f - category_bar.amount[0] ) ), text::enemies );
            draw_glyph_run( draw, text_fonts::inter_500_13, origin + ImVec2{ 196.29f, 142.32f }, mix_color( mix_color( theme::color_96969c, theme::text_0a0a0c, category_bar.amount[1] ), theme::text_57575b, category_bar.hover[1] * ( 1.f - category_bar.amount[1] ) ), text::teammates );
            draw_glyph_run( draw, text_fonts::figtree_light_500_13_5, origin + ImVec2{ 348.34f, 142.08f }, mix_color( mix_color( theme::color_96969c, theme::text_0a0a0c, category_bar.amount[2] ), theme::text_57575b, category_bar.hover[2] * ( 1.f - category_bar.amount[2] ) ), text::local );
            draw_glyph_run( draw, text_fonts::inter_400_12_5, origin + ImVec2{ 473.69f, 142.8f }, mix_color( mix_color( theme::color_96969c, theme::text_0a0a0c, category_bar.amount[3] ), theme::text_57575b, category_bar.hover[3] * ( 1.f - category_bar.amount[3] ) ), text::effects );
            draw_glyph_run( draw, text_fonts::dm_sans_9pt_500_13_5, origin + ImVec2{ 596.92f, 141.39f }, mix_color( theme::color_96969c, theme::text_0a0a0c, category_bar.amount[4] ), text::other_esp );
            add_rounded_rect_filled( draw, origin + ImVec2{ 705.f, 136.f }, origin + ImVec2{ 737.f, 168.f }, corner_radii{ 8.f, 8.f, 8.f, 8.f }, mix_color( mix_color( theme::fill_0f0f11, theme::fill_202022, search_button.hover ), theme::fill_0d0d0f, search_button.press ) );
            draw_generated_icon( draw, origin + ImVec2{ 713.68f, 144.85f }, theme::icon_87878c, icons::search_glyph );
            if ( category_bar.amount[4] > 0.001f )
            {
                add_rounded_rect_filled( draw, origin + ImVec2{ 33.f, 176.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 262.f, 659.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, corner_radii{ 7.f, 7.f, 7.f, 7.f }, fade( theme::fill_0f0f11, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ) );
                draw_glyph_run( draw, text_fonts::dm_sans_9pt_500_13_5, origin + ImVec2{ 44.83f, 179.63f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( theme::text_c3c3c5, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), text::hud_elements );
                add_rounded_rect_filled( draw, origin + ImVec2{ 45.f, 203.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 250.f, 204.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, corner_radii{ 0.f, 0.f, 0.f, 0.f }, fade( theme::fill_222226, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ) );
                add_rounded_rect_filled( draw, origin + ImVec2{ 44.f, 214.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 60.f, 230.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, corner_radii{ 4.f, 4.f, 4.f, 4.f }, fade( mix_color( mix_color( theme::fill_161618, theme::fill_ec4899, watermark.anim ), theme::fill_452134, watermark.hover * ( 1.f - watermark.anim ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ) );
                {
                    const int first_vertex = draw->VtxBuffer.Size;
                    ImGui::RenderCheckMark( draw, ( origin + ImVec2{ 0.f, 0.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) } ) + ImVec2{ 47.2f, 217.2f }, fade( IM_COL32_WHITE, watermark.anim ), 9.6f );
                    fade_vertices( draw, first_vertex, page_fade( category_bar.amount[4], category_bar.selected == 4 ) );
                }
                draw_glyph_run( draw, text_fonts::figtree_light_500_13_5, origin + ImVec2{ 68.46f, 213.08f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( mix_color( theme::color_96969c, theme::text_efeff1, ImMax( watermark.anim, watermark.hover * 0.35f ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), text::watermark );
                draw_generated_icon( draw, origin + ImVec2{ 232.f, 211.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( theme::color_96969c, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), icons::more_line_glyph );
                add_rounded_rect_filled( draw, origin + ImVec2{ 44.f, 242.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 60.f, 258.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, corner_radii{ 4.f, 4.f, 4.f, 4.f }, fade( mix_color( mix_color( theme::fill_161618, theme::fill_ec4899, keybinds.anim ), theme::fill_452134, keybinds.hover * ( 1.f - keybinds.anim ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ) );
                {
                    const int first_vertex = draw->VtxBuffer.Size;
                    ImGui::RenderCheckMark( draw, ( origin + ImVec2{ 0.f, 0.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) } ) + ImVec2{ 47.2f, 245.2f }, fade( IM_COL32_WHITE, keybinds.anim ), 9.6f );
                    fade_vertices( draw, first_vertex, page_fade( category_bar.amount[4], category_bar.selected == 4 ) );
                }
                draw_glyph_run( draw, text_fonts::figtree_light_500_13_5, origin + ImVec2{ 67.58f, 240.98f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( mix_color( theme::color_96969c, theme::text_efeff1, ImMax( keybinds.anim, keybinds.hover * 0.35f ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), text::keybinds );
                draw_generated_icon( draw, origin + ImVec2{ 232.f, 239.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( theme::color_96969c, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), icons::more_line_glyph );
                add_rounded_rect_filled( draw, origin + ImVec2{ 44.f, 270.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 60.f, 286.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, corner_radii{ 4.f, 4.f, 4.f, 4.f }, fade( mix_color( mix_color( theme::fill_161618, theme::fill_ec4899, bomb_timer.anim ), theme::fill_452134, bomb_timer.hover * ( 1.f - bomb_timer.anim ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ) );
                {
                    const int first_vertex = draw->VtxBuffer.Size;
                    ImGui::RenderCheckMark( draw, ( origin + ImVec2{ 0.f, 0.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) } ) + ImVec2{ 47.2f, 273.2f }, fade( IM_COL32_WHITE, bomb_timer.anim ), 9.6f );
                    fade_vertices( draw, first_vertex, page_fade( category_bar.amount[4], category_bar.selected == 4 ) );
                }
                draw_glyph_run( draw, text_fonts::geist_400_13_5, origin + ImVec2{ 68.22f, 268.41f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( mix_color( theme::color_96969c, theme::color_f0f0f2, ImMax( bomb_timer.anim, bomb_timer.hover * 0.35f ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), text::bomb_timer );
                draw_generated_icon( draw, origin + ImVec2{ 232.f, 267.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( theme::color_96969c, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), icons::more_line_glyph );
                add_rounded_rect_filled( draw, origin + ImVec2{ 44.f, 298.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 60.f, 314.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, corner_radii{ 4.f, 4.f, 4.f, 4.f }, fade( mix_color( mix_color( theme::fill_161618, theme::fill_ec4899, bomb_pressure.anim ), theme::fill_452134, bomb_pressure.hover * ( 1.f - bomb_pressure.anim ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ) );
                {
                    const int first_vertex = draw->VtxBuffer.Size;
                    ImGui::RenderCheckMark( draw, ( origin + ImVec2{ 0.f, 0.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) } ) + ImVec2{ 47.2f, 301.2f }, fade( IM_COL32_WHITE, bomb_pressure.anim ), 9.6f );
                    fade_vertices( draw, first_vertex, page_fade( category_bar.amount[4], category_bar.selected == 4 ) );
                }
                draw_glyph_run( draw, text_fonts::figtree_light_500_14, origin + ImVec2{ 67.6f, 296.7f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( mix_color( theme::color_96969c, theme::text_efeff1, ImMax( bomb_pressure.anim, bomb_pressure.hover * 0.35f ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), text::bomb_pressure );
                draw_generated_icon( draw, origin + ImVec2{ 232.f, 295.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( theme::color_96969c, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), icons::more_line_glyph );
                add_rounded_rect_filled( draw, origin + ImVec2{ 44.f, 326.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 60.f, 342.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, corner_radii{ 4.f, 4.f, 4.f, 4.f }, fade( mix_color( mix_color( theme::fill_161618, theme::fill_ec4899, spectator_list.anim ), theme::fill_452134, spectator_list.hover * ( 1.f - spectator_list.anim ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ) );
                {
                    const int first_vertex = draw->VtxBuffer.Size;
                    ImGui::RenderCheckMark( draw, ( origin + ImVec2{ 0.f, 0.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) } ) + ImVec2{ 47.2f, 329.2f }, fade( IM_COL32_WHITE, spectator_list.anim ), 9.6f );
                    fade_vertices( draw, first_vertex, page_fade( category_bar.amount[4], category_bar.selected == 4 ) );
                }
                draw_glyph_run( draw, text_fonts::figtree_light_500_14, origin + ImVec2{ 66.76f, 324.62f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( mix_color( theme::color_96969c, theme::text_efeff1, ImMax( spectator_list.anim, spectator_list.hover * 0.35f ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), text::spectator_list );
                draw_generated_icon( draw, origin + ImVec2{ 232.f, 323.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( theme::color_96969c, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), icons::more_line_glyph );
                add_rounded_rect_filled( draw, origin + ImVec2{ 44.f, 354.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 60.f, 370.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, corner_radii{ 4.f, 4.f, 4.f, 4.f }, fade( mix_color( mix_color( theme::fill_161618, theme::fill_ec4899, velocity.anim ), theme::fill_452134, velocity.hover * ( 1.f - velocity.anim ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ) );
                {
                    const int first_vertex = draw->VtxBuffer.Size;
                    ImGui::RenderCheckMark( draw, ( origin + ImVec2{ 0.f, 0.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) } ) + ImVec2{ 47.2f, 357.2f }, fade( IM_COL32_WHITE, velocity.anim ), 9.6f );
                    fade_vertices( draw, first_vertex, page_fade( category_bar.amount[4], category_bar.selected == 4 ) );
                }
                draw_glyph_run( draw, text_fonts::inter_400_13, origin + ImVec2{ 67.36f, 353.36f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( mix_color( theme::color_96969c, theme::text_efeff1, ImMax( velocity.anim, velocity.hover * 0.35f ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), text::velocity );
                draw_generated_icon( draw, origin + ImVec2{ 232.f, 351.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( theme::color_96969c, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), icons::more_line_glyph );
                add_rounded_rect_filled( draw, origin + ImVec2{ 44.f, 382.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 60.f, 398.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, corner_radii{ 4.f, 4.f, 4.f, 4.f }, fade( mix_color( mix_color( theme::fill_161618, theme::fill_ec4899, jump_stats.anim ), theme::fill_452134, jump_stats.hover * ( 1.f - jump_stats.anim ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ) );
                {
                    const int first_vertex = draw->VtxBuffer.Size;
                    ImGui::RenderCheckMark( draw, ( origin + ImVec2{ 0.f, 0.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) } ) + ImVec2{ 47.2f, 385.2f }, fade( IM_COL32_WHITE, jump_stats.anim ), 9.6f );
                    fade_vertices( draw, first_vertex, page_fade( category_bar.amount[4], category_bar.selected == 4 ) );
                }
                draw_glyph_run( draw, text_fonts::dm_sans_9pt_500_13_5, origin + ImVec2{ 67.56f, 380.41f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( mix_color( theme::color_96969c, theme::text_efeff1, ImMax( jump_stats.anim, jump_stats.hover * 0.35f ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), text::jump_stats );
                draw_generated_icon( draw, origin + ImVec2{ 232.f, 379.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( theme::color_96969c, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), icons::more_line_glyph );
                add_rounded_rect_filled( draw, origin + ImVec2{ 44.f, 410.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 60.f, 426.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, corner_radii{ 4.f, 4.f, 4.f, 4.f }, fade( mix_color( mix_color( theme::fill_161618, theme::fill_ec4899, radar.anim ), theme::fill_452134, radar.hover * ( 1.f - radar.anim ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ) );
                {
                    const int first_vertex = draw->VtxBuffer.Size;
                    ImGui::RenderCheckMark( draw, ( origin + ImVec2{ 0.f, 0.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) } ) + ImVec2{ 47.2f, 413.2f }, fade( IM_COL32_WHITE, radar.anim ), 9.6f );
                    fade_vertices( draw, first_vertex, page_fade( category_bar.amount[4], category_bar.selected == 4 ) );
                }
                draw_glyph_run( draw, text_fonts::figtree_light_500_13_5, origin + ImVec2{ 67.48f, 409.08f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( mix_color( theme::color_96969c, theme::text_efeff1, ImMax( radar.anim, radar.hover * 0.35f ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), text::radar );
                draw_generated_icon( draw, origin + ImVec2{ 232.f, 407.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( theme::color_96969c, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), icons::more_line_glyph );
                add_rounded_rect_filled( draw, origin + ImVec2{ 44.f, 438.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 60.f, 454.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, corner_radii{ 4.f, 4.f, 4.f, 4.f }, fade( mix_color( mix_color( theme::fill_161618, theme::fill_ec4899, danger_ranges.anim ), theme::fill_452134, danger_ranges.hover * ( 1.f - danger_ranges.anim ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ) );
                {
                    const int first_vertex = draw->VtxBuffer.Size;
                    ImGui::RenderCheckMark( draw, ( origin + ImVec2{ 0.f, 0.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) } ) + ImVec2{ 47.2f, 441.2f }, fade( IM_COL32_WHITE, danger_ranges.anim ), 9.6f );
                    fade_vertices( draw, first_vertex, page_fade( category_bar.amount[4], category_bar.selected == 4 ) );
                }
                draw_glyph_run( draw, text_fonts::figtree_light_400_14, origin + ImVec2{ 67.42f, 436.63f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( mix_color( theme::color_96969c, theme::text_efeff1, ImMax( danger_ranges.anim, danger_ranges.hover * 0.35f ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), text::danger_ranges );
                draw_generated_icon( draw, origin + ImVec2{ 232.f, 435.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( theme::color_96969c, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), icons::more_line_glyph );
                add_rounded_rect_filled( draw, origin + ImVec2{ 44.f, 466.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 60.f, 482.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, corner_radii{ 4.f, 4.f, 4.f, 4.f }, fade( mix_color( mix_color( theme::fill_161618, theme::fill_ec4899, target_info.anim ), theme::fill_452134, target_info.hover * ( 1.f - target_info.anim ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ) );
                {
                    const int first_vertex = draw->VtxBuffer.Size;
                    ImGui::RenderCheckMark( draw, ( origin + ImVec2{ 0.f, 0.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) } ) + ImVec2{ 47.2f, 469.2f }, fade( IM_COL32_WHITE, target_info.anim ), 9.6f );
                    fade_vertices( draw, first_vertex, page_fade( category_bar.amount[4], category_bar.selected == 4 ) );
                }
                draw_glyph_run( draw, text_fonts::inter_400_13, origin + ImVec2{ 67.56f, 465.44f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( mix_color( theme::color_96969c, theme::text_efeff1, ImMax( target_info.anim, target_info.hover * 0.35f ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), text::target_info );
                draw_generated_icon( draw, origin + ImVec2{ 232.f, 463.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( theme::color_96969c, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), icons::more_line_glyph );
                add_rounded_rect_filled( draw, origin + ImVec2{ 44.f, 494.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 60.f, 510.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, corner_radii{ 4.f, 4.f, 4.f, 4.f }, fade( mix_color( mix_color( theme::fill_161618, theme::fill_ec4899, round_timer.anim ), theme::fill_452134, round_timer.hover * ( 1.f - round_timer.anim ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ) );
                {
                    const int first_vertex = draw->VtxBuffer.Size;
                    ImGui::RenderCheckMark( draw, ( origin + ImVec2{ 0.f, 0.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) } ) + ImVec2{ 47.2f, 497.2f }, fade( IM_COL32_WHITE, round_timer.anim ), 9.6f );
                    fade_vertices( draw, first_vertex, page_fade( category_bar.amount[4], category_bar.selected == 4 ) );
                }
                draw_glyph_run( draw, text_fonts::inter_400_13, origin + ImVec2{ 67.99f, 493.43f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( mix_color( theme::color_96969c, theme::text_efeff1, ImMax( round_timer.anim, round_timer.hover * 0.35f ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), text::round_timer );
                draw_generated_icon( draw, origin + ImVec2{ 232.f, 491.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( theme::color_96969c, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), icons::more_line_glyph );
                add_rounded_rect_filled( draw, origin + ImVec2{ 44.f, 522.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 60.f, 538.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, corner_radii{ 4.f, 4.f, 4.f, 4.f }, fade( mix_color( mix_color( theme::fill_161618, theme::fill_ec4899, purchase_logs.anim ), theme::fill_452134, purchase_logs.hover * ( 1.f - purchase_logs.anim ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ) );
                {
                    const int first_vertex = draw->VtxBuffer.Size;
                    ImGui::RenderCheckMark( draw, ( origin + ImVec2{ 0.f, 0.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) } ) + ImVec2{ 47.2f, 525.2f }, fade( IM_COL32_WHITE, purchase_logs.anim ), 9.6f );
                    fade_vertices( draw, first_vertex, page_fade( category_bar.amount[4], category_bar.selected == 4 ) );
                }
                draw_glyph_run( draw, text_fonts::figtree_light_400_14, origin + ImVec2{ 67.52f, 520.63f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( mix_color( theme::color_96969c, theme::text_efeff1, ImMax( purchase_logs.anim, purchase_logs.hover * 0.35f ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), text::purchase_logs );
                draw_generated_icon( draw, origin + ImVec2{ 232.f, 519.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( theme::color_96969c, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), icons::more_line_glyph );
                add_rounded_rect_filled( draw, origin + ImVec2{ 44.f, 550.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 60.f, 566.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, corner_radii{ 4.f, 4.f, 4.f, 4.f }, fade( mix_color( mix_color( theme::fill_161618, theme::fill_ec4899, enemy_counter.anim ), theme::fill_452134, enemy_counter.hover * ( 1.f - enemy_counter.anim ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ) );
                {
                    const int first_vertex = draw->VtxBuffer.Size;
                    ImGui::RenderCheckMark( draw, ( origin + ImVec2{ 0.f, 0.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) } ) + ImVec2{ 47.2f, 553.2f }, fade( IM_COL32_WHITE, enemy_counter.anim ), 9.6f );
                    fade_vertices( draw, first_vertex, page_fade( category_bar.amount[4], category_bar.selected == 4 ) );
                }
                draw_glyph_run( draw, text_fonts::figtree_light_500_13_5, origin + ImVec2{ 67.62f, 548.98f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( mix_color( theme::color_96969c, theme::text_efeff1, ImMax( enemy_counter.anim, enemy_counter.hover * 0.35f ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), text::enemy_counter );
                draw_generated_icon( draw, origin + ImVec2{ 232.f, 547.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( theme::color_96969c, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), icons::more_line_glyph );
                add_rounded_rect_filled( draw, origin + ImVec2{ 44.f, 578.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 60.f, 594.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, corner_radii{ 4.f, 4.f, 4.f, 4.f }, fade( mix_color( mix_color( theme::fill_161618, theme::fill_ec4899, offscreen_indicators.anim ), theme::fill_452134, offscreen_indicators.hover * ( 1.f - offscreen_indicators.anim ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ) );
                {
                    const int first_vertex = draw->VtxBuffer.Size;
                    ImGui::RenderCheckMark( draw, ( origin + ImVec2{ 0.f, 0.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) } ) + ImVec2{ 47.2f, 581.2f }, fade( IM_COL32_WHITE, offscreen_indicators.anim ), 9.6f );
                    fade_vertices( draw, first_vertex, page_fade( category_bar.amount[4], category_bar.selected == 4 ) );
                }
                draw_glyph_run( draw, text_fonts::figtree_light_400_13_5, origin + ImVec2{ 68.44f, 577.16f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( mix_color( theme::color_96969c, theme::text_efeff1, ImMax( offscreen_indicators.anim, offscreen_indicators.hover * 0.35f ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), text::offscreen_indicators );
                draw_generated_icon( draw, origin + ImVec2{ 232.f, 575.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( theme::color_96969c, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), icons::more_line_glyph );
                add_rounded_rect_filled( draw, origin + ImVec2{ 44.f, 606.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 60.f, 622.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, corner_radii{ 4.f, 4.f, 4.f, 4.f }, fade( mix_color( mix_color( theme::fill_161618, theme::fill_ec4899, damage_panel.anim ), theme::fill_452134, damage_panel.hover * ( 1.f - damage_panel.anim ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ) );
                {
                    const int first_vertex = draw->VtxBuffer.Size;
                    ImGui::RenderCheckMark( draw, ( origin + ImVec2{ 0.f, 0.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) } ) + ImVec2{ 47.2f, 609.2f }, fade( IM_COL32_WHITE, damage_panel.anim ), 9.6f );
                    fade_vertices( draw, first_vertex, page_fade( category_bar.amount[4], category_bar.selected == 4 ) );
                }
                draw_glyph_run( draw, text_fonts::dm_sans_9pt_500_13, origin + ImVec2{ 67.54f, 604.78f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( mix_color( theme::color_96969c, theme::text_efeff1, ImMax( damage_panel.anim, damage_panel.hover * 0.35f ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), text::damage_panel );
                draw_generated_icon( draw, origin + ImVec2{ 232.f, 603.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( theme::color_96969c, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), icons::more_line_glyph );
                add_rounded_rect_filled( draw, origin + ImVec2{ 44.f, 634.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 60.f, 650.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, corner_radii{ 4.f, 4.f, 4.f, 4.f }, fade( mix_color( mix_color( theme::fill_161618, theme::fill_ec4899, movement_keys.anim ), theme::fill_452134, movement_keys.hover * ( 1.f - movement_keys.anim ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ) );
                {
                    const int first_vertex = draw->VtxBuffer.Size;
                    ImGui::RenderCheckMark( draw, ( origin + ImVec2{ 0.f, 0.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) } ) + ImVec2{ 47.2f, 637.2f }, fade( IM_COL32_WHITE, movement_keys.anim ), 9.6f );
                    fade_vertices( draw, first_vertex, page_fade( category_bar.amount[4], category_bar.selected == 4 ) );
                }
                draw_glyph_run( draw, text_fonts::figtree_light_500_13_5, origin + ImVec2{ 68.42f, 632.98f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( mix_color( theme::color_96969c, theme::text_efeff1, ImMax( movement_keys.anim, movement_keys.hover * 0.35f ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), text::movement_keys );
                draw_generated_icon( draw, origin + ImVec2{ 232.f, 631.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( theme::color_96969c, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), icons::more_line_glyph );
                add_rounded_rect_stroke( draw, origin + ImVec2{ 33.5f, 176.5f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 261.5f, 658.5f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, corner_radii{ 6.5f, 6.5f, 6.5f, 6.5f }, fade( theme::border_1a1a1d, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), 1.f );
            }
            if ( category_bar.amount[4] > 0.001f )
            {
                add_rounded_rect_filled( draw, origin + ImVec2{ 270.f, 176.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 499.f, 436.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, corner_radii{ 7.f, 7.f, 7.f, 7.f }, fade( theme::fill_0f0f11, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ) );
                draw_glyph_run( draw, text_fonts::figtree_light_500_13_5, origin + ImVec2{ 282.73f, 180.02f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( theme::text_c3c3c5, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), text::overlays );
                add_rounded_rect_filled( draw, origin + ImVec2{ 282.f, 203.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 487.f, 204.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, corner_radii{ 0.f, 0.f, 0.f, 0.f }, fade( theme::fill_222226, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ) );
                add_rounded_rect_filled( draw, origin + ImVec2{ 281.f, 214.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 297.f, 230.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, corner_radii{ 4.f, 4.f, 4.f, 4.f }, fade( mix_color( mix_color( theme::fill_161618, theme::fill_ec4899, crosshair_overlay.anim ), theme::fill_452134, crosshair_overlay.hover * ( 1.f - crosshair_overlay.anim ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ) );
                {
                    const int first_vertex = draw->VtxBuffer.Size;
                    ImGui::RenderCheckMark( draw, ( origin + ImVec2{ 0.f, 0.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) } ) + ImVec2{ 284.2f, 217.2f }, fade( IM_COL32_WHITE, crosshair_overlay.anim ), 9.6f );
                    fade_vertices( draw, first_vertex, page_fade( category_bar.amount[4], category_bar.selected == 4 ) );
                }
                draw_glyph_run( draw, text_fonts::inter_400_13, origin + ImVec2{ 305.25f, 213.37f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( mix_color( theme::color_96969c, theme::text_efeff1, ImMax( crosshair_overlay.anim, crosshair_overlay.hover * 0.35f ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), text::crosshair_overlay );
                draw_generated_icon( draw, origin + ImVec2{ 469.f, 211.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( theme::color_96969c, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), icons::more_line_glyph );
                add_rounded_rect_filled( draw, origin + ImVec2{ 281.f, 242.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 297.f, 258.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, corner_radii{ 4.f, 4.f, 4.f, 4.f }, fade( mix_color( mix_color( theme::fill_161618, theme::fill_ec4899, scope_overlay.anim ), theme::fill_452134, scope_overlay.hover * ( 1.f - scope_overlay.anim ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ) );
                {
                    const int first_vertex = draw->VtxBuffer.Size;
                    ImGui::RenderCheckMark( draw, ( origin + ImVec2{ 0.f, 0.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) } ) + ImVec2{ 284.2f, 245.2f }, fade( IM_COL32_WHITE, scope_overlay.anim ), 9.6f );
                    fade_vertices( draw, first_vertex, page_fade( category_bar.amount[4], category_bar.selected == 4 ) );
                }
                draw_glyph_run( draw, text_fonts::dm_sans_9pt_400_13_5, origin + ImVec2{ 304.25f, 240.56f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( mix_color( theme::color_96969c, theme::text_efeff1, ImMax( scope_overlay.anim, scope_overlay.hover * 0.35f ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), text::scope_overlay );
                draw_generated_icon( draw, origin + ImVec2{ 469.f, 239.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( theme::color_96969c, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), icons::more_line_glyph );
                add_rounded_rect_filled( draw, origin + ImVec2{ 281.f, 270.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 297.f, 286.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, corner_radii{ 4.f, 4.f, 4.f, 4.f }, fade( mix_color( mix_color( theme::fill_161618, theme::fill_ec4899, grenade_proximity.anim ), theme::fill_452134, grenade_proximity.hover * ( 1.f - grenade_proximity.anim ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ) );
                {
                    const int first_vertex = draw->VtxBuffer.Size;
                    ImGui::RenderCheckMark( draw, ( origin + ImVec2{ 0.f, 0.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) } ) + ImVec2{ 284.2f, 273.2f }, fade( IM_COL32_WHITE, grenade_proximity.anim ), 9.6f );
                    fade_vertices( draw, first_vertex, page_fade( category_bar.amount[4], category_bar.selected == 4 ) );
                }
                draw_glyph_run( draw, text_fonts::inter_500_13, origin + ImVec2{ 305.14f, 269.44f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( mix_color( theme::color_96969c, theme::text_efeff1, ImMax( grenade_proximity.anim, grenade_proximity.hover * 0.35f ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), text::grenade_proximity );
                draw_generated_icon( draw, origin + ImVec2{ 469.f, 267.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( theme::color_96969c, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), icons::more_line_glyph );
                add_rounded_rect_filled( draw, origin + ImVec2{ 281.f, 298.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 297.f, 314.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, corner_radii{ 4.f, 4.f, 4.f, 4.f }, fade( mix_color( mix_color( theme::fill_161618, theme::fill_ec4899, last_second_defuse.anim ), theme::fill_452134, last_second_defuse.hover * ( 1.f - last_second_defuse.anim ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ) );
                {
                    const int first_vertex = draw->VtxBuffer.Size;
                    ImGui::RenderCheckMark( draw, ( origin + ImVec2{ 0.f, 0.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) } ) + ImVec2{ 284.2f, 301.2f }, fade( IM_COL32_WHITE, last_second_defuse.anim ), 9.6f );
                    fade_vertices( draw, first_vertex, page_fade( category_bar.amount[4], category_bar.selected == 4 ) );
                }
                draw_glyph_run( draw, text_fonts::dm_sans_9pt_500_13_5, origin + ImVec2{ 304.84f, 296.64f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( mix_color( theme::color_96969c, theme::text_efeff1, ImMax( last_second_defuse.anim, last_second_defuse.hover * 0.35f ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), text::last_second_defuse );
                draw_generated_icon( draw, origin + ImVec2{ 469.f, 295.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( theme::color_96969c, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), icons::more_line_glyph );
                add_rounded_rect_filled( draw, origin + ImVec2{ 281.f, 326.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 297.f, 342.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, corner_radii{ 4.f, 4.f, 4.f, 4.f }, fade( mix_color( mix_color( theme::fill_161618, theme::fill_ec4899, zeus_range.anim ), theme::fill_452134, zeus_range.hover * ( 1.f - zeus_range.anim ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ) );
                {
                    const int first_vertex = draw->VtxBuffer.Size;
                    ImGui::RenderCheckMark( draw, ( origin + ImVec2{ 0.f, 0.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) } ) + ImVec2{ 284.2f, 329.2f }, fade( IM_COL32_WHITE, zeus_range.anim ), 9.6f );
                    fade_vertices( draw, first_vertex, page_fade( category_bar.amount[4], category_bar.selected == 4 ) );
                }
                draw_glyph_run( draw, text_fonts::dm_sans_9pt_500_13_5, origin + ImVec2{ 305.31f, 324.51f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( mix_color( theme::color_96969c, theme::text_efeff1, ImMax( zeus_range.anim, zeus_range.hover * 0.35f ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), text::zeus_range );
                draw_generated_icon( draw, origin + ImVec2{ 469.f, 323.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( theme::color_96969c, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), icons::more_line_glyph );
                add_rounded_rect_filled( draw, origin + ImVec2{ 281.f, 354.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 297.f, 370.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, corner_radii{ 4.f, 4.f, 4.f, 4.f }, fade( mix_color( mix_color( theme::fill_161618, theme::fill_ec4899, hat.anim ), theme::fill_452134, hat.hover * ( 1.f - hat.anim ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ) );
                {
                    const int first_vertex = draw->VtxBuffer.Size;
                    ImGui::RenderCheckMark( draw, ( origin + ImVec2{ 0.f, 0.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) } ) + ImVec2{ 284.2f, 357.2f }, fade( IM_COL32_WHITE, hat.anim ), 9.6f );
                    fade_vertices( draw, first_vertex, page_fade( category_bar.amount[4], category_bar.selected == 4 ) );
                }
                draw_glyph_run( draw, text_fonts::figtree_light_500_13_5, origin + ImVec2{ 304.26f, 353.08f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( mix_color( theme::color_96969c, theme::text_efeff1, ImMax( hat.anim, hat.hover * 0.35f ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), text::hat );
                draw_generated_icon( draw, origin + ImVec2{ 469.f, 351.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( theme::color_96969c, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), icons::more_line_glyph );
                add_rounded_rect_filled( draw, origin + ImVec2{ 281.f, 382.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 297.f, 398.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, corner_radii{ 4.f, 4.f, 4.f, 4.f }, fade( mix_color( mix_color( theme::fill_161618, theme::fill_ec4899, strafe_visualizer.anim ), theme::fill_452134, strafe_visualizer.hover * ( 1.f - strafe_visualizer.anim ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ) );
                {
                    const int first_vertex = draw->VtxBuffer.Size;
                    ImGui::RenderCheckMark( draw, ( origin + ImVec2{ 0.f, 0.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) } ) + ImVec2{ 284.2f, 385.2f }, fade( IM_COL32_WHITE, strafe_visualizer.anim ), 9.6f );
                    fade_vertices( draw, first_vertex, page_fade( category_bar.amount[4], category_bar.selected == 4 ) );
                }
                draw_glyph_run( draw, text_fonts::figtree_light_500_14, origin + ImVec2{ 304.3f, 380.61f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( mix_color( theme::color_96969c, theme::text_efeff1, ImMax( strafe_visualizer.anim, strafe_visualizer.hover * 0.35f ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), text::strafe_visualizer );
                draw_generated_icon( draw, origin + ImVec2{ 469.f, 379.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( theme::color_96969c, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), icons::more_line_glyph );
                add_rounded_rect_filled( draw, origin + ImVec2{ 281.f, 410.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 297.f, 426.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, corner_radii{ 4.f, 4.f, 4.f, 4.f }, fade( mix_color( mix_color( theme::fill_161618, theme::fill_ec4899, strafe_sync.anim ), theme::fill_452134, strafe_sync.hover * ( 1.f - strafe_sync.anim ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ) );
                {
                    const int first_vertex = draw->VtxBuffer.Size;
                    ImGui::RenderCheckMark( draw, ( origin + ImVec2{ 0.f, 0.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) } ) + ImVec2{ 284.2f, 413.2f }, fade( IM_COL32_WHITE, strafe_sync.anim ), 9.6f );
                    fade_vertices( draw, first_vertex, page_fade( category_bar.amount[4], category_bar.selected == 4 ) );
                }
                draw_glyph_run( draw, text_fonts::figtree_light_500_13_5, origin + ImVec2{ 304.48f, 409.05f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( mix_color( theme::color_96969c, theme::text_efeff1, ImMax( strafe_sync.anim, strafe_sync.hover * 0.35f ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), text::strafe_sync );
                draw_generated_icon( draw, origin + ImVec2{ 469.f, 407.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( theme::color_96969c, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), icons::more_line_glyph );
                add_rounded_rect_stroke( draw, origin + ImVec2{ 270.5f, 176.5f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 498.5f, 435.5f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, corner_radii{ 6.5f, 6.5f, 6.5f, 6.5f }, fade( theme::border_1a1a1d, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), 1.f );
            }
            if ( category_bar.amount[4] > 0.001f )
            {
                add_rounded_rect_filled( draw, origin + ImVec2{ 507.f, 176.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 736.f, 296.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, corner_radii{ 7.f, 7.f, 7.f, 7.f }, fade( theme::fill_0f0f11, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ) );
                draw_glyph_run( draw, text_fonts::inter_500_13, origin + ImVec2{ 518.85f, 180.39f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( theme::text_c3c3c5, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), text::camera );
                add_rounded_rect_filled( draw, origin + ImVec2{ 519.f, 203.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 724.f, 204.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, corner_radii{ 0.f, 0.f, 0.f, 0.f }, fade( theme::fill_222226, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ) );
                add_rounded_rect_filled( draw, origin + ImVec2{ 518.f, 214.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 534.f, 230.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, corner_radii{ 4.f, 4.f, 4.f, 4.f }, fade( mix_color( mix_color( theme::fill_161618, theme::fill_ec4899, custom_fov.anim ), theme::fill_452134, custom_fov.hover * ( 1.f - custom_fov.anim ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ) );
                {
                    const int first_vertex = draw->VtxBuffer.Size;
                    ImGui::RenderCheckMark( draw, ( origin + ImVec2{ 0.f, 0.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) } ) + ImVec2{ 521.2f, 217.2f }, fade( IM_COL32_WHITE, custom_fov.anim ), 9.6f );
                    fade_vertices( draw, first_vertex, page_fade( category_bar.amount[4], category_bar.selected == 4 ) );
                }
                draw_glyph_run( draw, text_fonts::figtree_light_500_13_5, origin + ImVec2{ 541.88f, 212.94f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( mix_color( theme::color_96969c, theme::text_efeff1, ImMax( custom_fov.anim, custom_fov.hover * 0.35f ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), text::custom_fov );
                draw_generated_icon( draw, origin + ImVec2{ 706.f, 211.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( theme::color_96969c, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), icons::more_line_glyph );
                add_rounded_rect_filled( draw, origin + ImVec2{ 518.f, 242.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 534.f, 258.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, corner_radii{ 4.f, 4.f, 4.f, 4.f }, fade( mix_color( mix_color( theme::fill_161618, theme::fill_ec4899, thirdperson_x.anim ), theme::fill_452134, thirdperson_x.hover * ( 1.f - thirdperson_x.anim ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ) );
                {
                    const int first_vertex = draw->VtxBuffer.Size;
                    ImGui::RenderCheckMark( draw, ( origin + ImVec2{ 0.f, 0.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) } ) + ImVec2{ 521.2f, 245.2f }, fade( IM_COL32_WHITE, thirdperson_x.anim ), 9.6f );
                    fade_vertices( draw, first_vertex, page_fade( category_bar.amount[4], category_bar.selected == 4 ) );
                }
                draw_glyph_run( draw, text_fonts::dm_sans_9pt_400_15, origin + ImVec2{ 542.2f, 239.4f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( mix_color( theme::color_96969c, theme::text_efeff1, ImMax( thirdperson_x.anim, thirdperson_x.hover * 0.35f ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), text::thirdperson_x );
                draw_generated_icon( draw, origin + ImVec2{ 706.f, 239.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( theme::color_96969c, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), icons::more_line_glyph );
                add_rounded_rect_filled( draw, origin + ImVec2{ 518.f, 270.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 534.f, 286.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, corner_radii{ 4.f, 4.f, 4.f, 4.f }, fade( mix_color( mix_color( theme::fill_161618, theme::fill_ec4899, aspect_ratio.anim ), theme::fill_452134, aspect_ratio.hover * ( 1.f - aspect_ratio.anim ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ) );
                {
                    const int first_vertex = draw->VtxBuffer.Size;
                    ImGui::RenderCheckMark( draw, ( origin + ImVec2{ 0.f, 0.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) } ) + ImVec2{ 521.2f, 273.2f }, fade( IM_COL32_WHITE, aspect_ratio.anim ), 9.6f );
                    fade_vertices( draw, first_vertex, page_fade( category_bar.amount[4], category_bar.selected == 4 ) );
                }
                draw_glyph_run( draw, text_fonts::dm_sans_9pt_500_13_5, origin + ImVec2{ 540.36f, 268.58f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( mix_color( theme::color_96969c, theme::text_efeff1, ImMax( aspect_ratio.anim, aspect_ratio.hover * 0.35f ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), text::aspect_ratio );
                draw_generated_icon( draw, origin + ImVec2{ 706.f, 267.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( theme::color_96969c, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), icons::more_line_glyph );
                add_rounded_rect_stroke( draw, origin + ImVec2{ 507.5f, 176.5f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 735.5f, 295.5f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, corner_radii{ 6.5f, 6.5f, 6.5f, 6.5f }, fade( theme::border_1a1a1d, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), 1.f );
            }
            if ( category_bar.amount[4] > 0.001f )
            {
                add_rounded_rect_filled( draw, origin + ImVec2{ 507.f, 308.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 730.f, 428.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, corner_radii{ 7.f, 7.f, 7.f, 7.f }, fade( theme::fill_0f0f11, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ) );
                draw_glyph_run( draw, text_fonts::geist_500_13_5, origin + ImVec2{ 518.2f, 311.46f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( theme::text_c3c3c5, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), text::viewmodel );
                add_rounded_rect_filled( draw, origin + ImVec2{ 519.f, 335.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 724.f, 336.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, corner_radii{ 0.f, 0.f, 0.f, 0.f }, fade( theme::fill_222226, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ) );
                add_rounded_rect_filled( draw, origin + ImVec2{ 518.f, 346.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 534.f, 362.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, corner_radii{ 4.f, 4.f, 4.f, 4.f }, fade( mix_color( mix_color( theme::fill_161618, theme::fill_ec4899, viewmodel_fov.anim ), theme::fill_452134, viewmodel_fov.hover * ( 1.f - viewmodel_fov.anim ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ) );
                {
                    const int first_vertex = draw->VtxBuffer.Size;
                    ImGui::RenderCheckMark( draw, ( origin + ImVec2{ 0.f, 0.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) } ) + ImVec2{ 521.2f, 349.2f }, fade( IM_COL32_WHITE, viewmodel_fov.anim ), 9.6f );
                    fade_vertices( draw, first_vertex, page_fade( category_bar.amount[4], category_bar.selected == 4 ) );
                }
                draw_glyph_run( draw, text_fonts::inter_500_13, origin + ImVec2{ 540.56f, 345.53f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( mix_color( theme::color_96969c, theme::text_efeff1, ImMax( viewmodel_fov.anim, viewmodel_fov.hover * 0.35f ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), text::viewmodel_fov );
                draw_generated_icon( draw, origin + ImVec2{ 706.f, 343.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( theme::color_96969c, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), icons::more_line_glyph );
                add_rounded_rect_filled( draw, origin + ImVec2{ 518.f, 374.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 534.f, 390.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, corner_radii{ 4.f, 4.f, 4.f, 4.f }, fade( mix_color( mix_color( theme::fill_161618, theme::fill_ec4899, viewmodel_position.anim ), theme::fill_452134, viewmodel_position.hover * ( 1.f - viewmodel_position.anim ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ) );
                {
                    const int first_vertex = draw->VtxBuffer.Size;
                    ImGui::RenderCheckMark( draw, ( origin + ImVec2{ 0.f, 0.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) } ) + ImVec2{ 521.2f, 377.2f }, fade( IM_COL32_WHITE, viewmodel_position.anim ), 9.6f );
                    fade_vertices( draw, first_vertex, page_fade( category_bar.amount[4], category_bar.selected == 4 ) );
                }
                draw_glyph_run( draw, text_fonts::inter_400_13, origin + ImVec2{ 541.2f, 373.43f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( mix_color( theme::color_96969c, theme::text_efeff1, ImMax( viewmodel_position.anim, viewmodel_position.hover * 0.35f ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), text::viewmodel_position );
                draw_generated_icon( draw, origin + ImVec2{ 706.f, 371.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( theme::color_96969c, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), icons::more_line_glyph );
                add_rounded_rect_filled( draw, origin + ImVec2{ 518.f, 402.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 534.f, 418.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, corner_radii{ 4.f, 4.f, 4.f, 4.f }, fade( mix_color( mix_color( theme::fill_161618, theme::fill_ec4899, no_hand_movement.anim ), theme::fill_452134, no_hand_movement.hover * ( 1.f - no_hand_movement.anim ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ) );
                {
                    const int first_vertex = draw->VtxBuffer.Size;
                    ImGui::RenderCheckMark( draw, ( origin + ImVec2{ 0.f, 0.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) } ) + ImVec2{ 521.2f, 405.2f }, fade( IM_COL32_WHITE, no_hand_movement.anim ), 9.6f );
                    fade_vertices( draw, first_vertex, page_fade( category_bar.amount[4], category_bar.selected == 4 ) );
                }
                draw_glyph_run( draw, text_fonts::dm_sans_9pt_500_13_5, origin + ImVec2{ 541.87f, 400.56f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( mix_color( theme::color_96969c, theme::text_efeff1, ImMax( no_hand_movement.anim, no_hand_movement.hover * 0.35f ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), text::no_hand_movement );
                draw_image( draw, 9, origin + ImVec2{ 707.f, 407.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 724.f, 412.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, ImVec2{ 0.f, 0.f }, ImVec2{ 1.f, 1.f }, corner_radii{ 0.f, 0.f, 0.f, 0.f }, fade( IM_COL32_WHITE, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ) );
                add_rounded_rect_stroke( draw, origin + ImVec2{ 507.5f, 308.5f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 729.5f, 427.5f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, corner_radii{ 6.5f, 6.5f, 6.5f, 6.5f }, fade( theme::border_1a1a1d, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), 1.f );
            }
            if ( category_bar.amount[4] > 0.001f )
            {
                add_rounded_rect_filled( draw, origin + ImVec2{ 507.f, 440.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 730.f, 504.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, corner_radii{ 7.f, 7.f, 7.f, 7.f }, fade( theme::fill_0f0f11, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ) );
                draw_glyph_run( draw, text_fonts::figtree_light_500_13_5, origin + ImVec2{ 518.82f, 444.08f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( theme::text_c3c3c5, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), text::removals );
                add_rounded_rect_filled( draw, origin + ImVec2{ 519.f, 467.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 724.f, 468.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, corner_radii{ 0.f, 0.f, 0.f, 0.f }, fade( theme::fill_222226, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ) );
                add_rounded_rect_filled( draw, origin + ImVec2{ 518.f, 478.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 534.f, 494.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, corner_radii{ 4.f, 4.f, 4.f, 4.f }, fade( mix_color( mix_color( theme::fill_161618, theme::fill_ec4899, removals.anim ), theme::fill_452134, removals.hover * ( 1.f - removals.anim ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ) );
                {
                    const int first_vertex = draw->VtxBuffer.Size;
                    ImGui::RenderCheckMark( draw, ( origin + ImVec2{ 0.f, 0.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) } ) + ImVec2{ 521.2f, 481.2f }, fade( IM_COL32_WHITE, removals.anim ), 9.6f );
                    fade_vertices( draw, first_vertex, page_fade( category_bar.amount[4], category_bar.selected == 4 ) );
                }
                draw_glyph_run( draw, text_fonts::figtree_light_500_13_5, origin + ImVec2{ 541.82f, 477.08f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( mix_color( theme::color_96969c, theme::text_efeff1, ImMax( removals.anim, removals.hover * 0.35f ) ), page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), text::removals_2 );
                draw_generated_icon( draw, origin + ImVec2{ 706.f, 475.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, fade( theme::color_96969c, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), icons::more_line_glyph );
                add_rounded_rect_stroke( draw, origin + ImVec2{ 507.5f, 440.5f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 729.5f, 503.5f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, corner_radii{ 6.5f, 6.5f, 6.5f, 6.5f }, fade( theme::border_1a1a1d, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ), 1.f );
            }
            if ( category_bar.amount[4] > 0.001f )
            {
                add_rounded_rect_filled( draw, origin + ImVec2{ 728.35f, 178.61f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 734.f, 655.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, corner_radii{ 2.825f, 2.825f, 2.825f, 2.825f }, fade( theme::fill_4c2038, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ) );
            }
            if ( category_bar.amount[4] > 0.001f )
            {
                add_rounded_rect_filled( draw, origin + ImVec2{ 728.55f, 179.51f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 733.f, 427.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, corner_radii{ 2.f, 2.f, 2.f, 2.f }, fade( theme::fill_4c2038, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ) );
            }
            add_rounded_rect_filled( draw, origin + ImVec2{ 25.f, 26.f }, origin + ImVec2{ 745.f, 68.f }, corner_radii{ 0.f, 0.f, 0.f, 0.f }, mix_color( theme::color_070708, theme::fill_131314, ImMax( combo_header.anim, combo_header.hover ) ) );
            draw_glyph_run( draw, text_fonts::inter_700_15, origin + ImVec2{ 38.96f, 38.35f }, theme::color_f0f0f2, text::unrivaled );
            if ( combo_header.selected == 0 ) draw_glyph_run( draw, text_fonts::dm_sans_9pt_400_12, origin + ImVec2{ 140.58f, 39.1f }, theme::color_929298, text::visuals_other_esp );
            if ( combo_header.selected != 0 ) draw_text_line( draw, text_fonts::dm_sans_9pt_400_12, origin + ImVec2{ 140.58f, 51.f }, 0, theme::color_929298, combo_header_options[combo_header.selected] );
            add_rounded_rect_filled( draw, origin + ImVec2{ 593.f, 35.f }, origin + ImVec2{ 703.f, 61.f }, corner_radii{ 5.f, 5.f, 5.f, 5.f }, theme::fill_0f0f11 );
            draw_glyph_run( draw, text_fonts::dm_sans_9pt_500_10, origin + ImVec2{ 603.01f, 40.07f }, theme::text_bfbfc1, text::furiolko );
            draw_glyph_run( draw, text_fonts::dm_sans_9pt_500_10, origin + ImVec2{ 645.03f, 40.05f }, theme::text_79797f, text::premium );
            add_rounded_rect_stroke( draw, origin + ImVec2{ 593.5f, 35.5f }, origin + ImVec2{ 702.5f, 60.5f }, corner_radii{ 4.5f, 4.5f, 4.5f, 4.5f }, theme::border_1a1a1d, 1.f );
            {
                const int first_vertex = draw->VtxBuffer.Size;
                draw_generated_icon( draw, origin + ImVec2{ 716.8f, 40.8f }, theme::icon_87878c, icons::sun_line_glyph );
                rotate_vertices( draw, first_vertex, origin + ImVec2{ 724.f, 48.f }, combo_header.anim * IM_PI );
            }
            add_rounded_rect_filled( draw, origin + ImVec2{ 33.f, 69.f }, origin + ImVec2{ 737.f, 70.38f }, corner_radii{ 0.f, 0.f, 0.f, 0.f }, theme::fill_1b1b1e );
            add_rounded_rect_stroke( draw, origin + ImVec2{ 25.5f, 70.5f }, origin + ImVec2{ 744.5f, 665.86f }, corner_radii{ 3.5f, 3.5f, 3.5f, 3.5f }, theme::border_18181b, 1.f );
        }

        void draw_picture_detail( ImDrawList* draw, ImVec2 origin )
        {
            draw_image( draw, 10, origin + ImVec2{ 514.f, 664.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 576.f, 670.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, ImVec2{ 0.f, 0.f }, ImVec2{ 1.f, 1.f }, corner_radii{ 0.f, 0.f, 0.f, 0.f }, fade( IM_COL32_WHITE, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ) );
        }

        void draw_picture_detail_2( ImDrawList* draw, ImVec2 origin )
        {
            draw_image( draw, 11, origin + ImVec2{ 477.f, 664.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 497.f, 670.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, ImVec2{ 0.f, 0.f }, ImVec2{ 1.f, 1.f }, corner_radii{ 0.f, 0.f, 0.f, 0.f }, fade( IM_COL32_WHITE, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ) );
        }

        void draw_picture_detail_3( ImDrawList* draw, ImVec2 origin )
        {
            draw_image( draw, 12, origin + ImVec2{ 618.f, 659.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 748.f, 673.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, ImVec2{ 0.f, 0.f }, ImVec2{ 1.f, 1.f }, corner_radii{ 0.f, 0.f, 0.f, 0.f }, fade( IM_COL32_WHITE, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ) );
        }

        void draw_picture_detail_4( ImDrawList* draw, ImVec2 origin )
        {
            draw_image( draw, 13, origin + ImVec2{ 22.f, 659.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 458.f, 673.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, ImVec2{ 0.f, 0.f }, ImVec2{ 1.f, 1.f }, corner_radii{ 0.f, 0.f, 0.f, 0.f }, fade( IM_COL32_WHITE, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ) );
        }

        void draw_picture_detail_5( ImDrawList* draw, ImVec2 origin )
        {
            draw_image( draw, 14, origin + ImVec2{ 21.f, 514.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, origin + ImVec2{ 26.f, 530.f + page_rise( category_bar.amount[4], category_bar.selected == 4 ) }, ImVec2{ 0.f, 0.f }, ImVec2{ 1.f, 1.f }, corner_radii{ 0.f, 0.f, 0.f, 0.f }, fade( IM_COL32_WHITE, page_fade( category_bar.amount[4], category_bar.selected == 4 ) ) );
        }

        void draw_picture_detail_6( ImDrawList* draw, ImVec2 origin )
        {
            draw_image( draw, 15, origin + ImVec2{ 23.f, 66.f }, origin + ImVec2{ 468.f, 71.f }, ImVec2{ 0.f, 0.f }, ImVec2{ 1.f, 1.f }, corner_radii{ 0.f, 0.f, 0.f, 0.f }, IM_COL32_WHITE );
        }

        void draw_frame( ImDrawList* draw, ImVec2 origin )
        {
            add_rounded_rect_filled( draw, origin, origin + ImVec2{ 769.f, 690.f }, corner_radii{ 0.f, 0.f, 0.f, 0.f }, theme::fill_77777a );
            draw->PushClipRect( origin, origin + ImVec2{ 769.f, 690.f }, true );
                draw_top_bar( draw, origin );
                if ( category_bar.amount[4] > 0.001f )
                {
                    draw_picture_detail( draw, origin );
                    draw_picture_detail_2( draw, origin );
                    draw_picture_detail_3( draw, origin );
                    draw_picture_detail_4( draw, origin );
                    draw_picture_detail_5( draw, origin );
                }
                draw_picture_detail_6( draw, origin );
            draw->PopClipRect( );
        }

        void draw_overlays( ImVec2 origin )
        {
            draw_combo_popup( ImGui::GetForegroundDrawList( ), unrivaled, origin + ImVec2{ 32.f, 77.f }, origin + ImVec2{ 738.f, 129.f }, unrivaled_options, text_fonts::inter_400_12_5, 16.75f, 40.97f, 9.f, theme::color_070708, theme::color_171719, theme::color_909096, theme::color_f0f0f2 );
            draw_combo_popup( ImGui::GetForegroundDrawList( ), combo_header, origin + ImVec2{ 25.f, 26.f }, origin + ImVec2{ 745.f, 68.f }, combo_header_options, text_fonts::dm_sans_9pt_400_12, 115.58f, 25.f, 0.f, theme::color_070708, theme::list_ffffff_14, theme::color_929298, theme::list_d3d3d6 );
        }
    }

    ImVec2 frame_size( )
    {
        return ImVec2{ theme::frame_width, theme::frame_height };
    }

    void render( )
    {
        load_images( );
        set_graphics( lazyui::app.device, lazyui::app.swap_chain );

        const ImVec2 display = ImGui::GetIO( ).DisplaySize;
        const ImVec2 size = frame_size( );
        const ImVec2 centered = ImFloor( ( display - size ) * 0.5f );
        const ImVec2 position = ImFloor( ImClamp( centered + window_drag.offset, ImMin( centered, ImVec2{ 0.f, 0.f } ), ImMax( ImMax( display - size, ImVec2{ 0.f, 0.f } ), centered ) ) );
        window_drag.offset = position - centered;
        ImGui::SetNextWindowPos( position );
        ImGui::SetNextWindowSize( size );
        ImGui::PushStyleVar( ImGuiStyleVar_WindowPadding, ImVec2{ 0.f, 0.f } );
        ImGui::PushStyleVar( ImGuiStyleVar_WindowBorderSize, 0.f );
        ImGui::PushStyleVar( ImGuiStyleVar_WindowRounding, 0.f );
        ImGui::Begin( "Maybach_gh", nullptr, window_flags );
        ImDrawList* draw = ImGui::GetWindowDrawList( );
        const ImVec2 origin = ImGui::GetWindowPos( );
        update_controls( origin );
        draw_frame( draw, origin );
        draw_overlays( origin );
        update_window_drag( pointer.claimed || pointer.popup_open, false );
        ImGui::End( );
        ImGui::PopStyleVar( 3 );
    }
}

bool lazyui::image_texture( std::size_t index, texture_handle& texture )
{
    if ( index >= figma_generated::images.size( ) || !figma_generated::images[index].ready( ) )
        return false;
    texture = figma_generated::images[index];
    return true;
}

void lazyui::framework_blur( ImDrawList* draw, ImVec2 min, ImVec2 max, const corner_radii& radii )
{
    if ( figma_generated::ensure_framework_blur( ) )
        figma_generated::framework_blur_effect.draw( draw, min, max, radii.top_left, radii.top_right, radii.bottom_right, radii.bottom_left );
}

void lazyui::close_window( )
{
    ::PostMessageW( lazyui::app.window, WM_CLOSE, 0, 0 );
}

void lazyui::minimize_window( )
{
    ::ShowWindow( lazyui::app.window, SW_MINIMIZE );
}

void lazyui::resize_window( ImVec2 )
{
}
