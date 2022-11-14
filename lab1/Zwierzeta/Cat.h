#ifndef CAT_H_INCLUDED
#define CAT_H_INCLUDED
#include <iostream>
#include "Animal.h"

using namespace std;

class Cat: public Animal
{
private:
    int levelOfMouseHunting;
    int mice[5];
public:
    Cat(int limbNr1, string name1, bool protectedAnimal1 = true);
    Cat();
    void initMice();
    void initCat(int value);
    void setLevelOfMouseHunting(int value);
    int getLevelOfMouseHunting();
    int getMice(int index);
    void giveVoice();
    void info();



};
 #endif // CAT_H_INCLUDED
