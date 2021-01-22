//
// Created by osann on 2020-11-22.
//

#include <iostream>
#include <fstream>
#include <string>
#include <curses.h>
#include <string.h>

using namespace std;

string loadContacts(int contact) {
    int i = 0;
    string line;

    ifstream credentials("textFiles/contacts.txt");
    while (std::getline(credentials, line)) {
        if (i == contact){
            return line;
        }
        i++;
    }
    return nullptr;
}

volatile int getAmountOfContacts() {
    int i = 0;
    string line;
    ifstream credentials("./textFiles/contacts.txt");
    while (std::getline(credentials, line)) {
        i++;
//        cout << line;
    }
    return i;
}

void saveContact(string str) {
    ofstream file("./textFiles/contacts.txt", std::ios_base::app | std::ios_base::out);
    str.append("\n");
    file << str;
    file.close();
}

bool isRegistered() {
    string line;
    ifstream credentials("./textFiles/credentials.txt");
    if (credentials.is_open()) {
        credentials.close();
        return true;
    }
    return false;
}

void registerAsNewUser(string name) {
    std::ofstream outfile("./textFiles/credentials.txt");
    outfile << name << std::endl;
    outfile.close();
}
