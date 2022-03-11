if (bx != -1) {

    gotoxy(bx, by); putch(' ');

    if (by == 0) {

        bx = -1;

    }
    else {

        by--;

        gotoxy(bx, by); putch('i');

    }

}