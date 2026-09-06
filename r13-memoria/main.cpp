#include "arreglo.h"
#include <iostream>

int main() {
    Arreglo a(5);

    a.set(0, 42);

    Arreglo b = a;

    std::cout << "a[0] = " << a.get(0) << "\n";
    std::cout << "b[0] = " << b.get(0) << "\n";

    return 0;
}