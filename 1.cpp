#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Polish");
	int i = 0, pktstd = 0;
	float srednia, pkt, s;

	cout << "Podaj liczbe studentów:  ";
	cin >> s;
	while (s < 0) 
		{
			cout << "Liczba studentów nie może być mniejsza niż zero" << endl;
			cout << "Podaj liczbe studentów: " << endl;
			cin >> s;
		}
	while (i < s) 
		{
			cout << "Podaj pkt:  ";
			cin >> pkt;
			pktstd += pkt;
			i++;
		}
	srednia = pktstd / s;
	cout << "Średnia wynosi: " << srednia;

	return 0;
}