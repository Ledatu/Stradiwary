#pragma once
class Timer {
	float m_time;
	float m_interval;

public:
	// constructors
	Timer();
	Timer(float interval);

	// reset time
	void reset();

	// getters
	float time();
	float interval();

	// setters
	void set_time(float time);
	void set_interval(float interval);

	// overloads
	float& operator += (float time);

	// signals
	bool timeout();

};

