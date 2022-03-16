#include "Main.h"

void Function::MoveFlight(int& posx, int& posy) // main.cpp 내에서 선언된 posx,posy를 직접적으로 받아 조정
{

    TimeDelay T;
    T.timeSet(0.1);

    while(true) // 화면 전체 초기화 유의. 나중에 멀티스레드로 화면 전체 띄울 수 있는지 확인. 아마 안될듯ㅋㅋ
    {
        if (T.timeDelay() == true) 
        {
            int x1 = posx;
            int y1 = posy;
            if (GetAsyncKeyState(VK_LEFT) & 0x8000) { //왼쪽
                posx -= 2;
            }
            if (GetAsyncKeyState(VK_RIGHT) & 0x8000) { //오른쪽
                posx += 2;
            }
            if (GetAsyncKeyState(VK_UP) & 0x8000) { //위
                posy -= 1;
            }
            if (GetAsyncKeyState(VK_DOWN) & 0x8000) { //아래
                posy += 1;
            }

            if (posx < 30) posx += 2;
            if (posx >= 132) posx -= 2;

            if (posy <= 10) posy += 1;
            if (posy >= 45) posy -= 1;

            gotoxy(x1, y1);
            std::cout<<("   ");


            gotoxy(posx, posy);
            std::cout<<("<O>"); // 추후 Unit 쪽으로 분리시킬 예정  
        
        }
    }
}