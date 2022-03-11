
#pragma once
class _time {
public:
	int duration;
	static clock_t start;
	clock_t finish;

	void time_set(int duration);
	void time_set();
	bool time_delay();
};