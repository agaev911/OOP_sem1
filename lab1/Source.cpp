#include "lib.h"

#include <iostream>
using namespace std;

#include <locale.h>
#define rus setlocale(LC_ALL, "rus");


int main()
{
	rus;
	trapezoid a;
	a.input();
	return 0;
}