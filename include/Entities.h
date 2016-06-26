#ifndef ENTITIES_H
#define ENTITIES_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

#include "Component.h"

using Entity = size_t;

class Entities
{
    public:
        Entities(size_t size);
        Entity create();
        void remove(Entity entity);
        void print();

    private:
        std::vector<Entity> m_entities {};
        //std::vector<Component> m_components {};
};

#endif // ENTITIES_H
