#include "Main.h"

void Function::FireShoot(int &posx, int &posy,int& fire_x, int& fire_y)
{
	TimeDelay F;
	F.timeSet(0.05);

	while(true)
	{
		int bullet_x = posx+1; //posx,posy 레퍼런스로 받음
		int bullet_y = posy-1;

		if (_kbhit())
		{
			char c;
			c = _getch();

			if (c == SPACEBAR)
			{
				

				for(int i = 0 ; i<50;i++) //임의상 50번 반복, 반복문이 끝나기 전에 if 조건문에 의해 탈출함 추후 충돌 조건에 의해도 탈출 예정
				{
					m1.lock();

					gotoxy(bullet_x, bullet_y);
					std::cout << '!';
					gotoxy(bullet_x, bullet_y+1);
					std::cout << ' ';

					m1.unlock();

					Sleep(25); //fire 발사 쿨타임
					bullet_y--; //buellt의 y좌표를 하나씩 위로 

					if (bullet_y < 6) {

						m1.lock();

						gotoxy(bullet_x, bullet_y+1); // 벽 끝에 닿았을때 없애고 반복문 탈출
						std::cout << ' ';

						m1.unlock();

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