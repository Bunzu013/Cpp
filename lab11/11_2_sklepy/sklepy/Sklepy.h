#include "Warehouse.h"
#include <vector>
#include <memory>

using namespace std;

class Shop {
private:
    string name;
    vector<shared_ptr<Warehouse>> magazyny;
public:
    Shop(string name1);
    void addWarehouses(shared_ptr<Warehouse>& warehouse);
    void printWarehouses();
    bool sell(string nazwaProduktu, int sprzedanaIlosc);
    string getName();
    virtual ~Shop();
};