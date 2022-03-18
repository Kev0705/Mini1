#include "Main.h"


void Function::LifeCount(int life, bool& isLoop, int& page) {
	if (life == 0)
	{
		isLoop = false;//게임종료화면 출력 코드
		page = 3;
	}
}

void Function::ShowLife(int Life) {
	m1.lock();
	gotoxy(100, 0);
	std::cout<<"Life:" << Life;
	m1.unlock();
}