#include "Main.h"
#include <random>

void Function::CreatEnemy() //랜덤으로 생성 // 만들다 맘
{
	//TimeDelay T;
	//T.timeSet(0.1);

	while (true) // 멀티스레드를 위해 무한 반복 
	{

		struct Enemy
		{
			int x;
			int y;
		};

		std::random_device rd; // 난수 생성용

		std::mt19937_64 mt(rd()); // 난수 생성용 

		std::uniform_int_distribution<int> range(31, 131); //31~131 사이 난수 생성, 이 세줄 원리 알 필요 X

		int val = range(mt); //윗줄로부터 받은 mt값을 val에다 저장
		
		m1.lock();

		gotoxy(val, 6); //(임시) y=6줄에 val이라는 난수값으로 커서 이동
		std::cout <<"<->"; // 적 생성

		m1.unlock();

		Sleep(100); //적 생성 쿨타임
	}
}
