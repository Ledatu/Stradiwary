#pragma once
#include "olcPixelGameEngine.h"

class Entity {
protected:
	int m_id;
	olc::vf2d m_position;
	olc::vf2d m_size;

public:
	Entity();
	Entity(Entity* entity);
	Entity(int id, olc::vf2d position, olc::vf2d size);

	virtual void reset();

	bool collideEntity(Entity* entity, olc::vf2d offset = olc::vf2d(0, 0));
	bool collidePoint(olc::vf2d point, olc::vf2d offset = olc::vf2d(0, 0));

	int id();
	olc::vf2d position();
	olc::vf2d size();

	void set_id(int id);
	void set_position(olc::vf2d position);
	void set_size(olc::vf2d size);
};