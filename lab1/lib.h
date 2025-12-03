#pragma once

struct point
{
	float x, y;
	point() : x(0), y(0) {};
	point(float x_, float y_) : x(x_), y(y_) {};

	void setX(float x_) { x = x_; }
	void setY(float y_) { y = y_; }
	
	float getX();
	float getY();

	void input();
	void output();
};


class trapezoid
{
	point x1, x2, y1, y2;
	float a, b, h;

public:

	trapezoid();
	trapezoid(float, float, float, float, float);

	float get_a();
	float get_b();
	float get_h();

	void input();
	void output();

	void points();

	float middleline();

	float area(); //нахождение площади
	
	float angle(); //нахождение тупого угла
	
	void pointO(); //координата точки пересечения диагоналей
	
	float radius();
	
	void operator*(int k);
};
