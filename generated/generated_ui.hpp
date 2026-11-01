#pragma once

#ifndef IMGUI_DEFINE_MATH_OPERATORS
#define IMGUI_DEFINE_MATH_OPERATORS
#endif

#include <imgui.h>
#include "generated_fonts.hpp"
#include "lazyui_runtime.hpp"

namespace figma_generated
{
    ImVec2 frame_size( );
    void render( );

    namespace controls
    {
        extern lazyui::switch_state watermark;
        extern lazyui::switch_state keybinds;
        extern lazyui::switch_state bomb_timer;
        extern lazyui::switch_state bomb_pressure;
        extern lazyui::switch_state spectator_list;
        extern lazyui::switch_state velocity;
        extern lazyui::switch_state jump_stats;
        extern lazyui::switch_state radar;
        extern lazyui::switch_state danger_ranges;
        extern lazyui::switch_state target_info;
        extern lazyui::switch_state round_timer;
        extern lazyui::switch_state purchase_logs;
        extern lazyui::switch_state enemy_counter;
        extern lazyui::switch_state offscreen_indicators;
        extern lazyui::switch_state damage_panel;
        extern lazyui::switch_state movement_keys;
        extern lazyui::switch_state crosshair_overlay;
        extern lazyui::switch_state scope_overlay;
        extern lazyui::switch_state grenade_proximity;
        extern lazyui::switch_state last_second_defuse;
        extern lazyui::switch_state zeus_range;
        extern lazyui::switch_state hat;
        extern lazyui::switch_state strafe_visualizer;
        extern lazyui::switch_state strafe_sync;
        extern lazyui::switch_state custom_fov;
        extern lazyui::switch_state thirdperson_x;
        extern lazyui::switch_state aspect_ratio;
        extern lazyui::switch_state viewmodel_fov;
        extern lazyui::switch_state viewmodel_position;
        extern lazyui::switch_state no_hand_movement;
        extern lazyui::switch_state removals;
        extern lazyui::combo_state unrivaled;
        extern lazyui::combo_state combo_header;
        extern lazyui::selection_state< 5 > category_bar;
        extern lazyui::button_state search_button;
    }
}
