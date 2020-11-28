//
// Created by osann on 2020-11-26.
//

#include "ChatRoom.h"
#include <pthread.h>
#include "connect.h"
#include "CCWindow.h"

CCWindow * window;
char * con;


ChatRoom::ChatRoom(CCWindow *win, char *contact) {
    window = win;
    con = contact;

    pthread_t thread_id;
    pthread_create(&thread_id, NULL, pollIndefinitely, NULL);
}

#pragma clang diagnostic push
#pragma ide diagnostic ignored "InfiniteRecursion"
void *ChatRoom::pollIndefinitely(void *vargp) {
    int newData = 0;
    while (!newData){
        char* args[] = {"a", "b", "c"};
        newData = connectToServer(3, args);
    }
    pollIndefinitely(vargp);
    return nullptr;
}

void ChatRoom::sendMessage(char *message) {

}

#pragma clang diagnostic pop

