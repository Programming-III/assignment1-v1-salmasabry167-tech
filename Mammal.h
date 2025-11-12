#ifndef MAMMAL_H
#define MAMMAL_H
#include <iostream>
using namespace std;
#include "Animal.h"

class Mammal : public Animal{
    private:
    string furColor;
    
    public:
    Mammal(string n, int a,bool hungry , string Color):
    Animal(n,a,hungry);
    ~Mammal();
    
};
#endif
