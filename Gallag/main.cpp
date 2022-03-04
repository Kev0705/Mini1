#include <stdio.h>
#include <Windows.h>

/* 함 수 선 언 */
void init();
void titleDraw();
void menuDraw();
void gotoxy(int, int);

int main() {
	init();
	titleDraw();
	menuDraw();
	return 0;
}

/* 함 수  구 현 */
void init() {
	system("mode con cols=56 lines=20 | title 게 임 제 목 ");
}

void titleDraw(){
	printf("\n\n\n\n"); // 맨 위 에 4칸 개 행
	printf("   #       #       #      #         #####        #        #####       #####  \n");
	printf("    #     # #     #      # #        #    #      # #         #         #    # \n");
	printf("     #   #   #   #      # # #       #####      # # #        #         #####  \n");
	printf("      # #     # #      #     #      #  #      #     #       #         #  #   \n");
	printf("       #       #      #       #     #   #    #       #    #####       #   #  \n");
}

void menuDraw() {
	gotoxy(24 - 2, 12); // -2 한 이 유 는 > 를 출 력 해 야 하 기 때 문 에
	printf("> 게 임 시 작");
	gotoxy(24, 13);
	printf("게 임 정 보");
	gotoxy(24, 14);
	printf("   종 료   ");
}

// 커 서  위 치  이 동 함 수
void gotoxy(int x, int y) {
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE); // 콘 솔  핸 들 가 져 오 기
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(consoleHandle, pos);
}
