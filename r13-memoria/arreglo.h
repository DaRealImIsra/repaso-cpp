#pragma once

class Arreglo {
public:
    Arreglo(int n);
    ~Arreglo();

    Arreglo(const Arreglo& otro);
    Arreglo& operator=(const Arreglo& otro);
};