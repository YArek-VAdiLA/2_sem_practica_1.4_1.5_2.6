#pragma once

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


double newton(double a, double b, double (*f)(double, double), double (*df)(double, double), double epsilon, int& iter, double s);
double f1(double x, double s);
double df1(double x, double s);
double f2(double x, double s);
double df2(double x, double s);