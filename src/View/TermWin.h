//
// Created by Oscar on 2021-01-22.
//
#include <curses.h>
#include <string>

#ifndef N2END_TERMWIN_H
#define N2END_TERMWIN_H

using namespace std;

class TermWin {
private:
    WINDOW * cursesWindow;
public:
    void clearWin();
    int drawMenu(int n, string* s);
    void drawCenteredMessage(int offset, const string& message, bool clearWindowBeforeRendering);
    string getInput(string preText);
    TermWin(int height, int width, int startX, int startY);
};


#endif //N2END_TERMWIN_H
