#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <iterator>
using namespace std;

template <typename T1>
void dif(T1 s1, T1 s2)
{
T1 TDiffer;
T1 TDiffer2;
	if (!s1.empty())
	{
		if (!s2.empty())
		{
			set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), insert_iterator<T1>(TDiffer, TDiffer.begin()));
			set_difference(s2.begin(), s2.end(), s1.begin(), s1.end(), insert_iterator<T1>(TDiffer2, TDiffer2.begin()));
		}
	}

	cout << "Elementy znajdujace sie tylko w pierwszym zbiorze " << endl;
	for (int i = 0; i < TDiffer.size(); i++)
	{
		cout << *TDiffer.begin()+i << " ";
	}
	cout << endl;
	cout << endl;
	cout << "Elementy znajdujace sie tylko w drugim zbiorze " << endl;
	for (int i = 0; i < TDiffer2.size(); i++)
	{
		cout << *TDiffer2.begin() + i << " ";
	}
	cout << endl;

}

int main()
{
	set <int> s;
	s.insert(1);
	s.insert(2);
	s.insert(3);
	s.insert(7);
	s.insert(8);

	set <int> b;
	b.insert(1);
	b.insert(2);
	b.insert(3);
	b.insert(5);
	b.insert(4);


	dif(s, b);

	return 0;

}