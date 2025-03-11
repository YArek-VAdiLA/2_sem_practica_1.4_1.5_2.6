#pragma once

#include<iostream>
#include <cmath> 

using namespace std;



double function(double x, double t);
double rightRectangleMethod(double a, double b, double t, int n);
void computeIntegrals(double s1, double s2, double delta_s, double t1, double t2, double delta_t, double a, double b, double epsilon);