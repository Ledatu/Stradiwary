#pragma once
#include "Entity.h"
#include "Counter.h"

class Alive : public Entity {
protected:
	Counter m_hp;

public:
	Alive();
	Alive(int id, olc::vf2d position, olc::vf2d size, Counter hp);
	Alive(int id, olc::vf2d position, olc::vf2d size, int hpMax, float hpUpdateTime);

	virtual void reset() override;

	Counter& hp();

	void set_hp(Counter hp);

};
