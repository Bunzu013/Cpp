#include "Bufor.h"
#include <iostream>
using namespace std;


Bufor::Bufor()
{
    tab = new int[10];
    sizeT = 10;
    index = 0;
}
 Bufor::Bufor(int size1)
 {
    tab = new int[size1];
    sizeT = size1;
    index = 0;
 }
Bufor:: ~Bufor()
{
    delete tab;
}
void Bufor::add(int value)
{
    tab[index] = value;
    index++;
}

int Bufor::getIndex()
{
    return index;
}

int Bufor::getSize()
{
    return sizeT;
}

int Bufor::getTab(int i)
{
    return tab[i];
}

int Bufor::getFirst()
{
    for(int i = 0; i>sizeT; i++)
    {
        if(tab[i]== '\0') return i;
    }
    return 0;
}

void Bufor::setFirst(int value)
{
    tab[index] = value;
    index++;
}

void Bufor::setTab(int pos, int value)
{
    tab[pos] = value;
}

void Bufor::show()
{
    for(int i = 0; i<=sizeT; i++)
    {
        cout << tab[i]<<"   ";
    }

    cout <<endl<<endl;
}
