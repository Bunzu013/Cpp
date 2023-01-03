#pragma once
#include <boost/multi_index_container.hpp>
#include <boost/multi_index/hashed_index.hpp>
#include <boost/multi_index/member.hpp>
#include <boost/multi_index/random_access_index.hpp>
#include <boost/fusion/container.hpp>
#include <boost/fusion/sequence.hpp>
#include <boost/bind/bind.hpp>
#include <iostream>
#include <vector>
#include <map>
#include "Contact.h"

using namespace boost::multi_index;
using namespace std;

typedef multi_index_container<Contact, indexed_by<
	hashed_non_unique<member<Contact, string, &Contact::imie>>,
	hashed_non_unique<member<Contact, string, &Contact::nazwisko>>,
	hashed_non_unique<member<Contact, int, &Contact::wiek>>,
	hashed_unique<member<Contact, int, &Contact::telefon>>,
	hashed_non_unique<member<Contact, string, &Contact::street>>
	>> contact_multi;
	
typedef contact_multi::nth_index<0>::type name_type;
typedef contact_multi::nth_index<1>::type surname_type;
typedef contact_multi::nth_index<2>::type age_type;
typedef contact_multi::nth_index<3>::type phoneNumber_type;
typedef contact_multi::nth_index<4>::type street_type;

class Contacts {
public:
	contact_multi ksiazka;
	void addContact(string name, string surname, int age, int phoneNumber, string street) 
	{
		int temp = 0;
		for (phoneNumber_type::iterator i = ksiazka.get<3>().begin(); i != ksiazka.get<3>().end(); i++)
		{
			if (i->telefon == phoneNumber) 
			{
				temp++;
			}
		}
		if (temp == 0) 
		{
			ksiazka.insert({ name, surname, age, phoneNumber, street });   //({ name, surname, age, phoneNumber, street });
		}
	}

	void removeContact(int number1)
	{
		
		for (phoneNumber_type::iterator i = ksiazka.get<3>().begin(); i != ksiazka.get<3>().end(); i++) 
		{
			if (i->telefon == number1) 
			{
				phoneNumber_type& phone_remove = ksiazka.get<3>();
			
				
			}
		}
	}
	
	void all(string street1)
	{
		cout << endl << "Ulica: " << street1 << ": " << endl;
		for (street_type::iterator i = ksiazka.get<4>().begin(); i != ksiazka.get<4>().end(); i++) 
		{
			if (i->street == street1) 
			{
				cout << i->imie << " " << i->nazwisko << " wiek: " << i->wiek << " telefon: " << i->telefon << endl;
			}
		}
	}

	void age(int a, int b)
	{
		cout << endl << "Wiek: <" << a << "," << b << "> " << endl;
		for (age_type::iterator i = ksiazka.get<2>().begin(); i != ksiazka.get<2>().end(); i++)
		{
			if(i->wiek >= a && i->wiek <= b)  cout << i->imie << " " << i->nazwisko << " wiek: " << i->wiek << " telefon: " << i->telefon << " ulica: " << i->street << endl;
		}
	}

	void number(int number1)
	{

		bool NOfind = true;
		cout << endl << "Telefon: " << number1 << endl;
		for (phoneNumber_type::iterator i = ksiazka.get<3>().begin(); i != ksiazka.get<3>().end(); i++)
		{
			if (i->telefon == number1) 
			{
				cout << i->imie << " " << i->nazwisko << " wiek: " << i->wiek << " telefon: " << i->telefon << " ulica: " << i->street << endl;
				NOfind = false;
				break;
			}
		}
		if (NOfind) cout << endl << "Brak numeru" << endl;
		
	}

	void changeStreet(string street1,string street2)
	{
		cout << endl << "Zmiana ulicy: " << street1 << " na: " << street2 << endl;
		street_type& street_index = ksiazka.get<4>();
		/*string street2;

		cout << "Podaj nowa nazwe ulicy: ";
		cin >> street2;*/
		for (street_type::iterator i = ksiazka.get<4>().begin(); i != ksiazka.get<4>().end(); i++) 
		{
			{
				if (i->street == street1)
				{
					Contact str = *i;
					str.street = street2;
					street_index.replace(i, str);
				}
			}
		}
	}

	void countAdult()
	{
		int adults = 0;
		for (age_type::iterator i = ksiazka.get<2>().begin(); i != ksiazka.get<2>().end(); i++)
		{
			if (i->wiek >= 18) adults++;
		}
		cout << endl << "Dorosli: " << adults << endl;
	}

	void uniqueName()
	{
		int unique = 0;
		map <string,int> temp;
		for (surname_type::iterator i = ksiazka.get<1>().begin(); i != ksiazka.get<1>().end(); i++)
		{
			string s = i->nazwisko;
			
			if (temp.find(s) == temp.end()) temp.insert(pair<string, int>(s, 1));
			else if ( temp.find(s)->second == 1) temp.find(s)->second = 2;
		}
		map<string, int>::iterator it;
		for (it = temp.begin(); it != temp.end(); ++it)
		{
			if (it->second == 1) unique++;
		}
	//	cout << endl;

		cout << endl << "Unikalne nazwiska: " << unique << endl;
	}

	void show()
	{
		cout <<endl << "Wszystkie kontakty: " << endl;
		for (phoneNumber_type::iterator i = ksiazka.get<3>().begin(); i != ksiazka.get<3>().end(); i++) {
			cout << i->imie << " " << i->nazwisko << " wiek: " << i->wiek << " telefon: " << i->telefon << " ulica: " << i->street << endl;
		}
	}
};
