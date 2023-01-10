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

template<typename ... Args>
map<string, int> zadanie4(const boost::fusion::vector<Args...>& v)
{
    map<string, int> m;
    m.insert({ "int", 0 });
    m.insert({ "double", 0 });
    m.insert({ "float", 0 });
    m.insert({ "bool", 0 });
    m.insert({ "char", 0 });

    for_each(v, [&m](auto val) {
        m.find(typeid(val).name())->second++;
        });
    return m;
}


int main()
{

    boost::fusion::vector<int,char, double, float, bool, bool, char> v{ 10,'a', 1.23, 4.56, true, false, 'c'};
    map<string, int> m = zadanie4(v);
    for (auto mm : m)
    {
        cout << mm.first << "=" << mm.second << endl;
    }
}

