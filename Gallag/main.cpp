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
	TimeDelay T;
	T.timeSet(1);

	for (;;)
	{
		if(page==START)
		{
		if (T.timeDelay() == 0) {
			startmenu.PrintCursor(startmenu.posx, startmenu.posy);
		}
		else
		{
			startmenu.PrintCursor_blink(startmenu.posx, startmenu.posy);
		}
		selectstartmenu.MenuSelect(startmenu.posx, startmenu.posy,page);
		}
		else if(page==GAME)
		{
			inGame i;
			i.map();
			// �� ���� �� ��Ƽ������ ���� �� ���ѹݺ� ������ page���� �����Ͽ� ����������
			f.MoveFlight();
		}
		else if (page == SCORE) 
		{

		}
	}

	//f.MoveFlight(startmenu.posx,startmenu.posy);

	return 0;
}