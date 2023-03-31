#ifndef CHAT
#define CHAT

#include <string>
#include "Animal.hpp"
#include <fstream>
#include <iostream>
class Chat : public Animal{

public:
    Chat(int,string,int,string);
    
    void crier() const override {
        cout<<"miaou"<<endl;
    }


private:
    std::string typeChat;



};

#endif