#include <iostream>
#include "Array.h"


using namespace std;

int main()
{
    Array<int>* tab[2];
    tab[0] = new Array<int>(3);
    tab[1] = new Array<int>(5);
    for(int i =0; i<3; i++) tab[0]->add(i);
    for(int i =0; i<4; i++) tab[1]->add(i+3);
    tab[1]->add(0);
    cout << endl <<"Tab 0:";
    tab[0]->show();
     cout <<endl<<"Element max: "<<tab[0]->maxElement();
    cout <<endl<<"Element pod indeksem 1(od 0): "<<tab[0]->indexElement(1);
    cout << endl <<"Tab 1:";
    tab[1]->show();
    cout <<endl<<"Element max: "<<tab[1]->maxElement();
    cout <<endl<<"Element pod indeksem 2(od 0): "<<tab[1]->indexElement(2);
    cout<<endl<<"Po sortowaniu:";
    tab[1]->sortUp();
    tab[1]->show();
    cout <<endl<<"Element pod indeksem 2(od 0): "<<tab[1]->indexElement(2);
    tab[0]->~Array();
    tab[1]->~Array();


    cout<<endl<<endl<<endl<<"String: "<<endl;
    Array<string>  tab1 = Array<string>(3);

    tab1.add("ala");
    tab1.add("ma");
    tab1.add("kota");

    tab1.showString();
    cout<<endl<<"Element max: "<<tab1.maxString()<<endl;
    cout<<endl<<"Sortowanie: " <<endl;
    tab1.sortUp();
    tab1.showString();
    return 0;


}


