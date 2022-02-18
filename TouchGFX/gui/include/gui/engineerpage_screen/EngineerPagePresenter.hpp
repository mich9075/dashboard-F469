#ifndef ENGINEERPAGEPRESENTER_HPP
#define ENGINEERPAGEPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class EngineerPageView;

class EngineerPagePresenter : public touchgfx::Presenter, public ModelListener
{
public:
    EngineerPagePresenter(EngineerPageView& v);

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

    virtual ~EngineerPagePresenter() {};

//
    void setNewTemp(int value);
    void setNewSpeed(unsigned char value);
    void setNewTime(unsigned int, unsigned int);
    void butt_0();
//

private:
    EngineerPagePresenter();

    EngineerPageView& view;
};

#endif // ENGINEERPAGEPRESENTER_HPP
