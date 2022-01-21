#include <cstdlib>
#include <iostream>
#include <locale.h>
using namespace std;

void zmiana_na_binarna(int liczba)
{
    if (liczba > 0)
    {
        zmiana_na_binarna(liczba / 2);
        cout << liczba % 2;
    }
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    int liczba;

    cout << "Podaj liczbę: ";
    cin >> liczba;
    cout << "Postać binarna liczby " << liczba << " to: ";

    zmiana_na_binarna(liczba);

    return 0;
}