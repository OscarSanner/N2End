//
// Created by osann on 2020-11-22.
//

#ifndef CCHAT2_CCWINDOW_H
#define CCHAT2_CCWINDOW_H
#include "WindowFiller.h"
#include <curses.h>
#include <string>

using namespace std;
class CCWindow {
public:
    WINDOW * win;
    CCWindow(int height, int width, int startY, int startX);
    int createMenu(int n, char * choices[]);
    void printCenteredMessage(int offset, string string, int clear);
    char * askAQuestion(string question);
private:
    void clearWin();
};


#endif //CCHAT2_CCWINDOW_H
