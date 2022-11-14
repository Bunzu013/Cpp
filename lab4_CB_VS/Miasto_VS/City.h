#ifndef CITY_H_INCLUDED
#define CITY_H_INCLUDED

#include <iostream>
#include <vector>
#include "Citizen.h"
#include "Codes.h"
#include <deque>

using namespace std;

class City
{
private:
    vector<Citizen> citizens;
    string city_name;
    deque <Codes> cod;
public:
    City();
    City(string city_name1);
    void addCitizen(Citizen c);
    void deleteCitizen(string surname1, int age1);
    void show_citizens();
    void show_city();
    int women();
    int city_citizens();
    int adults();
    int postal_codes(int mode);
};

#endif // CITY_H_INCLUDED
