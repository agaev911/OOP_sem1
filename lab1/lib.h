#pragma once


class trapezoid
{
	float x, y, a, b, h;

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
	
	//void pointO(); //координата точки пересечения диагоналей
	
	float radius();
	
	void operator*(int k);
};
