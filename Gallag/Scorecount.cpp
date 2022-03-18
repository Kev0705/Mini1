#include "Main.h"

void Function::Scorecount(std::list<int>& Score_Count) { //리스트에 crush함수가 작동 할때마다 mycount에 1씩 새로 저장하고 나중에 카운트를 통해 총 갯수로 점수로 환산하는 방식
	
int mycount=std::count(Score_Count.begin(), Score_Count.end(), 1);
	gotoxy(100, 0);
	std::cout << mycount*100 << endl;
}