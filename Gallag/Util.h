#pragma once

void gotoxy(int x, int y); //gotoxy ���Ǹ� ������ gotoxy.cpp��


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