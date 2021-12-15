#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "polish");
	
	
	int tab[10], a, b;

	cout << "Podaj dwie liczby!" << endl;
	cout << "Podaj pierwszą liczbe: " << " " << endl;
	cin >> a;
	cout << "Podaj drugą liczbe: " << " " << endl;
	cin >> b;

	tab[0] = a;
	tab[1] = b;

	for (int i = 2; i < 10; i++) 
	{
		tab[i] = tab[i - 2] + tab[i - 1];
		cout << tab[i] << " ";
	}
	return 0;
}