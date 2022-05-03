#include "Alive.h"

// constructors
Alive::Alive() {
	reset();
}
Alive::Alive(int id, olc::vf2d position, olc::vf2d size, Counter hp) 
	: Entity(id, position, size), m_hp(hp) {}
Alive::Alive(int id, olc::vf2d position, olc::vf2d size, int hpMax, float hpUpdateTime)
	: Entity(id, position, size), m_hp(hpMax, hpUpdateTime) {}


// reset Alive obj
void Alive::reset() {
	Entity::reset();
	m_hp.reset();
}

// getters
Counter& Alive::hp() {
	return m_hp;
}

// setters
void Alive::set_hp(Counter hp) {
	m_hp = hp;
}