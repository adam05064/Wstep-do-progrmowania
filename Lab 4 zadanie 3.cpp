#include <iostream>
#include <locale.h>
using namespace std;

long long silnia(int n)
{
	long long i = 1;

	for (; n > 1; n -= 2)
		i *= n;

	return i;
}

int main()
{
	setlocale(LC_CTYPE, "polish");
	int n;

	cout << "Podaj liczbę: ";
	cin >> n;
	cout << "Podwójną silnią dla liczby " << n << " jest ";
	cout<< silnia(n);	

	return 0;
}