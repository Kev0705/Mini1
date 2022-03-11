#pragma once
#include "Main.h"

void BackScreen()
{
	int y = 0;
	for (int x = 0 ; x < 160 ; x++)
		putchxy(x, y, '#');
};

void SideScreen()
{
	int x = 0;
	for (int y = 3; y < 40; y++)
		putchxy(x, y, '#');
};
