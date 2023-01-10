#ifndef CATALOG_H
#define CATALOG_H

#include <iostream>
#include <QVector>
#include <QtAlgorithms>
#include <algorithm>
#include "Car.h"

using namespace std;

class Catalog {
private:
    QVector<Car> cars;
public:
    void addCar(Car c)
    {
        cars.push_back(c);
    }
    string showCars()
    {
        string output = "";
        for(auto c : cars)
        {
            output += c.show();
        }
        return output;
    }
    int countOlder(int year)
    {
        return count_if(cars.begin(), cars.end(), [year](Car c){return c.getYearOfProduction() > year;});
    }
    void removeCar(string nrVIN)
    {
        cars.removeIf([nrVIN](Car c){return c.getNrVIN() == nrVIN;});
    }
    string showSortedByYearOfProduction()
    {
        string output = "";
        auto ccars = cars;
        sort(ccars.begin(), ccars.end(), [](Car c1, Car c2){return c1.getYearOfProduction() > c2.getYearOfProduction();});
        for(auto c : ccars)
        {
            output += c.show();
        }
        return output;
    }
    string showSortedByMark()
    {
        string output = "";
        auto ccars = cars;
        sort(ccars.begin(), ccars.end(), [](Car c1, Car c2){return c1.getMark().compare(c2.getMark());});
        for(auto c : ccars)
        {
            output += c.show();
        }
        return output;
    }
};

#endif // CATALOG_H
