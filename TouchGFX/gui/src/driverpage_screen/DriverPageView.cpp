#include <gui/driverpage_screen/DriverPageView.hpp>

DriverPageView::DriverPageView()
{
}

void DriverPageView::setupScreen()
{
    DriverPageViewBase::setupScreen();
}

void DriverPageView::tearDownScreen()
{
    DriverPageViewBase::tearDownScreen();
}

void DriverPageView::updateSpeed(unsigned char newSpeed)
{
    if (newSpeed < 10)
    {
        Unicode::snprintf(textArea_SpeedBuffer, TEXTAREA_SPEED_SIZE, "%3d  ",
                          newSpeed);
    }
    else if (newSpeed > 9 && newSpeed < 100)
    {
        Unicode::snprintf(textArea_SpeedBuffer, TEXTAREA_SPEED_SIZE, "%3d ",
                          newSpeed);
    }
    else
    {
        Unicode::snprintf(textArea_SpeedBuffer, TEXTAREA_SPEED_SIZE, "%d",
                          newSpeed);
    }
    textArea_Speed.resizeToCurrentText();
    gauge_1.setValue(newSpeed);
    textArea_Speed.invalidate();
}

void DriverPageView::updateTemp(float newTemp){}

void DriverPageView::updateTime(unsigned int min, unsigned int sec)
{
    touchgfx::Unicode::snprintf(textArea_TimeBuffer1, TEXTAREA_TIMEBUFFER1_SIZE, "%02d", min);
    
    touchgfx::Unicode::snprintf(textArea_TimeBuffer2, TEXTAREA_TIMEBUFFER2_SIZE, "%02d", sec);
    textArea_Time.resizeToCurrentText();
    textArea_Time.invalidate();
}

void DriverPageView::Time_RS(){
    presenter->Time_RS();
}

void DriverPageView::Time_SS(){
    presenter->Time_SS();
}
/*void DriverPageView::handleTickEvent() {
	Unicode::snprintf(textArea2Buffer, TEXTAREA2_SIZE, "%d", counter_s/18);
	textArea2.invalidate();
}*/
