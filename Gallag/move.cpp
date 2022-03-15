#include "Main.h"

void fireShoot(int xx, int yy) // 내가 쏘는 발사체 
{
    std::mutex mm1;
    std::mutex mm2;
    std::mutex mm3;
    TimeDelay T;
    T.timeSet(0.1);

    int HX = xx + 1;
    int HY = yy - 2;
    
    {
        std::unique_lock<std::mutex> lock(mm1);
        gotoxy(HX, HY);
        printf("@");
    }
    while (HY > 6) {
        if (T.timeDelay() == true) {
            {
                std::unique_lock<std::mutex> lock(mm2);
                gotoxy(HX, HY);
                printf(" ");
            }
            HY--;
            {
                std::unique_lock<std::mutex> lock(mm3);
                gotoxy(HX, HY);
                printf("@");
            }
        }
    }

    //gotoxy(HX, HY);
    //printf(" ");
}

void func1() {

}
void Function::MoveFlight(StartScreen S, int& page)
{
    TimeDelay T;
    T.timeSet(0.1);
    std::mutex m;
    bool token =false;
    bool tok = false;
    //ThreadPool pool(10);
    ThreadPool_ pool(100);
    //std::vector<Fire> FireVector;
    //std::vector<Fire>::iterator IterPos1 = FireVector.begin();
    //std::vector<std::thread> threadVector;
    //std::vector<std::thread>::iterator IterPos2 = threadVector.begin();
    gotoxy(x, y);
    printf("<O>");
    while(true) 
    {
        if (T.timeDelay() == true) {

            if (KeyScan(ESC)) {
                page = 0;
                system("cls");
                S.logo();
                S.menu();
                break;
            }
            //if (KeyScan(SPACEBAR)) {
            if (GetAsyncKeyState(VK_SPACE) & 0x8000) {
                tok = true;
                //if(FireVector.size()== FireVector.capacity())
                //    FireVector.resize(FireVector.size() * 2);
                //IterPos1->FireShoot(x, y);
                //IterPos1++;
            }

            int x1 = x;
            int y1 = y;
            if (GetAsyncKeyState(VK_LEFT) & 0x8000) { //왼쪽
                x1 -= 3;
                token = true;
            }
            if (GetAsyncKeyState(VK_RIGHT) & 0x8000) { //오른쪽
                x1 += 3;
                token = true;
            }
            if (GetAsyncKeyState(VK_UP) & 0x8000) { //위
                y1 -= 1;
                token = true;
            }
            if (GetAsyncKeyState(VK_DOWN) & 0x8000) { //아래
                y1 += 1;
                token = true;
            }

            if (x1 < 30) x1 += 3;
            if (x1 >= 132) x1 -= 3;

            if (y1 <= 10) y1 += 1;
            if (y1 >= 45) y1 -= 1;


            if (tok == true) {
                pool.EnqueueJob([=]() { fireShoot(x, y); });
                tok = false;
            }
            if(token == true) {
                std::unique_lock<std::mutex> lock(m);
                gotoxy(x, y);
                printf("   ");
                x = x1;
                y = y1;
                gotoxy(x, y);
                printf("<O>"); // 추후 Unit 쪽으로 분리시킬 예정
                token = false;
            }
        }
        
        
    }
}