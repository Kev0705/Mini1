#include "Main.h"


void Function::Crash(int& posx, int& posy, int& fire_x, int& fire_y, std::list<std::vector<int>>& xy)
{ 
	while (true) {
		int x1 = posx; //내 x좌표
		int y1 = posy; //내 y좌표
		int fx = fire_x; //내 발사체 x좌표
		int fy = fire_y; //내 발사체 y좌표
		int Ex; //적의 x좌표
		int Ey; //적의 y좌표
		int Efx; //적 발사체 x좌표
		int Efy; //적 발사체 y좌표

		
		if (fx == Ex && fy == Ey) // 내 발사체가 적 유닛을 맞췄을때
		{
			gotoxy(40, 20);
			printf("맞췄다");
		}
		if (x1 == Efx && y1 == Efy) //적 발사체가 내 유닛을 맞췄을때
		{
			gotoxy(50, 0);
			printf("Game Over");
		}
		if (x1 == Ex && y1 == Ey) // 내 유닛과 적 발사체간 충돌 했을경우
		{
			gotoxy(70, 0);
			printf("충돌");
		}
		
	
	}
	
}
