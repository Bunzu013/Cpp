#include <iostream>
#include "Bufor.h"
#include "MaxBufor.h"
#include "MeanBufor.h"
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    srand (time(NULL));
    int a =2;
    Bufor* tabl[a];
    tabl[1] = new MaxBufor(3);
    tabl[0] = new MeanBufor(5);

    for(int j=0; j<a; j++)
    {
        for(int i = 0;i <= tabl[j]->getSize();i++)
        {
            tabl[j]->setFirst(rand() % 10 + 1);
        }
    }
    cout<<"Tab 1: ";
    tabl[1]->show();
    cout<<"Tab 0: ";
    tabl[0]->show();

    cout<<"Maksymalna z tablicy 1: "<<tabl[1]->calculate() <<endl;
    cout<<"Srednia: "<< tabl[0]->calculate()<<endl;

    tabl[1]->add(5);
    return 0;
}
