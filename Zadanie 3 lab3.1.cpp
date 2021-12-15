#include <iostream>
#include <time.h>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "polish");
	int tab[10], min = 0;
	srand(time(NULL));

	for (int i = 0; i < 10; i++)
	{
		tab[i] = rand() % 74 - 23;
		if (tab[i] == 0)
		{
			min = tab[i];
		}
		else if (min > tab[i])
		{
			min = tab[i];
		}
		cout << tab[i] << " " << endl;
	}
	cout << "Najmniejsza wartość: " << min << endl;
	return 0;
}