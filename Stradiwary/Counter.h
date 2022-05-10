#pragma once
#include "Timer.h"

class Counter {
	int m_current;
	int m_max;
	Timer m_timer;

public:
	Counter();
	Counter(int max, int timerInterval);

	void reset();

	int current();
	int max();
	Timer& timer();

	void set_current(int current);
	void set_max(int max);

	Counter& operator += (int k);
	Counter& operator -= (int k);
	operator int ();

	bool isMax();

};
