#include <gui/engineerpage_screen/EngineerPageView.hpp>

EngineerPageView::EngineerPageView()
{

}

void EngineerPageView::setupScreen()
{
    EngineerPageViewBase::setupScreen();
}

void EngineerPageView::tearDownScreen()
{
    EngineerPageViewBase::tearDownScreen();
}

//
void EngineerPageView::updateTemp(int newTemp)
{
    if (newTemp < 10)
    {
        Unicode::snprintf(textArea_TempBuffer, TEXTAREA_TEMP_SIZE, "%3d  ",
                          (int)newTemp);
    }
    else if (newTemp > 9 && newTemp < 100)
    {
        Unicode::snprintf(textArea_TempBuffer, TEXTAREA_TEMP_SIZE, "%3d ",
                          (int)newTemp);
    }
    else
    {
        Unicode::snprintf(textArea_TempBuffer, TEXTAREA_TEMP_SIZE, "%d",
                          (int)newTemp);
    }
    /*Unicode::snprintf(textArea_SpeedBuffer, TEXTAREA_TEMP_SIZE, "%3f  ",
                          newTemp);*/
    /*Unicode::snprintf(textArea_TempBuffer, TEXTAREA_TEMP_SIZE, "%d", (int)newTemp);*/
    textArea_Temp.resizeToCurrentText();
    boxProgress_Temp.setValue(0);
    boxProgress_Temp.setColor(touchgfx::Color::getColorFromRGB(0,0,0));
    if (newTemp < 60)
    {
        boxProgress_Temp.setColor(touchgfx::Color::getColorFromRGB((int)(255 * (newTemp / 60.0)), 255, 0));
    }
    else
    {
        boxProgress_Temp.setColor(touchgfx::Color::getColorFromRGB(255, 255 - (int)(255.0 * ((newTemp - 60.0) / 60.0)), 0));
    }
    //boxProgress_Temp.setColor(touchgfx::Color::getColorFromRGB(255 * ((int)newTemp / 120.0), 255 - 255 * ((int)newTemp / 120.0), 0));
    boxProgress_Temp.setValue(newTemp);
    textArea_Temp.invalidate();
}
//