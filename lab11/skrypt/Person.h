#pragma once
#include <iostream>
#include <memory>
#include <vector>
using namespace std;

class Person{
	private:
		string name;
		int age;
	public:
		Person(string name1, int age1)
		{
			this->name=name1;
			this->age=age1;
		}

		void info()
		{
			cout<<name<<" "<<age<<endl;
		}
};