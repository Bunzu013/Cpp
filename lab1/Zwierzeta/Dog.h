#ifndef DOG_H_INCLUDED
#define DOG_H_INCLUDED
#include <iostream>
#include "Animal.h"

using namespace std;

class Dog: public Animal
{
private:
    string breed;
    int levelOfGuideSkills;
    int levelOfTrackerSkills;
public:
    Dog();
    Dog(int limbNr1, string name1, bool protectedAnimal1 = true);
    Dog(int limbNr1, string name1, bool protectedAnimal1, string breed1,int levelOfGuideSkills1, int levelOfTrackerSkills1 );
    void setSkillLevel(int type, int value);
    int getSkillLevel(int type);
    void giveVoice();
    void info();


};
 #endif // DOG_H_INCLUDED
