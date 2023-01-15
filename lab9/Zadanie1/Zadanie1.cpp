#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream file;
	file.open("C:/Users/JB/Desktop/s5/c++/lab9/kod.txt");

	char z;
	while (!file.eof()) {
		file.get(z);
		if (z == '/' && file.peek() == '/') 
		{ 
			file.ignore(256, '\n'); 
			file.get(z); 
			cout << endl;  
		}
		cout << z;
	}
}

