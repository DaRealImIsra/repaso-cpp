#include <iostream>
#include <vector>

class Figura {
public:
    virtual double area() const = 0;
    virtual std::string nombre() const = 0;

    virtual ~Figura() {}
};

class Circulo : public Figura {
    double radio;

public:
    Circulo(double r) : radio(r) {}

    double area() const override {
        return 3.14159 * radio * radio;
    }

    std::string nombre() const override {
        return "Circulo";
    }
};

class Rectangulo : public Figura {
    double ancho;
    double alto;

public:
    Rectangulo(double a, double h) : ancho(a), alto(h) {}

    double area() const override {
        return ancho * alto;
    }

    std::string nombre() const override {
        return "Rectangulo";
    }
};

int main() {
    std::vector <Figura*> figuras;

    figuras.push_back(new Circulo(5));
    figuras.push_back(new Rectangulo(4, 6));

    double total = 0;
    for (Figura* figura : figuras) {
        std::cout << figura->area() << ' ' << figura->nombre() << '\n';
        total += figura->area();
        delete figura;
    }
}