//
// Created by osann on 2020-11-22.
//

#include "CCWindow.h"
#include <curses.h>
#include <string>
#include <list>

using namespace std;

WINDOW *win;
list<int> l = new list<int>;

CCWindow::CCWindow(int height, int width, int startY, int startX) {
    //WINDOW * win = newwin(height, width, starty, startx);
    win = newwin(height, width, startY, startX);
    refresh();
    box(win, 0, 0);
    wrefresh(win);
}

int CCWindow::createMenu(int size, char **choices) {
    //TODO: Fix this whole mess somehow.
    clearWin();
    wrefresh(win);
    keypad(win, true);

    int choice;
    int highlight = 0;

    int current = 0;
    int windowHeight = win->_maxy - 1; // minus one to compensate for border
    if(windowHeight > size){
        windowHeight = size;
    }

    int offset = 0;


    while (choice != 10) {
        for (int i = current; i < (current + windowHeight - offset); i++) {
            if (i == highlight) {
                wattron(win, A_REVERSE);
            }
            mvwprintw(win, (i % windowHeight)+ 1, 1, choices[i]);
            wattroff(win, A_REVERSE);
        }
        choice = wgetch(win);

        switch (choice) {
            case KEY_UP:
                if (highlight > 0) {
                    highlight--;
                    if(highlight < current){
                        current = current - windowHeight;
                        clearWin();
                    }
                }
                break;
            case KEY_DOWN:
                if (highlight < size - 1) {
                    highlight++;
                    if (highlight > current + windowHeight - 1){
                        if(highlight + windowHeight > size - 1){
                            current = (size - windowHeight);
                        } else {
                            current = current + windowHeight;
                        }
                        clearWin();
                    }
                }
                break;
            default:
                break;
        }
    }
    return highlight;
}

void CCWindow::printCenteredMessage(int offset, string string, int clear) {

    if (clear){
        clearWin();
    }

    int height, width;
    getmaxyx(win, height, width);

    mvwprintw(win, (height/2) + offset, width/2 - string.length()/2, string.c_str());
    wrefresh(win);
}

char *CCWindow::askAQuestion(string question) {
    clearWin();

    int height, width;
    getmaxyx(win, height, width);

    wmove(win, (height/2) - 1, width/2 - question.length()/2);
    wprintw(win, question.c_str());
    wmove(win, (height/2), width/2);
    wrefresh(win);
    static char returnString[20];
    wgetstr(win, returnString);
    return  returnString;
}

void CCWindow::clearWin() {
    wclear(win);
    box(win, 0, 0);
}

char *CCWindow::typeMessage() {
    clearWin();
    wmove(win, 1, 1);
    wprintw(win, "You: ");
    static char * message = static_cast<char *>(malloc(sizeof(char *)));
    wgetstr(win, message);

    return message;
}

void CCWindow::printConversationMessage(char *contact, char *message) {

}


