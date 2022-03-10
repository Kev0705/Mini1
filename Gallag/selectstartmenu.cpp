#pragma once
#include "Main.h"
#include <time.h>

void SelectStartMenu::MenuSelect(int &x,int &y)
{

    if(_kbhit())
	{
		c = _getch();
        switch (c)
        {
        case LEFT:

            break;
        case RIGHT:

            break;
        case UP:
            y = y - 2;
            break;
        case DOWN:
            y = y + 2;
            break;
        }
	}
}