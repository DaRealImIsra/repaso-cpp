#include "fraccion.h"
#include <numeric>

void Fraccion::reducir() {
    if (den_ < 0) {
        num_ = -num_;
        den_ = -den_;
    }

    int g = std::gcd(num_, den_);
    
    num_ /= g;
    den_ /= g;
}

Fraccion::Fraccion(int n, int d) : num_(n), den_(d)
{
    reducir();
};

Fraccion Fraccion::operator+(const Fraccion& otra) const {
    return Fraccion(num_ * otra.den_ + den_ * otra.num_, den_ * otra.den_); 
}

Fraccion Fraccion::operator*(const Fraccion& otra) const {
    return Fraccion(num_ * otra.num_, den_ * otra.den_); 
}

bool Fraccion::operator<(const Fraccion& otra) const {
    return num_ * otra.den_ < otra.num_ * den_;
}

bool Fraccion::operator==(const Fraccion& otra) const {
    return num_ * otra.den_ == otra.num_ * den_;
};

std::ostream& operator<<(std::ostream& os, const Fraccion& f) {
    os << f.num_ << "/" << f.den_;
    return os;
}