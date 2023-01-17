#include <iostream>
#include <tuple>
#include <vector>
#include <algorithm>
#include <functional>
#include <numeric>

using namespace std;

void srednia(vector < int > vec);
void parzysty(vector < int > vec);
void tylkoDodatnie(vector < int > vec);
void sortPN(vector < int > vec);
void show(vector < int > vec);
void przeciwne(vector < int > vec);
void mniejsze(vector < int > vec);

int main()
{
	vector < int > num = { -1,2,3,4,5,-6,7,8,9, 15 };
	cout << "Zawartosc vector " << endl;
	for_each(num.begin(), num.end(), [](int el) {cout << " | " << el; });
	cout << endl;

	srednia(num);
	parzysty(num);
	sortPN(num);
	tylkoDodatnie(num);
	przeciwne(num);
	mniejsze(num);

}

void srednia(vector < int > vec)
{
	int sum = std::accumulate(vec.begin(), vec.end(), 0);
	float mean = (float)sum / (float)vec.size();
	cout << "Srednia z " << vec.size() << " elementow: " << mean << endl;
}

void parzysty(vector < int > vec)
{
	int evenCount = count_if(vec.begin(), vec.end(), [](int elem) { return elem % 2 == 0; });
	cout << "Ilosc elementow parzystych: " << evenCount << endl;
}

void tylkoDodatnie(vector < int > vec)
{
	cout << endl <<  "Tylko elementy dodatnie" << endl;
	erase_if(vec, [](int elem) { return elem < 0; });
	show(vec);
}

void sortPN(vector < int > vec)
{
	cout << "Sortowanie - najpierw elementy parzyste " << endl;
	partition(vec.begin(), vec.end(), [](int el) { return !(el & 1); });
	show(vec);
}

void przeciwne(vector < int > vec)
{
	cout << endl <<"Zmiana na wartosci przeciwne" << endl;
	transform(vec.begin(), vec.end(), vec.begin(), [](int elem) { return -elem; });
	show(vec);
}
void show(vector < int > vec)
{
	for_each(vec.begin(), vec.end(), [](int elem) { cout << elem << " "; });
}

void mniejsze(vector < int > vec)
{
	int a;
	cout << endl << "Podaj liczbe: ";
	cin >> a;
	size_t mniejNiz = count_if(vec.begin(), vec.end(), [a](int elem) { return elem < a; });
	cout << "Ilosc elementow mniejszych niz podana liczba : " << mniejNiz << endl;

}