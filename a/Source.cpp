#include <iostream>
#include "lib.h"

using namespace std;

int main()
{
	String x("123"), y("456");
	String s = x;
	
	s.Print();
	x.Print();
	puts("");
	cout << &s;
	puts("");
	cout << &x;

	return 0;
}