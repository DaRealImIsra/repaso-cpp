#include <iostream>

void intercambiar1(int a, int b);      // por valor
void intercambiar2(int* a, int* b);    // por puntero
void intercambiar3(int& a, int& b);    // por referencia

int main() {
    int uno = 1;
    int dos = 2;
    intercambiar1(uno, dos);
    std::cout << uno << ' ' << dos << '\n';
    intercambiar2(&uno, &dos);
    std::cout << uno << ' ' << dos << '\n';
    intercambiar3(uno, dos);
    std::cout << uno << ' ' << dos << '\n';
}

void intercambiar1(int a, int b) {
    int t = a;
    a = b;
    b = t;
}
void intercambiar2(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}
void intercambiar3(int& a, int& b) {
    int t = a;
    a = b;
    b = t;
}
