// Oczko.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

using namespace std;

int sum(int suma1)
{
    if (suma1 > 21)
        throw - 1;
}

 bool valid( int val )
{
    if ( val>=0)
    return true ;
    else
    return false ;
 }

int main()
{
    int a;
    int suma = 0;
    int ilosc = 0;
    while (suma < 21)
    {
        cout << "Podaj liczbe: " ;
         if ((cin >> a) && a > 0)
             suma += a;
         else {
             while (a < 0)
             {
                 cout << "niepoprawne dane, podaj jeszcze raz: ";
                 cin >> a;
             }
             suma += a;
         }
        try
        {
            sum(suma);
        }
        catch (int w1)
        {
            cout << "Przekroczono 21" << endl;
            suma -= a;
            //cout << "Popraw" << endl;
            ilosc++;
        }
        catch (...)
        {
            throw invalid_argument("Niepoprawne dane");
            cout << "Nieznany blad" << endl;
        }
    }
    if (suma == 21) cout << "OCZKO" << endl << "Ilosc poprawek: " << ilosc << endl;

}
