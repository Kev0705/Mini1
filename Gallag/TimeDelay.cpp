#include <iostream>
#include<ctime>
#include"TimeDelay.h"

TimeDelay::TimeDelay() {
	token = true;
	/*duration=0;
	start = clock();
	finish = clock();*/
}

void TimeDelay::timeSet(int du) {
	duration = du; //sec
	start = clock();
}

void TimeDelay::timeSet() {
	start = clock();
}

bool TimeDelay::timeDelayToken() {
	finish = clock();

	if (duration <= (double)(finish - start) / CLOCKS_PER_SEC) {
		timeSet();
		return timeToken();
	}
	else {
		return token;
	}

}

bool TimeDelay::timeDelay() {
	finish = clock();

	if (duration <= (double)(finish - start) / CLOCKS_PER_SEC) {
		timeSet();
		return true;
	}
	else {
		return false;
	}
}

bool TimeDelay::timeToken() {
	if (token == true) {
		token = false;
		return false;
	}
	else {
		token = true;
		return true;
	}

}