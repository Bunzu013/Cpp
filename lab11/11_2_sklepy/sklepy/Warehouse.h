#pragma once
#include <iostream>


using namespace std;

class Warehouse {
private:
	string name;
	int ilosc;
public:
	Warehouse(string name1, int ilosc1);
	void  setName(string name1);
	void setilosc(int ilosc1);
	string getName();
	int getIlosc();
	void sellStock(int count);
	void show();
	~Warehouse();
};