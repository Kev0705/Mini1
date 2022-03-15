#include "Main.h"
void fireShoot(int x, int y) // 내가 쏘는 발사체 
{
    TimeDelay T;
    T.timeSet(0.1);

    int HY = y - 1;
    int x2 = x;

    gotoxy(x2, HY);
    printf("@");

    while (HY > 6) {
        if (T.timeDelay() == true) {
            gotoxy(x2, HY);
            printf(" ");

            HY--;
            gotoxy(x2, HY);
            printf("@");

        }
    }
}
void Function::MoveFlight(StartScreen S, int& page)
{
    TimeDelay T;
    T.timeSet(0.1);
    std::mutex m;

    //ThreadPool pool(10);
    ThreadPool_ pool(100);
    //std::vector<Fire> FireVector;
    //std::vector<Fire>::iterator IterPos1 = FireVector.begin();

    //std::vector<std::thread> threadVector;
    //std::vector<std::thread>::iterator IterPos2 = threadVector.begin();

    while(true) 
    {
        if (T.timeDelay() == true) {
            int x1 = x;
            int y1 = y;

            if (KeyScan(ESC)) {
                page = 0;
                system("cls");
                S.logo();
                S.menu();
                break;
            }
            //if (KeyScan(SPACEBAR)) {
            if (GetAsyncKeyState(VK_SPACE) & 0x8000) {
                pool.EnqueueJob([=]() { fireShoot(x, y); });
                //if(FireVector.size()== FireVector.capacity())
                //    FireVector.resize(FireVector.size() * 2);
                //IterPos1->FireShoot(x, y);
                //IterPos1++;
            }
            if (GetAsyncKeyState(VK_LEFT) & 0x8000) { //왼쪽
                x1 -= 3;

            }
            if (GetAsyncKeyState(VK_RIGHT) & 0x8000) { //오른쪽
                x1 += 3;

            }
            if (GetAsyncKeyState(VK_UP) & 0x8000) { //위
                y1 -= 1;

            }
            if (GetAsyncKeyState(VK_DOWN) & 0x8000) { //아래
                y1 += 1;

            }

            if (x1 < 30) x1 += 3;
            if (x1 >= 132) x1 -= 3;

            if (y1 <= 10) y1 += 1;
            if (y1 >= 45) y1 -= 1;

            {
                std::unique_lock<std::mutex> lock(m);
                gotoxy(x, y);
                printf("   ");
                gotoxy(x1, y1);
                printf("<O>"); // 추후 Unit 쪽으로 분리시킬 예정

                x = x1;
                y = y1;

            }
            
                }
        
        
    }
}