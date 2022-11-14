#include <iostream>
#include "Employee.h"
#include "Developer.h"
#include "TeamLeader.h"
#include <iomanip>
using namespace std;

void whoWorkMoreThan5Years(Employee**,int tabSize);
void howManyEarnLessThanMeanBonus(Employee**,int tabSize);

int main()
{
    setprecision(2);
    int a = 3;
    Employee* e[a];
    e[3] = new Developer("Nowak",30,7,4000);
    e[2] = new TeamLeader("Kowalska",40,15,6000);
    e[1] = new Developer("Akacja",25,4,3500);
    e[0] = new Developer("Pietruszka",23,3,3500);
    e[3]->show();
    e[2]->show();
    e[1]->show();
    e[0]->show();
    whoWorkMoreThan5Years(e,a);
    howManyEarnLessThanMeanBonus(e,a);

   cout <<endl;
    for (int i = 0; i<a; i++) delete e[i];


    return 0;
}

void whoWorkMoreThan5Years(Employee* tab[], int tabSize)
{
    cout << "Pracownicy pracujacy ponad 5 lat: "<<endl;
    for(int i=0; i<=tabSize;i++)
    {
        if(tab[i]->getExperience()>5) tab[i]->show();
    }
}

void howManyEarnLessThanMeanBonus(Employee* tab[],int tabSize)
{
    double numberOfEmplyee = 0;
    double mean = 0;
    int quantity = 0;
    for(int i=0; i<=tabSize;i++)
    {
        mean += tab[i]->calculateSalary(2);
        numberOfEmplyee++;
    }
    mean = mean/numberOfEmplyee;
    for(int i=0; i<=tabSize;i++)
    {
        if(tab[i]->calculateSalary(2)<mean) quantity++;
    }

    cout <<"Srednia premia wynosi: "<<mean<<endl;
    cout <<quantity<<" pracownikow otrzymuje nizsza"<<endl;

}
