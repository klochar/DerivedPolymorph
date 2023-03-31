#include <iostream>
#include <memory>
#include "Animal.hpp"
#include "Chat.hpp"
#include "Chien.hpp"

using namespace std;

//polymorph heritage
int main () {
    Chat c1 = Chat(4,"minou",2,"gentil");
    c1.crier();
    Chien c2 = Chien(4,"faith",2);
    c2.crier();
    return 0;
}