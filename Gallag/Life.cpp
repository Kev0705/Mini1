#include "Main.h"


void Life(int x, int y) { //최초 Life를 3으로 설정 후 crush 함수에서 충돌 일어날때 pop_back() 멤버로 제거
	list<int> Life1;
	Life1.push_back(1);
	Life1.push_back(1);
	Life1.push_back(1);
	gotoxy(x, y);
	cout << "Life: " << Life1.size() << endl;

	if (Life1.empty()) // life가 모두 삭제되면 게임 오버 문자열 출력 
	{
		gotoxy(85, 50);
		printf("Game over");
	}
}