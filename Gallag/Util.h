#pragma once
#include <random>

void gotoxy(int x, int y); //gotoxy ���Ǹ� ������ gotoxy.cpp��

int random(int from, int to); // random ���Ǹ� ������ random.cpp��

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




