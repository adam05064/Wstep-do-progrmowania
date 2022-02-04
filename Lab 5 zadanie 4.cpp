#include <iostream>
#include <locale.h>

using namespace std;

int kwadrat(int x) 
{
    return x * x;
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    int a, * p = &a;
    cout << "Podaj liczbe którą chcesz podnieść: " << endl;
    cin >> a;
    cout << "Kwadrat wynosi: " << endl;
    cout << kwadrat(*p);
    return 0;
}