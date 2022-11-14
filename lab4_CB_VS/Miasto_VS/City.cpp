#include "City.h"
#include "Citizen.h"
#include <algorithm>
#include "Codes.h"


City::City(){}
City::City(string city_name1)
{
	this->city_name = city_name1;
}
void City::addCitizen(Citizen c)
{
	citizens.push_back(c);
}
void City::deleteCitizen(string surname1, int age1)
{
	int a = citizens.size();
	for (int i = 0; i < a; i++)
	{
		if (citizens.at(i).Citizen::getSurname() == surname1 && citizens.at(i).Citizen::getAge() == age1)
		{
			citizens.erase(citizens.begin()+i);
		}
	}
}
void City::show_citizens()
{
	int a = citizens.size();
	for (int i = 0; i < a ; i++)
	{
		cout << endl<< "Mieszkaniec " << i+1 << ": " << endl;
		citizens.at(i).Citizen::show();
	}
}
void City::show_city()
{
	cout << city_name << endl;
}

int City::women()
{
	int a = citizens.size();
	int n = 0;
	for (int i = 0; i < a; i++)
	{
		if (citizens.at(i).Citizen::getSex() == 'F') n++;
	}
	return n;
}
int City::adults()
{
	int a = citizens.size();
	int n = 0;
	for (int i = 0; i < a; i++)
	{
		if (citizens.at(i).Citizen::getAge() >= 18) n++;
	}
	return n;
}
int City::city_citizens()
{
	return citizens.size();
}

int City::postal_codes(int mode)
{
	int count_codes = 0;
	string p = "";
	int i = 0;
	if (cod.empty()) 
	{
		p = citizens.at(i).Citizen::getPostal_code();
		cod.push_back(p);
		i = 1;
	}

		int a = citizens.size();
		for (i; i < a; i++)
		{
			p = citizens.at(i).Citizen::getPostal_code();
			int n = cod.size();
			for (int j = 0; j < n; j++)
			{
				if (p == cod.at(j).postCode) cod.at(j).citizensQuantity += 1;
				else
				{
					cod.push_back(p);
				}
			}
		}
	
	i = 0;
	int n = cod.size();
	for (int j = 0; j < n; j++)
	{
		if (cod.at(j).citizensQuantity == 1) count_codes++;
	}


	if (mode == 0) 
	{
		int n = cod.size();
		for (int j = 0; j < n; j++)
		{
			cout << "Kod: " << cod.at(j).postCode << " -> " << cod.at(j).citizensQuantity << " mieszkancow" << endl;
			//if (cod.at(j).citizensQuantity == 1) count_codes++;
		}
	}
	return count_codes;
}