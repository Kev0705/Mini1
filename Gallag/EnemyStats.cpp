#include "Main.h"
#include <random>

void Enemy::EnemyStats() {
	srand(time(NULL));
	x = (random(1, 30)*3)+32;//���� ������ġ
	y = 6; 
}