#pragma once
#include <iostream>


struct List {
    double data;
    List* prev;  
    List* next;  

    List(double value) : data(value), prev(nullptr), next(nullptr) {} 
};


void append(List*& head, List*& tail, double value);
void clear(List*& head);
double computeExpression(List* head, List* tail, int n);