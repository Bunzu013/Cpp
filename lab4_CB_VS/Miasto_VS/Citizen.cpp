#include "Citizen.h"

Citizen::Citizen()
{
    this->name = "Jane";
    this->surname = "Doe";
    this->age = 18;
    this->sex = 'F';
    this->postal_code = "00-000";
}
Citizen::Citizen(string name1, string surname1, int age1, char sex1, string postal_code1)
{
    this->name = name1;
    this->surname = surname1;
    this->age = age1;
    this->sex = sex1;
    this->postal_code = postal_code1;
}
void Citizen::show()
{
    cout << "Name: " << name << endl;
    cout << "Surname: " << surname << endl << "Age: " << age << endl;
    cout << "Sex: " << sex << endl << "Postal code: " << postal_code << endl;
}
string Citizen::getName()
{
    return name;
}
string Citizen::getSurname()
{
    return surname;
}
int Citizen::getAge()
{
    return age;
}
char Citizen::getSex()
{
    return this->sex;
}
string Citizen::getPostal_code()
{
    return postal_code;
}
