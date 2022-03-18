#pragma once 

#include <future>
#include "Main.h"
#include <iostream>

int main(void) {
	Stage start;
	start.startsc();
	StartScreen startmenu;
	Function f;
	SelectStartMenu selectstartmenu;
	TimeDelay T;
	T.timeSet(0.5);

	enum{START,GAME,SCORE,OVER}; //START = 0 , GAME = 1, SCORE =2
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
	//스코어가 무한loop에 갇혀 계속 생성됨에 따라 생기는 오류로 추정

	int fire_x; //현재 이 변수 사용 x 관리용
	int fire_y; //현재 이 변수 사용 x 관리용

	int score;

	bool isLoop=true;
	
	startmenu.logo();
	startmenu.menu();

	for (;;)
	{
		if (page == START)
		{
			if (T.timeDelayToken() == 0)
			{
				startmenu.PrintCursor();
			}
			else
			{
				startmenu.PrintCursor_blink();
			}
			selectstartmenu.MenuSelect(startmenu.posx, startmenu.posy, page);
		}
		else if (page == GAME)
		{
			inGame i;
			Enemy e;
			UserInterface u;
			score = 0;
			i.map();
			f.showScore(score);
			u.esc();
			u.UserControlGuide();

			//xy좌표값을 가지는 list vector 생성
			std::list<std::vector<int>> xy_enemy;
			std::vector<std::vector<int>> xy_fire(10);

			int posx = 85;
			int posy = 40;

			// 맵 생성 후 멀티스레드 적용 후 무한반복 끝낼때 page값을 리턴하여 빠져나오기
			// 전체적으로 레이스 컨디션 문제 해결 안됨 각 스레드별로 sleep값을 이용해서 문제 발생 횟수가 적어진거임

			//현재 Function 내에 
			try
			{
				std::future<void> a = std::async(std::launch::async, [&]() {f.MoveFlight(posx, posy, isLoop); }); //async를 사용했지만 thread 사용해도 동작 같을거라고 예상함

				std::future<void> b1 = std::async(std::launch::async, [&]() {f.FireShoot(posx, posy, xy_fire[0], isLoop); });
				std::future<void> b2 = std::async(std::launch::async, [&]() {f.FireShoot(posx, posy, xy_fire[1], isLoop); });
				std::future<void> b3 = std::async(std::launch::async, [&]() {f.FireShoot(posx, posy, xy_fire[2], isLoop); });
				std::future<void> b4 = std::async(std::launch::async, [&]() {f.FireShoot(posx, posy, xy_fire[3], isLoop); });
				std::future<void> b5 = std::async(std::launch::async, [&]() {f.FireShoot(posx, posy, xy_fire[4], isLoop); });
				std::future<void> b6 = std::async(std::launch::async, [&]() {f.FireShoot(posx, posy, xy_fire[5], isLoop); });
				std::future<void> b7 = std::async(std::launch::async, [&]() {f.FireShoot(posx, posy, xy_fire[6], isLoop); });
				std::future<void> b8 = std::async(std::launch::async, [&]() {f.FireShoot(posx, posy, xy_fire[7], isLoop); });
				std::future<void> b9 = std::async(std::launch::async, [&]() {f.FireShoot(posx, posy, xy_fire[8], isLoop); });
				std::future<void> b10 = std::async(std::launch::async, [&]() {f.FireShoot(posx, posy, xy_fire[9], isLoop); });

				std::future<void> c1 = std::async(std::launch::async, [&]() {f.CreatEnemy(xy_enemy, isLoop); });
				std::future<void> c2 = std::async(std::launch::async, [&]() {f.MoveEnemy(xy_enemy, isLoop); });
				//std::future<void> d = std::async(std::launch::async, [&]() { /*fuction*/});

				std::future<void> d1 = std::async(std::launch::async, [&]() {f.fire_enemy_crush(xy_fire, xy_enemy, score, isLoop); });
				std::future<void> d2 = std::async(std::launch::async, [&]() {f.my_enemy_crush(posx, posy, xy_enemy, isLoop, page); });

			}
			catch (const std::exception& ex)
			{
				std::cout << "hello";
			}

			std::future<void> d1 = std::async(std::launch::async, [&]() {f.fire_enemy_crush(xy_fire, xy_enemy,score); });
			std::future<void> d2 = std::async(std::launch::async, [&]() {f.my_enemy_crush(posx, posy, xy_enemy); });

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
		else if (page == OVER) {
			gotoxy(70, 25);
			printf("-----------game over-----------");
			isLoop = true;
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