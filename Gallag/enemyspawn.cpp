#pragma once
#include "Main.h"

void Function::CreatEnemy(std::list<std::vector<int>>& xy) //랜덤으로 생성 // 만들다 맘
{

	while (true) // 멀티스레드를 위해 무한 반복 
	{

		int x = random(32, 132);
		int y = random(6, 10);

		std::vector<int> xyVector;
		xyVector.push_back(x);
		xyVector.push_back(y);
		             //순서대로 x , y    적 기체 크기가 3이기 때문에 x,y 좌표가 같으면 충돌로 처리하기 위함

		xy.push_back(xyVector); //

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

void Function::DeleteEnemy(std::list<std::vector<int>>& xy) {
	
}

//test용으로 만듬 좌표값 잘 받아오는지만 확인
void Function::MoveEnemy(std::list<std::vector<int>>& xy) {

	while (true) {

		for (std::list<std::vector<int>>::iterator IterPos = xy.begin(); IterPos != xy.end();) {
			std::vector<int> xyVector = *IterPos;
			if (xyVector[1] == 44) {
				m1.lock();
				gotoxy(xyVector[0] - 1, xyVector[1]);
				std::cout << ("   ");
				m1.unlock();
				IterPos =xy.erase(IterPos);
				continue;
			}
			m1.lock();
			gotoxy(xyVector[0] - 1, xyVector[1]);
			std::cout << ("   ");
			m1.unlock();

			m1.lock();
			xyVector[1]++;
			*IterPos = xyVector;
			m1.unlock();

			m1.lock();
			gotoxy(xyVector[0] - 1, xyVector[1]);
			std::cout << ("<=>");
			m1.unlock();
			++IterPos;
		}

		Sleep(300);
	}
}
