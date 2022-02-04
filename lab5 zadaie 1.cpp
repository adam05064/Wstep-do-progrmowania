#include <iostream>
#include <local.h>
using namespace std;

int main()
{
    setlocale(LC_TYPE, "polish");

    int* p, * p1, * p2;
    int a = 5, b, c = 6;

    p2 = &c;
    p1 = &b;
    p = &a;
    cout << "Adres: " << p << endl;
    cin >> b;
    cout << "Adres: " << p1 << " Wartość: " << *p1 << endl;
    cout << "Różnica: " << (*p - *p1) << endl;
    cout << "Średnia: " << (double)(*p + *p1 + *p2) / 3.0;
    return 0;
}   