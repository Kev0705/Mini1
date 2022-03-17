#pragma once 

#include <future>
#include "Main.h"

int main(void) {
	Stage start;
	start.startsc();
	StartScreen startmenu;
	Function f;
	SelectStartMenu selectstartmenu;
	TimeDelay T;
	T.timeSet(0.5);

	enum{START,GAME,SCORE}; //START = 0 , GAME = 1, SCORE =2
	int page = 0; //초기 page는 0

	char curDir[1000];
	_getcwd(curDir, 1000); //C:\Users\USER\source\repos\Kev0705\Mini1\Gallag\Mini1\Gallag
	strcat_s(curDir, "/score.txt");

	//score.txt 생성
	std::ifstream fin(curDir);
	if (!fin) {
		std::ofstream fout(curDir);
	}

	//현재 score 제대로 동작 안함
		//현재 score 제대로 동작 안함
		//현재 score 제대로 동작 안함
		//현재 score 제대로 동작 안함
	//스코어가 무한loop에 갇혀 계속 생성됨에 따라 생기는 오류로 추정

	int posx = 85;
	int posy = 40;
	int fire_x; //현재 이 변수 사용 x 관리용
	int fire_y; //현재 이 변수 사용 x 관리용
	
	startmenu.logo();
	startmenu.menu();
	
	for (;;)
	{
		if(page==START)
		{
			if (T.timeDelayToken() == 0) 
			{
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
			Enemy e;
			
			i.map();
			// 맵 생성 후 멀티스레드 적용 후 무한반복 끝낼때 page값을 리턴하여 빠져나오기

			// 전체적으로 레이스 컨디션 문제 해결 안됨 각 스레드별로 sleep값을 이용해서 문제 발생 횟수가 적어진거임
			
			//현재 Function 내에 

			std::future<void> a = std::async(std::launch::async, [&]() {f.MoveFlight(posx, posy); }); //async를 사용했지만 thread 사용해도 동작 같을거라고 예상함
			
			std::future<void> b = std::async(std::launch::async, [&]() {f.FireShoot(posx, posy, fire_x, fire_y); });

			std::future<void> c = std::async(std::launch::async, [&]() {f.CreatEnemy(); });

			//std::future<void> d = std::async(std::launch::async, [&]() { /*fuction*/});


		}
		else if (page == SCORE) 
		{
			Score i;
			i.map();
			i.showScore(startmenu, page, curDir);
			
			_getch();
			page = START;
			system("cls");
			startmenu.logo();
			startmenu.menu();
		}
	}

	//f.MoveFlight(startmenu.posx,startmenu.posy);

	return 0;
}