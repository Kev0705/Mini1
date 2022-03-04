#include <Windows.h>

void gotoxy(int x, int y) {
    COORD pos = { x,y }; //x, y 좌표 설정
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos); //커서 설정
}