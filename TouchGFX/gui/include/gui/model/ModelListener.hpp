#ifndef MODELLISTENER_HPP
#define MODELLISTENER_HPP

#include <gui/model/Model.hpp>

class ModelListener
{
public:
    ModelListener() : model(0) {}
    
    virtual ~ModelListener() {}

    void bind(Model* m)
    {
        model = m;
    }

//
    virtual void setNewSpeed(unsigned char speed);
    virtual void setNewTemp1(int temp1);
    virtual void setNewTemp2(int temp2);
    virtual void setNewTemp3(int temp3);
    virtual void setNewTemp4(int temp4);
    virtual void setNewTempC(int tempC);
    virtual void setNewTempM(int tempM);
    virtual void setNewBp(unsigned char);
    virtual void setNewAp(unsigned char);
    virtual void setNewTime(unsigned int, unsigned int);
    virtual void butt_0();
//

protected:
    Model* model;
};

#endif // MODELLISTENER_HPP
