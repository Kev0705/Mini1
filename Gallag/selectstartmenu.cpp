#pragma once
#include "Main.h"
#include <time.h>

int SelectStartMenu::MenuSelect(int &x,int &y,int &page)
{
    if(_kbhit())
	{   
        //메뉴 선택 (상,하만 동작)
		c = _getch();
        switch (c)
        {
        case LEFT:

            break;
        case RIGHT:

            break;
        case UP:
            y = y - 2;
            if (y < 30) y = 34;
            break;
        case DOWN:
            y = y + 2;
            if (y > 34) y = 30;
            break;
        
        case ENTER:
            page = 1;
            break;
        case SPACEBAR:
            page = 1;
            break;
        }
	}
    return 0;
}