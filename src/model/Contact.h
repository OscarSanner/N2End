//
// Created by Oscar on 2021-01-19.
//
#include <string>
#include <vector>
#include "Message.h"

#ifndef N2END_CONTACT_H
#define N2END_CONTACT_H
using namespace std;

class Contact {
private:
    std::string name;
    std::vector<Message> messages;
public:
    std::string getName();
    std::vector<Message> getMessages();
    explicit Contact(std::string name, std::vector<Message> messages);
};


#endif //N2END_CONTACT_H
