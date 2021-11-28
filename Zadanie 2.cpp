#include <iostream>
#include <locale.h>
using namespace std;

int main()

{
	setlocale(LC_CTYPE, "Polish");
	int i = 0, pktstudentow = 0;
	float srednia, pkt, s;

	cout << "Wprowadz liste studentow: " << endl;
	cin >> s;
	while (s >=100 || s <0)
		{
			cout << "Liczba studentów nie może być mniejsza od zera lub wieksza niż sto!" << endl;
			cout << "Wprowadz liste studentow: ";
			cin >> s;
		}
	while (i < s)
		{
			i++;
			cout << "Ilość pkt: " << endl;
			cin >> pkt;
			pktstudentow += pkt;

		}
	srednia = pktstudentow / s;
	cout << "Średnia wynosi: " << endl << srednia;
		return srednia;
}