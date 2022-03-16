#pragma once

void gotoxy(int x, int y); //gotoxy 정의만 선언은 gotoxy.cpp에


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