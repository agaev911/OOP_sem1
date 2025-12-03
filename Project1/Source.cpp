#include <iostream>
using namespace std;

int main()
{
	int x = 1, y = 2, z = 5;
	for (; x < z; x++, y++)
		cout << x << y << endl;

	return 0;
}