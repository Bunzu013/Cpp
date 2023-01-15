#include "Sklepy.h"

Shop::Shop(string name1)
{
	this->name = name1;
}
void Shop::addWarehouses(shared_ptr<Warehouse>& warehouse)
{
	magazyny.push_back(warehouse);
}

void Shop::printWarehouses()
{
	int n = magazyny.size();
	for (int i = 0; i< n; i++ )
		magazyny.at(i)->show();
}


bool Shop::sell(string nazwaProduktu, int sprzedanaIlosc)
{
	auto it = std::find_if(magazyny.begin(), magazyny.end(),
		[&nazwaProduktu](const std::shared_ptr<Warehouse>& ptr) {
			return ptr->getName() == nazwaProduktu;
		});
	if (it == magazyny.end())
	{
		cout << "Brak produktu: " <<  endl;
		return false;
	}
		it->get()->sellStock(sprzedanaIlosc);
	return true;
}


string Shop::getName()
{
	return name;
}
Shop::~Shop()
{
	cout << "Destruktor shop " << endl;
}