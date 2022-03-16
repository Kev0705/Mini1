#include "Main.h"
#include <random>

void Enemy::EnemyStats() {
	srand(time(NULL));
	x = (random(30)*3)+32;
	y = 6; 
}