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
    virtual void setNewTemp(int temp);
    virtual void setNewTime(unsigned int, unsigned int);
    virtual void butt_0();
//

protected:
    Model* model;
};

#endif // MODELLISTENER_HPP
