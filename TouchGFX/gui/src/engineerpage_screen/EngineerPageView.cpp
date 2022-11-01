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
void EngineerPageView::updateTemp1(int newTemp)
{
    if (newTemp < 10){
        Unicode::snprintf(textArea_TempBuffer, TEXTAREA_TEMP_SIZE, "%3d  ", (int)newTemp);
    }
    else if (newTemp > 9 && newTemp < 100){
        Unicode::snprintf(textArea_TempBuffer, TEXTAREA_TEMP_SIZE, "%3d ", (int)newTemp);
    }
    else{
        Unicode::snprintf(textArea_TempBuffer, TEXTAREA_TEMP_SIZE, "%d", (int)newTemp);
    }
    textArea_Temp.resizeToCurrentText();
    boxProgress_Temp.setValue(0);
    boxProgress_Temp.setColor(touchgfx::Color::getColorFromRGB(0,0,0));
    if (newTemp < 60){
        boxProgress_Temp.setColor(touchgfx::Color::getColorFromRGB((int)(255 * (newTemp / 60.0)), 255, 0));
    }
    else{
        boxProgress_Temp.setColor(touchgfx::Color::getColorFromRGB(255, 255 - (int)(255.0 * ((newTemp - 60.0) / 60.0)), 0));
    }
    //boxProgress_Temp.setColor(touchgfx::Color::getColorFromRGB(255 * ((int)newTemp / 120.0), 255 - 255 * ((int)newTemp / 120.0), 0));
    boxProgress_Temp.setValue(newTemp);
    textArea_Temp.invalidate();
}
void EngineerPageView::updateTemp2(int newTemp)
{
    if (newTemp < 10){
        Unicode::snprintf(textArea_Temp_2Buffer, TEXTAREA_TEMP_2_SIZE, "%3d  ", (int)newTemp);
    }
    else if (newTemp > 9 && newTemp < 100){
        Unicode::snprintf(textArea_Temp_2Buffer, TEXTAREA_TEMP_2_SIZE, "%3d ", (int)newTemp);
    }
    else{
        Unicode::snprintf(textArea_Temp_2Buffer, TEXTAREA_TEMP_2_SIZE, "%d", (int)newTemp);
    }
    textArea_Temp_2.resizeToCurrentText();
    boxProgress_Temp_2.setValue(0);
    boxProgress_Temp_2.setColor(touchgfx::Color::getColorFromRGB(0,0,0));
    if (newTemp < 60){
        boxProgress_Temp_2.setColor(touchgfx::Color::getColorFromRGB((int)(255 * (newTemp / 60.0)), 255, 0));
    }
    else{
        boxProgress_Temp_2.setColor(touchgfx::Color::getColorFromRGB(255, 255 - (int)(255.0 * ((newTemp - 60.0) / 60.0)), 0));
    }
    boxProgress_Temp_2.setValue(newTemp);
    textArea_Temp_2.invalidate();
}
void EngineerPageView::updateTemp3(int newTemp)
{
    if (newTemp < 10){
        Unicode::snprintf(textArea_Temp_3Buffer, TEXTAREA_TEMP_3_SIZE, "%3d  ", (int)newTemp);
    }
    else if (newTemp > 9 && newTemp < 100){
        Unicode::snprintf(textArea_Temp_3Buffer, TEXTAREA_TEMP_3_SIZE, "%3d ", (int)newTemp);
    }
    else{
        Unicode::snprintf(textArea_Temp_3Buffer, TEXTAREA_TEMP_3_SIZE, "%d", (int)newTemp);
    }
    textArea_Temp_3.resizeToCurrentText();
    boxProgress_Temp_3.setValue(0);
    boxProgress_Temp_3.setColor(touchgfx::Color::getColorFromRGB(0,0,0));
    if (newTemp < 60){
        boxProgress_Temp_3.setColor(touchgfx::Color::getColorFromRGB((int)(255 * (newTemp / 60.0)), 255, 0));
    }
    else{
        boxProgress_Temp_3.setColor(touchgfx::Color::getColorFromRGB(255, 255 - (int)(255.0 * ((newTemp - 60.0) / 60.0)), 0));
    }
    boxProgress_Temp_3.setValue(newTemp);
    textArea_Temp_3.invalidate();
}
void EngineerPageView::updateTemp4(int newTemp)
{
    if (newTemp < 10){
        Unicode::snprintf(textArea_Temp_4Buffer, TEXTAREA_TEMP_4_SIZE, "%3d  ", (int)newTemp);
    }
    else if (newTemp > 9 && newTemp < 100){
        Unicode::snprintf(textArea_Temp_4Buffer, TEXTAREA_TEMP_4_SIZE, "%3d ", (int)newTemp);
    }
    else{
        Unicode::snprintf(textArea_Temp_4Buffer, TEXTAREA_TEMP_4_SIZE, "%d", (int)newTemp);
    }
    textArea_Temp_4.resizeToCurrentText();
    boxProgress_Temp_4.setValue(0);
    boxProgress_Temp_4.setColor(touchgfx::Color::getColorFromRGB(0,0,0));
    if (newTemp < 60){
        boxProgress_Temp_4.setColor(touchgfx::Color::getColorFromRGB((int)(255 * (newTemp / 60.0)), 255, 0));
    }
    else{
        boxProgress_Temp_4.setColor(touchgfx::Color::getColorFromRGB(255, 255 - (int)(255.0 * ((newTemp - 60.0) / 60.0)), 0));
    }
    boxProgress_Temp_4.setValue(newTemp);
    textArea_Temp_4.invalidate();
}
void EngineerPageView::updateTempC(int newTemp)
{
    if (newTemp < 10){
        Unicode::snprintf(textArea_Temp_CBuffer, TEXTAREA_TEMP_C_SIZE, "%3d  ", (int)newTemp);
    }
    else if (newTemp > 9 && newTemp < 100){
        Unicode::snprintf(textArea_Temp_CBuffer, TEXTAREA_TEMP_C_SIZE, "%3d ", (int)newTemp);
    }
    else{
        Unicode::snprintf(textArea_Temp_CBuffer, TEXTAREA_TEMP_C_SIZE, "%d", (int)newTemp);
    }
    textArea_Temp_C.resizeToCurrentText();
    boxProgress_Temp_C.setValue(0);
    boxProgress_Temp_C.setColor(touchgfx::Color::getColorFromRGB(0,0,0));
    if (newTemp < 60){
        boxProgress_Temp_C.setColor(touchgfx::Color::getColorFromRGB((int)(255 * (newTemp / 60.0)), 255, 0));
    }
    else{
        boxProgress_Temp_C.setColor(touchgfx::Color::getColorFromRGB(255, 255 - (int)(255.0 * ((newTemp - 60.0) / 60.0)), 0));
    }
    boxProgress_Temp_C.setValue(newTemp);
    textArea_Temp_C.invalidate();
}
void EngineerPageView::updateTempM(int newTemp)
{
    if (newTemp < 10){
        Unicode::snprintf(textArea_Temp_MBuffer, TEXTAREA_TEMP_M_SIZE, "%3d  ", (int)newTemp);
    }
    else if (newTemp > 9 && newTemp < 100){
        Unicode::snprintf(textArea_Temp_MBuffer, TEXTAREA_TEMP_M_SIZE, "%3d ", (int)newTemp);
    }
    else{
        Unicode::snprintf(textArea_Temp_MBuffer, TEXTAREA_TEMP_M_SIZE, "%d", (int)newTemp);
    }
    textArea_Temp_M.resizeToCurrentText();
    boxProgress_Temp_M.setValue(0);
    boxProgress_Temp_M.setColor(touchgfx::Color::getColorFromRGB(0,0,0));
    if (newTemp < 60){
        boxProgress_Temp_M.setColor(touchgfx::Color::getColorFromRGB((int)(255 * (newTemp / 60.0)), 255, 0));
    }
    else{
        boxProgress_Temp_M.setColor(touchgfx::Color::getColorFromRGB(255, 255 - (int)(255.0 * ((newTemp - 60.0) / 60.0)), 0));
    }
    boxProgress_Temp_M.setValue(newTemp);
    textArea_Temp_M.invalidate();
}
//
