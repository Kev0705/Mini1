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
				//int bullet_x = posx + 1; //posx,posy ���۷����� ����
				//int bullet_y = posy - 1;

				xy_fire.push_back(posx+1);
				xy_fire.push_back(posy-1);

				for(int i = 0 ; i<50;i++) //���ǻ� 50�� �ݺ�, �ݺ����� ������ ���� if ���ǹ��� ���� Ż���� ���� �浹 ���ǿ� ���ص� Ż�� ����
				{

					m1.lock();
					gotoxy(xy_fire[0], xy_fire[1]);
					std::cout << '!';
					m1.unlock();

					Sleep(25); //fire �߻� ��Ÿ��

					m1.lock();
					gotoxy(xy_fire[0], xy_fire[1]);
					std::cout << ' ';
					m1.unlock();

					xy_fire[1]--; //buellt�� y��ǥ�� �ϳ��� ����
					
					if (xy_fire[1] < 6) {

						m1.lock();

						gotoxy(xy_fire[0], xy_fire[1] +1); // �� ���� ������� ���ְ� �ݺ��� Ż��
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