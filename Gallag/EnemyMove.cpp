#include "Main.h"

void Enemy::EnemyMove() {
	Sleep(10);
	EnemyStats();
	EnemyUnit(x, y);
	Sleep(20);
	gotoxy(x, y);
	printf("   ");
	while (y < 44) {
		srand(time(NULL));
		int i = random(3);//3가지 경우의 수를 랜덤하게 생성
		switch (i)
		{
		case 0:
			x;
			break;
		case 1:
			x+=1;
			break;
		case 2:
			x-=1;
			break;
		
		}
		y++; // 좌우로 안움직여도 최소한 아래로는 움직임
		
		if (x < 31) {
			x += 2;
		}
		if (x > 130) {
			x -= 2;
		}
		Ex = &x;
		Ey = &y;
		Sleep(30);
		EnemyUnit(*Ex, *Ey);
		Sleep(40);
		gotoxy(x, y);
		printf("   ");
		
	}

}
