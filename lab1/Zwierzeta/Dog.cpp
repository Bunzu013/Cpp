#include<iostream>
#include "Dog.h"

Dog::Dog(int limbNr1, string name1, bool protectedAnimal1, string breed1,int levelOfGuideSkills1, int levelOfTrackerSkills1 ):
                Animal(limbNr1,name1,protectedAnimal1)
{
    breed = breed1;
    levelOfGuideSkills = levelOfGuideSkills1;
    levelOfTrackerSkills = levelOfTrackerSkills1;
}

Dog::Dog(int limbNr1, string name1, bool protectedAnimal1):
                Animal(limbNr1,name1,protectedAnimal1)
{}

void Dog::setSkillLevel(int type, int value)
{
    if(value> -1 && value <11)
    {
        if(type == 1) levelOfGuideSkills = value;
        else levelOfTrackerSkills = value;
    }
    else cout <<endl<< "nieprawid³owe dane" << endl << endl;
}

int Dog::getSkillLevel(int type)
{
    if(type == 1)
    {
        if(levelOfGuideSkills == NULL) levelOfGuideSkills =0;
        return levelOfGuideSkills;
    }
    else
    {
        if(levelOfTrackerSkills == NULL) levelOfTrackerSkills =0;
        return levelOfTrackerSkills;
    }
}

void Dog::giveVoice()
{
    cout << "Hau, hau" << endl << endl;
}


void Dog::info()
{

    cout <<" breed: " <<breed<<endl<<" level of guide skills: " <<levelOfGuideSkills<<endl;
    cout <<" level of tracker skills: "<<levelOfTrackerSkills<<endl<<endl;
}
/*
void Dog::howManyTrackerDogs(Dog* dogs,int sizeD)
{
    for(int i = sizeD; i>0; i--)
    {
        if(dogs[i].levelOfGuideSkills < dogs[i].levelOfTrackerSkills) dogs[i].info();
    }
}
*/
