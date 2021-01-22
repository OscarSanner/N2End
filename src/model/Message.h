//
// Created by Oscar on 2021-01-19.
//

#ifndef N2END_MESSAGE_H
#define N2END_MESSAGE_H

#include <string>

class Message {
private:
    std::string sender;
    std::string receiver;
    int time;
public:
    const std::string &getSender() const;
    const std::string &getReceiver() const;
    int getTime() const;

    Message(const std::string &sender, const std::string &receiver);
};


#endif //N2END_MESSAGE_H
