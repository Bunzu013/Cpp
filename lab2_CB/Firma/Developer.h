#ifndef DEVELOPER_H_INCLUDED
#define DEVELOPER_H_INCLUDED
#include "Employee.h"

class Developer: public Employee
{

public:
    Developer();
    ~Developer();
    Developer(string surname1, int age1, int experience1, double salary1);
    float calculateBonus(int value);
    virtual  int calculateSalary(int value) override;
    void show() override;
};

#endif // DEVELOPER_H_INCLUDED
