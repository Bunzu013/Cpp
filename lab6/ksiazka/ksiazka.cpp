#include <iostream>
#include "Contact.h"
#include "Contacts.h"
#include <boost/multi_index_container.hpp>
#include <boost/multi_index/hashed_index.hpp>
#include <boost/multi_index/member.hpp>
using namespace boost::multi_index;
using namespace std;


int main()
{
    Contacts a;

    a.addContact("Jan", "Kowalski", 25, 111111111, "Nadbystrzycka");
    a.addContact("Anna", "Kowalski", 20, 111110111, "Nadbystrzycka");
    a.addContact("Olga", "Nowak", 14, 123123123, "Muzyczna");
    
    cout << endl <<  "PRZEDZIAL WIEKOWY:";
    a.age(23, 25);

    cout << endl << "MIESZKANCY DANEJ ULICY: ";
    a.all("Nadbystrzycka");

    cout << endl << "WYSZUKIWANIE: ";
    a.number(123123123);
    a.number(111110111);
    a.number(111110121);

    cout << endl << "ZMIANA NAZWY: ";
    a.show();
    a.changeStreet("Muzyczna", "Konopnicka");
    a.show();
    a.countAdult();

    cout << endl << "USUNIECIE KONTAKTU";
    a.removeContact(111111111);
    a.show();
    a.countAdult();
    a.uniqueName();

   
   
}

