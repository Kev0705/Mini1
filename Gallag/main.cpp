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

	enum { START, GAME, SCORE }; //START = 0 , GAME = 1, SCORE =2
	int page = 0; //�ʱ� page�� 0

	char curDir[1000];
	_getcwd(curDir, 1000); //C:\Users\USER\source\repos\Kev0705\Mini1\Gallag\Mini1\Gallag
	strcat_s(curDir, "/score.txt");

	//score.txt ����
	std::ifstream fin(curDir);
	if (!fin) {
		std::ofstream fout(curDir);
	}

	//xy��ǥ���� ������ list vector ����
	std::list<std::vector<int>> xy_enemy;
	std::vector<std::vector<int>> xy_fire(10);
	std::list<int> mycount;
	//score ī��Ʈ�� ���ؼ� ����
	std::vector<int> Score_count;
	//���� score ����� ���� ����std::list<int>& Score_Count
		//���� score ����� ���� ����
		//���� score ����� ���� ����
		//���� score ����� ���� ����
	//���ھ ����loop�� ���� ��� �����ʿ� ���� ����� ������ ����

	int posx = 85;
	int posy = 40;
	int fire_x; //���� �� ���� ��� x ������
	int fire_y; //���� �� ���� ��� x ������
	struct EnemyXY {
		int x;
		int y;
	} ;
	struct EnemyXY XY;
	XY.x = NULL;
	XY.y = NULL;


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

			i.map();
			// �� ���� �� ��Ƽ������ ���� �� ���ѹݺ� ������ page���� �����Ͽ� ����������

			// ��ü������ ���̽� ����� ���� �ذ� �ȵ� �� �����庰�� sleep���� �̿��ؼ� ���� �߻� Ƚ���� ����������

			//���� Function ���� 

			std::future<void> a = std::async(std::launch::async, [&]() {f.MoveFlight(posx, posy); }); //async�� ��������� thread ����ص� ���� �����Ŷ�� ������
			
			std::future<void> b1 = std::async(std::launch::async, [&]() {f.FireShoot(posx, posy, xy_fire[0]); });
			std::future<void> b2 = std::async(std::launch::async, [&]() {f.FireShoot(posx, posy, xy_fire[1]); });
			std::future<void> b3 = std::async(std::launch::async, [&]() {f.FireShoot(posx, posy, xy_fire[2]); });
			std::future<void> b4 = std::async(std::launch::async, [&]() {f.FireShoot(posx, posy, xy_fire[3]); });
			std::future<void> b5 = std::async(std::launch::async, [&]() {f.FireShoot(posx, posy, xy_fire[4]); });
			std::future<void> b6 = std::async(std::launch::async, [&]() {f.FireShoot(posx, posy, xy_fire[5]); });
			std::future<void> b7 = std::async(std::launch::async, [&]() {f.FireShoot(posx, posy, xy_fire[6]); });
			std::future<void> b8 = std::async(std::launch::async, [&]() {f.FireShoot(posx, posy, xy_fire[7]); });
			std::future<void> b9 = std::async(std::launch::async, [&]() {f.FireShoot(posx, posy, xy_fire[8]); });
			std::future<void> b10 = std::async(std::launch::async, [&]() {f.FireShoot(posx, posy, xy_fire[9]); });

			std::future<void> c1 = std::async(std::launch::async, [&]() {f.CreatEnemy(XY.x, XY.y); });
//			std::future<void> c2 = std::async(std::launch::async, [&]() {f.MoveEnemy(xy_enemy); });
			//std::future<void> d = std::async(std::launch::async, [&]() { /*fuction*/});

			std::future<void> d1 = std::async(std::launch::async, [&]() {f.fire_enemy_crush(xy_fire, xy_enemy, mycount); });
			

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