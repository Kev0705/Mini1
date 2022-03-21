#pragma once
#include "Main.h"

void Function::fire_enemy_crush(std::vector<std::vector<int>>& xy_fire, std::list<std::vector<int>>& xy_enemy, int& score, bool& isLoop) {
	while (isLoop)
	{
		for (std::vector<std::vector<int>>::iterator IterFire = xy_fire.begin(); IterFire != xy_fire.end();++IterFire) {
			//std::vector<int> fireVector = *IterFire;
			for (std::list<std::vector<int>>::iterator IterEnemy = xy_enemy.begin(); IterEnemy != xy_enemy.end();) {
				//std::vector<int> EnemyVector = *IterEnemy;
				if (*IterFire == *IterEnemy) {
					m1.lock();
					std::vector<int> EnemyVector = *IterEnemy;
					gotoxy(EnemyVector[0] - 1, EnemyVector[1]);
					std::cout << ("   ");
					m1.unlock();
					score += 100;
					showScore(score);
					m1.lock();
					IterEnemy = xy_enemy.erase(IterEnemy);
					
					m1.unlock();
					continue;
				}
				
				IterEnemy++;
			}
		}
		
	}
}


void Function::my_enemy_crush(int& posx, int& posy, std::list<std::vector<int>>& xy_enemy, bool& isLoop, int &page, int &life) {
	while (isLoop)
	{
		for (std::list<std::vector<int>>::iterator IterEnemy = xy_enemy.begin(); IterEnemy != xy_enemy.end();) {
			std::vector<int> myVector(2);
			myVector[0] = posx+1;
			myVector[1] = posy;
			std::vector<int> myVector2(2);
			myVector2[0] = posx;
			myVector2[1] = posy;
			std::vector<int> myVector3(2);
			myVector3[0] = posx+2;
			myVector3[1] = posy;
			std::vector<int> myVector4(2);
			myVector4[0] = posx + 3;
			myVector4[1] = posy;
			std::vector<int> myVector5(2);
			myVector5[0] = posx -1;
			myVector5[1] = posy;

			
			if (myVector == *IterEnemy || myVector2 == *IterEnemy || myVector3==*IterEnemy || myVector4==*IterEnemy || myVector5==*IterEnemy) {
				std::vector<int> EnemyVector = *IterEnemy;
				m1.lock();				
				gotoxy(EnemyVector[0]-1, EnemyVector[1]);
				printf("   ");
				m1.unlock();
				m1.lock();
				IterEnemy = xy_enemy.erase(IterEnemy);
				m1.unlock();
				life -= 1;
			
				ShowLife(life);
				if (life == 0)
				{
					m1.lock();
					gotoxy(myVector[0]-1, myVector[1]);
					printf("   ");
					m1.unlock();
					isLoop = false;//게임종료화면 출력 코드
					page = 3;
				}
				break;
			}

			IterEnemy++;
		}
	}
}

void Function::showScore(int score) {
	m1.lock();
	gotoxy(145, 3);
	std::cout << "score : " << score;
	m1.unlock();
}

void Function::esc(bool& isLoop, int& page) {

	TimeDelay Esc; //esc 딜레이
	Esc.timeSet(0.1);

	while (isLoop) {
		if (Esc.timeDelay() == true) {
			if (GetAsyncKeyState(ESC) & 0x8000) { //왼쪽
				isLoop = false;//게임종료화면 출력 코드
				page = 3;
				break;
			}
		}
	}
}