#include "MeanBufor.h"

MeanBufor::MeanBufor()
{}
MeanBufor::MeanBufor(int size1):Bufor(size1)
{}

MeanBufor::~MeanBufor(){}


double MeanBufor:: calculate()
{
    int a =getIndex();
    double mean;
    int b =0;      //ilosc liczb w tablicy
    for(int i=0; i<a;i++)
    {
        mean += getTab(i);
        b++;
    }
    return mean/b;
}


