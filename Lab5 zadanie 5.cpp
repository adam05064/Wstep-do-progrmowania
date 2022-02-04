#include <iostream>
#include <cmath>
#include<locale.h>
using namespace std;

int podniesienie(int x, int y) 
{
    int wynik, * pw = &wynik;
    *pw = pow(x, y);
    return *pw;
}

int main()

{
    setlocale(LC_CTYPE, "polish");

    int liczba, potega, * pl = &liczba, * pp = &potega;

    cout << "Podaj liczbe: ";
    cin >> liczba;
    cout << "Podaj potęge: ";
    cin >> potega;
    cout << *pl << " do potęgi " << *pp << endl;
    cout << "wynosi: " << podniesienie(*pl, *pp);
   
    return 0;
}