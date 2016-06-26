#ifndef VELOCITYCOMPONENT_H_INCLUDED
#define VELOCITYCOMPONENT_H_INCLUDED



class VelocityComponent : public Component
{

public:
    float velocityX;
    float velocityY;

    VelocityComponent(float velocityX, float velocityY)
    {
        this->velocityX = velocityX;
        this->velocityY = velocityY;
    }
};



#endif // VELOCITYCOMPONENT_H_INCLUDED
