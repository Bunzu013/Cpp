#include "Car.h"

Car::Car(string model1, int rokProdukcji1, double pojemnoscSilnika1)
	:model(model1), rokProdukcji(rokProdukcji1), pojemnoscSilnika(pojemnoscSilnika1)
{}
void Car::setModel(string model1)
{
	this->model = model1;
}
void Car::setRokProdukcji(int rok1)
{
	this->rokProdukcji = rok1;
}
void Car::setPojemnoscSilnika(double pojemnoscSilnika1)
{
	this->pojemnoscSilnika = pojemnoscSilnika1;
}
string Car::getModel()
{
	return model;
}
int Car::getRokProdukcji()
{
	return rokProdukcji;
}
double Car::getPojemnoscSilnika()
{
	return pojemnoscSilnika;
}
void Car::show()
{
	cout << "Model: " << getModel() << " rok produkcji: " << getRokProdukcji() << " pojemnosc silnika: " << getPojemnoscSilnika() << endl;
}