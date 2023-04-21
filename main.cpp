#include <iostream>
#include <memory>
#include "Animal.hpp"
#include "Chat.hpp"
#include "Chien.hpp"
#include <concepts>

using namespace std;

template <derived_from<Animal> T>
ostream& operator<<(ostream& os,const T& a){
    return os<<a.saluer();
}


//polymorph heritage
int main () {
    Chat c1 = Chat(4,"minou",2,"gentil");
    cout<<c1<<endl;
    //c1.crier();
    Chien c2 = Chien(4,"faith",2);
    cout<<c2<<endl;
    //c2.crier();
    return 0;
}