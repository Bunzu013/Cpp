#include <iostream>
#include "Figure.h"
#include "Square.h"
#include "Circle.h"

using namespace std;
int main()
{

    Figure* tab[3];
    tab[0]=new Square(4);
    tab[1]=new Square(2);
    tab[2]=new Circle(5);
    for(int i=0;i<3;i++)
    {
        tab[i]->calculateArea();
        tab[i]->calculatePermiter();
        tab[i]->show();
        delete tab[i];
    }

    //wskaŸnik
    Figure* f1=new Square(5.0);
    Figure* f2=new Circle(2);
    f1->calculateArea();
    f1->calculatePermiter();
    f1->show();
    f2->calculateArea();
    f2->calculatePermiter();
    f2->show();
    delete f1;
    delete f2;


    /*
    //referencja
    Figure *f3;
    Square s1(4);
    f3=&s1;
    f3->calculateArea();
    f3->show();
    */
    return 0;
}

