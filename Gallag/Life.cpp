#include "Main.h"


void Function::LifeCount(int life, bool& isLoop, int& page) {
	if (life == 0)
	{
		isLoop = false;//��������ȭ�� ��� �ڵ�
		page = 3;
	}
}

void Function::ShowLife(int Life) {
	m1.lock();
	gotoxy(80, 4);
	std::cout<<"Life:" << Life;
	m1.unlock();
}