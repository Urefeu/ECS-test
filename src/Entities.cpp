#include "Entities.h"
#include "tools.cpp"

Entities::Entities(size_t size)
{
    m_entities.reserve(size);
}

/// Creates a new entity and returns its ID
/// so that IDs always are in ascending order
/// Returns the ID of the created entity
Entity Entities::create()
{
    const auto it = std::adjacent_find(m_entities.begin(), m_entities.end(),
        [](Entity lhs, Entity rhs){ return (lhs+1 != rhs); });
    if (it == end(m_entities))
    {
        m_entities.push_back(m_entities.size());
        return m_entities.back();
    }
    else
    {
        const auto result = m_entities.insert(it+1, (*it)+1);
        return *result;
    }
}

/// Remove an entity given its ID
void Entities::remove(Entity entity)
{
    const auto it = std::find(m_entities.begin(), m_entities.end(), entity);
    if (it != m_entities.end() || (it == m_entities.end() && *it == entity))
    {
        m_entities.erase(it); // does that remove place created by reserve() ?
    }
    else
    {
        log("Entity ID " + to_string(entity) + " doesn't exist.");
    }
}

/// Displays all entities' IDs
void Entities::print()
{
    for (Entity i: m_entities)
        std::cout << i << ' ';
    std::cout << std::endl;
}
