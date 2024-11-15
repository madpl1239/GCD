/*
 * main.cpp 
 *
 * gcd - greatest common dividor.
 *
 * 14-11-2018 by madpl
 */
#include <iostream>
#include "gcdfunc.hpp"


int main(void)
{
	int a, b, c, d = 0;
    
    // logo
    std::cout << "GCD v1.00 by madpl 2018\n\n";

    std::cout << "enter a: ";
    std::cin >> a;
    std::cout << "enter b: ";
    std::cin >> b;

    c = gcdEuclide(a, b);
    d = gcdRec(a, b);
    std::cout << "gcdEuclide(" << a << ", " << b << ") = " << c << std::endl;
    std::cout << "gcdRec(" << a << ", " << b << ") = " << c << std::endl;

    std::cout << "done. \n";

	return 0;
}
