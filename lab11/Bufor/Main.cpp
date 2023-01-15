// Bufor.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <vector>
#include "BufferArr.h"
#include "BufferFile.h"
#include "Buffer.h"
#include <memory>
int main()
{
    vector <unique_ptr<Buffer>> buff;

    buff.push_back(make_unique<BufferArr>(3));
    buff.push_back(make_unique<BufferFile>("file.txt"));

   
    
    buff[0]->add(1);
    buff[0]->add(5);
    buff[0]->add(3);
    buff[1]->add(10);
    buff[1]->add(8);
    buff[1]->add(6);
    buff[1]->write();
    buff[0]->write();

}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
