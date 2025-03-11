#include"Header.h"

int main() {
    setlocale(LC_ALL, "Russian");

    double s1 = 1.0;
    double s2 = 10.0;
    double delta_s = 3.0;
    double t1 = 1.0;
    double t2 = 3.0;
    double delta_t = 1.0;
    double a = 2.63;
    double b = 3.1;
    double epsilon = 1e-6;


    computeIntegrals(s1, s2, delta_s, t1, t2, delta_t, a, b, epsilon);


}