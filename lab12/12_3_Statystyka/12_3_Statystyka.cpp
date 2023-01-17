#include <iostream>
#include <tuple>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

auto statystyka = [](vector<string>& vec) -> tuple<int, int, string> {
    int najkrotszy = min_element(vec.begin(), vec.end(), [](string_view str1, string_view str2) {
        return str1.length() < str2.length();
        })->length();
    
    int srednia = accumulate(vec.begin(), vec.end(), 0, [](int acc, string& el) {
        return acc + el.length();
        }) / vec.size();

    string najdluzszy = *std::max_element(vec.begin(), vec.end(), [](string_view str1, string_view str2) {
        return str1.length() < str2.length();
        });

    return make_tuple(najkrotszy, srednia, najdluzszy);
};


int main()
{
    vector<string> vec1 = { "najdluzszy", "Ala", "Kasia", "abcdefg" };
    cout << "Zawartosc kontnera " << endl;
    for_each(vec1.begin(), vec1.end(), [](string elem) { cout << elem << " "; });
    cout << endl << endl;
    tuple<int, int, string> res = statystyka(vec1);
    cout << "Dlugosc najkrotszego napisu: " << get<0>(res) << endl;
    cout << "Srednia dlugosc: " << get<1>(res) << endl;
    cout << "Najdluzszy napis: " << get<2>(res) << endl;

}
