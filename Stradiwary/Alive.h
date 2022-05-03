#pragma once
#include "Entity.h"
#include "Counter.h"

class Alive : public Entity {
protected:
	Counter m_hp;

public:
	// constructors
	Alive();
	Alive(int id, olc::vf2d position, olc::vf2d size, Counter hp);
	Alive(int id, olc::vf2d position, olc::vf2d size, int hpMax, float hpUpdateTime);

	// reset Alive obj
	virtual void reset() override;

	// getters
	Counter& hp();

	// setters
	void set_hp(Counter hp);
};

