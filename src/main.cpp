4e3pö#include <iostream>
#include <curses.h>
#include "CCWindow.h"
#include "fileParse.h"
#include <cstring>
#include "ChatRoom.h"
#include <string>

using namespace std;

/**
 * Function declarations.
 */
void checkIfRegistered();
void setUpScreen();
int run();

/**
 * variable declarations.
 */
int amountOfContacts = 0;
CCWindow* wLower;
CCWindow* wMain;

int main() {
    setUpScreen(); // Initialises the whole program.
    checkIfRegistered(); // Checks if first time use, asks user to reg if that's the case.

    /*
     * Welcome the user with a wicked banner.
     */
    string welcomeMessage = "Welcome to cChat2 (Name WIP)";
    wMain->printCenteredMessage(0, welcomeMessage, 1);

    return run(); // Run will be a never ending runloop just checking the users inputs and doing stuff with it.
}

void checkIfRegistered(){
    if(!isRegistered()){
        std::string name = wLower->askAQuestion("First time user? Please enter your name");
        registerAsNewUser(name);
        //TODO: Check if it's taken, else have the method give the name a tag #abcd
    }
}

void setUpScreen() {
    clear();
    initscr();
    refresh();
    cbreak();

    int yMax, xMax;
    getmaxyx(stdscr, yMax, xMax);

    wMain = new CCWindow(yMax - 10, xMax - 12, 2, 5);
    wLower = new CCWindow(6, xMax - 12, yMax - 8, 5);
}

int run(){
    std::string args[] = {"Add contact", "Chat with contact", "Exit"};
    int selection = wLower->createMenu(3, args);
    if(selection == 0){
        std::string contact = wLower->askAQuestion("Who do you want to add?");
        mvprintw(1,1, contact.c_str());
        saveContact(contact);
        endwin();
        main();

    } else if (selection == 1){
        amountOfContacts = getAmountOfContacts();
        std::string contacts[amountOfContacts];

        for (int i = 0; i < amountOfContacts; i++){
            contacts[i] = loadContacts(i);
        }

        int t = wLower->createMenu(amountOfContacts, contacts);
        std::string contactToChatWith = contacts[t];
        wMain->printCenteredMessage(0, contactToChatWith, 1);

        auto * chatRoom = new ChatRoom(wMain, contactToChatWith);
        while (true){
            std::string message = wLower->typeMessage();
            chatRoom->sendMessage(message);
            //chatRoom->sendMessage(message);
        }

        endwin();
        main();
    } else {
        endwin();
        return 0;
    }
    return 0;
}
