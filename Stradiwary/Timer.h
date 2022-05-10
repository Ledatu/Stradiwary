#pragma once

class Timer {
	float m_time;
	float m_interval;

public:
	Timer();
	Timer(float interval);

	void reset();

	float time();
	float interval();

	void set_time(float time);
	void set_interval(float interval);

	float& operator += (float time);

	bool timeout();

};
