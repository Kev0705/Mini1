#pragma once
#include "Main.h"

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
            //클래스 함수로 가져오는 방법 생각
            gotoxy(x - 5, y); 
            printf_s("▷");

            y = y - 2;
            if (y < 30) y = 34;
            break;
        case DOWN:
            //클래스 함수로 가져오는 방법 생각
            gotoxy(x - 5, y); 
            printf_s("▷");

            y = y + 2;
            if (y > 34) y = 30;
            break;
        
        //게임 시작
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