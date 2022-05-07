#pragma once
#include "Timer.h"

class Counter {
	int m_current;
	int m_max;
	Timer m_timer;

public:
	Counter();
	Counter(int max, int timerInterval);

	// reset current to max
	void reset();

	// getters
	int current();
	int max();
	Timer& timer();

	// setters
	void set_current(int current);
	void set_max(int max);

	// overloads
	int& operator ++ ();
	int& operator ++ (int t);
	int& operator -- ();
	int& operator -- (int t);

	int& operator += (int k);
	int& operator -= (int k);

};

