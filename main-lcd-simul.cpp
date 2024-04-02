#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "font8x8.h"
#include "fonts/font24x40_lsb.h" 
#include "lcd_lib.h"

// #include "graph_struct.hpp"
#include "graph_class.hpp"

int main() {
    lcd_init();  // LCD initialization

    //   uint16_t l_color_red = 0xF800;
    //   uint16_t l_color_green = 0x07E0;
    //   uint16_t l_color_blue = 0x001F;
    //   uint16_t l_color_white = 0xFFFF;

    //   // simple animation display four color square using LCD_put_pixel function
    //   int l_limit = 200;
    //   for (int ofs = 0; ofs < 20; ofs++)  // square offset in x and y axis
    //   {
    //     for (int i = 0; i < l_limit; i++) {
    //       lcd_put_pixel(ofs + i, ofs + 0, l_color_red);
    //       lcd_put_pixel(ofs + 0, ofs + i, l_color_green);
    //       lcd_put_pixel(ofs + i, ofs + l_limit, l_color_blue);
    //       lcd_put_pixel(ofs + l_limit, ofs + i, l_color_white);
    //     }
    //   }

    Circle circle({50, 50}, 30, {255, 255, 255}, {255, 0, 0});
    circle.draw();

    Line line1({50, 50}, {100, 100}, {0, 255, 0}, {0, 0, 0});
    line1.draw();

    Line line2({100, 110}, {50, 60}, {255, 0, 0}, {0, 0, 0});
    line2.draw();

    Line line3({50, 70}, {50, 170}, {0, 0, 255}, {0, 0, 0});
    line3.draw();

    Line line4({60, 170}, {60, 70}, {180, 190, 254}, {0, 0, 0});
    line4.draw();

    circle.hide();

    Character character({170, 170}, 'a', {180, 190, 254}, {0, 0, 0});
    character.draw(true);

    cv::imshow(LCD_NAME, g_canvas);  // refresh content of "LCD"
    cv::waitKey(0);                  // wait for key
}
