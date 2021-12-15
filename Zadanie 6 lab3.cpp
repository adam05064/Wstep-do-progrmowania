#include <iostream>
#include <time.h>
#include <locale.h>

using namespace std;

int main()


{
    setlocale(LC_CTYPE, "polsih");
    int tab[3][3], prze = 0;
    srand(time(NULL));

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++) 
        {
            tab[i][j] = rand() % 15 - 5;
            cout << tab[i][j] << "\t" << " ";
           // cout <<tab[j];
            if (i == j)
            
                prze += tab[i][j];
           
        }
        cout << endl;
    }
    cout << "Suma przekątnej wynosi:  " << prze;
    return 0;
}