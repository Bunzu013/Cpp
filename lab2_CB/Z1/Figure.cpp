#include <iostream>
#include "Figure.h"

using namespace std;

Figure::Figure()
{
    cout<<"Konstruktor klasy bazowej Figure"<<endl;
}

Figure:: ~Figure()
{
    cout<<"Wirtualny destruktor klasy bazowej Figure"<<endl;
}

float Figure:: getArea()
{
    return area;
}

void Figure::setArea(float area1)
{
    area=area1;
}

float Figure:: getPermiter()
{
    return permiter;
}

void Figure::setPermiter(float permiter1)
{
    permiter = permiter1;
}

void Figure::show()
{
    cout<<endl<<"Pole: "<<area<<" obwod: " <<permiter<<endl<<endl;
}
