#include"Header.h"

double newton(double a, double b, double (*f)(double, double), double (*df)(double, double), double epsilon, int& iter, double s) {
    double x = (a + b) / 2; 
    iter = 0;
    while (fabs(f(x, s)) >= epsilon && iter < 1000) { 
        x = x - f(x, s) / df(x, s); 
        iter++;
    }
    return x;
}

double f1(double x, double s) {
    return pow(x - 1, 2) - 5;
}

double df1(double x, double s) {
    return 2 * (x - 1);
}

double f2(double x, double s) {
    return x * x - sin(5 * pow(x, s));
}

double df2(double x, double s) {
    return 2 * x - 5 * s * pow(x, s - 1) * cos(5 * pow(x, s));
}



