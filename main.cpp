#include <iostream>
#include <vector>

#include "Entities.h"
#include "Component.h"

#include "PositionComponent.h"
#include "VelocityComponent.h"

int main()
{
    Entities entities(50);

    auto player = entities.create();

    std::vector<Entity> mobs;

    for (size_t i = 0; i < 10; i++)
        mobs.push_back(entities.create());



    return 0;
}
