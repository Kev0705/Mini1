#include "Main.h"


void Function::lasercrash()
{ 
	while (true) {
		if (*Ly == *Fy && *Lx == *Fx)
			//		if (mdx == Firex && mdy == Firey) // 음 일단 x,y는 나의 위치여서 unit 함수 정리되면 해당 변수명을 넣어주면 될듯 합니다 그래서 내위치랑 레이저 위치가 일치화하게 되면 멈춰버리게는 해놨습니다. 이부분은 레이저 생성부분 밑에 넣어야지 될듯 합니다.
		{

			gotoxy(40, 20);
			printf("Game Over\n");

			//일단은 return으로 멈추게 해놨는데 만약 라이프를 사용하게 되면 요부분을 최초 life 에서 같은 위치가 될때마다 차감할수있게 반복문으로 수정하겠습니다. // 나중에 멀티스레드 처리하게되면
		}
		else
			break ;
		//else if (Firey == 45 || Firey == 5) // 이부분은 레이저가 아예 끝이나 맨위로 올라가면 삭제 되게 할려고 하는데 아마 레이저만 삭제 할려면 레이저메모리 부분을 지워버리면 되지 않을까 생각이 됩니다.
		//{
	//		return;  // 레이저 메모리 삭제 부분 이부분은 그냥 함수로 빼면 될듯합니다.
	//	}
	
	}
	
}
