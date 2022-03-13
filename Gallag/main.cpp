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
			int posx = 85;
			int posy = 40;
			inGame i;
			i.map();
			// 맵 생성 후 멀티스레드 적용 후 무한반복 끝낼때 page값을 리턴하여 빠져나오기
			f.MoveFlight(posx,posy);
		}
		else if (page == SCORE) 
		{

		}
	}

	//f.MoveFlight(startmenu.posx,startmenu.posy);

	return 0;
}