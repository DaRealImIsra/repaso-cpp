#include <iostream> 
#include <string>

class Persona {
    std::string nombre;
public:

    Persona(std::string name) : nombre(name) {
        std::cout << "Constructor de Persona" << '\n';
    }
    ~Persona() {
        std::cout << "Destructor de Persona" << '\n';
    }
};

class Empleado : Persona {
    int nivel;
public:
    Empleado(std::string name, int level) : Persona(name), nivel(level) {
        std::cout << "Constructor de Empleado" << '\n';
    }
    ~Empleado() {
        std::cout << "Destructor de Empleado" << '\n';
    }
};

class Gerente : Empleado {
    int Aura;
public:
    Gerente(std::string name, int level, int aura) : Empleado(name, level), Aura(aura) {
         std::cout << "Constructor de Gerente" << '\n';
    }
    ~Gerente() {
        std::cout << "Destructor de Gerente" << '\n';
    }
};

int main() {
    Gerente g("Ana", 1000, 5);
}
