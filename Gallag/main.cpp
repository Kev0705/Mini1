#include <stdio.h>
<<<<<<< HEAD
#include <Windows.h>

/* 함 수 선 언 */
void init();
void titleDraw();
void gotoxy(int, int);

int main() {
	init();
	titleDraw();
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

// 커 서  위 치  이 동 함 수
void gotoxy(int x, int y) {
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE); // 콘 솔  핸 들 가 져 오 기
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(consoleHandle, pos);
}
=======

int main() { 
	printf("\n\n\n\n"); // 맨 위 에 4칸 개 행
	printf("   #       #       #      #         #####        #        #####       #####  \n");
	printf("    #     # #     #      # #        #    #      # #         #         #    # \n");
	printf("     #   #   #   #      # # #       #####      # # #        #         #####  \n");
	printf("      # #     # #      #     #      #  #      #     #       #         #  #   \n");
	printf("       #       #      #       #     #   #    #       #    #####       #   #  \n");
	return 0;
}
>>>>>>> 039bec023d90068c940aad379353963145684129
