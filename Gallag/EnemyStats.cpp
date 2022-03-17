#include "Main.h"
#include <random>

void Enemy::EnemyStats() {
	srand(time(NULL));
	x = (random(1, 30)*3)+32;//최초 시작위치
	y = 6; 
}