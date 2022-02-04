#include <iostream>
#include <time.h>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "polish");
    int tab[10], i;
    srand(time(NULL));

    for (i = 0; i < 10; i++) {
        tab[i] = rand() % 101;
    }
    cout << "PIerwszy element: " << tab + 0 << endl;
    cout << "Czwarty element " << tab + 3 << endl;
    cout << "Adres: " << endl;

    for (i = 0; i < 10; i++) 
      {
         cout << tab + i << endl;
     }
    return 0;
}