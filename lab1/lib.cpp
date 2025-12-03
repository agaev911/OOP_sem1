#include "lib.h"
#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;

#include <locale.h>
#define rus setlocale(LC_ALL, "rus");

trapezoid::trapezoid() : x(0),y(0), a(0), b(0), h(0) {}

trapezoid::trapezoid(float x_, float y_, float a_, float b_, float h_) : x(x_), y(y_), a(a_), b(b_), h(h_) {}

void trapezoid::input()
{
	cout << "введите координаты верхнй левой вершины: \n";
	cout << "координата x: "; cin >> x;
	cout << "координата y: "; cin >> y;

	cout << "введите длину основани€ a: \n";
	cout << "a: "; cin >> a;

	cout << "введите длину основани€ b: \n";
	cout << "b: "; cin >> b;

	cout << "введите длину высоты h: \n";
	cout << "h: "; cin >> h;
}

void trapezoid::output()
{
	cout << "координаты верхнй левой вершины: \n";
	x1.output(); puts("");
	cout << "длина основани€ a: " << a << endl;
	cout << "длина основани€ b: " << b << endl;
	cout << "длина высоты h: " << h << endl;
}

void trapezoid::points()
{
	cout << "лева€ верхн€€ граница: \n"; x1.output();
	cout << "права€ верхн€€ граница: \n"; x2.output();
	cout << "лева€ нижн€€ граница: \n"; y1.output();
	cout << "права€ нижн€€ граница: \n"; y2.output();
}

float trapezoid::get_a()
{
	return a;
}

float trapezoid::get_b()
{
	return b;
}
float trapezoid::get_h()
{
	return h;
}


float trapezoid::middleline()
{
	float s;
	s = ((a + b) / 2);
	return s;
}

float trapezoid::area()
{
	float s;
	s = ((a + b) / 2) * h;
	return s;
}

float trapezoid::angle()
{
	float const p = 3.14159;
	float s;
	s = 180 - ( (atan( (2 * h) / (a - b) )) * 180 ) / p ;
	return s;
}

void trapezoid::pointO()
{
	point O;
	float k;
	k = b / a;
	O.setX((y1.getX() + k * x2.getX()) / (1 + k));
	O.setY((y1.getY() + k * x2.getY()) / (1 + k));
	cout << " оординаты точки пересечени€ координат: " << endl;
	O.output();
}

void trapezoid::operator*(int k)
{
	a *= k;
	b *= k;
}

float trapezoid::radius()
{
	float r, c;
	c = pow((pow(b, 2) - pow(a, 2) - (4 * pow(h, 2)) ) / (4 * h), 2);
	r = 0.5 * sqrt(pow(b, 2) + c);
	return r;
}