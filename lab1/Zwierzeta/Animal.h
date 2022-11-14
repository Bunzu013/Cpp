#ifndef ANIMAL_H_INCLUDED
#define ANIMAL_H_INCLUDED
#include <iostream>

using namespace std;

class Animal
{
private:
    int limbNr;
    string name;
    bool protectedAnimal;
public:
    Animal();
    Animal(int limbNr1, string name1, bool protectedAnimal1 = true);
    void setLimbNr(int limbNr1);
    int getLimbNr();
    void setName(string name1);
    string getName();
    void setProtected(bool isProtected);
    bool isProtected();
    void giveVoice();
    void info();



};
 #endif // ANIMAL_H_INCLUDED
