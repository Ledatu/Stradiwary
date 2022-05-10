#include "Timer.h"

Timer::Timer() {
	m_interval = 1;
	reset();
}
Timer::Timer(float interval) {
	reset();
	m_interval = interval;
}

void Timer::reset() {
	m_time = 1;
}

float Timer::time() {
	return m_time;
}
float Timer::interval() {
	return m_interval;
}

void Timer::set_time(float time) {
	m_time = time;
}
void Timer::set_interval(float interval) {
	m_interval = interval;
}

float& Timer::operator += (float time) {
	m_time += time;
	return m_time;
}

bool Timer::timeout() {
	if (m_time >= m_interval) {
		reset();
		return true;
	}

	return false;
}