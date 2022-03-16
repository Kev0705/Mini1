#pragma once 

#include <thread>
#include <mutex>
#include <future>
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
		//���� score ����� ���� ����

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
			Enemy e;
			
			i.map();
			// �� ���� �� ��Ƽ������ ���� �� ���ѹݺ� ������ page���� �����Ͽ� ����������

			// ��ü������ ���̽� ����� ���� �ذ� �ȵ� �� �����庰�� sleep���� �̿��ؼ� ���� �߻� Ƚ���� ����������
			
			//���� Function ���� 

			std::future<void> a = std::async(std::launch::async, [&]() {f.MoveFlight(posx, posy); }); //async�� ��������� thread ����ص� ���� �����Ŷ�� ������
			
			std::future<void> b = std::async(std::launch::async, [&]() {f.FireShoot(posx, posy, fire_x, fire_y); });

			std::future<void> c = std::async(std::launch::async, [&]() {f.CreatEnemy(); });




			//std::thread t1([&]() { f.MoveFlight(posx, posy); });
			//std::thread t2([&]() { f.FireShoot(posx,posy,fire_x,fire_y); });

			
			//t1.join();
			//t2.join();

			
			//f.MoveFlight(posx,posy);
			//e.enemyspawn();
			//f.FireShoot(posx,posy);

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