#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;

Animal :: public Animal() {
    name = "";
    age = 0;
    isHungry = false;
}
Animal :: public Animal(string n, int a,bool hungry) {
    name = n;
    age = a;
    isHungry = hungry;
}

 Animal :: ~Animal(){}
 
 void Animal :: display(){
     cout << name << "," << age << "," << isHungry << endl;
 }

int main()
{
    printf("Hello World");

    return 0;
}
