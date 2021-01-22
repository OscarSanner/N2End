//
// Created by Oscar on 2021-01-19.
//

#include "Contact.h"
#include <utility>

Contact::Contact(std::string name, vector<Message> messages) {
    this->name = std::move(name);
    this->messages = std::move(messages);
}

std::string Contact::getName() {
    return name;
}

std::vector<Message> Contact::getMessages() {
    return this->messages;
}
