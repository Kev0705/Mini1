#include "time.h"
#include <ctime>
#include <iostream>
using namespace std;

void _time::time_set(int duration) 
{
	this->duration = duration;
	start = clock();
}

void _time::time_set() 
{
	start = clock();
}

bool _time::time_delay() 
{
	finish = clock();
	if (duration == (double)(finish - start) / CLOCKS_PER_SEC) 
	{
		return 0;
	}
	else 
	{
		return 1;
	}
}