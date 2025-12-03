#include "lib.h"

#include <iostream>
using namespace std;

#include <locale.h>
#define rus setlocale(LC_ALL, "rus");


int main()
{
	rus;
	trapezoid a(1,3,3,5,3);
	a.points();
	a.pointO();
	return 0;
}