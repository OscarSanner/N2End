//
// Created by osann on 2020-11-22.
//

#ifndef CCHAT2_CCWINDOW_H
#define CCHAT2_CCWINDOW_H
#include <curses.h>
#include <string>
#include <list>

using namespace std;
class CCWindow {
public:
    list<std::string> messages;
    WINDOW * win;
    CCWindow(int height, int width, int startY, int startX);
    int createMenu(int n, string choices[]);
    void printCenteredMessage(int offset, string string, int clear);
    string askAQuestion(string question);
    string typeMessage();
    void printConversationMessage(string contact, const string& message);
    void printConversation();
private:
    void clearWin();
};


#endif //CCHAT2_CCWINDOW_H
