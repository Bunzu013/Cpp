#include <iostream>
#include <list>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    srand (time(NULL));
    list<int> lista;
    int n = rand() % 100;
    cout << "ilosc liczb: " <<n<<endl<<endl;

    for(int i=0; i<n;i++)
    {
        int a;
        a = rand() % 200 -100;
        if(a>=0) lista.push_front(a);
        else lista.push_back(a);
    }
   for(list<int>::iterator it = lista.begin(); it != lista.end(); it++)
	{
		cout << *it << " ";
	}


    return 0;
}
