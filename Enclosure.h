#ifndef ENCLOSURE_H
#define ENCLOSURE_H
#include <iostream>
using namespace std;
#include "Animal.h"

class Enclosure{
    private:
        Animal * animal;
        int capacity;
        int currentCount;
        
    public:
        Enclosure();
        Enclosure(Animal & a , int cap , int count);
        void addAnimal(Animal * a);
        void displayAnimals();
};
#endif
