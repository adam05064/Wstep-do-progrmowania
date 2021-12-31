#include <iostream>
#include <locale.h>

using namespace std;

using namespace std;

bool pierwsza(int n)
{
	if (n < 2)
		return false;
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return false;
	return true;



}
int main()
{
	setlocale(LC_CTYPE, "polish");
	int n;
	cout << "Podaj liczbę: ";
	cin >> n;

	if (pierwsza(n))
	{
		cout << "Liczba " << n << " jest liczbą pierwsza" << endl;
	}
	else
		cout << "Liczba " << n << " nie jest liczbą pierwsza" << endl;
	



}