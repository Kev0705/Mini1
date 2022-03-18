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
	int page = 0; //�ʱ� page�� 0

	char curDir[1000];
	_getcwd(curDir, 1000); //C:\Users\USER\source\repos\Kev0705\Mini1\Gallag\Mini1\Gallag
	strcat_s(curDir, "/score.txt");

	//score.txt ����
	std::ifstream fin(curDir);
	if (!fin) {
		std::ofstream fout(curDir);
	}

	//���� score ����� ���� ����
		//���� score ����� ���� ����
		//���� score ����� ���� ����
	//���ھ ����loop�� ���� ��� �����ʿ� ���� ����� ������ ����

	int fire_x; //���� �� ���� ��� x ������
	int fire_y; //���� �� ���� ��� x ������

	int score;
	int life;
	

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
			life = 3;
			i.map();
			f.showScore(score);
			u.esc();
			u.UserControlGuide();
			f.ShowLife(life);
			
			

			//xy��ǥ���� ������ list vector ����
			std::list<std::vector<int>> xy_enemy;
			std::vector<std::vector<int>> xy_fire(10);
		

			int posx = 85;
			int posy = 40;

			// �� ���� �� ��Ƽ������ ���� �� ���ѹݺ� ������ page���� �����Ͽ� ����������
			// ��ü������ ���̽� ����� ���� �ذ� �ȵ� �� �����庰�� sleep���� �̿��ؼ� ���� �߻� Ƚ���� ����������

			//���� Function ���� 
	
				std::future<void> a = std::async(std::launch::async, [&]() {f.MoveFlight(posx, posy, isLoop); }); //async�� ��������� thread ����ص� ���� �����Ŷ�� ������

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

			

				std::future<void> d1 = std::async(std::launch::async, [&]() {f.fire_enemy_crush(xy_fire, xy_enemy, score, isLoop); });
				std::future<void> d2 = std::async(std::launch::async, [&]() {f.my_enemy_crush(posx, posy, xy_enemy, isLoop, page, life); });

				

				std::future<void> e1 = std::async(std::launch::async, [&]() {f.esc(isLoop, page); });


		}
		else if (page == SCORE)
		{
			Score i;
			i.map();
			i.showScore(curDir);
			//go start page
			_getch();
			page = START;
			system("cls");
			startmenu.logo();
			startmenu.menu();
		}
		else if (page == OVER) {
			GameOver g;
			g.showLogo();
			isLoop = true;
			g.scoreSave(curDir,score);
			g.showScore(curDir,score);

			//go start page
			_getch();
			page = START;
			system("cls");
			startmenu.logo();
			startmenu.menu();
		}
	}

	return 0;
}