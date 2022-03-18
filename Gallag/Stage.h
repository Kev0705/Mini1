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
	void life(); //하트 asc코드 확인하고 해당 부분 아군기체 피해시 깍는 로직 필요
	void score(); // 점수 쌓는 로직 생성 후 추가 필요
	void ReturnScreen();
	void UserControlGuide();
};
