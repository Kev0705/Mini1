#include "Main.h"


void Function::Crash(int& posx, int& posy, int& fire_x, int& fire_y, std::list<std::vector<int>>& xy)
{ 
	while (true) {
		int x1 = posx; //�� x��ǥ
		int y1 = posy; //�� y��ǥ
		int fx = fire_x; //�� �߻�ü x��ǥ
		int fy = fire_y; //�� �߻�ü y��ǥ
		int Ex; //���� x��ǥ
		int Ey; //���� y��ǥ
		int Efx; //�� �߻�ü x��ǥ
		int Efy; //�� �߻�ü y��ǥ

		
		if (fx == Ex && fy == Ey) // �� �߻�ü�� �� ������ ��������
		{
			gotoxy(40, 20);
			printf("�����");
		}
		if (x1 == Efx && y1 == Efy) //�� �߻�ü�� �� ������ ��������
		{
			gotoxy(50, 0);
			printf("Game Over");
		}
		if (x1 == Ex && y1 == Ey) // �� ���ְ� �� �߻�ü�� �浹 �������
		{
			gotoxy(70, 0);
			printf("�浹");
		}
		
	
	}
	
}
