#include <iostream>
#include <string>
#include<locale.h>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "polish");
	string init = "Mój teskt!", pobrane, skopiowane, dodane;
	int s;
	cout << "Podaj swój teskt" << endl;
	getline(cin, pobrane);
	skopiowane += pobrane;
	dodane = init + dodane.append(pobrane);
	s = dodane.length();
	cout << "Wyniki: " << endl;
	cout << "A: " << init << endl;
	cout << "B: " << pobrane << endl;
	cout << "C: " << skopiowane << endl;
	cout << "D: " << dodane << endl;
	cout << "Długość tesktu: " << s;

	return 0;
}