#include "MaxBufor.h"
#include <iostream>

using namespace std;


MaxBufor::MaxBufor()
{}
MaxBufor::MaxBufor(int size1):Bufor(size1)
{}

MaxBufor::~MaxBufor(){}

void MaxBufor:: add(int value)
{
    int i = 0;
    if(i<=getSize())
        {
            setTab(i,value);
            i++;
        }
    else cout << "Brak miejsca w tablicy" <<endl;
}

double MaxBufor::calculate()
{
   int a =getIndex();
   double maxV = 0;
    for(int i=0; i<a;i++)
    {
        if(getTab(i)> maxV) maxV = getTab(i);
    }
    return maxV;
}
