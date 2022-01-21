#include<iostream>
#include <locale.h>
using namespace std;

int NWD(int a, int b)
{
    if (b != 0)
        return NWD(b, a % b);
    else
        return a;
}


int main()
{
    setlocale(LC_CTYPE, "polish");
    int a, b;

    cout << "Podaj  liczbę a: " << endl;
    cin >> a;
    cout << "Podaj  liczbę b: " << endl;
    cin >> b;

    cout << "NWD(" << a << "," << b << ") = " << NWD(a, b) << endl;

    return 0;
}