#include <iostream>
#include <locale.h>

using namespace std;
void binarna(int bin)
{
	int i = 0, tab[31];
	while (bin)

	{

		tab[i++] = bin % 2;
		bin /= 2;
	}
	for (int j = i - 1; j >= 0; j--)

		cout << tab[j];
	




}

int main()
{
	setlocale(LC_CTYPE, "polish");

	int bin;
	cout << "Podaj liczbę: ";
	cin >> bin;
	cout << bin << " - to jest liczba  przed zmianą." << endl;
	binarna(bin);
	cout<< " - to jest liczba po zmiani." << endl;

	return 0;
}