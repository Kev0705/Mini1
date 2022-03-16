#pragma once 
#include "Main.h"

int main(void) {
	Stage start;
	start.startsc();
	StartScreen startmenu;
	Function f;
	SelectStartMenu selectstartmenu;
	TimeDelay T;
	Enemy E;
	


	

	T.timeSet(0.2);
	
	enum{START,GAME,SCORE}; //START = 0 , GAME = 1, SCORE =2
	int page = 0; 

	char curDir[1000];
	_getcwd(curDir, 1000); //C:\Users\USER\source\repos\Kev0705\Mini1\Gallag\Mini1\Gallag
	strcat_s(curDir, "/score.txt");

	//score.txt 생성
	std::ifstream fin(curDir);
	if (!fin) {
		std::ofstream fout(curDir);
	}

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
			//맵 생성 후 멀티스레드 적용 후 무한반복 끝낼때 page값을 리턴하여 빠져나오기
			E.EnemyMove();
			//f.CreatEnemy();
			f.MoveFlight(startmenu, page);
			
			

		}
		else if (page == SCORE) 
		{
			Score i;
			i.map();
			i.showScore(startmenu, page, curDir);
		}
		
			
	}

	//f.MoveFlight(startmenu.posx,startmenu.posy);

	return 0;
}
