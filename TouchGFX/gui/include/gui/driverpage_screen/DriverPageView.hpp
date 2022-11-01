#ifndef DRIVERPAGEVIEW_HPP
#define DRIVERPAGEVIEW_HPP

#include <gui_generated/driverpage_screen/DriverPageViewBase.hpp>
#include <gui/driverpage_screen/DriverPagePresenter.hpp>

class DriverPageView : public DriverPageViewBase
{
public:
    DriverPageView();
    virtual ~DriverPageView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

//    virtual void handleTickEvent(); //manually add, reservered function

//
    void updateSpeed(uint8_t);
    void updateBp(uint8_t);
    void updateAp(uint8_t);
    void updateTime(unsigned int, unsigned int);
    void Time_RS();
    void Time_SS();
//

protected:
};

#endif // DRIVERPAGEVIEW_HPP
