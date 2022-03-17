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
		xy.push_back(xyVector);


		//순서대로 x , y    적 기체 크기가 3이기 때문에 x,y 좌표가 같으면 충돌로 처리하기 위함

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
		//list 요소를 반복 << list요소 = vector(x,y)값을 가리키고 있음
		for (std::list<std::vector<int>>::iterator IterPos = xy.begin(); IterPos != xy.end();) {
			std::vector<int> xyVector = *IterPos;
			//y축 map 좌표 = 45. map에 도달하면 list요소 삭제 및 콘솔상의 enemy 삭제
			if (xyVector[1] == 44) {
				m1.lock();
				gotoxy(xyVector[0] - 1, xyVector[1]);
				std::cout << ("   ");
				m1.unlock();
				IterPos =xy.erase(IterPos);
				continue;
			}
			//현재 좌표 clear 후 밑으로 이동하여 enemy 출력
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
