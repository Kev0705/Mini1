#include <stdio.h>
#include <Windows.h>

/* �� �� �� �� */
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

/* �� ��  �� �� */
void init() {
	system("mode con cols=56 lines=50 | title �� �� �� �� ");
}

void titleDraw(){
	printf("\n\n\n\n"); // �� �� �� 4ĭ �� ��
	printf("   #       #       #      #         #####        #        #####       #####  \n");
	printf("    #     # #     #      # #        #    #      # #         #         #    # \n");
	printf("     #   #   #   #      # # #       #####      # # #        #         #####  \n");
	printf("      # #     # #      #     #      #  #      #     #       #         #  #   \n");
	printf("       #       #      #       #     #   #    #       #    #####       #   #  \n");
}

void menuDraw() {
	gotoxy(35 - 2, 17); // -2 �� �� �� �� > �� �� �� �� �� �� �� �� �� ��
	printf("> �� �� �� ��");
	gotoxy(35, 19);
	printf("�� �� �� ��");
	gotoxy(35, 21);
	printf("   �� ��   ");
}

// Ŀ ��  �� ġ  �� �� �� ��
void gotoxy(int x, int y) {
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE); // �� ��  �� �� �� �� �� ��
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(consoleHandle, pos);
}
// �߻�ü 
for (int i = 0; i < 5; i++) {
		printf("|\n");
	}
	return 0;

