#include <iostream>
#include <regex>
#include <fstream>

using namespace std;

bool check(string imie1, string nazwisko1, string wiek1, string telefon1, string email1, regex namePattern, regex nazwPattern, regex agePattern, regex telPattern, regex emailPattern, smatch res) {
    bool temp = true;
    regex_search(imie1, res, namePattern);
    if (res.size() != 0) {

    }
    else {
        temp = false;
        cout << "Bledne imie" << endl;

    }
    regex_search(nazwisko1, res, nazwPattern);
    if (res.size() != 0) {

    }
    else {
        temp = false;
        cout << "Bledne nazwisko" << endl;

    }
    regex_search(wiek1, res, agePattern);
    if (res.size() != 0) {

    }
    else {
        temp = false;
        cout << "Bledny wiek" << endl;

    }
    regex_search(telefon1, res, telPattern);
    if (res.size() == 0 || telefon1.size() != 9) {
        temp = false;
        cout << "Bledny numer telefonu" << endl;
    }
    regex_search(email1, res, emailPattern);
    if (res.size() != 0) {

    }
    else {
        temp = false;
        cout << "Bledny email" << endl;
    }
    return temp;
}

int main()
{
    string imie;
    string nazwisko;
    string wiek;
    string telefon;
    string email;

    smatch res;

    regex namePattern("[A-Z][a-z]+");
    regex nazwPattern("[A-Z][a-z]+(-[A-Z]?[a-z]+)?");
    regex agePattern("[0-99]");
    regex telPattern("[1-9][0-9]{8}");
    regex emailPattern("[A-za-z]([A-za-z]|[0-9]|_|-|\\.)*@([A-za-z]|[0-9])+\\.(com|pl|org)");

    cout << "Podaj imie: ";
    getline(cin, imie);
    cout << "\nPodaj nazwisko: ";
    getline(cin, nazwisko);
    cout << "\nPodaj wiek: ";
    getline(cin, wiek);
    cout << "\nPodaj numer telefonu: ";
    getline(cin, telefon);
    cout << "\nPodaj adres email: ";
    getline(cin, email);

    bool good = check(imie, nazwisko, wiek, telefon, email, namePattern, nazwPattern, agePattern, telPattern, emailPattern, res);
    if (good) {
        ofstream fileOf("lista.txt", ios::app);
        if (fileOf.is_open()) {
            fileOf << imie << ";" << nazwisko << ";" << wiek << ";" << telefon << ";" << email << ";" << endl;
            fileOf.close();
            cout << "Dane zapisano do pliku lista.txt" << endl;
        }
        else cout << "Blad przy otwieraniu pliku" << endl;
    }
    else cout << "Bledne dane" << endl;


}
