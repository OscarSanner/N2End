//
// Created by osann on 2020-11-26.
//

#include "ChatRoom.h"
#include <pthread.h>
#include "connect.h"
#include "CCWindow.h"
#include "fileParse.h"

CCWindow * window;
string con;


ChatRoom::ChatRoom(CCWindow *win, string contact) {
    window = win;
    con = contact;

    pthread_t thread_id;
    //pthread_create(&thread_id, NULL, pollIndefinitely, NULL);
}

#pragma clang diagnostic push
#pragma ide diagnostic ignored "InfiniteRecursion"
void *ChatRoom::pollIndefinitely(void *vargp) {
    int newData = 0;
    while (!newData){
        string args[] = {"a", "b", "c"};
        newData = connectToServer(3, args);
    }
    pollIndefinitely(vargp);
    return nullptr;
}

void ChatRoom::sendMessage(string message) {
    //TODO: Send message to server
    //TODO: Display message.
    //TODO: Save message locally unencrypted?
}

#pragma clang diagnostic pop

