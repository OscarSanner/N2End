//
// Created by Oscar on 2021-01-19.
//

#include "ModelEngine.h"
#include "fileParse.h"

std::vector<Message> ModelEngine::getConversation(Contact con) {
    for(auto & contact : contacts){
        if(contact->getName() == con.getName()){
            return contact->getMessages();
        }
    }
    throw runtime_error("fuck");
}

vector<Contact *> ModelEngine::getContacts() {
    return this->contacts;
}

void ModelEngine::sendMessage() {

}

void ModelEngine::addContact(std::string name) {
    saveContact(std::move(name));
    initModel();
}

void ModelEngine::startConversation(int contactIndex) {
    Contact * c = contacts[contactIndex];

}

void ModelEngine::registerNew(std::string name) {
    registerAsNewUser(name);
}

bool ModelEngine::checkIfRegistered() {
    return isRegistered();
}

void ModelEngine::initModel() {
    int amountOfContacts = getAmountOfContacts();

    for (int i = 0; i < amountOfContacts; i++){
        vector<Message> m;
        Contact *c = new Contact(loadContacts(i), m);
        this->contacts.push_back(c);
    }
}
