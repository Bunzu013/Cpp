#pragma once
#include <iostream>

using namespace std;

class Contact{
public:
	string imie;
	string nazwisko;
	int wiek;
	int telefon;
	string street;

public:
	Contact(string imie1, string nazwisko1, int wiek1, int telefon1, string street1) {
		this->imie = imie1;
		this->nazwisko = nazwisko1;
		this->wiek = wiek1;
		this->telefon = telefon1;
		this->street = street1;
	}
	string getImie(){
		
		return imie;
	}
	string getNazwisko() {
		return nazwisko;
	}

	int getWiek() {
		return wiek;
	}

	int getTelefon() {
		return telefon;
	}

	string getStreet() {
		return street;
	}

	void show()
	{
		cout << imie <<" " << nazwisko << " wiek: " << wiek << " telefon: " << telefon << " ulica: " << street << endl;

	}

};