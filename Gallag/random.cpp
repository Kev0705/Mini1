#include "Main.h"

int random(int from, int to)
{
	std::random_device rd; // 난수 생성용
	std::mt19937_64 mt(rd()); // 난수 생성용 
	std::uniform_int_distribution<int> range(from, to); //x,y 사이 난수 생성, 이 세줄 원리 알 필요 X
	int val = range(mt); //윗줄로부터 받은 mt값을 val에다 저장

	return val;
}