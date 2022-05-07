#include "Item.h"
#define ITEM_TIMER 2

// constructors
Item::Item() {}
Item::Item(Item* item) 
	: Entity(item->id(), item->position(), item->size()), m_count(item->count()) {}
Item::Item(int id, olc::vf2d position, olc::vf2d size, int maxCount)
	: Entity(id, position, size), m_count(maxCount, ITEM_TIMER) {}

// reset Item obj
void Item::reset() {
	Entity::reset();
	m_count.reset();
}

// getters
Counter& Item::count() {
	return m_count;
}
