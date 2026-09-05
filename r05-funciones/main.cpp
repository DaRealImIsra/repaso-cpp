#include <iostream>

double imprimirNotas(double notas[]);
double calculateProm(double suma);
void checkIfPass(double prom);


int main() {
    double notas[3], suma = 0;
    suma = imprimirNotas(notas);
    
    double prom =  calculateProm(suma);

    checkIfPass(prom);
}


double imprimirNotas(double notas[]) {
    int suma = 0;
    for (int i = 0; i < 3; i++) {
        std::cout << "Nota " << i + 1 << ": ";
        std::cin >> notas[i];
        suma += notas[i];
    }
    return suma;
}

double calculateProm(double suma) {
    double prom = suma / 3;
    std::cout << "promedio: " << prom << '\n';
    return prom;
}

void checkIfPass(double prom) {
    if (prom >= 70) std::cout << "Aprobado\n";
    else std::cout << "Reprobado\n";
}