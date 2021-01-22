//
// Created by Oscar on 2021-01-19.
//

#include "Message.h"
#include <chrono>

const std::string &Message::getSender() const {
    return sender;
}

const std::string &Message::getReceiver() const {
    return receiver;
}

int Message::getTime() const {
    return time;
}

Message::Message(const std::string &sender, const std::string &receiver) : sender(sender), receiver(receiver) {
    this->sender = sender;
    this->receiver = receiver;
    this->time = std::chrono::system_clock::now().time_since_epoch().count();
}
