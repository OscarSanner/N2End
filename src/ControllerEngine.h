//
// Created by Oscar on 2021-01-22.
//

#ifndef N2END_CONTROLLERENGINE_H
#define N2END_CONTROLLERENGINE_H
#include "View/TermWin.h"
#include "model/ModelEngine.h"

class ControllerEngine {
private:
    TermWin * lowerTermWin;
    TermWin * upperTermWin;
    ModelEngine * modelEngine;
public:
    void initializeProgram();
    void startScreenControl();
    void addContact();
    void pickContactToChatWith();
    void startConversation(int contactIndex);
    void sendMessage();
    static void exit();
    ControllerEngine(TermWin *lowerTermWin, TermWin *upperTermWin, ModelEngine *modelEngine);
};


#endif //N2END_CONTROLLERENGINE_H
