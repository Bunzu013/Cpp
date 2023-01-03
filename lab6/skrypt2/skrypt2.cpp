#include <boost/multi_index_container.hpp.>
#include <boost/multi_index/hashed_index.hpp>
#include <boost/multi_index/member.hpp>
#include <boost/bind/bind.hpp.>
#include <boost/multi_index/ordered_index.hpp.>
#include <boost/multi_index/random_access_index.hpp.>
#include < boost/fusion/container.hpp.>
#include <boost/fusion/sequence.hpp.>
#include <boost/mpl/int.hpp>

#include <vector>
#include <iostream>

using namespace std;

void firstArgMod(int& x, int y)
{
x = x + y;
}
void printF(int x)
 {
cout << x << " ";
}
 void contatination(int i1, int i2)
 {
cout << i1 << i2 << endl;;
}
 class Operation
 {
 public:
int operator()(int a, int b)
{
return a - b;
}
int operator()(char a)
{
return (int)a - 32;
}
};
 int addition(int a, int b)
 {return a + b;
 }
 int main()
 {
 cout << "vec: " << endl;
 vector<int> vec = { 1,2,3,4,5 };
 vector<int>::iterator iter1 = vec.begin();
 vector<int>::iterator iter2 = vec.end();
 for_each(iter1, iter2, boost::bind(printF, _1));
 cout << endl << "vec - kazdy element zwiekszony o 5: ";
 for_each(iter1, iter2, boost::bind(firstArgMod, _1, 5));
 for_each(iter1, iter2, boost::bind(printF, _1));
 int count = std::count_if(vec.begin(), vec.end(),
 boost::bind(std::logical_and<bool>(),
boost::bind(std::greater<int>(), _1, 8),
boost::bind(std::less_equal<int>(), _1, 10)));
 cout << endl << "vec - 8<Elementy<=10 " << count << endl;

cout << addition(1, 2) << endl;
 int res = boost::bind(addition, _1, _2)(1, 2);
 cout << res << endl;

int i1 = 1, i2 = 2;
 boost::bind(contatination, _2, _1)(i1, i2);
Operation ff;
 int x = 1024;
 cout << "Funktor: " << bind<int>(ff, _1, _1)(x) << endl;
 char y = 'a';
 cout << "Funktor: " << bind<char>(ff, _1)(y) << endl;
 return 0;
 }