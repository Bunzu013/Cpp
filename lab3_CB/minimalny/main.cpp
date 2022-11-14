#include <iostream>
#include "Adding.h"
using namespace std;

template <typename T, typename T2>
int showMin(T* tab[], int n, T2 mini)
 {
    mini = tab[0]->val();
     for(int i=1;i<n;i++) {
        if ( tab[i]->val() < tab[i-1]->val()) mini = tab[i]->val();
     }
 return mini;
 }


 template <typename T>
 void showAll(T* tab[], int n)
 {
     for(int i=0;i<n;i++)
     tab[i]->show();
 }

int main()
{
    Adding<int>* arrAdd[4];
    int mini =0;
    for(int i=0;i<3;i++)
    {
        arrAdd[i]=new Adding<int>(i+3);
    }
    arrAdd[3]=new Adding<int>(-5);
    showAll(arrAdd,4);
    cout <<endl<< "Element minimalny wynosi: "<<showMin(arrAdd,4,mini)<<endl;

    for(int i=0; i<4; i++)
        delete arrAdd[i];
}
