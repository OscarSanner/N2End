#include <iostream>
#include <curses.h>
#include "initWindows.h"
#include "CCWindow.h"
#include "fileParse.h"
#include <cstring>
#include "ChatRoom.h"

using namespace std;

int amountOfContacts = 0;

int main() {

    clear();
    initscr();
    refresh();
    cbreak(); // Makes ctrl-c exit out of the program.

    int yMax, xMax;
    getmaxyx(stdscr, yMax, xMax);

    auto *wMain = new CCWindow(yMax - 10, xMax - 12, 2, 5);
    //move(0, 0);
    auto *wLower = new CCWindow(6, xMax - 12, yMax - 8, 5);
    // WINDOW * win = newwin(height, width, starty, startx);

    string string = "Welcome to cChat2 (Name WIP)";

    if(!isRegistered()){
        char * name = wLower->askAQuestion("First time user? Please enter your name");
        registerAsNewUser(name);
        //TODO: Check if it's taken, else have the method give the name a tag #abcd
    }

    wMain->printCenteredMessage(0, string, 1);

    char *args[] = {"Add contact", "Chat with contact", "Exit"};
    int selection = wLower->createMenu(3, args);
    if(selection == 0){
        char * contact = wLower->askAQuestion("Who do you want to add?");
        mvprintw(1,1, contact);
        saveContact(contact);
        endwin();
        main();

    } else if (selection == 1){
        amountOfContacts = getAmountOfContacts();
        char * contacts[amountOfContacts];

        for (int i = 0; i < amountOfContacts; i++){
            const char * c = loadContacts(i);
            char * ch = (char *)malloc(sizeof(char *));
            strcpy(ch, c);
            contacts[i] = ch;
        }

        int t = wLower->createMenu(amountOfContacts, contacts);
        char * contactToChatWith = contacts[t];
        wMain->printCenteredMessage(0, contactToChatWith, 1);

        auto * chatRoom = new ChatRoom(wMain, contactToChatWith);



        getch();
        endwin();
        main();
    } else {
        endwin();
        return 0;
    }
}

int initialising() {
    initscr();

    refresh();
    char c;
    int x, y;
    mvprintw(0, 0, "Write something");
    x = 40;
    y = 10;
    move(y, x);
    c = getch();
    while (c != 10) {
        c = getch();
    }
    clear(); //Clears the screen
    endwin();
    return 0;
}

int makingWindows() {
    initscr();

    cbreak(); // Makes ctrl-c exit out of the program
    //raw(); //Will just take every every char as it is, opposite of cbreak.
    noecho(); //Makes it so input characters wont be printed.
    int height = 10;
    int width = 20;
    int starty = 10;
    int startx = 10;

    WINDOW *win = newwin(height, width, starty, startx);
    refresh();

    char t = 'a';
    char b = 'b';

    char left, right, top, bottom, tlc, blc, trc, brc;
    left = right = tlc = trc = t;
    top = bottom = blc = brc = b;

    //box(win, t, b);

    wborder(win, left, right, top, bottom, tlc, trc, blc, brc);

    mvwprintw(win, 1, 1, "This is a box");
    wrefresh(win);

    int c = getch();
    getch();
    endwin();
    return 0;
}

int attributes() {
    initscr();

    cbreak(); // Makes ctrl-c exit out of the program
    //raw(); //Will just take every every char as it is, oposite of cbreak.
    noecho(); //Makes it so input characters wont be printed.

    if (!has_colors()) {
        printw("You have no colors");
        getch();
        return -1;
    }

    start_color();
    init_pair(1, COLOR_CYAN, COLOR_WHITE);

    attron(COLOR_PAIR(1));
    printw("Hello world");
    attron(COLOR_PAIR(1));

    int c = getch();
    getch();
    endwin();
    return 0;
}

int terminalInfo() {
    initscr();
    cbreak(); // Makes ctrl-c exit out of the program
    noecho(); //Makes it so input characters wont be printed.

    int y, x, yBeg, xBeg, yMax, xMax;

    WINDOW *win = newwin(10, 20, 10, 10);

    getyx(stdscr, y, x);
    getbegyx(win, yBeg, xBeg);
    getmaxyx(stdscr, yMax, xMax);

    mvprintw(yMax / 2, xMax / 2, "This should be centered");

    printw("%d %d %d %d %d %d", y, x, yBeg, xBeg, yMax, xMax);

    getch();
    endwin();
    return 0;
}

int input() {
    initscr();
    cbreak(); // Makes ctrl-c exit out of the program
    noecho(); //Makes it so input characters wont be printed.

    int yMax, xMax;
    getmaxyx(stdscr, yMax, xMax);

    WINDOW *inputWin = newwin(3, xMax - 12, yMax - 5, 5);
    box(inputWin, 0, 0);
    refresh();
    wrefresh(inputWin);

    keypad(inputWin, true);

    int c = wgetch(inputWin);
    if (c == KEY_UP || c == 'j') {
        mvwprintw(inputWin, 1, 1, "Key up was pressed (or j)");
        wrefresh(inputWin);
    }

    getch();
    endwin();
    return 0;
}

int menu() {
    initscr();
    cbreak(); // Makes ctrl-c exit out of the program.
    noecho(); //Makes it so input characters wont be printed.

    int yMax, xMax;
    getmaxyx(stdscr, yMax, xMax);

    WINDOW *menuWin = newwin(6, xMax - 12, yMax - 10, 5);
    box(menuWin, 0, 0);
    refresh();
    wrefresh(menuWin);
    keypad(menuWin, true);

    string choices[3] = {"Fly", "Drive", "Go by train"};
    int choice;
    int highlight = 0;

    while (choice != 10) {
        for (int i = 0; i < 3; i++) {
            if (i == highlight) {
                wattron(menuWin, A_REVERSE);
            }
            mvwprintw(menuWin, i + 1, 1, choices[i].c_str());
            wattroff(menuWin, A_REVERSE);
        }
        choice = wgetch(menuWin);

        switch (choice) {
            case KEY_UP:
                if (highlight > 0) {
                    highlight--;
                }
                break;
            case KEY_DOWN:
                if (highlight < 2) {
                    highlight++;
                }
                break;
            default:
                break;
        }
    }

    endwin();
    return 0;
}