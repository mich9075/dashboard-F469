#ifndef ENGINEERPAGEVIEW_HPP
#define ENGINEERPAGEVIEW_HPP

#include <gui_generated/engineerpage_screen/EngineerPageViewBase.hpp>
#include <gui/engineerpage_screen/EngineerPagePresenter.hpp>

#include <touchgfx/Color.hpp>

class EngineerPageView : public EngineerPageViewBase
{
public:
    EngineerPageView();
    virtual ~EngineerPageView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    void updateTemp(int);
protected:
};

#endif // ENGINEERPAGEVIEW_HPP
