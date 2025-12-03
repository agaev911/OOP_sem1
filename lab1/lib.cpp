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
	cout << "координата x: " << x << endl;
	cout << "координата y: " << y << endl;

	cout << "длина основания a: " << a << endl;

	cout << "длина основания b: " << b << endl;

	cout << "длина высоты h: " << h << endl;
}

float trapezoid::get_x() const { return x; }
float trapezoid::get_y() const { return y; }
float trapezoid::get_a() const { return a; }
float trapezoid::get_b() const { return b; }
float trapezoid::get_h() const { return h; }

void trapezoid::set_x(float x_) { x = x_; }
void trapezoid::set_y(float y_) { y = y_; }
void trapezoid::set_a(float a_) { a = a_; }
void trapezoid::set_b(float b_) { b = b_; }
void trapezoid::set_h(float h_) { h = h_; }

void trapezoid::points()
{
	cout << "левая верхняя граница: \n"; 
	cout << "координата x: " << x << endl;
	cout << "координата y: " << y << endl;

	cout << "правая верхняя граница: \n";
	cout << "координата x: " << x + a << endl;
	cout << "координата y: " << y << endl;

	cout << "левая нижняя граница: \n";
	cout << "координата x: " << x - ((b-a)/2) << endl;
	cout << "координата y: " << y - h << endl;

	cout << "правая нижняя граница: \n";;
	cout << "координата x: " << x + (a+b)/2 << endl;
	cout << "координата y: " << y - h << endl;
}

float trapezoid::middleline()
{
	float s;
	s = ((a + b) / 2);
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
	float x, y;
	float k;
	k = b / a;
	x = ((this->x - ((b - a) / 2)) + k * (this->x + a) / (1 + k));
	y = (((this->y - h) + k * this->y) / (1 + k));
	cout << "Координаты точки пересечения координат: " << endl;
	cout << "координата x: " << x << endl;
	cout << "координата y: " << y << endl;
}

float trapezoid::area()
{
	float s;
	s = ((a + b) / 2) * h;
	return s;
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