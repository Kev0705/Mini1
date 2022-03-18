#pragma once
#include "Main.h"

void Function::CreatEnemy(std::list<std::vector<int>>& xy_enemy) //랜덤으로 생성 // 만들다 맘
{
	while (true) // 멀티스레드를 위해 무한 반복 
	{

		int x = (random(1, 30)+10)*3;
		int y = random(6, 10);

		std::vector<int> enemyVector;
		enemyVector.push_back(x);
		enemyVector.push_back(y);
		xy_enemy.push_back(enemyVector);


void Function::MoveEnemy(int x, int y)
{
	for (int i = 0; i < 20; i++)
	{
		while (y > 44) {
			XY[i].y++;
		}
		
	}
	
}

void Function::DeleteEnemy(std::list<std::vector<int>>& xy) {

}

//test용으로 만듬 좌표값 잘 받아오는지만 확인
void Function::MoveEnemy(std::list<std::vector<int>>& xy_enemy) {

	while (true) {
		//list 요소를 반복 << list요소 = vector(x,y)값을 가리키고 있음
		for (std::list<std::vector<int>>::iterator IterPos = xy_enemy.begin(); IterPos != xy_enemy.end();) {
			std::vector<int> enemyVector = *IterPos;
			//y축 map 좌표 = 45. map에 도달하면 list요소 삭제 및 콘솔상의 enemy 삭제
			if (enemyVector[1] == 44) {
				m1.lock();
				gotoxy(enemyVector[0] - 1, enemyVector[1]);
				std::cout << ("   ");
				m1.unlock();
				IterPos = xy_enemy.erase(IterPos);
				continue;
			}
			//현재 좌표 clear 후 밑으로 이동하여 enemy 출력
			m1.lock();
			gotoxy(enemyVector[0] - 1, enemyVector[1]);
			std::cout << ("   ");
			m1.unlock();

			m1.lock();
			enemyVector[1]++;
			*IterPos = enemyVector;
			m1.unlock();

			m1.lock();
			gotoxy(enemyVector[0] - 1, enemyVector[1]);
			std::cout << ("<=>");
			m1.unlock();
			++IterPos;
		}

		Sleep(300);
	}
}
*/