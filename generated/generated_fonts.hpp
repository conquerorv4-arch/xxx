#pragma once

#ifndef IMGUI_DEFINE_MATH_OPERATORS
#define IMGUI_DEFINE_MATH_OPERATORS
#endif

#include <imgui.h>

namespace figma_generated
{
    struct text_glyph
    {
        unsigned int codepoint;
        float x;
        float baseline;
    };

    bool setup_generated_fonts( );
    void reset_generated_fonts( );
    bool generated_fonts_ready( );

    void draw_glyph_run( ImDrawList* draw, int slot, ImVec2 origin, ImU32 color, const text_glyph* glyphs, int count );

    template < int count >
    void draw_glyph_run( ImDrawList* draw, int slot, ImVec2 origin, ImU32 color, const text_glyph ( &glyphs )[count] )
    {
        draw_glyph_run( draw, slot, origin, color, glyphs, count );
    }

    void draw_text_box( ImDrawList* draw, int slot, ImVec2 min, ImVec2 max, int horizontal, int vertical, ImU32 color, const char* text );
    void draw_text_line( ImDrawList* draw, int slot, ImVec2 anchor, int align, ImU32 color, const char* text );
    void draw_generated_icon( ImDrawList* draw, ImVec2 position, ImU32 color, const char* glyph );

    ImFont* generated_font( int slot );
    float generated_font_size( int slot );
    float generated_font_ascent( int slot );

    namespace text_fonts
    {
        inline constexpr int inter_400_12_5 = 0;
        inline constexpr int inter_400_13 = 1;
        inline constexpr int figtree_light_500_13_5 = 2;
        inline constexpr int figtree_light_500_14 = 3;
        inline constexpr int inter_500_13 = 4;
        inline constexpr int dm_sans_9pt_500_10 = 5;
        inline constexpr int dm_sans_9pt_500_13 = 6;
        inline constexpr int dm_sans_9pt_500_13_5 = 7;
        inline constexpr int geist_400_13_5 = 8;
        inline constexpr int figtree_light_400_13_5 = 9;
        inline constexpr int figtree_light_400_14 = 10;
        inline constexpr int dm_sans_9pt_400_12 = 11;
        inline constexpr int dm_sans_9pt_400_13_5 = 12;
        inline constexpr int dm_sans_9pt_400_15 = 13;
        inline constexpr int geist_500_13_5 = 14;
        inline constexpr int inter_700_15 = 15;
    }

    namespace icons
    {
        extern const char settings_bold_duotone_layer1_glyph[];
        extern const char settings_bold_duotone_layer2_glyph[];
        extern const char target_line_duotone_layer1_glyph[];
        extern const char target_line_duotone_layer2_glyph[];
        extern const char target_line_duotone_layer3_glyph[];
        extern const char target_glyph[];
        extern const char user_glyph[];
        extern const char globe_glyph[];
        extern const char sliders_horizontal_glyph[];
        extern const char timer_glyph[];
        extern const char search_glyph[];
        extern const char more_line_glyph[];
        extern const char sun_line_glyph[];
    }
}
