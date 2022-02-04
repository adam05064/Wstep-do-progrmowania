#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_CTYPE,"polish");
    float tab[10], suma = 0, srednia = 0, * p = &suma, * ps = &srednia;
    int i;
    srand(time(NULL));

    for (i = 0; i < 10; i++)
    {
        tab[i] = rand() % 101;
    }
    for (i = 0; i < 10; i++)
    {
        *p = +*(tab + i);
    }
    *ps = *p / 10;

    cout << "Średnia: " << *ps  << endl;
    cout << "Elementy większe od średniej: " << endl;

    for (i = 0; i < 10; i++) 

    {
        if (*(tab + i) > *ps) 
        {
            cout << *(tab + i) << " ";
        }
    }
    return 0;
}