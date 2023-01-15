#include <iostream>
#include "Sklepy.h"
#include "Warehouse.h"
#include <memory>
#include <vector>

using namespace std;

int main()
{
	shared_ptr<Warehouse> magazyn1 = make_shared<Warehouse>("laptop", 200);
	shared_ptr<Warehouse> magazyn2 = make_shared<Warehouse>("Kubek", 2500);
	shared_ptr<Warehouse> magazyn3 = make_shared<Warehouse>("myszka", 50);
	shared_ptr<Warehouse> magazyn4 = make_shared<Warehouse>("sluchawki", 10);
	shared_ptr<Warehouse> magazyn5 = make_shared<Warehouse>("kanapa", 100);


	vector<unique_ptr<Shop>> sklepy;

	sklepy.push_back(make_unique<Shop>("sklep1"));
	sklepy.push_back(make_unique<Shop>("sklep2"));

	sklepy[0]->addWarehouses(magazyn1);
	sklepy[0]->addWarehouses(magazyn3);
	sklepy[0]->addWarehouses(magazyn4);
	sklepy[1]->addWarehouses(magazyn2);
	sklepy[1]->addWarehouses(magazyn5);

	cout << "Magazyny sklepu 1:" << endl;
	sklepy[0]->printWarehouses();
	cout << endl << "Magazyny sklepu 2:" << endl;
	sklepy[1]->printWarehouses();
	cout << endl;
	sklepy[0]->sell("sluchawki", 10);
	sklepy[1]->sell("myszka", 5);
	sklepy[1]->sell("kanapa", 105);
	cout << endl;
	cout << "Magazyny sklepu 1:" << endl;
	sklepy[0]->printWarehouses();
	cout << endl << "Magazyny sklepu 2:" << endl;
	sklepy[1]->printWarehouses();
	cout << endl << endl;

}
