#include "Contacts.h"
#include <vector>
#include <algorithm>
#pragma once
#include <iostream>

using namespace std;
/*
void Contacts:: addContact(Contact c)
{
	bool nowy = true;
	int s = ksiazka.size();
	for (int i = 0; i < s; i++) {
		if (ksiazka.at(i).getTelefon() == c.getTelefon()) {
			cout << "Kontakt juz istnieje" << endl;
			nowy = false;
		}
	}
	if (nowy) {
		ksiazka.push_back(c);
	}
	
}
void Contacts::removeContact(string number1)
{
	int a = ksiazka.size();
	for (int i = 0; i < a; i++)
	{
		if (ksiazka.at(i).getTelefon() == number1)
		{
			ksiazka.erase(ksiazka.begin() + i);
		}
	}
}
void Contacts::all(string street1)
{
	int a = ksiazka.size();
	for (int i = 0; i < a; i++)
	{
		if (ksiazka.at(i).getStreet() == street1)
		{
			cout << ksiazka.at(i).getImie() << "  " << ksiazka.at(i).getNazwisko() << endl;
		}
	}
}
void Contacts::age(int a, int b)
{
	int n = ksiazka.size();
	for (int i = 0; i < n; i++)
	{
		if (ksiazka.at(i).getWiek() > a && ksiazka.at(i).getWiek() < b)
		{
			cout << ksiazka.at(i).getImie() << "  " << ksiazka.at(i).getNazwisko() << endl;
		}
	}
}
void Contacts::number(string number1)
{
	int a = ksiazka.size();
	for (int i = 0; i < a; i++)
	{
		if (ksiazka.at(i).getTelefon() == number1)
		{
			cout << ksiazka.at(i).getImie() << "  " << ksiazka.at(i).getNazwisko() << endl;
		}
	}
}
void Contacts::changeStreet(string street1)
{
	cout << "Podaj nowa nazw ulicy" << endl;
	string nowa;
	int a = ksiazka.size();
	for (int i = 0; i < a; i++)
	{
		if (ksiazka.at(i).getStreet() == street1)
		{
	// zmiana nazwy ulicy dla wszystkich osób mieszkaj¹cych przy danej ulicy;
		}
	}
}
void Contacts::countAdult()
{
	int dorosli = 0;
	int a = ksiazka.size();
	for (int i = 0; i < a; i++)
	{
		if (ksiazka.at(i).getWiek() > 17)
		{
			dorosli++;
		}
	}
}
void Contacts::uniqueName()
{
	// policzenie ile unikatowych nazwisk znajduje siê w ksi¹¿ce;

}
void Contacts::show()
{
	int a = ksiazka.size();
	for (int i = 0; i < a; i++)
	{

		cout << ksiazka.at(i).getImie() << "  " << ksiazka.at(i).getNazwisko();
		cout << ksiazka.at(i).getWiek() << "  " << ksiazka.at(i).getTelefon() << "  " << ksiazka.at(i).getStreet() << "  " << endl;
	}
}*/