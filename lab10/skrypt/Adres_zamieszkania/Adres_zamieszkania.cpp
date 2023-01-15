#include <iostream>
#include <regex>

using namespace std;

void check(string line, smatch res1, regex pattern) {
	regex_search(line, res1, pattern);
	if (res1.size() != 0) {
		cout << "Znaleziono dopasowanie: " << res1.str() << endl;
	}
	else cout << "Brak dopasowan" << endl;
}

int main()
{
	string ulica;
	string kodp;
	string nrdom;
	string nrmiesz;

	smatch res1;

	regex regPattern1("[A-z][a-z]+( [A-Z]?[a-z]+)*");
	regex regPattern2("[0-9]{2}-[0-9]{3}");
	regex regPattern3("[1-200][A-za-z]?");
	regex regPattern4("[1-200]");

	cout << "Podaj nazwe ulicy: ";
	getline(cin, ulica);
	cout << "\nPodaj kod pocztowy: ";
	getline(cin, kodp);
	cout << "\nPodaj numer domu: ";
	getline(cin, nrdom);
	cout << "\nPodaj numer mieszkania: ";
	getline(cin, nrmiesz);
	cout << "\n=================================================================" << endl;
	cout << "SPRAWDZENIE" << endl;
	cout << "Ulica:" << endl;
	check(ulica, res1, regPattern1);
	cout << "Kod pocztowy:" << endl;
	check(kodp, res1, regPattern2);
	cout << "Numer domu" << endl;
	check(nrdom, res1, regPattern3);
	cout << "Numer mieszkania" << endl;
	check(nrmiesz, res1, regPattern4);
}