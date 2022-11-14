#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED
#include <iostream>
#include<algorithm>


using namespace std;


template <typename T>
class Array
{
private:
    T* tab;
    int maxSize = 15;
    int index;
    int tabSize;
public:
    Array(int n);
    Array();
    ~Array();
    void sortUp();
    T maxElement();
    void add(T value);
    void show();
    T indexElement(int index1);

void swap(T* one, T* two) {
		T temp = *one;
		*one = *two;
		*two = temp;
	}

};


template <typename T>
Array<T>::Array(int n)
{
    tabSize = n;
    if(n<= maxSize){
          tab = new T[n];
          index = 0;
    }
}
template <typename T>
Array<T>::Array()
{
    tabSize = 10;
      T* tab = new T[10];
      index = 0;
}

template <typename T>
Array<T>::~Array()
{
  cout<<endl<<"Tablica usunieta";
   delete tab;
}

template <typename T>
void Array<T>::add(T value)
{
    tab[index] = value;
    index++;
}
template <typename T>
void Array<T>::sortUp()
{
sort(tab,tab+tabSize);
}

template <typename T>
T Array<T>::maxElement()
 {
    T maxE = tab[0];
     for(int i=1;i<=tabSize;i++) {
        if ( tab[i] > tab[i-1]) maxE = tab[i];
     }
 return maxE;
 }

template <typename T>
void Array<T>::show()
{
    cout << endl;
    for(int i=0; i<tabSize; i++)
        cout << tab[i] << "     ";
}

template <typename T>
T Array<T>::indexElement(int index1)
 {
    return tab[index1];
 }



template <>
class Array<string>
{
private:
    string* tab;
    int maxSize = 15;
    int index;
    int tabSize;
public:
    Array(int n)
    {
    tabSize = n;
    if(n<= maxSize){
          tab = new string[n];
          index = 0;
    }
}
    Array()
    {
        this->tabSize = 10;
        tab = new string[10];
         index = 0;
    }

    void sortUp()
    {
        for (int i = 0; i < tabSize - 1; i++) {
			for (int j = 0; j < tabSize - i - 1; j++) {
				if (tab[j].length() > tab[j + 1].length())swap(tab[j], tab[j + 1]);
    }
        }}
    string maxString()
    {
        int temp = tab[0].length();
		string temp2 = tab[0];
		for (int i = 1; i < tabSize; i++) {
			if (tab[i].length() > temp) {
				temp = tab[i].length();
				temp2 = tab[i];
			};
		}
		return temp2;
    }
    void add(string value)
    {
        if (index < tabSize) {
			tab[index] = value;
			index++;
		}
    }
void showString()
{
    for (int i = 0; i < tabSize; i++) {
			cout << "Element: " << tab[i] << endl;
}
}
string indexElement(int index1)
{
     return tab[index1];
}

};



#endif // ARRAY_H_INCLUDED
