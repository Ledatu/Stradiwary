#include "Counter.h"

// constructors
Counter::Counter() {
	m_current = 0;
	m_max = 0;
}
Counter::Counter(int max, int timerInterval) : m_timer(timerInterval) {
	m_current = 0;
	m_max = max;
}

// reset current
void Counter::reset() {
	m_current = 0;
}

// getters
int Counter::current() {
	return m_current;
}
int Counter::max() {
	return m_max;
}

// setters
void Counter::set_current(int current) {
	if (current > m_max)
		m_current = m_max;
	else
		m_current = current;
}
void Counter::set_max(int max) {
	if (m_current > max)
		m_current = max;
	m_max = max;
}

// overloads
int& Counter::operator ++ () {
	set_current(m_current + 1);
	return m_current;
}
int& Counter::operator ++ (int t) {
	return operator ++ ();
}
int& Counter::operator+=(int k) {
	set_current(m_current + k);
	return m_current;
}
int& Counter::operator-=(int k) {
	set_current(m_current - k);
	return m_current;
}