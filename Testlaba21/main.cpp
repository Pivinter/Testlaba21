#include "pch.h"
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
	//ctg = cos(x) / sin(x);
	double Pi = 4 * atan(1.0);
	double x; // вхідний параметр
	double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу
	cout << "x = "; cin >> x;
	//z1 = (sin(4 * x)/(1 + cos(4*x))) * (cos(2*x)/(1 + cos(2*x)));
	//z2 = cos(3.0 / 2 * Pi - x) / sin(3.0 / 2 * Pi - x);
	z1 = (1 - 2 * sin(x) * sin(x)) / (1 + sin(2 * x));
	z2 = (1 - tan(x)) / (1 + tan(x));
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}

