#pragma once
#include "Main.h"


int main(void) {
	Stage start;
	start.startsc();
	StartScreen startmenu;
	Function f;
	SelectStartMenu selectstartmenu;
	TimeDelay T;
	T.timeSet(0.2);
	
	enum{START,GAME,SCORE}; //START = 0 , GAME = 1, SCORE =2
	int page = 0; 

	
	startmenu.logo();
	startmenu.menu();
	for (;;)
	{
		if(page==START)
		{
			
			if (T.timeDelayToken() == 0) {
				startmenu.PrintCursor();
			}
			else
			{
			startmenu.PrintCursor_blink();
			}
			selectstartmenu.MenuSelect(startmenu.posx, startmenu.posy,page);
		}
		else if(page==GAME)
		{
			inGame i;
			i.map();
			// �� ���� �� ��Ƽ������ ���� �� ���ѹݺ� ������ page���� �����Ͽ� ����������
			f.MoveFlight(startmenu, page);
		}
		else if (page == SCORE) 
		{
			Score i;
			i.map();
			i.showScore(startmenu, page);
		}
		
			
	}

	//f.MoveFlight(startmenu.posx,startmenu.posy);

	return 0;
}