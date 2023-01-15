#include "BufferArr.h"
#include <iostream>
using namespace std;

BufferArr::BufferArr(int size1) : size(size1), ostaniePole(0), tab(make_unique<int[]>(size))
{
	cout << "konstruktor BufferArr" << endl;
	this->ostaniePole = 0;
	

}
int BufferArr::getSize()
{
	return size;
}
int BufferArr::getOstaniePole()
{
	return ostaniePole;
}

void BufferArr::add(int element)
{
	if (ostaniePole < size)
	{
		tab[ostaniePole] = element;
		ostaniePole++;
	}
	else cout << "Tablica pelna" << endl;
}
void BufferArr::write()
{
	cout << "BufferArr:" << endl;
	for (int i = 0; i < getOstaniePole(); i++)
		cout << tab[i] << " ";
	cout << endl;
}
BufferArr:: ~BufferArr()
{
	cout << "Destruktor BufferArr" << endl;
}