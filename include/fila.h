#ifndef FILA_H
#define FILA_H

#include "node.h"

class queue {
    int tam;
    node* head;
    node* end;
public:
    queue();

    int get_tam();
    bool empty();
    void insert(int v);
    void remove();
    int top();
    void print();
    ~queue();
};

#endif