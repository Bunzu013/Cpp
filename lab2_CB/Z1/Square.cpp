#include<iostream>
#include "Figure.h"
#include "Square.h"

using namespace std;

Square:: Square(float a1):Figure()
{
    a=a1;
    cout<<"Konstruktor klasy Square"<<endl;
}

Square:: ~Square()
{
    cout<<"Destruktor klasy Square"<<endl;
}

void Square::calculateArea()
{
    float p=a*a;
    setArea(p);
}

void Square::calculatePermiter()
{
    float o=a*4;
    setPermiter(o);
}

void Square::show()
{
    cout<<endl<<"Show w klasie Sqaure, pole: "<<getArea()<<" Obwod: "<<getPermiter()<<endl<<endl;
}
