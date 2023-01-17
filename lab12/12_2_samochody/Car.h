#pragma once
#include <iostream>
using namespace std;

class Car
{
private:
	string model;
	int rokProdukcji;
	double pojemnoscSilnika;
public:
	Car(string model1, int rokProdukcji1, double pojemnoscSilnika1);
	void setModel(string model1);
	void setRokProdukcji(int rok1);
	void setPojemnoscSilnika(double pojemnoscSilnika1);
	string getModel();
	int getRokProdukcji();
	double getPojemnoscSilnika();

	void show();
};