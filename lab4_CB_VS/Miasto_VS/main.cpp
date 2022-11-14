#include <iostream>
#include "City.h"
#include "Citizen.h"
#include <algorithm>
#include "Compare.h"
using namespace std;

void showCities(vector<City> c);
void statatistic(vector <City> c);
void the_most(vector<City> c, int mode);
void sort_cities(vector <City>& c);

int main()
{
    
    City a("Warszawa");
    Citizen a1("Joe", "Doe", 22, 'M', "20-314");
    Citizen a2("Jan", "Nowak", 35, 'M', "20-314");
    Citizen a3("Anna", "Kowalska", 15, 'F', "30-014");
    a.addCitizen(a1);
    a.addCitizen(a2);
    a.addCitizen(a3);
    
    City b("Krakow");
    Citizen b1("Jane", "Doe", 17, 'F', "00-053");
    Citizen b2("Katarzyna", "Nowak", 41, 'F', "00-053");
    b.addCitizen(b1);
    b.addCitizen(b2);
    City d("Rzeszow");
    Citizen d1("Zofia", "Wojcik", 62, 'F', "36-053");
    Citizen d2("Zofia", "Wojcik", 12, 'F', "36-053");
    Citizen d3("Zofia", "Wojcik", 67, 'F', "36-053");
    d.addCitizen(d1);
    d.addCitizen(d2);
    d.addCitizen(d3);

    vector<City> miasta;
        
    miasta.push_back(a);
    miasta.push_back(b);
    miasta.push_back(d);

    cout << endl << "Miasta: " << endl;
    showCities(miasta);
    statatistic(miasta);
    sort_cities(miasta);
    cout << endl << "Sortowanie rosnoaco pod wzgledem liczby mieszkancow: " <<endl;
    showCities(miasta);
    cout << endl << "Miasto, w ktorym jest najwiecej roznych kodow pocztowych: ";
    the_most(miasta,1);
    cout << "Miasto, w ktorym mieszka najmniej mieszkancow: ";    the_most(miasta, 2);

    miasta.erase(miasta.begin(), miasta.end());

    return 0;
}


void showCities(vector<City> c)
{
    int n = c.size();
    for (int i = 0; i < n; i++)
    {
        c.at(i).show_city();
        //cout << endl << "Mieszkancy: ";
        // c.at(i).show_citizens();
        /*cout << endl << "Usuniecie mieszkanca i wyswietlenie pozostalych: " << endl;
        c.at(i).deleteCitizen("Kowalska", 15);
        c.at(i).show_citizens();
        */
    }
}

void statatistic(vector<City> c)
{
    int n = c.size();
    for (int i = 0; i < n; i++)
    {
        cout << endl << "Miasto: "; c.at(i).show_city();
        cout << "Ilosc mieszkancow: " << c.at(i).city_citizens() << endl;
        cout << "Ilosc pelnoletnich mieszkancow: " << c.at(i).adults() << endl;
        cout << "Ilosc niepelnoletnich mieszkancow: " << c.at(i).city_citizens()- c.at(i).adults() << endl;
        cout << "Ilosc kobiet: " << c.at(i).women() << endl;
        cout << "Ilosc mezczyzn: " << c.at(i).city_citizens()-c.at(i).women() << endl;
        cout << "Ilosc unikalnych kodow: " << c.at(i).postal_codes(0) << endl;
    }
}

void sort_cities(vector <City>& c)
{
    sort(c.begin(), c.end(), Compare());
}

void the_most(vector<City> c, int mode)
{
    int n = 0;
    int a = 0;
    int b = c.size();
    switch (mode)
    {
    case 1:
       
        n = c.at(0).postal_codes(1);
        for (int i = 1; i < b; i++)
        {
            int temp = 0;
            temp = c.at(i).postal_codes(1); 
            if (temp > n)
            {
                n = temp;
                a = i;
            }
        }
        cout << " - " << n << ": " << endl; c.at(a).show_city();
        break;
    case 2:
        n = c.at(0).city_citizens();
        for (int i = 1; i < b; i++)
        {
            int temp;
            temp = c.at(i).city_citizens();
            if (temp < n)
            {
                n = temp;
                a = i;
            }
        }
        cout << " - " << n << ": " << endl; c.at(a).show_city();
        break;
    default:
        cout << "Niepoprawne dane " << endl;
        break;
    }
}