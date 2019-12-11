#include "newton.h"
double newton(double xn, double (*f)(double x))
{
	return xn - f(xn)/formular_h(f, xn);
}

double formular_h(double (*f)(double x), double x)
{
	return (f(x + H) - f(x))/H;
}