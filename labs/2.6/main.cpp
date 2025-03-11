#include "Header.h";

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    std::cout << "������� n: ";
    std::cin >> n;

    List* head = nullptr; // ������ ������
    List* tail = nullptr; // ����� ������

    std::cout << "������� " << 2 * n << " �������������� �����: ";
    for (int i = 0; i < 2 * n; ++i) {
        double value;
        std::cin >> value;
        append(head, tail, value); // ��������� ������
    }

    double result = computeExpression(head, tail, n);
    std::cout << "���������: " << result << std::endl;

    clear(head); // ����������� ������
}