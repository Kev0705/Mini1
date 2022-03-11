#pragma once
#include "Main.h"


int main(void) {
	Stage start;
	StartScreen startmenu;
	Function f;
	SelectStartMenu selectstartmenu;

	enum{START,GAME,SCORE}; //START = 0 , GAME = 1, SCORE =2
	int page = 0;

	start.startsc();
	startmenu.logo();
	startmenu.menu(startmenu.posx,startmenu.posy);

	for (;;)
	{
		if(page==START)
		{
		startmenu.PrintCursor(startmenu.posx,startmenu.posy);
		selectstartmenu.MenuSelect(startmenu.posx, startmenu.posy,page);
		}
		else if(page==GAME)
		{
			inGame i;
			i.ingame();
		}
	}

	//f.MoveFlight(startmenu.posx,startmenu.posy);

	return 0;
}