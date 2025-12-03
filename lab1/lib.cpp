#include "lib.h"
#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;

#include <locale.h>
#define rus setlocale(LC_ALL, "rus");


float point::getX()
{
	return x;
}
float point::getY()
{
	return y;
}

void point::input()
{
	cout << "координата x: "; cin >> x;
	cout << "координата y: "; cin >> y;
}

void point::output()
{
	cout << "координата x: " << x << endl;
	cout << "координата y: " << y << endl;
}


trapezoid::trapezoid() : x1(0, 0), a(0), b(0), h(0)
{
	x2.setX(x1.getX() + a);
	x2.setY(x1.getY());

	y1.setX(x1.getX() - ((b - a) / 2));
	y1.setY(x1.getY() - h);

	y2.setX(x1.getX() + ((a + b) / 2));
	y2.setY(x1.getY() - h);
}

trapezoid::trapezoid(float x_, float y_, float a_, float b_, float h_) : a(a_), b(b_), h(h_)
{
	x1.setX(x_); x1.setY(y_); 
	x2.setX(x1.getX() + a);
	x2.setY(x1.getY());

	y1.setX(x1.getX() - ((b - a) / 2));
	y1.setY(x1.getY() - h);

	y2.setX(x1.getX() + ((a + b) / 2));
	y2.setY(x1.getY() - h);
}

void trapezoid::input()
{
	cout << "введите координаты верхнй левой вершины: \n";
	x1.input();
	cout << "введите длину основания a: \n";
	cout << "a: "; cin >> a;
	cout << "введите длину основания b: \n";
	cout << "b: "; cin >> b;
	cout << "введите длину высоты h: \n";
	cout << "h: "; cin >> h;
}

void trapezoid::output()
{
	cout << "координаты верхнй левой вершины: \n";
	x1.output(); puts("");
	cout << "длина основания a: " << a << endl;
	cout << "длина основания b: " << b << endl;
	cout << "длина высоты h: " << h << endl;
}

void trapezoid::points()
{
	cout << "левая верхняя граница: \n"; x1.output();
	cout << "правая верхняя граница: \n"; x2.output();
	cout << "левая нижняя граница: \n"; y1.output();
	cout << "правая нижняя граница: \n"; y2.output();
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
	cout << "Координаты точки пересечения координат: " << endl;
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