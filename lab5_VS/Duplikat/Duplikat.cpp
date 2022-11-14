#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;
void show(set <int> s);
pair < int, int > duplikat(vector<int> v);
int main()
{
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(4);
    vec.push_back(5);

    pair < int, int > dane2;
    dane2 = duplikat(vec);

    cout << "Powtarzajaca sie liczba: " << dane2.first << endl;
    cout << "Suma unikatowych elementow: " << dane2.second << endl;

    return 0;
}
pair < int, int > duplikat(vector<int> v)
{
    //Funkcja powinna zwrócić obiekt klasy pair.
    //W zadaniu należy wykorzystać kontener set.
    int n = v.size();
    int l = 0;
    int sum = 0;
    set <int> s;
    pair < int, int > dane;
    for (int i = 0; i < n; i++)
    {
        l = v.at(i);
        if (s.find(l) != s.end()) dane.first = l;
        else {
            s.insert(l);
            sum += l;
          //  show(s);
        }
    }
    dane.second = sum;

    return dane;
}

void show(set <int> s)
{
set<int>::iterator itr;
for (itr = s.begin(); itr != s.end(); itr++)
{
cout << *itr << " ";
 }
cout << endl;
}
