#include "Main.h"

void Function::Scorecount(std::list<int>& Score_Count) { //����Ʈ�� crush�Լ��� �۵� �Ҷ����� mycount�� 1�� ���� �����ϰ� ���߿� ī��Ʈ�� ���� �� ������ ������ ȯ���ϴ� ���
	
int mycount=std::count(Score_Count.begin(), Score_Count.end(), 1);
	gotoxy(100, 0);
	std::cout << mycount*100 << endl;
}