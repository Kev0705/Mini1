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
	void cursor();
	void menu(int &x, int &y);
	void PrintCursor(int x, int y);
};

class inGame : Stage
{
private:

public:
	void ingame() 
	{
		system("cls");
		void life();
		void score();
		void ReturnScreen();
		// 위에거 작동안함 구현해야됨
		void BackScreen();
		void SideScreen();
	}
};