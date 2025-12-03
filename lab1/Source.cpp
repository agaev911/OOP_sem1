#include "lib.h"

#include <iostream>
using namespace std;

#include <locale.h>
#define rus setlocale(LC_ALL, "rus");


int main()
{
	rus;
	trapezoid a(0,0,6,4,3), b(10,15,6,4,3);
	a == b;
	


	return 0;
}