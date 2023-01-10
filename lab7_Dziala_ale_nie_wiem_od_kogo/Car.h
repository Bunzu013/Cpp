#ifndef CAR_H
#define CAR_H

#include <iostream>

using namespace std;

class Car {
private:
    string mark;
    string model;
    int yearOfProduction;
    string nrVIN;
public:
    Car(string mark, string model, int yearOfProduction, string nrVIN) :
        mark(mark), model(model), yearOfProduction(yearOfProduction), nrVIN(nrVIN)
    {}
    string show()
    {
        string s = mark + ", " + model + ", " + to_string(yearOfProduction) + ", " + nrVIN + "\n";
        return s;
    }
    int getYearOfProduction() {return yearOfProduction;}
    string getNrVIN() {return nrVIN;}
    string getMark() {return mark;}
};

#endif // CAR_H
