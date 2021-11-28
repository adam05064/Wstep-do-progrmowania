#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Polish");
	float tablica[10];
	int sumadodatnich = 0, sumaujemnych = 0, dodatnie = 0, ujemne = 0,i;
	cout << "Podaj 10 losowych liczb: " << endl;	
	for ( i = 0; i < 10; i++) 
	{
		cin >> tablica[i];
	}
	for (int i = 0; i < 10; i++) {
		if (tablica[i] >= 0) {
			dodatnie++;
			sumadodatnich += tablica[i];
		}
		else {
			ujemne++;
			sumaujemnych += tablica[i];
		}
	}
	cout << "Ilość liczb dodatnich: " << dodatnie << endl;
	cout << "Ilość liczb ujemnych:  " << ujemne << endl;
	cout << "Suma liczb dodatnich: "  << sumadodatnich << endl;
	cout << "Suma liczb ujmenych: " << sumaujemnych << endl;

	return 0;
}