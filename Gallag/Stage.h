#pragma once
#include "Main.h"

class Stage {
private:
	
public:
#define GAME_MAX_WIDTH 150
#define GMAE_MAX_HEIGHT 50
#define putchxy(x, y ,c) {gotoxy(x,y); _putch(c);};
#define putsxy(x, y, s) {gotoxy(x, y);puts(s);};
	void startsc();
};

class StartScreen {

private:

public:
	int posx = 0;
	int posy = 0;
	void logo();
	void menu();
	void PrintCursor();
	void PrintCursor_blink();
};

class inGame : Stage
{
private:

public:
	void BackScreen();
	void SideScreen();
	void Sideline();
	void map();
};


class UserInterface : inGame {
private:
	int x=138;
	int y=5;
public:
	//UserInterface(int ax, int ay) { x = ax; y = ay; }

	void esc();
	void life(); //��Ʈ asc�ڵ� Ȯ���ϰ� �ش� �κ� �Ʊ���ü ���ؽ� ��� ���� �ʿ�
	void score(); // ���� �״� ���� ���� �� �߰� �ʿ�
	void ReturnScreen();
	void UserControlGuide();
};
