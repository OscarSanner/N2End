//
// Created by osann on 2020-11-20.
//

#include "initWindows.h"

WINDOW * lowerWin;
WINDOW * mainWin;

int initMainWin(){
    return 0;
}

int initLowerWin(){
    int yMax, xMax;
    getmaxyx(stdscr, yMax, xMax);

    lowerWin = newwin(6, xMax - 12, yMax - 10, 5);
    box(lowerWin, 0, 0);
    refresh();
    wrefresh(lowerWin);
    return 0;
}