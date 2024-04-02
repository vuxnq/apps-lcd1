#include "lcd_lib.h"

// Simple graphic interface

struct Point2D {
    int32_t x, y;
};

struct RGB {
    uint8_t r, g, b;
};

struct Pixel {
    Point2D m_pos;               // Position of Pixel
    RGB m_fg_color, m_bg_color;  // foreground and background color
};

struct Circle {
    Point2D m_center;            // Center of circle
    int32_t m_radius;            // Radius of circle
    RGB m_fg_color, m_bg_color;  // foreground and background color
};

struct Character {
    Point2D m_pos;               // position of character
    char m_character;            // character
    RGB m_fg_color, m_bg_color;  // foreground and background color
};

struct Line {
    Point2D m_pos1, m_pos2;      // the first and the last point of line
    RGB m_fg_color, m_bg_color;  // foreground and background color
};

// IMPLEMENT!
uint16_t convert_RGB888_to_RGB565(RGB t_color) { return 0x07E0; /* green color */ }

// swap foreground and backgroud colors
void pixel_swap_fg_bg_color(Pixel *t_pixel) {  // IMPLEMENT!
}

// draw pixel
void pixel_draw(Pixel *t_pixel) {
    lcd_put_pixel(t_pixel->m_pos.x, t_pixel->m_pos.y,
                  convert_RGB888_to_RGB565(t_pixel->m_fg_color));
}

// hide pixel
void pixel_hide(Pixel *t_pixel) {
    pixel_swap_fg_bg_color(t_pixel);
    pixel_draw(t_pixel);
    pixel_swap_fg_bg_color(t_pixel);
}

// swap foreground and backgroud colors
void circle_swap_fg_bg_color(Circle *t_circle) {  // IMPLEMENT!
}

// draw circle
void circle_draw(Circle *t_circle) {  // IMPLEMENT!
}

// hide circle
void circle_hide(Circle *t_circle) {
    circle_swap_fg_bg_color(t_circle);
    circle_draw(t_circle);
    circle_swap_fg_bg_color(t_circle);
}

// swap foreground and backgroud colors
void character_swap_fg_bg_color(Character *t_character) {  // IMPLEMENT!
}

// draw character
void character_draw(Character *t_character) {  // IMPLEMENT!
}

// hide character
void character_hide(Character *t_character) {
    character_swap_fg_bg_color(t_character);
    character_draw(t_character);
    character_swap_fg_bg_color(t_character);
}

// swap foreground and backgroud colors
void line_swap_fg_bg_color(Line *t_line) {  // IMPLEMENT!
}

// draw line
void line_draw(Line *t_line) {  // IMPLEMENT!
}

// hide line
void line_hide(Line *t_line) {
    line_swap_fg_bg_color(t_line);
    line_draw(t_line);
    line_swap_fg_bg_color(t_line);
}
