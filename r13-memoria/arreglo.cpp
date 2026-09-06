#include "arreglo.h"
#include <iostream>


Arreglo::Arreglo(int tam) : datos(new int[tam]), n(tam) {
    std::cout << datos << "\n";
}

Arreglo::~Arreglo() {
    std::cout << datos << "\n";
    delete[] datos;   
}

void Arreglo::set(int i, int v) {
    datos[i] = v;
}

int Arreglo::get(int i) const {
    return datos[i];
}

int Arreglo::tam() const {
    return n;
}

Arreglo::Arreglo(const Arreglo& original) : datos(new int[original.n]), n(original.n) {
    for (int i = 0; i < original.n; i++) {
        datos[i] = original.datos[i];
    }
}

Arreglo& Arreglo::operator=(const Arreglo& original) {
    if (this == &original) {
        return *this;
    }

    delete[] datos;

    n = original.n;
    datos = new int[n];

    for (int i = 0; i < n; ++i) {
        datos[i] = original.datos[i];
    }

    return *this;
}
