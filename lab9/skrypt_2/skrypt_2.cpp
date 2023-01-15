#include <iostream>
#include <math.h>
#include <assert.h>

using namespace std;

//obsluga bledow
bool valid1(int val)
{
	if (val >= 0)
		return true;
	else
		return false;
}
 
int valid2(int val)
{
	if (val < 0)
	{
		return abs(val);
	}
}


int main()
{
	int num = -7;
	if (valid1(num))
		cout << sqrt(num) << endl;
	else
		cout << "Wartosc ujemna" << endl;

	num = valid2(num);
	cout << sqrt(num) << endl;

	cout << "Podaj liczbe: " << endl;
	if ((cin >> num) && num >= 0)
		cout << sqrt(num) << endl;
	else
		 cout << "Wartosc ujemna" << endl;

	cout << "Podaj liczbe: " << endl;
	if ((cin >> num) && num >= 0)
		cout << sqrt(num) << endl;
	else
		cout << "Wartosc ujemna" << endl;

	num = -7;
	assert(num >= 0);
	cout << sqrt(num) << endl;

	return 0;
}