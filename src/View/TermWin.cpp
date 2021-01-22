//
// Created by Oscar on 2021-01-22.
//

#include "TermWin.h"

TermWin::TermWin(int height, int width, int startY, int startX) {
    cursesWindow = newwin(height, width, startY, startX);
    refresh();
    box(cursesWindow, 0, 0);
    wrefresh(cursesWindow);
}

int TermWin::drawMenu(int n, string *s) {
    clearWin();
    wrefresh(cursesWindow);
    keypad(cursesWindow, true);

    int choice;
    int highlight = 0;

    int current = 0;
    int windowHeight = cursesWindow->_maxy - 1; // minus one to compensate for border
    if (windowHeight > n) {
        windowHeight = n;
    }

    int offset = 0;

    while (choice != 10) {
        for (int i = current; i < (current + windowHeight - offset); i++) {
            if (i == highlight) {
                wattron(cursesWindow, A_REVERSE);
            }
            mvwprintw(cursesWindow, (i % windowHeight) + 1, 1, s[i].c_str());
            wattroff(cursesWindow, A_REVERSE);
        }
        choice = wgetch(cursesWindow);

        switch (choice) {
            case KEY_UP:
                if (highlight > 0) {
                    highlight--;
                    if (highlight < current) {
                        current = current - windowHeight;
                        clearWin();
                    }
                }
                break;
            case KEY_DOWN:
                if (highlight < n - 1) {
                    highlight++;
                    if (highlight > current + windowHeight - 1) {
                        if (highlight + windowHeight > n - 1) {
                            current = (n - windowHeight);
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

void TermWin::clearWin() {
    wclear(cursesWindow);
    box(cursesWindow, 0, 0);
    wrefresh(cursesWindow);
}

void TermWin::drawCenteredMessage(int offset, const string& message, bool clearWindowBeforeRendering) {
    if (clearWindowBeforeRendering) {
        clearWin();
    }

    int height, width;
    getmaxyx(cursesWindow, height, width);

    mvwprintw(cursesWindow, (height/2) + offset, (width/2) - (message.length()/2), message.c_str());
    wrefresh(cursesWindow);
}

string TermWin::getInput(string preText) {
    clearWin();
    wmove(cursesWindow,1,1);
    wprintw(cursesWindow, preText.append(" ").c_str());
    static char s[20];
    wgetstr(cursesWindow, s);
    return s;
}
