#include <iostream>
#include "Car.h"
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

int main()
{
	vector<Car> samochody;
	Car s1 = Car("Ford", 2015, 2.0);
	Car s2 = Car("Skoda", 2009, 1.6);
	Car s3 = Car("Volkswagen", 2006, 1.2);

	samochody.push_back(s1);
	samochody.push_back(s2);
	samochody.push_back(s3);

	cout << "Sortowanie po roku rosnaco:" << endl;
	sort(samochody.begin(), samochody.end(), []( Car& car1, Car& car2) { return car1.getRokProdukcji() < car2.getRokProdukcji(); });
	for_each(samochody.begin(), samochody.end(), [idx = 0](Car& car) mutable {
		cout << ++idx << " ";
	car.show();
		});

	cout << "Sortowanie po pojemnosci malejaco:" << endl;
	sort(samochody.begin(), samochody.end(), [](Car& car1, Car& car2) { return car1.getPojemnoscSilnika() > car2.getPojemnoscSilnika(); });
	for_each(samochody.begin(), samochody.end(), [idx = 0](Car& car) mutable {
		
		cout << ++idx << " ";
	car.show();
		});


}
