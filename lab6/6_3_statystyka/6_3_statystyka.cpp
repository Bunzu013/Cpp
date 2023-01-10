#include <iostream>
#include <boost/multi_index_container.hpp>
#include <boost/multi_index/hashed_index.hpp>
#include <boost/multi_index/ordered_index.hpp>
#include <boost/multi_index/random_access_index.hpp>
#include <boost/bind.hpp>
#include <boost/multi_index/member.hpp>
#include <boost/fusion/container.hpp>
#include <boost/fusion/sequence.hpp>
#include <boost/mpl/int.hpp>
#include <boost/bind.hpp>
#include <boost/fusion/container.hpp>
#include <boost/fusion/algorithm.hpp>
#include <vector>
#include <numeric>
#include <map>
#include <algorithm>

using namespace std;

template<typename T>
void zadanie3(vector<T> v);

int main()
{
    vector<int> vec = { -8, 6, -25, 5, 1, 10 };
    zadanie3(vec);
}

template<typename T>
void zadanie3(vector<T> v)
{
    auto print = [](T val) {
        cout << val << " ";
    };
    cout << "vector: ";
    for_each(v.begin(), v.end(), print);
    cout << endl;

    double avg = accumulate(v.begin(), v.end(), 0.0) / v.size();
    sort(v.begin(), v.end());
   // double median = (v[v.size() / 2.0] + v[(v.size() / 2.0) - 1]) / 2.0;;
   
    double median;
    int n = v.size() /2;
    std::nth_element(v.begin(), v.begin() + n, v.end());
    T vn = v[n];
    if (v.size() % 2 == 0)
    {
        std::nth_element(v.begin(), v.begin() + n - 1, v.end());
        median = (vn + v[n - 1]) / 2.0;
    }
    else
    {
        median = vn;
    }
    cout << "srednia: " << avg << endl;
    cout << "mediana: " << median << endl;

    auto it = partition(v.begin(), v.end(),
        boost::bind(less<double>(), _1, avg));
    cout << "Elementy mniejsze niz srednia: ";
    for_each(v.begin(), it, print);
    cout << endl;

    it = partition(v.begin(), v.end(),
        boost::bind(logical_and<bool>(),
            boost::bind(greater_equal<double>(), _1, avg),
            boost::bind(less_equal<double>(), _1, median)));
    cout << "Elementy pomiedzy srednia i mediana: ";
    for_each(v.begin(), it, print);
    it = partition(v.begin(), v.end(),
        boost::bind(logical_and<bool>(),
            boost::bind(greater_equal<double>(), _1, median),
            boost::bind(less_equal<double>(), _1, avg)));
    for_each(v.begin(), it, print);
    cout << endl;

    it = partition(v.begin(), v.end(),
        boost::bind(greater<T>(), _1, 0));
    cout << "Elementy dodatnie: ";
    for_each(v.begin(), it, print);
    cout << endl;
}

