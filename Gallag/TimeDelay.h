#pragma once
class TimeDelay {
private:
	int duration;
	clock_t start;
	clock_t finish;
	bool token;
public:

	TimeDelay();

	void timeSet(int du);
	void timeSet();

	bool timeToken();
	bool timeDelayToken();

	bool timeDelay();
};