#include "Main.h"

bool Function::FireShoot(std::vector<int> &vect)
{
    //TimeDelay T;
    //T.timeSet(0.1);

    //int x = posx + 1; // 발사체를 기체의 정중앙에 고정하기 위함
    //int y = posy - 1; // 발사체를 기체의 정중앙에 고정하기 위함

    //if (T.timeDelay()==true) {

    if (vect[1] != 6) {
        gotoxy(vect[0], vect[1]);
        printf(" ");
        vect[1]--;
        gotoxy(vect[0], vect[1]);
        printf("@");
        return true;
    }
    else 
        return false;
    
        
    //}

 }
