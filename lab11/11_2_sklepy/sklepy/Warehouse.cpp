#include "Warehouse.h"

Warehouse::Warehouse(string name1, int ilosc1)
{
	this->name = name1;
	this->ilosc = ilosc1;
}
void Warehouse::setName(string name1)
{
	name = name1;
}
void Warehouse::setilosc(int ilosc1)
{
	ilosc = ilosc1;
}

string Warehouse::getName()
{
	return name;
}
int Warehouse::getIlosc()
{
	return ilosc;
}

void Warehouse::show()
{
	cout << "Nazwa produktu: " << getName() << " ilosc: " << getIlosc() << endl;
}

void Warehouse::sellStock(int ile) {
	int temp = getIlosc();
	if (temp - ile < 0 || ile < 1)
		cout << "Niewystarczajaca ilosc produktu: " << getName() << endl;
	else {
		temp -= ile;
		setilosc(temp);
	}
}

Warehouse::~Warehouse() {
	std::cout << "Warehouse destructor" << std::endl;
}