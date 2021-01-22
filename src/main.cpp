#include <iostream>
#include "curses.h"
#include "ControllerEngine.h"
#include "View/TermWin.h"

using namespace std;

int main() {
    clear();
    initscr();
    refresh();
    cbreak();

    int yMax, xMax;
    getmaxyx(stdscr, yMax, xMax);
    auto *upperTermWin = new TermWin(yMax - 10, xMax - 12, 2, 5);
    auto *lowerTermWin = new TermWin(6, xMax - 12, yMax - 8, 5);
    auto *modelEngine = new ModelEngine();
    auto *controller = new ControllerEngine(lowerTermWin, upperTermWin, modelEngine);
    controller->initializeProgram();

#pragma clang diagnostic push
#pragma ide diagnostic ignored "EndlessLoop"
    while (true) {
        controller->startScreenControl();
    }
#pragma clang diagnostic pop
}
