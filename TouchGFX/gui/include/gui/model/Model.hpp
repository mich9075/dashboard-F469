#ifndef MODEL_HPP
#define MODEL_HPP

class ModelListener;

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

    void tick();
    void GetCurrentScreen(int);
    void Time_sec_add();
    void Time_min_add();
    void Time_RS();
    void Time_SS();
    
protected:
    ModelListener* modelListener;
};

#endif // MODEL_HPP
