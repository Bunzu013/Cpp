#include <iostream>
#include <regex>

using namespace std;

int main()
{
	smatch res;
	regex regPattern("([0-1][0-9]|2[0-3]):[0-5][0-9](:[0-5][0-9])*");
	string line = "";
	cout << "godzina (hh:mm:ss) ";
	getline(cin, line);
	cout << endl;
	regex_search(line, res, regPattern);
	if (res.size() != 0) {
		cout << "Liczba dopasowan:" << res.size() << endl;
		cout << "res.str(): " << res.str() << endl;
		cout << "res.length(): " << res.length() << endl;
		cout << "res.position(): " << res.position() << endl;
	}
	else cout << "Brak dopasowan" << endl;


}