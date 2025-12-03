#include "lib.h"

#include <iostream>
using namespace std;

#include <locale.h>
#define rus setlocale(LC_ALL, "rus");


int main()
{
	rus;
	trapezoid a(0,0,6,4,3);
	a.output();
	puts("");
	a.points();
	puts("");
	cout << "Средняя линия " << a.middleline();
	puts("");
	cout << "Тупой угол " << a.angle();
	puts("");
	a.pointO();
	puts("");
	cout << "Площадь " << a.area();
	puts("");
	cout << "Радиус описанной окружности " << a.radius();
	puts("");
	a.operator*(2);
	a.output();


	return 0;
}