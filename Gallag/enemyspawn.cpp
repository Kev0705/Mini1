#pragma once
#include "Main.h"

void Function::CreatEnemy() //랜덤으로 생성 // 만들다 맘
{

	while (true) // 멀티스레드를 위해 무한 반복 
	{

		struct Enemy
		{
			int x;
			int y;
		};


		m1.lock();

		gotoxy(random(31,131), random(6,10)); // x=31~131 랜덤, y=6~10랜덤
		std::cout <<"<->"; // 적 생성

		m1.unlock();

		Sleep(300); //적 생성 쿨타임
	}
}
