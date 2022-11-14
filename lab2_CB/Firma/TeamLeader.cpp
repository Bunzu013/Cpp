#include "Employee.h"
#include "TeamLeader.h"
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

TeamLeader::TeamLeader()
{
    cout << "Konstruktor TeamLeader" << endl;
}

TeamLeader::TeamLeader(string surname1, int age1, int experience1, double salary1)
        :Employee(surname1,age1,experience1,salary1)
        {
            cout <<"Konstruktor TeamLeader"<<endl;
        }
TeamLeader:: ~TeamLeader()
{
cout <<"Destruktor TeamLeader"<<endl;
}

float TeamLeader::calculateBonus(int value)
{
    setprecision(2);
    float bonus;
    bonus = value*(1+getSalary()+getExperience());
    return bonus;
}

void TeamLeader::show()
{
    cout << endl <<"Informacje TeamLeader: " <<endl;
    cout << "Nazwisko: " << getSurname() << endl << "Wiek: " <<getAge()<< endl;
    cout << "Doswiadczenie: " <<getExperience()<<endl <<"Bonus: " <<calculateBonus(2)<<endl<< "Wyplata: " << getSalary()<<endl<<"Razem: "<<calculateSalary(2)<< endl;
    cout << "Jestem TeamLeader z " <<getExperience()<< " letnim doswiadczeniem"<<endl;
}

int TeamLeader:: calculateSalary(int value)
{
    return getSalary()+calculateBonus(value);
}
