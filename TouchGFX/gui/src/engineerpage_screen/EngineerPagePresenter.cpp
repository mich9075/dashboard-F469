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
void EngineerPagePresenter::setNewTemp1(int NewTemp){
	view.updateTemp1(NewTemp);
}
void EngineerPagePresenter::setNewTemp2(int NewTemp){
	view.updateTemp2(NewTemp);
}
void EngineerPagePresenter::setNewTemp3(int NewTemp){
	view.updateTemp3(NewTemp);
}
void EngineerPagePresenter::setNewTemp4(int NewTemp){
	view.updateTemp4(NewTemp);
}
void EngineerPagePresenter::setNewTempC(int NewTemp){
	view.updateTempC(NewTemp);
}
void EngineerPagePresenter::setNewTempM(int NewTemp){
	view.updateTempM(NewTemp);
}

void EngineerPagePresenter::setNewBp(unsigned char value){}
void EngineerPagePresenter::setNewAp(unsigned char value){}

void EngineerPagePresenter::butt_0()
{
	view.handleKeyEvent(0);
}

void EngineerPagePresenter::setNewSpeed(unsigned char NewSpeed){}
void EngineerPagePresenter::setNewTime(unsigned int NewMin,unsigned int NewSec){}
//