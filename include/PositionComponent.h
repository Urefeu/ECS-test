#ifndef POSITIONCOMPONENT_H_INCLUDED
#define POSITIONCOMPONENT_H_INCLUDED


class PositionComponent : public Component
{

public:
    float posX;
    float posY;

    PositionComponent(float posX, float posY)
    {
        this->posX = posX;
        this->posY = posY;
    }
};



#endif // POSITIONCOMPONENT_H_INCLUDED
