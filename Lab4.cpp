

#include <iostream>
#include "Pola.h"
#include<locale.h>

using namespace std;



int main()
{
	setlocale(LC_CTYPE, "polish");
	cout << polekola(3) << endl;
	cout << pro(4, 3) << endl;
	cout << troj(8, 3, 6) << endl;
	cout << szescian(4) << endl;
	cout << walec(4,7) << endl;
}

