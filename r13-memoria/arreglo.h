#pragma once

class Arreglo {
    int n;
    int* datos;

public:
    Arreglo(int tam) ;
    ~Arreglo();

    void set(int i, int v);
    int get(int i) const;
    int tam() const;

    Arreglo(const Arreglo& otro);
    Arreglo& operator=(const Arreglo& otro);
};