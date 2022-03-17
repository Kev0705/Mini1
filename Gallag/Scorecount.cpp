#include "Main.h"

using namespace std;
void Function::Scorecount(std::list<int>& Score_Count) {
	
	int mycount=std::count(Score_Count.begin(), Score_Count.end(), 1);
	gotoxy(100, 0);
	std::cout << mycount << endl;
	

}