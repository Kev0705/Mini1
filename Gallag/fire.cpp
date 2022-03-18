#include "Main.h"

void Function::FireShoot(int &posx, int &posy, std::vector<int>& xy_fire, bool& isLoop)
{
	TimeDelay F;
	F.timeSet(0.05);

	while(isLoop)
	{
		if (_kbhit())
		{
			char c;
			c = _getch();

			if (c == SPACEBAR)
			{
				//int bullet_x = posx + 1; //posx,posy 레퍼런스로 받음
				//int bullet_y = posy - 1;

				xy_fire.push_back(posx+1);
				xy_fire.push_back(posy-1);

				for (int i = 0; i < 50; i++) //임의상 50번 반복, 반복문이 끝나기 전에 if 조건문에 의해 탈출함 추후 충돌 조건에 의해도 탈출 예정
				{

					m1.lock();
					gotoxy(xy_fire[0], xy_fire[1]);
					std::cout << '!';
					m1.unlock();

					Sleep(25); //fire 발사 쿨타임

					m1.lock();
					gotoxy(xy_fire[0], xy_fire[1]);
					std::cout << ' ';
					m1.unlock();
					

					xy_fire[1]--; //buellt의 y좌표를 하나씩 위로
					
					if (xy_fire[1] < 6) {

						m1.lock();

						gotoxy(xy_fire[0], xy_fire[1] +1); // 벽 끝에 닿았을때 없애고 반복문 탈출
						std::cout << ' ';

						m1.unlock();
						

						xy_fire.pop_back();
						xy_fire.pop_back();

						break;
					}
				}
			}
		}
	}


	/*
	TimeDelay F; //fire 딜레이
	F.timeSet(0.05);

	TimeDelay B; //Bullet 딜레이
	B.timeSet(0.015);

	if (GetAsyncKeyState(VK_SPACE) & 0x8000)
	{
		int fire_x = posx + 1;
		int fire_y = posy - 1;

		while (fire_y > 5)
		{
			if (B.timeDelay() == true)
			{
				gotoxy(fire_x, fire_y);
				std::cout << '@';
				fire_y--;
			}
		}
	}
	*/
}

void Function::bullet()
{

};