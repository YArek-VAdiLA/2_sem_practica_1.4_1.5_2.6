#include "Header.h";

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    std::cout << "Введите n: ";
    std::cin >> n;

    List* head = nullptr; // Голова списка
    List* tail = nullptr; // Хвост списка

    std::cout << "Введите " << 2 * n << " действительных чисел: ";
    for (int i = 0; i < 2 * n; ++i) {
        double value;
        std::cin >> value;
        append(head, tail, value); // Заполняем список
    }

    double result = computeExpression(head, tail, n);
    std::cout << "Результат: " << result << std::endl;

    clear(head); // Освобождаем память
}