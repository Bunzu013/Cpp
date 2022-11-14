#include<iostream>
#include "Student.h"

Student::Student(string name1, string surname1,int age1, string index1):
                Person(name1,surname1,age1)
{
    index = index1;
    cout<<"Konstruktor klasy pochodnej Student"<<endl <<endl;
}

Student::Student()
{
    cout<<"Konstruktor bez. klasy pochodnej Student"<<endl<<endl;
}

void Student::setIndex(string newIndex)
{
    index =newIndex;
}

void Student::showInfoStudent()
{
    showInfoPerson();
    cout<<"Index: "<< index<<endl<<endl;
}

void Student::init2(string name1, string surname1, int age1, string index1)
{
    init(name1,surname1,age1);
    index = index;
}
