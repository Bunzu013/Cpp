#include <iostream>
#include "Employee.h"


using namespace std;

Employee:: Employee()
{
    cout <<"konstruktor Emplyee bez parametrow" <<endl;
}
Employee::Employee(string surname1, int age1, int experience1, double salary1)
{
    cout <<"konstruktor Emplyee z parametrami" <<endl;
    surname = surname1;
    age = age1;
    experience = experience1;
    salary = salary1;
}
Employee:: ~Employee()
{
    cout <<"Destruktor wirtualny Emplyee" <<endl;
}

void Employee::show()
{
    cout << endl <<"Informacje: " <<endl;
    cout << "Nazwisko: " << getSurname() << endl << "Wiek: " <<getAge()<< endl;
    cout << "Doswiadczenie: " <<getExperience()<<endl << "Wyplata: " << getSalary()<<endl<<endl;

}

int Employee::ageEmployment()
{
    int age1;
    age1 = age - experience;
    return age1;
}
string Employee:: getSurname()
{
    return surname;
}

int Employee:: getAge()
{
    return age;
}

int Employee:: getExperience()
{
    return experience;
}
double Employee:: getSalary()
{
    return salary;
}
