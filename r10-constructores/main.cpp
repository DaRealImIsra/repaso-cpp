#include <iostream>
#include <string>

class Sesion {
private:
    std::string nombre;
public:
    Sesion() : nombre("default") {
        std::cout << "Constructor: " << nombre << '\n';
    }

    Sesion(std::string n) : nombre(n) {
        std::cout << "Constructor: " << nombre << '\n';
    }

    Sesion(std::string n, int num) : nombre(n) {
        std::cout << "Constructor: " << nombre << ' ' << num << '\n';
    }

    ~Sesion() {
        std::cout << "Destructor: " << nombre << '\n';
    }
};

Sesion global("global");  // constructores y destructor imprimen
int main() {
    Sesion a("a");
    { Sesion b("b"); Sesion c("c", 2); }
    std::cout << "--- medio ---\n";
    Sesion d;
}