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
            //키보드 방향키 위 아래로만 움직일 수 있음
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
        
        //선택창
        case ENTER:
            switch (y) {
            case 30: // 게임 시작
                page = 1;
                break;
            case 32: // 스코어
                page = 2;
                break;
            case 34: // 게임 종료
                exit(0);
                break;
            }
            
        case SPACEBAR:
            switch (y) {
            case 30: // 게임 시작
                page = 1;
                break;
            case 32: // 스코어
                page = 2;
                break;
            case 34: //게임 종료
                exit(0);
                break;
            }
        }
	}
    return 0;
}