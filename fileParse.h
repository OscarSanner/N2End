//
// Created by osann on 2020-11-22.
//

#ifndef CCHAT2_FILEPARSE_H
#define CCHAT2_FILEPARSE_H
#include <array>


const char * loadContacts(int contact);
int getAmountOfContacts();
void saveContact(string str);
bool isRegistered();
void registerAsNewUser(string str);

#endif //CCHAT2_FILEPARSE_H
