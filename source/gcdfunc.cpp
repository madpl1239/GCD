/*
 * gcdfunc.cpp
 *
 * Implementation of functions calculating the 
 * greatest common dividor.
 * 
 * 14-11-2018
 */
#include "gcdfunc.hpp"


int gcdEuclide(int a, int b)
{
	while(a != b)
	{
		if(a > b)
			a -= b;
		else
			b -= a;
	}
	
	return a;
}


int gcdRec(int a, int b)
{
	if((a % b) == 0)
		return b;
	else
		return gcdRec(a, a % b);
}
