#ifndef REPTILE_H
#define REPTILE_H
#include <iostream>
using namespace std;
#include "Animal.h"

class Reptile : public Animal{
    private:
    bool isVenomous;
    
    public:
    Reptile(string n, int a,bool hungry ,  bool isVenomous):
    Animal(n,a,hungry);
    ~Reptile();
    
};
#endif
