#pragma once
#include "Main.h"

void Function::CreatEnemy() //�������� ���� // ����� ��
{

	while (true) // ��Ƽ�����带 ���� ���� �ݺ� 
	{

		struct Enemy
		{
			int x;
			int y;
		};


		m1.lock();

		gotoxy(random(31,131), random(6,10)); // x=31~131 ����, y=6~10����
		std::cout <<"<->"; // �� ����

		m1.unlock();

		Sleep(300); //�� ���� ��Ÿ��
	}
}
