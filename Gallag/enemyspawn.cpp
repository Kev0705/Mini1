#include "Main.h"

void Enemy::enemyspawn() 
{
	std::mutex emutex;
	
	emutex.lock();
	gotoxy(40, 20);
	std::cout << "<->";
	emutex.unlock();
}