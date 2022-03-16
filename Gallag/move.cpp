#include "Main.h"


void Function::MoveFlight(StartScreen S, int& page)
{
    TimeDelay T;
    T.timeSet(0.1);

    while (true) // 화면 전체 초기화 유의. 나중에 멀티스레드로 화면 전체 띄울 수 있는지 확인. 아마 안될듯ㅋㅋ
    {
        if (T.timeDelay() == true) {
            if (KeyScan()) {
                page = 0;
                system("cls");
                S.logo();
                S.menu();
                break;
            }
            int x1 = x;
            int y1 = y;
            if (GetAsyncKeyState(VK_LEFT) & 0x8000) { //왼쪽
                x1 -= 2;
            }
            if (GetAsyncKeyState(VK_RIGHT) & 0x8000) { //오른쪽
                x1 += 2;
            }
            if (GetAsyncKeyState(VK_UP) & 0x8000) { //위
                y1 -= 1;
            }
            if (GetAsyncKeyState(VK_DOWN) & 0x8000) { //아래
                y1 += 1;
            }


            if (x1 < 30) x1 += 2;
            if (x1 >= 132) x1 -= 2;

            if (y1 <= 10) y1 += 1;
            if (y1 >= 45) y1 -= 1;

            gotoxy(x, y);
            printf("   ");
            x = x1;
            y = y1;

            gotoxy(x, y);
            printf("<O>"); // 추후 Unit 쪽으로 분리시킬 예정
            Lx = &x;
            Ly = &y;



        }

    }



}