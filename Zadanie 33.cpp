#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Polish");
	int i = 0, pktstd = 0;
	float srednia, s, pkt;

	while (true)	
	{
		cout << "Podaj liczbe studentów: " << endl;
		cin >> s;
		if (s <= 100 || s > 0)	
			{
			for (i = 0; i < s; i++)	
				{
				cout << "Podaj liczbe pkt: "  << endl;
				cin >> pkt;
				if (pkt >= 100 || s < 0)
					{
						cout << "Liczba studentów jest nie prawidłowa!" << endl;
						return 0;
					}
				pktstd += pkt;
				}
			srednia = pktstd / s;
			cout << "Średnia wynosi: " << srednia << endl;
			break;
		}
		else	
		{
			cout << "Podaj prawidłową liczbe studentów:	";
			continue;
		}
	}
	return 0;
}