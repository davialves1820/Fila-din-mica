#ifndef NODE_H
#define NODE_H

#include <iostream>

using std::cout;
using std::endl;

class node {
    int value;
    node* next;
public:
    node(int v=0);

    void set_next(node* n);
    void set_value(int v);

    node* get_next();
    int get_value();
};

#endif