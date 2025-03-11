/*Вычислить корень уравнения
f (x) = 0
на отрезке [a; b] с точностью  =10–6
,
используя заданный метод (М = 1 – метод половинного деления, М = 2 – метод
касательных, М = 3 – метод хорд) для заданных функций. Вычисление корня уравнения 
оформить в виде функции с функциональным параметром, параметры a, b,
, s – в виде аргументов по умолчанию.
Результат представить в виде таблицы (s – значение параметра,
х – вычисленный корень уравнения, f(x) – значение функции в найденной точке х,
k_iter – количество итераций цикла для получения корня с заданной точностью):*/

#include"Header.h"

int main() {
    setlocale(LC_ALL, "Russian");

    double epsilon = 1e-6; 
    int iter;

    double a1 = -3, b1 = 0;
    double s_start1 = 0.7, s_end1 = 1.6, delta_s1 = 0.3;

    cout << "Таблица для функции f1(x) = (x-1)^2 - 5 (метод касательных):\n";
    cout << "| S     | X         | F(x)         | k iter |\n";
    cout << "|-------|-----------|--------------|--------|\n";

    for (double s = s_start1; s <= s_end1; s += delta_s1) {
        double root = newton(a1, b1, f1, df1, epsilon, iter, s);
        cout << "| " << fixed << setprecision(2) << s << " | " << setprecision(6) << root << " | " << setprecision(6) << f1(root, s) << " | " << iter << " |\n";
    }
    cout << "\n";

    double a2 = 0.5, b2 = 0.8;
    double s_start2 = 0.7, s_end2 = 1.6, delta_s2 = 0.3;

    cout << "Таблица для функции f2(x) = x^2 - sin(5x^s) (метод касательных):\n";
    cout << "| S     | X         | F(x)         | k iter |\n";
    cout << "|-------|-----------|--------------|--------|\n";

    for (double s = s_start2; s <= s_end2; s += delta_s2) {
        double root = newton(a2, b2, f2, df2, epsilon, iter, s); 
        cout << "| " << fixed << setprecision(2) << s << " | " << setprecision(6) << root << " | " << setprecision(6) << f2(root, s) << " | " << iter << " |\n";
    }
    cout << "\n";
}