#pragma once 

#include "Main.h"

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
#define ENTER 13
#define SPACEBAR 32
#define ESC 27

bool KeyScan(int C) {
	if (_kbhit())
	{
		char c = _getch();
		if (c == C)
			return true;
	}

	return false;
}

int main(void) {
	Stage start;
	start.startsc();
	StartScreen startmenu;
	Function f;
	SelectStartMenu selectstartmenu;
	inGame i;
	Score ii;
	Enemy e;

	TimeDelay T_cursor;
	T_cursor.timeSet(0.2);
	TimeDelay T_gameFrame;
	T_gameFrame.timeSet(0.1);

	
	bool startToken = true;
	bool gameToken = false;
	bool scoreToken = false;

	enum{START,GAME,SCORE}; //START = 0 , GAME = 1, SCORE =2
	int page = 0; 

	char curDir[1000];
	_getcwd(curDir, 1000); //C:\Users\USER\source\repos\Kev0705\Mini1\Gallag\Mini1\Gallag
	strcat_s(curDir, "/score.txt");
	//score.txt »ý¼º
	std::ifstream fin(curDir);
	if (!fin) {
		std::ofstream fout(curDir);
	}

	int posx = 85;
	int posy = 40;

	for (;;)
	{
		if(page==START)
		{
			if (startToken == true) {
				startmenu.logo();
				startmenu.menu();
				startToken = false;
			}
			if (T_cursor.timeDelayToken() == 0) {
				startmenu.PrintCursor();
			}
			else
			{
			startmenu.PrintCursor_blink();
			}
			selectstartmenu.MenuSelect(startmenu.posx, startmenu.posy,page, gameToken, scoreToken);
		}
		else if(page==GAME)
		{
			
			if (gameToken == true) {
				i.map();
				gameToken = false;
			}

			if (KeyScan(ESC)) {
				page = 0;
				startToken = true;
				system("cls");
			}
			
			if (T_gameFrame.timeDelay() == true) {
				f.MoveFlight(posx, posy);
				f.FireShoot(posx, posy);
			}

			//e.enemyspawn();
			
		}
		else if (page == SCORE) 
		{
			if (scoreToken == true) {
				ii.map();;
				ii.showScore(startmenu, page, curDir);
				scoreToken = false;
			}
			if (KeyScan(ESC)) {
				page = 0;
				startToken = true;
				system("cls");
			}
			
		}
	}

	//f.MoveFlight(startmenu.posx,startmenu.posy);

	return 0;
}