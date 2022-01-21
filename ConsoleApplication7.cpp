#include<iostream>
#include<locale.h>

using namespace std;

long long int Fibo(int n)
{
    if (n == 1)
    {
        return 1;
    }
    if (n == 2)
    {
        return 1;
    }
    else
    return (Fibo(n - 1) + Fibo(n - 2));
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    int n;
    cout << "Podaj numer ciągu: ";
    cin >> n;
    cout << Fibo(n);
    return 0;
}