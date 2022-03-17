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
	int page = 0; //�ʱ� page�� 0

	char curDir[1000];
	_getcwd(curDir, 1000); //C:\Users\USER\source\repos\Kev0705\Mini1\Gallag\Mini1\Gallag
	strcat_s(curDir, "/score.txt");

	//score.txt ����
	std::ifstream fin(curDir);
	if (!fin) {
		std::ofstream fout(curDir);
	}
	std::list<std::vector<int>> xy;

	//���� score ����� ���� ����
		//���� score ����� ���� ����
		//���� score ����� ���� ����
		//���� score ����� ���� ����
	//���ھ ����loop�� ���� ��� �����ʿ� ���� ����� ������ ����

	int posx = 85;
	int posy = 40;
	int fire_x; //���� �� ���� ��� x ������
	int fire_y; //���� �� ���� ��� x ������
	
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
			// �� ���� �� ��Ƽ������ ���� �� ���ѹݺ� ������ page���� �����Ͽ� ����������

			// ��ü������ ���̽� ����� ���� �ذ� �ȵ� �� �����庰�� sleep���� �̿��ؼ� ���� �߻� Ƚ���� ����������
			
			//���� Function ���� 

			std::future<void> a = std::async(std::launch::async, [&]() {f.MoveFlight(posx, posy); }); //async�� ��������� thread ����ص� ���� �����Ŷ�� ������
			
			std::future<void> b1 = std::async(std::launch::async, [&]() {f.FireShoot(posx, posy, fire_x, fire_y); });
			std::future<void> b2 = std::async(std::launch::async, [&]() {f.FireShoot(posx, posy, fire_x, fire_y); });
			std::future<void> b3 = std::async(std::launch::async, [&]() {f.FireShoot(posx, posy, fire_x, fire_y); });
			std::future<void> b4 = std::async(std::launch::async, [&]() {f.FireShoot(posx, posy, fire_x, fire_y); });
			std::future<void> b5 = std::async(std::launch::async, [&]() {f.FireShoot(posx, posy, fire_x, fire_y); });
			std::future<void> b6 = std::async(std::launch::async, [&]() {f.FireShoot(posx, posy, fire_x, fire_y); });
			std::future<void> b7 = std::async(std::launch::async, [&]() {f.FireShoot(posx, posy, fire_x, fire_y); });
			std::future<void> b8 = std::async(std::launch::async, [&]() {f.FireShoot(posx, posy, fire_x, fire_y); });
			std::future<void> b9 = std::async(std::launch::async, [&]() {f.FireShoot(posx, posy, fire_x, fire_y); });
			std::future<void> b10 = std::async(std::launch::async, [&]() {f.FireShoot(posx, posy, fire_x, fire_y); });

			std::future<void> c1 = std::async(std::launch::async, [&]() {f.CreatEnemy(xy); });
			std::future<void> c2 = std::async(std::launch::async, [&]() {f.MoveEnemy(xy); });
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