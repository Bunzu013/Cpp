#include <iostream>
#include <fstream>
#include <regex>
#include <string>
#include <map>
#include <set>

using namespace std;

void show(set<string> s) {
	set<string>::iterator itr;
	for (itr = s.begin(); itr != s.end(); itr++) {
		cout << *itr << endl;
	}
}

void showMap(map<string, int> m) {
	map<string, int>::iterator itr;
	for (itr = m.begin(); itr != m.end(); ++itr) {
		cout << itr->first << " - " << itr->second << endl;
	}
	cout << endl;
}


int main()
{
	ifstream file;
	file.open("C:/Users/JB/Desktop/s5/c++/lab10/Kartoteka/lista.txt");
		
	set<string> telnumbers;
	set<string> lsurnames;
	set<string> domains;
	map<string, int> names;


	smatch res;
	regex surPattern("[A-z][a-z]+-[A-Z][a-z]+");
	regex domPattern("@([A-za-z]|[0-9])+\\.(com|pl|org)");

	string email;
	string tel;
	string age;
	string surname;
	string name;
	while (!file.eof()) {
		getline(file, name, ';');
		int temp = names.count(name);
		if (temp == 0 && name.size() > 1) {
			names.insert(pair<string, int>(name, 1));
		}
		else {
			names[name]++;
		}
		getline(file, surname, ';');
		regex_search(surname, res, surPattern);
		if (res.size() != 0) {
			lsurnames.insert(surname);
		}
		getline(file, age, ';');
		getline(file, tel, ';');
		char last = tel[tel.size() - 1];
		if (last == '0' || last == '2' || last == '4' || last == '6' || last == '8') {
			telnumbers.insert(tel);
		}
		getline(file, email, ';');
		regex_search(email, res, domPattern);
		if (res.size() != 0) {
			domains.insert(res.str());
		}
	}
	cout << "Nazwy unikatowych domen:" << endl;
	show(domains);
	cout << "\nNumery telefonow konczace sie liczba parzysta:" << endl;
	show(telnumbers);
	cout << "\nNazwiska laczone:" << endl;
	show(lsurnames);
	cout << "\nStatystyka imion (imie + liczba wystapien):" << endl;
	showMap(names);

}
