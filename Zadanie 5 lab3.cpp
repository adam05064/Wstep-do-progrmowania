#include <iostream>
#include <time.h>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "polish");
    int tab[20], temp = 0;
    srand(time(NULL));

    for (int i = 0; i < 10; i++)
    {
        tab[i] = rand() % 101;
    }
    for (int i = 10; i < 20; i++)
    {
        tab[i] = tab[temp];
        temp++;
    }
    for (int i = 0; i < 20; i++) 
    {
        cout << tab[i] << " ";
    }
    return 0;
}