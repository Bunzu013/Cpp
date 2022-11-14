#include <iostream>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

using namespace std;

int  howManyProtectedAnimals(Animal* animals[],int sizeA);
void  howManyTrackerDogs(Dog* dogs[],int sizeD);
void  howManyCats(Cat* cats[], int sizeC);


int main()
{
    Animal* animals[4];
    Dog* dogs[3];
    Cat* cats[2];


    cout << "Klasa Animal" << endl;
    animals[1] = new Animal(4,"horse",false);
    animals[2] = new Animal(4,"wolf");
    animals[3] = new Animal(4,"lynx",true);
    animals[4] = new Animal(4,"cat",true);

    cout <<"Klasa Dog" << endl;
    dogs[1] = new Dog(4,"dog",false,"Labrador",2,10);
    dogs[2] = new Dog(4,"dog",false,"Chihuahua",0,0);
    dogs[3] = new Dog(4,"dog",false,"Dalmatian",1,10);

    cout <<"Klasa cat" <<endl;
    cats[1] = new Cat(4,"cat",false);
    cats[1]->initCat(5);
    cats[2] = new Cat(4,"cat",false);
    cats[2]->initCat(9);

    cout <<endl<<"Jest: " <<howManyProtectedAnimals(animals,4) <<" chronionych zwierzat"<<endl;
    howManyTrackerDogs(dogs,3);
    howManyCats(cats,2);

    for(int i=0;i<5;i++)
    {
        delete animals[i];
    }

    for(int i=0;i<4;i++)
    {
        delete dogs[i];
    }

    for(int i=0;i<3;i++)
    {
        delete cats[i];
    }
    return 0;
}


int howManyProtectedAnimals(Animal* animals[],int sizeA)
{
    int counter = 0;
    for(int i = sizeA; i>0; i--)
    {
        if(animals[i]->isProtected() == true) counter++;
    }
    return counter;
}

void howManyTrackerDogs(Dog* dogs[],int sizeD)
{
    cout <<endl<<"Psy tropiace: "<<endl;
    for(int i = sizeD; i>0; i--)
    {
        if(dogs[i]->getSkillLevel(1) < dogs[i]->getSkillLevel(0)) dogs[i]->info();
    }
}

void  howManyCats(Cat* cats[], int sizeC)
{
   for(int i = sizeC; i>0; i--)
    {
int sum =0;
        for(int j = 1; j<6; j++)
            {
             sum += cats[i]->getMice(j);

        }
        cout << "Suma myszy kota " <<i<<": "<<sum <<endl;
    }
}

