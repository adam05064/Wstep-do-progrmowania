
#include <iostream>

using namespace std;

int main()
{
	//deklarazxje zmiennych 
   //int a, b, c = 33;
   //float d; // zmianno przecinlkowe 4.33
   //double d1, D1, int1;
   //char znak = 'a';
   //string imie = "adam";
   //bool p, f;
   //long as;
   //short asd;
   //long long aaaa;
   //cout << "podaj a";
   //cin >> a;

   //cout << "podaj b"; cin >> b;
   //string n_albumu = "w65999";
   //cout << "Nr albumu: " << n_albumu << endl;

   // + - * / %
   // > < >= <= != ==
   // AND -  && OR - || NOT !

   //if (warunek)
   //{
	   // instraukcja
   //}
   //	else
   //{
	   //blok instrukcji

   //}
   //int u, o;
   //	cout << "Podaj u: ";
   //	cin >> u;

   //if (u % 2 == 0)
   //{
   //	cout << "liczba parzysta"; 
   //	cin >> u;

//	}
	//else
	//{
	//	cout << "liczba nieparzysta:";

	//}

	//float x, y;
	//cout << "Podaj x: ";
	//cin >> x;
	//cout << "Podaj y";
	//cin >> y;
	//if (x > y)
	//{
	//	cout << "X jest wieksze od y";
	//}
	//else
	//{
	//	cout << "Y jest wieksze od X";
	//}

	float a, b, c, d;
	int wybor;
	cout << "Podaj a: ";
	cin >> a;
	cout << "Podaj b: ";
	cin >> b;
	cout << "Podaj c: ";
	cin >> c;
	cout << "Podaj d: ";
	cin >> d;

	cout << "1. suma\n2. roznica\n3. iloczyn\n4. ilorazn5. sredniaArytmetyczna" << endl;

	cout << "Wybierz dzialanie";
	cin >> wybor;
	switch (wybor)
	{

	case 1:
		cout << "Suma: " << a << "+" << b << "=" << a + b << endl;
		break;
	case 2:
		cout << "Roznica: " << a << "-" << b << "=" << a - b << endl;
		break;
	case 3:
		if(b!=0)
		cout << "Iloraz: " << a << "/" << b << "=" << a / b << endl;
		break;
	case 4:
		cout << "Iloczyn: " << a << "*" << b << "=" << a * b << endl;
		break;
	case 5 :
		cout << "Œrednia Art" << a << b << "=" << (a + b + c + d) / 4 << endl;
		break;

	default:
		break;

	}



	
	

	
}

