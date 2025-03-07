#include "fila.h"

int main(void) {

    queue fila;
    fila.insert(2);
    fila.insert(5);
    fila.insert(1);
    fila.print();
    fila.remove();
    fila.print();
    fila.insert(10);
    fila.print();
    cout << "Topo: " << fila.top() << endl;
    cout << "Tamanho: " << fila.get_tam() << endl;

    return 0;
}