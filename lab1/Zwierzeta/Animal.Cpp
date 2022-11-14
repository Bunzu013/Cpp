#include<iostream>
#include "Animal.h"

Animal::Animal(int limbNr1, string name1, bool protectedAnimal1)
{
    limbNr = limbNr1;
    name = name1;
    protectedAnimal = protectedAnimal1;
}

Animal::Animal()
{

}

void Animal::setLimbNr(int limbNr1)
{
    limbNr = limbNr1;
}

int Animal::getLimbNr()
{
    return limbNr;
}

void Animal::setName(string name1)
{
    name = name1;
}

string Animal::getName()
{
    return name;
}

void Animal::setProtected(bool isProtected)
{
    protectedAnimal = isProtected;
}

bool Animal::isProtected()
{
    return protectedAnimal;
}

void Animal::giveVoice()
{
    cout << "Chrum, miau, hau, piiiii" << endl << endl;
}


void Animal::info()
{
    cout <<" Name: " << name<<endl<< " limb number: " <<limbNr<<endl<<" protected animal? " <<protectedAnimal <<endl<<endl;
}

