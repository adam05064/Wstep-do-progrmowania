#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;

float polekola(float r)
{
	setlocale(LC_CTYPE, "polish");
	
	if (r > 0)
	{
		
		return r * r;
		return 3.14 * (r * r);

	}
	else
		cout << "Promieñ nie mo¿e byæ mnijeszy od zera!";
}
float pro(float a, float b)
{
	setlocale(LC_CTYPE, "polish");

	if(a && b > 0)
	{


		return a * b;


	}
}
float troj(float a, float b, float h)
{
	setlocale(LC_CTYPE, "polish");
	if (a && b && h > 0)
	{


		return (a + b)*h*(1/2);


	}


}
float szescian(float a)
{
	setlocale(LC_CTYPE, "polish");
	if (a > 0)
	{

		return a * a * a;


	}

}
float walec(float r, float h)

{
	setlocale(LC_CTYPE, "polish");
	if (r && h > 0)
	{

		return (r * r*3.14) * h;


	}




}