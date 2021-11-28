#include <iostream>
#include <locale.h>
using namespace std;


int main()
{
	setlocale(LC_CTYPE, "Polish");
	int s=0, numer, suma = 0;

	while (true)	
	{
		cout << "Program do liczenia sumy liczb parzystach!" << endl;
		cout << "Podaj ilość liczb: " << endl;
		cin >> s;

		if (s > 0)	
		{
			for (int i = 0; i < s; i++) 
			{
				cout << "Podaj liczbe: " << endl;
					cin >> numer;
				if (numer % 2 == 0) {
					suma += numer;
				}
			}
			cout << "Suma liczb parzystach: " << suma;
			break;
		}

		else {
			cout << "Podana liczba jest mniejsza od 0!" << endl;
			continue;
		}
		break;
	}

	return 0;
}