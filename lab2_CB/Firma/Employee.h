#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED
#include <iostream>

using namespace std;

class Employee
{
private:
    string surname;
    int age;
    int experience;
    double salary;
public:
    Employee();
    Employee(string surname1, int age1, int experience1, double salary1);
    virtual ~Employee();
    virtual void show();
    virtual  int calculateSalary(int value)=0;
    int ageEmployment();
    string getSurname();
    int getAge();
    int getExperience();
    double getSalary();

};
#endif // EMPLOYEE_H_INCLUDED
