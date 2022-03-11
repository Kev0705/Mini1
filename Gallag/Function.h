#pragma once
#include "Main.h"

class Function {
	
private:
    
    enum { UP, DOWN, LEFT, RIGHT };
	
public:

	int InputKey()
	{
        _getch();
	};

	void MoveFlight(int &x,int &y) 
	{
        system("cls"); // 화면 전체 초기화 유의. 나중에 멀티스레드로 화면 전체 띄울 수 있는지 확인. 아마 안될듯ㅋㅋ
        if (GetAsyncKeyState(VK_LEFT) & 0x8000) { //왼쪽
            x=x-2;
        }
        if (GetAsyncKeyState(VK_RIGHT) & 0x8000) { //오른쪽
            x=x+2;
        }
        if (GetAsyncKeyState(VK_UP) & 0x8000) { //위
            y--;
        }
        if (GetAsyncKeyState(VK_DOWN) & 0x8000) { //아래
            y++;
        }

        gotoxy(x, y);
        printf("<O>"); // 추후 Unit 쪽으로 분리시킬 예정

        Sleep(100);
    }
};

class Select : Function
{
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
#define ENTER 13
#define SPACEBAR 32
};

class SelectMenu : Select 
{


};

class SelectStartMenu : SelectMenu 
{
private:
    char c;
public:
    void MenuSelect(int& x, int& y);
};