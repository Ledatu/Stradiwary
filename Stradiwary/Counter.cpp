#include "Counter.h"

Counter::Counter() {
	m_current = 0;
	m_max = 0;
}
Counter::Counter(int max, int timerInterval) : m_timer(timerInterval) {
	m_max = max;
	reset();
}

void Counter::reset() {
	m_current = 0;
}

int Counter::current() {
	return m_current;
}
int Counter::max() {
	return m_max;
}
Timer& Counter::timer() {
	return m_timer;
}

void Counter::set_current(int current) {
	if (current > m_max)
		m_current = m_max;
	else if (current < 0)
		m_current = 0;
	else
		m_current = current;
}
void Counter::set_max(int max) {
	if (m_current > max)
		m_current = max;
	m_max = max;
}

Counter& Counter::operator += (int k) {
	set_current(m_current + k);
	return *this;
}
Counter& Counter::operator -= (int k) {
	set_current(m_current - k);
	return *this;
}
Counter::operator int () {
	return current();
}

bool Counter::isMax() {
	return m_current == m_max;
}