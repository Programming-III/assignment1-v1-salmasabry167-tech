#ifndef ANIMAL_H
#define ANIMAL_H
using namespace std;
#include <string>

class Animal{
    private:
    string name;
    int age;
    bool isHungry;
    
    public:
        Animal();
        Animal(string n, int a,bool hungry);
        ~Animal();
        void display();
        voif feed();
        string getname();
        void setname(string s);
        string getage();
        void setage(int a);
#endif
