#ifndef DRIVERPAGEPRESENTER_HPP
#define DRIVERPAGEPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class DriverPageView;

class DriverPagePresenter : public touchgfx::Presenter, public ModelListener
{
public:
    DriverPagePresenter(DriverPageView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~DriverPagePresenter() {};

//
    void setNewSpeed(uint8_t value);
    void setNewTemp(int value);
    void setNewTime(unsigned int, unsigned int);
    void Time_RS();
    void Time_SS();
    void butt_0();
//

private:
    DriverPagePresenter();

    DriverPageView& view;
};

#endif // DRIVERPAGEPRESENTER_HPP
