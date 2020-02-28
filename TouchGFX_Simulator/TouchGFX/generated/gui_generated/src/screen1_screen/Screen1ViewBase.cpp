/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Color.hpp>

Screen1ViewBase::Screen1ViewBase()
{
    tiledImage1.setBitmap(Bitmap(BITMAP_BLUE_TEXTURES_CARBON_FIBRE_ID));
    tiledImage1.setPosition(0, 0, 480, 272);
    tiledImage1.setOffset(0, 0);

    button1.setXY(155, 191);
    button1.setBitmaps(Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID));

    buttonWithLabel1.setXY(155, 17);
    buttonWithLabel1.setBitmaps(Bitmap(BITMAP_DARK_BUTTONS_ROUND_EDGE_SMALL_ID), Bitmap(BITMAP_DARK_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID));
    buttonWithLabel1.setLabelText(TypedText(T_SINGLEUSEID1));
    buttonWithLabel1.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonWithLabel1.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));

    add(tiledImage1);
    add(button1);
    add(buttonWithLabel1);
}

void Screen1ViewBase::setupScreen()
{

}
