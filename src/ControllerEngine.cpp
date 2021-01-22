//
// Created by Oscar on 2021-01-22.
//

#include "ControllerEngine.h"

void ControllerEngine::sendMessage() {

}

void ControllerEngine::startConversation(int contactIndex) {
    modelEngine->startConversation(contactIndex);
}

void ControllerEngine::pickContactToChatWith() {
    std::vector<Contact*> contacts = modelEngine->getContacts();
    string namesOfContacts[contacts.size()];

    for (int i = 0; i < contacts.size(); i++){
        namesOfContacts[i] = contacts[i]->getName();
    }

    int contactIndex = lowerTermWin->drawMenu(contacts.size(), namesOfContacts);
    startConversation(contactIndex);
}

void ControllerEngine::addContact() {
    upperTermWin->drawCenteredMessage(0, "Who do you want to add?", true);
    string contact = lowerTermWin->getInput("Contact:");
    upperTermWin->clearWin();
    modelEngine->addContact(contact);
}

void ControllerEngine::startScreenControl() {
    std::string args[] = {"Add contact", "Chat with contact", "Exit"};
    int selection = lowerTermWin->drawMenu(sizeof(args)/sizeof(std::string), args);
    switch (selection) {
        case 0: addContact(); break;
        case 1: pickContactToChatWith(); break;
        case 2: exit(); break;
        default: exit();
    }
}

void ControllerEngine::initializeProgram() {
    this->modelEngine->initModel();
}

ControllerEngine::ControllerEngine(TermWin *lowerTermWin, TermWin *upperTermWin, ModelEngine *modelEngine)
        : lowerTermWin(lowerTermWin), upperTermWin(upperTermWin), modelEngine(modelEngine){}

void ControllerEngine::exit() {
    std::exit(0);
}
