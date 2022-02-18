#include <gui/driverpage_screen/DriverPageView.hpp>
#include <gui/driverpage_screen/DriverPagePresenter.hpp>

DriverPagePresenter::DriverPagePresenter(DriverPageView& v)
    : view(v)
{

}

void DriverPagePresenter::activate()
{
    model->GetCurrentScreen(0);
}

void DriverPagePresenter::deactivate()
{

}

//
void DriverPagePresenter::setNewSpeed(uint8_t value)
{
	view.updateSpeed(value);
}

void DriverPagePresenter::setNewTemp(int value)
{
	view.updateTemp(value);
}

void DriverPagePresenter::setNewTime(unsigned int min, unsigned int sec)
{
	view.updateTime(min, sec);
}

void DriverPagePresenter::Time_RS()
{
	model->Time_RS();
}

void DriverPagePresenter::Time_SS()
{
	model->Time_SS();
}

void DriverPagePresenter::butt_0()
{
	view.handleKeyEvent(0);
}
//