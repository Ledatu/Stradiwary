#include "Timer.h"

// constructors
Timer::Timer() {
	reset();
	m_interval = 2;
}
Timer::Timer(float interval) {
	reset();
	m_interval = interval;
}

// reset time
void Timer::reset() {
	m_time = 1;
}

// getters
float Timer::time() {
	return m_time;
}
float Timer::interval() {
	return m_interval;
}

// settters
void Timer::set_time(float time) {
	m_time = time;
}
void Timer::set_interval(float interval) {
	m_interval = interval;
}

//overloads
float& Timer::operator += (float time) {
	m_time += time;
}

// signals
bool Timer::timeout() {
	if (m_time >= m_interval) {
		reset();
		return true;
	}

	return false;
}