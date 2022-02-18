#include <gui/engineerpage_screen/EngineerPageView.hpp>
#include <gui/engineerpage_screen/EngineerPagePresenter.hpp>

EngineerPagePresenter::EngineerPagePresenter(EngineerPageView& v)
    : view(v)
{

}

void EngineerPagePresenter::activate()
{
    model->GetCurrentScreen(1);
}

void EngineerPagePresenter::deactivate()
{

}

//
void EngineerPagePresenter::setNewTemp(int NewTemp)
{
	view.updateTemp(NewTemp);
}

void EngineerPagePresenter::butt_0()
{
	view.handleKeyEvent(0);
}

void EngineerPagePresenter::setNewSpeed(unsigned char NewSpeed){}
void EngineerPagePresenter::setNewTime(unsigned int NewMin,unsigned int NewSec){}
//