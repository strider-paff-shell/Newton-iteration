#include <iostream>
#include "newton.h"

double f(double x)
{
	return -1* pow(x, 2) + x + 2;
}

int main()
{
	function pFunc = f;
	double xn = 0.5;double xn_1 = 0;
	for(int i = 0; i < 10; i++)
	{
		std::cout << "Newton-iteration " << i << "..." << std::endl;
		xn_1 = newton(xn, f);
		std::cout << "XN+1 = " << xn_1 << std::endl;
		xn = xn_1;
	}
	
	return 0;
}
