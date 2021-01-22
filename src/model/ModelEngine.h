//
// Created by Oscar on 2021-01-19.
//

#ifndef N2END_MODELENGINE_H
#define N2END_MODELENGINE_H
#include <map>
#include <vector>
#include <string>
#include "Message.h"
#include "Contact.h"

class ModelEngine {
private:
    std::vector<Contact*> contacts;
    std::string loggedInUser;
public:
    void initModel();
    bool checkIfRegistered();
    void registerNew(std::string name);
    void startConversation(int contactIndex);
    void addContact(std::string name);
    void sendMessage();
    vector<Contact *> getContacts();
    std::vector<Message> getConversation(Contact);
};


#endif //N2END_MODELENGINE_H
