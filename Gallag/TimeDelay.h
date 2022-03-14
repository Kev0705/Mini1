#pragma once
class TimeDelay {
private:
	double duration;
	clock_t start;
	clock_t finish;
	bool token;
public:

	TimeDelay();

	void timeSet(double du);
	void timeSet();

	bool timeToken();
	bool timeDelayToken();

	bool timeDelay();
};