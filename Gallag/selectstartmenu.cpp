#pragma once
#include "Main.h"
#include <time.h>

void SelectStartMenu::MenuSelect(int &x,int &y)
{

    if(_kbhit())
	{   
        //�޴� ���� (��,�ϸ� ����)
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
        
        //�����ϴ� ���
        /*
        case ENTER:

            break;
        case SPACEBAR:
            break;
        */
        }
	}
}