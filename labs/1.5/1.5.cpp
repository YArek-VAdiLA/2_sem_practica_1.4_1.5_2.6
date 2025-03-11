#include"Header.h"

double function(double x, double t) {
    return x * x / (log10(pow(x, t)) + pow(cos(pow(x, 1.0 / 3.0)), 2));
}

double rightRectangleMethod(double a, double b, double t, int n) {
    double h = (b - a) / n;
    double integral = 0.0;
    for (int i = 1; i <= n; ++i) {
        integral += function(a + i * h, t);
    }
    integral *= h;
    return integral;
}

void computeIntegrals(double s1, double s2, double delta_s, double t1, double t2, double delta_t, double a, double b, double epsilon) {
    const int maxResults = 100;
    double results[maxResults][4]; 
    int count = 0; 

    for (double s = s1; s <= s2; s += delta_s) {
        for (double t = t1; t <= t2; t += delta_t) {
            int n = 1;
            double integral_old = rightRectangleMethod(a, b, t, n);
            int k_iter = 0; 

            while (true) {
                n *= 2;  
                double integral_new = rightRectangleMethod(a, b, t, n);
                k_iter++; 

                if (fabs(integral_new - integral_old) < epsilon) {
                    break;
                }

                integral_old = integral_new;
            }

            results[count][0] = s;
            results[count][1] = t;
            results[count][2] = integral_old; 
            results[count][3] = k_iter; 
            count++;

            if (count >= maxResults) {
                std::cout << "Достигнуто максимальное количество результатов." << std::endl;
                return;
            }
        }
    }


    std::cout << "|   s   |   t   |      Int      | k_iter |\n";
    std::cout << "|-------|-------|---------------|--------|\n";
    for (int i = 0; i < count; ++i) {
        std::cout << "| " << results[i][0]  << "|"
                    <<"\t"<< results[i][1] << "|"
                    <<"\t"<< results[i][2] << "|"
                    <<"\t"<< results[i][3] << "|\n";
    }
}