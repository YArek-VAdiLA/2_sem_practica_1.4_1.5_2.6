#include "Header.h";


void append(List*& head, List*& tail, double value) {
    List* newNode = new List(value); // —оздаем новый елемент
    if (!head) { 
        head = newNode; 
        tail = newNode; 
    }
    else {
        tail->next = newNode; 
        newNode->prev = tail; 
        tail = newNode; 
    }
}


void clear(List*& head) {
    while (head) { 
        List* temp = head; 
        head = head->next; 
        delete temp; 
    }
}


double computeExpression(List* head, List* tail, int n) {
    double result = 0.0; // »нициализируем результат
    List* a_i = head; // ”казатель на первый узел
    List* a_2n_i = tail; // ”казатель на последний узел

    for (int i = 0; i < n; ++i) { 
        result += a_i->data * a_2n_i->data; 
        a_i = a_i->next; 
        a_2n_i = a_2n_i->prev; 
    }

    return result; 
}


