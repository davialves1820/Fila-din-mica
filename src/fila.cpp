#include "fila.h"

queue::queue() : tam(0), head(nullptr), end(nullptr) {}

bool queue::empty() {
    return tam == 0;
}

int queue::get_tam() {
    return tam;
}

void queue::insert(int v) {
    node* novo = new node(v);
    if (empty()) {
        head = novo;
        end = novo;
    } else {
        end->set_next(novo);
        end = novo;
    }
    cout << v << " adicionado." << endl;
    tam++;
}

void queue::remove() {
    if (empty()) {
        return;
    }
    node* out = head;
    head = head->get_next();
    delete out;
    tam--;
    cout << "Removido o primeiro elemento" << endl;
}

int queue::top() {
    return head->get_value();
}

void queue::print() {
    node* aux = head;
    cout << "Fila: ";
    while (aux != nullptr) {
        cout << aux->get_value() << " ";
        aux = aux->get_next();
    }
    cout << endl;
}

queue::~queue() {
    while (head != nullptr) {
        node* aux = head;
        head = head->get_next();
        delete aux;
    }
}