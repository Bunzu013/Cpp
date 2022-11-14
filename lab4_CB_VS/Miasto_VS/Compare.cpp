#include"Compare.h"
bool Compare::operator( ) (City &c1, City &c2)
{
return c1.city_citizens()  < c2.city_citizens();
}
