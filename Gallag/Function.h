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
        system("cls"); // ȭ�� ��ü �ʱ�ȭ ����. ���߿� ��Ƽ������� ȭ�� ��ü ��� �� �ִ��� Ȯ��. �Ƹ� �ȵɵ���
        if (GetAsyncKeyState(VK_LEFT) & 0x8000) { //����
            x=x-2;
        }
        if (GetAsyncKeyState(VK_RIGHT) & 0x8000) { //������
            x=x+2;
        }
        if (GetAsyncKeyState(VK_UP) & 0x8000) { //��
            y--;
        }
        if (GetAsyncKeyState(VK_DOWN) & 0x8000) { //�Ʒ�
            y++;
        }

        gotoxy(x, y);
        printf("<O>"); // ���� Unit ������ �и���ų ����

        Sleep(100);
    }
};

class Select
{
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
#define ENTER 
#define SPACEBAR 
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