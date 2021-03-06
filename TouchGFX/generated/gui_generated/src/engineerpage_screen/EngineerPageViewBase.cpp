/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/engineerpage_screen/EngineerPageViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include "BitmapDatabase.hpp"

EngineerPageViewBase::EngineerPageViewBase() :
    buttonCallback(this, &EngineerPageViewBase::buttonCallbackHandler)
{

    __background.setPosition(0, 0, 800, 480);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    box_EngineerPageBackground.setPosition(0, 0, 800, 480);
    box_EngineerPageBackground.setColor(touchgfx::Color::getColorFromRGB(100, 100, 100));

    textArea_Temp.setXY(106, 129);
    textArea_Temp.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea_Temp.setLinespacing(0);
    Unicode::snprintf(textArea_TempBuffer, TEXTAREA_TEMP_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID11).getText());
    textArea_Temp.setWildcard(textArea_TempBuffer);
    textArea_Temp.resizeToCurrentText();
    textArea_Temp.setTypedText(touchgfx::TypedText(T_SINGLEUSEID9));

    boxProgress_Temp.setXY(106, 184);
    boxProgress_Temp.setProgressIndicatorPosition(2, 2, 180, 16);
    boxProgress_Temp.setRange(0, 120);
    boxProgress_Temp.setDirection(touchgfx::AbstractDirectionProgress::RIGHT);
    boxProgress_Temp.setBackground(touchgfx::Bitmap(BITMAP_BLUE_PROGRESSINDICATORS_BG_MEDIUM_PROGRESS_INDICATOR_BG_SQUARE_0_DEGREES_ID));
    boxProgress_Temp.setColor(touchgfx::Color::getColorFromRGB(0, 255, 191));
    boxProgress_Temp.setValue(60);

    DriverPageButtun.setXY(0, 0);
    DriverPageButtun.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID));
    DriverPageButtun.setLabelText(touchgfx::TypedText(T_SINGLEUSEID10));
    DriverPageButtun.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    DriverPageButtun.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    DriverPageButtun.setAction(buttonCallback);

    add(__background);
    add(box_EngineerPageBackground);
    add(textArea_Temp);
    add(boxProgress_Temp);
    add(DriverPageButtun);
}

void EngineerPageViewBase::setupScreen()
{

}

//Handles when a key is pressed
void EngineerPageViewBase::handleKeyEvent(uint8_t key)
{
    if(0 == key)
    {
        //Interaction_HW1
        //When hardware button 0 clicked change screen to DriverPage
        //Go to DriverPage with no screen transition
        application().gotoDriverPageScreenNoTransition();
    }
}

void EngineerPageViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &DriverPageButtun)
    {
        //Interaction_Page
        //When DriverPageButtun clicked change screen to DriverPage
        //Go to DriverPage with no screen transition
        application().gotoDriverPageScreenNoTransition();
    }
}
