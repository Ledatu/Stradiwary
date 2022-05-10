#pragma once
#include "Entity.h"
#include "Counter.h"

class Item : public Entity {
	Counter m_count;

public:
	Item();
	Item(Item* item);
	Item(int id, olc::vf2d position, olc::vf2d size, int maxCount);

	void reset() override;

	Counter& count();

};
