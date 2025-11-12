#ifndef BIRD_H
#define BIRD_H
#include <iostream>
using namespace std;
#include 'Animal.h'

class Bird : public Animal{
    private:
    float wingSpan;
    
    public:
    Bird(string n, int a,bool hungry , float wingSpan):
    Animal(n,a,hungry);
    ~Bird();
    
};
#endif
