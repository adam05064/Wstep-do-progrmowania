#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main()


{
	setlocale(LC_CTYPE, "polish");
	string nazwaul, nrdomu, adres;
	float um=0, ww=0;

	cout << "Podaj nazwę ulicy na której mieszkasz: ";
	getline(cin, nazwaul);
	cout << "Podaj nr domu: ";
	getline(cin, nrdomu);
	cout << "Na ile oceniasz swoje umiejętności programowania w skali [2 - 5]:  ";
	cin >> um;
	cout << "Twój staż programistyczny: ";
	cin >> ww;
	cout << "Adres:  " << nazwaul << " " << nrdomu << endl;
	cout << "Ocena: " << um - 1 << endl;
	cout << "Staż: " << ww << " DNI" << endl;
	return 0;
}