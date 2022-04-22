#pragma once
#include "olcPixelGameEngine.h"

class Entity {
	int m_id;
	//int m_count;
	olc::vf2d m_position;
	olc::vf2d m_size;

public:
	// constructors
	Entity();
	Entity(Entity* entity);
	Entity(int id, olc::vf2d position, olc::vf2d size);

	// reset Entity obj
	virtual void reset();

	// collision checks
	bool collideEntity(Entity* entity, olc::vf2d offset = olc::vf2d(0, 0));
	bool collidePoint(olc::vf2d point, olc::vf2d offset = olc::vf2d(0, 0));

	// getters
	int id();
	olc::vf2d position();
	olc::vf2d size();

	// setters
	void set_id(int id);
	void set_position(olc::vf2d position);
	void set_size(olc::vf2d size);
};