#pragma once
#include "Main.h"

void Function::fire_enemy_crush(std::vector<std::vector<int>>& xy_fire, std::list<std::vector<int>>& xy_enemy) {
	while (true)
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
					IterEnemy = xy_enemy.erase(IterEnemy);
					IterFire = xy_fire.erase(IterFire);
					continue;
				}
				
				IterEnemy++;
			}
		}
		
	}
}


void Function::my_enemy_crush(int& posx, int& posy, std::list<std::vector<int>>& xy_enemy) {
	while (true)
	{

	}
}