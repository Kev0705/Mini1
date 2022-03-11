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
	void map();
};