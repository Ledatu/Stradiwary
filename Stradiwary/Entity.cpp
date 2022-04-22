#include "Entity.h"

// constructors
Entity::Entity() {
	reset();
}
Entity::Entity(Entity* entity) {
	m_id = entity->id();
	m_position = entity->position();
	m_size = entity->size();
}
Entity::Entity(int id, olc::vf2d position, olc::vf2d size) {
	m_id = id;
	m_position = position;
	m_size = size;
}

// collision checks
bool Entity::collideEntity(Entity* entity, olc::vf2d offset)
{
	olc::vf2d eSize = entity->size();
	olc::vf2d ePos = entity->position() + offset;
	return (m_position.x < ePos.x + eSize.x 
		&& m_position.x + m_size.x > ePos.x
		&& m_position.y < ePos.y + eSize.y 
		&& m_position.y + eSize.y > ePos.y);
}
bool Entity::collidePoint(olc::vf2d point, olc::vf2d offset)
{
	point += offset;
	return (point.x >= m_position.x 
		&& point.y >= m_position.y 
		&& point.x < m_position.x + m_size.x 
		&& point.y < m_position.y + m_size.y);
}

// getters
int Entity::id() 
{
	return m_id;
}
olc::vf2d Entity::position() 
{
	return m_position;
}
olc::vf2d Entity::size() 
{
	return m_size;
}

// setters
void Entity::set_id(int id)
{
	m_id = id;
}
void Entity::set_position(olc::vf2d position)
{
	m_position = position;
}
void Entity::set_size(olc::vf2d size)
{
	m_size = size;
}

// reset Entity obj
void Entity::reset() {
	m_id = 0;
	m_position = olc::vf2d(0, 0);
	m_size = olc::vf2d(0, 0);
}