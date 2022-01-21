#include <cstdlib>
#include <iostream>
#include <locale.h>
using namespace std;

long long silnia(int n)
{
    if (n < 2)
    {
        return 1;
    }
    else
    {
        return n * silnia(n - 1); 
    }
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    int n;

    cout << "Podaj liczbę: ";
    cin >> n;
    cout << "Silnia z " << n <<" wynosi: " << silnia(n) << endl;
  
    return 0;
}