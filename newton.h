#include <math.h>
#ifndef NEWTON_H
#define NEWTON_H

#define H 10E-8
typedef double (*function)(double x);
double newton(double xn, double (*f)(double x));
double formular_h(double (*f)(double x), double x);

#endif //NEWTON_H