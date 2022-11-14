#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Compare
{
public:
    bool operator( ) (vector<int> & c1, vector<int> & c2)
    {
        return c1.size() < c2.size();
    }

}; 
void print(int& el)
{
    cout<<el<<"  ";
}

bool count1(int el ,int el2)
{
    int wynik1=0;
    int wynik2 = 0;
    do
    {
        wynik1=wynik1+el%10;
        el=el/10;
    }
    while(el2!=0);
    do
    {
        wynik2 = wynik2 + el2 % 10;
        el2 = el2 / 10;
    } while (el2 != 0);

el = wynik1;
el2 = wynik2;


return el < el2;
    
}
/*
bool sortuj(vector<int>& el1, vector<int>& el2)
{
    int a = el1;
    int b = el2;
    return count1(, );
}
/*
void sort1
{
    for(typename T::iterator it=con.begin( );it!=con.end( ); it++)
    {

    }
}
*/

int main()
{
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(22);
    vec.push_back(333);
    vec.push_back(311);
    vec.push_back(21);
    vec.push_back(5);
    vec.push_back(4444);

   for_each(vec.begin(),vec.end(),print);

   vector<int> vec2 = vec;



   sort(vec2.begin(),vec2.end(), count1);
   cout<<endl<<"Suma cyfr w liczbach"<<endl;
   for_each(vec2.begin(),vec2.end(),print);
   //for_each(vec.begin(), vec.end(), print);
    return 0;
}
