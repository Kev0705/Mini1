#include <stdio.h>

#include <Windows.h>

/* �� �� �� �� */
void init();
void titleDraw();
void gotoxy(int, int);

int main() {
	init();
	titleDraw();
	return 0;
}

/* �� ��  �� �� */
void init() {
	system("mode con cols=56 lines=20 | title �� �� �� �� ");
}

void titleDraw(){
	printf("\n\n\n\n"); // �� �� �� 4ĭ �� ��
	printf("   #       #       #      #         #####        #        #####       #####  \n");
	printf("    #     # #     #      # #        #    #      # #         #         #    # \n");
	printf("     #   #   #   #      # # #       #####      # # #        #         #####  \n");
	printf("      # #     # #      #     #      #  #      #     #       #         #  #   \n");
	printf("       #       #      #       #     #   #    #       #    #####       #   #  \n");
}

// Ŀ ��  �� ġ  �� �� �� ��
void gotoxy(int x, int y) {
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE); // �� ��  �� �� �� �� �� ��
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(consoleHandle, pos);
}

