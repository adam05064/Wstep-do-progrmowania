#include <iostream>
#include <locale.h>

using namespace std;

void floop(int x, char a)
{
    for (int i = 0; i < x; i++) 
    {
        cout << a << endl;
    }
    x = x - 1;
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    char c, * pchar = &c;
    int ile, * pile = &ile;
    cout << "Podaj znak: ";
    cin >> c;
    cout << "Wprowadź ile razy chcesz podać znak: ";
    cin >> ile;
    floop(*pile, *pchar);
    return 0;
}