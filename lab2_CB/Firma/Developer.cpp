#include "Developer.h"
#include "Employee.h"
#include <iostream>

using namespace std;


float Developer:: calculateBonus(int value)
{
    float bonus;
    bonus = value+0.2*value*(getSalary() + getExperience());
    return bonus;
}

Developer:: Developer()
{
    cout << "Konstruktor developer" << endl;
}

Developer::  Developer(string surname1, int age1, int experience1, double salary1)
        :Employee(surname1,age1,experience1,salary1)
        {
            salary1 = calculateBonus(2);
            cout <<"Konstruktor developer"<<endl;
        }
Developer:: ~Developer()
{
cout <<"Destruktor developer"<<endl;
}

void Developer::show()
{
    cout << endl <<"Informacje developer: " <<endl;
    cout << "Nazwisko: " << getSurname() << endl << "Wiek: " <<getAge()<< endl;
    cout << "Doswiadczenie: " <<getExperience()<<endl <<"Bonus: " <<calculateBonus(2)<<endl<< "Wyplata: " << getSalary()<<endl<<"Razem: "<<calculateSalary(2)<< endl<<endl;

}

int Developer:: calculateSalary(int value)
{
    return getSalary()+calculateBonus(value);
}
