#include "lib.h"

#include <iostream>
using namespace std;

#include <locale.h>
#define rus setlocale(LC_ALL, "rus");

int main()
{
	rus;
	trapezoid a(0,0,6,4,3), b;
	float x, y, Ox, Oy;
	
	cout << "Трапеция A:" << endl; a.output();
	puts("");

	cout << "Средняя линия трапеции D="<< a.middleline() << endl;

	cout << "Тупой угол трапеции @=" << a.angle() << endl;

	a.pointO(Ox, Oy);
	cout << "Точка пересечения диагоналей x: " << Ox << " y: " << Oy << endl;

	cout << "Нахождение площади трапеции S=" << a.area() << endl;

	cout << "Радиус описанной окружности R=" << a.radius() << endl;
	puts("");

	cout << endl << "Введите трапецию B:" << endl;
	b.input();

	cout << endl << "Трапеция B:" << endl;
	b.output();

	puts("");
	a == b;
	puts("");

	b * 2;
	b.output();
	a == b;
	
	a.output();
	puts("");
	
	a.point(3, x, y);
	
	cout << x << " " << y;
	
	return 0;
}