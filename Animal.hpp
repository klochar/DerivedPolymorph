#ifndef ANIMAL
#define ANIMAL

#include <string>
#include <fstream>
#include <concepts>
using namespace std;

class Animal {

public:

    Animal(int,string,int);
    virtual ~Animal() = default;
    int getNbPatte()const;
    string getNom()const;
    int getNbYeux()const;
    

protected:

    void setnbPatte(int);
    void setNom(string);
    void setNbYeux(int);
    virtual void crier() const =0;
    virtual string saluer() const =0;



private:

    int nbPatte=4;
    string nom;
    int nbYeux;





};
#endif