#include <iostream>
#include <time.h>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Polish");
	int s, numer, suma = 0,i;
	srand(time(NULL));

	while (true) {
		cout << "Podaj liczbe: " << endl;
			cin >> s;

		if (s > 0)
		{
			for (i = 0;	 i < s; i++)
			{
				numer = rand() % 56 - 10;
				if (numer % 2 == 0)
					cout << suma << endl;
				{
					suma += numer;
					i++;
				}
			}
			cout << "Suma liczb parzystaych: "  << suma;
			break;
		}
		else {
			cout << "Podana liczba jest mniejsza od 0! " << endl;
			continue;
		}
	}

	return 0;
}