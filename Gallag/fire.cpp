#include "Main.h"

void Function::FireShoot(int &posx, int &posy,int& fire_x, int& fire_y)
{
	TimeDelay F;
	F.timeSet(0.05);

	while(true)
	{
		int bullet_x = posx+1; //posx,posy ���۷����� ����
		int bullet_y = posy-1;

		if (_kbhit())
		{
			char c;
			c = _getch();

			if (c == SPACEBAR)
			{
				

				for(int i = 0 ; i<50;i++)
				{
					m1.lock();

						gotoxy(bullet_x, bullet_y);
						std::cout << '!';


						gotoxy(bullet_x, bullet_y+1);
						std::cout << ' ';
					
					m1.unlock();

						Sleep(25);
						bullet_y--;

						if (bullet_y < 6) {

							m1.lock();
							gotoxy(bullet_x, bullet_y+1); // �� ���� ������� ���ְ� �ݺ��� Ż��
							std::cout << ' ';
							m1.unlock();

							break;
						}

				}

				

			}

		}
	}


	/*
	TimeDelay F; //fire ������
	F.timeSet(0.05);

	TimeDelay B; //Bullet ������
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