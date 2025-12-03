#include "lib.h"

#include <iostream>
using namespace std;

#include <locale.h>
#define rus setlocale(LC_ALL, "rus");


int main()
{
	rus;
	trapezoid a(0,0,4,6,3);
	a.points();
	return 0;
}