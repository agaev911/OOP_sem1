#include <iostream>

#include "lib.h"

int main()
{
    ComplexNumber z1, z2, z3;

    z1.input();
    z2.input();

    z3 = z1.add(z2);

    z3.output();

    std::cout << z1.argument() << "\n";
    std::cout << z2.argument() << "\n";
    std::cout << z3.argument() << "\n";
    std::cout << z1.conjugate().argument() << "\n";
    std::cout << z2.conjugate().argument() << "\n";
    std::cout << z3.conjugate().argument() << "\n";

    return 0;
}