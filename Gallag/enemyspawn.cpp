#pragma once
#include "Main.h"

void Function::CreatEnemy() //랜덤으로 생성 // 만들다 맘
{

	while (true) // 멀티스레드를 위해 무한 반복 
	{

		

		int x = random(31, 131);
		int y = random(6, 10);
		
		std::vector<std::tuple<int, int, int, int>> enemy; 
		             //순서대로 x-1, x , x+1 , y    적 기체 크기가 3이기 때문에 (x-1,y) or (x,y) or (x+1,y) 좌표가 같으면 충돌로 처리하기 위함

		enemy.push_back({ x - 1, x, x + 1, y });

		m1.lock();

		gotoxy(x-1, y); 
		std::cout << '<';
		gotoxy(x, y);
		std::cout << '-';
		gotoxy(x+1, y);
		std::cout << '>';
		
		m1.unlock();

		Sleep(300); //적 생성 쿨타임
	}
}
