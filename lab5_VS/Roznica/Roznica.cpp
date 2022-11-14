#include <iostream>
#include <map>

using namespace std;
char sign(string a, string b);


void showMap(map<char, int> m)
{
	cout << endl << "Map: " << endl;
	map<char, int>::iterator it;
	for (it = m.begin(); it != m.end(); ++it)
	{
		cout << it->first << " " << it->second << endl;
	}
	cout << endl;
}


int main()
{
	string s1 = "abcde";
	string s = "bdafce";
	
	cout << "Pierwszy lancuch: " << s1 << endl;
	cout << "Drugi lancuch: " << s << endl;
	if(s1.length() < s.length()) cout << "Dodany znak: "  << sign(s1,s);
	else cout << "Dodany znak: " << sign(s, s1);
	

	string s3 = "lublin";
	string s4 = "lnuilby";
	cout << endl << endl;
	cout << "Pierwszy lancuch: " << s3 << endl;
	cout << "Drugi lancuch: " << s4 << endl;
	if (s3.length() < s4.length()) cout << "Dodany znak: " << sign(s3, s4);
	else cout << "Dodany znak: " << sign(s4, s3) ;
	cout << endl;


	return 0;

}

char sign(string a, string b)
{
	map<char, int> m;
	map<char, int> s2;
	//char c = 'a';
	char z = '?';
	for (int j = 97; j< 123; j++)
	{
		for (int i = 0; i < a.length(); i++)
		{
			if (a[i] == j)
			{
				if (m.find(j) == m.end()) m.insert(pair<char, int>(j, 1));
				else m.find(j)->second += 1;
			}
		}
	}
	//showMap(m); 
	for (int j = 97; j < 123; j++)
	{
		for (int i = 0; i < b.length(); i++)
		{
			if (b[i] == j)
			{
				if (s2.find(j) == s2.end()) s2.insert(pair<char, int>(j, 1));
				else s2.find(j)->second += 1;
			}
		}
	}

	//showMap(s2);
	
	char s;
	int il = 0;
	map<char, int>::iterator it;
	for (it = m.begin(); it != m.end(); ++it)
	{
		s = it->first; il = it->second;
		map<char, int>::iterator it2;
		for (it2 = s2.begin(); it2 != s2.end(); ++it2)
		{
			if (s != it2->first || il != it2->second) z = it2->first;
		}
	}
	if (z == '?') z = s2.end()->first;
	return z;
}