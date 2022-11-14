#include<iostream>
#include "Cat.h"

Cat::Cat(int limbNr1, string name1, bool protectedAnimal1):
                Animal(limbNr1,name1,protectedAnimal1)
{}


void Cat::initMice()
{
    int a;
    cout <<endl<< "Uzupelnienie tablicy mice: " << endl;
    for(int i=1; i<6;i++)
    {
        cout<<"Rok "<<i<<": ";
        cin>>a;
        mice[i] =a;
    }
}

int Cat::getMice(int index)
{
    return mice[index];
}

void Cat::initCat(int value)
{
    initMice();
    setLevelOfMouseHunting(value);
}
void Cat::setLevelOfMouseHunting(int value)
{
    if(value> -1 && value <11) levelOfMouseHunting = value;
    else cout <<endl<< "nieprawid³owe dane" << endl << endl;
}

int Cat::getLevelOfMouseHunting()
{
    if(levelOfMouseHunting == NULL) levelOfMouseHunting =0;
    return levelOfMouseHunting;
}

void Cat::giveVoice()
{
    cout << "Miau, miau" << endl << endl;
}


void Cat::info()
{
    cout << endl;
    cout <<" level of mouse hunting " <<levelOfMouseHunting<<endl;
        for(int i=1; i<6;i++)
    {
        cout<<"Rok "<<i<<": "<<mice[i]<<endl;
    }
    cout <<endl<<endl;
}
/*
void Cat::howManyCats(Cat* cats, int sizeC)
{
   for(int i = sizeC; i>0; i--)
    {
        int sum;
//        for(int j = 1; j<6; j++) {sum += cats[i].getMice[j];}
        cout << "Suma myszy kota " <<i<<": " <<endl;
    }
}

*/


