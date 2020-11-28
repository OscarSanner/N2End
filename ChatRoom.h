//
// Created by osann on 2020-11-26.
//

#ifndef CCHAT2_CHATROOM_H
#define CCHAT2_CHATROOM_H
#include <curses.h>
#include "CCWindow.h"

class ChatRoom {
public:
    ChatRoom(CCWindow* win, char * contact);
    static void *pollIndefinitely(void *vargp);
    void sendMessage(char * message);
};


#endif //CCHAT2_CHATROOM_H
